#ifndef CAMERA_STREAMER_HPP_
#define CAMERA_STREAMER_HPP_

// #include "nvenc_multicam/ros2_node.hpp"

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/compressed_image.hpp"
#include "sensor_msgs/msg/image.hpp"
#include <gst/gst.h>
#include <gst/app/gstappsink.h>
#include <gst/allocators/gstdmabuf.h>
#include <thread>
#include <vector>
#include <mutex>
#include <atomic>
#include <chrono>

#include "NvBufSurface.h"
#include "nvbufsurface.h"

#include <vpi/Image.h>
#include <vpi/LensDistortionModels.h>
#include <vpi/Status.h>
#include <vpi/Stream.h>
#include <vpi/algo/ConvertImageFormat.h>
#include <vpi/algo/Remap.h>
#include <vpi/algo/Rescale.h>
#include <opencv2/opencv.hpp>
#include <vpi/OpenCVInterop.hpp>
#include "sensor_msgs/msg/camera_info.hpp"
#include "camera_info_manager/camera_info_manager.hpp"

#define SUCCESS true
#define FAILED false

#define CHECK_VPI_STATUS(STMT)                                                                       \
    do                                                                                               \
    {                                                                                                \
        VPIStatus status = (STMT);                                                                   \
        if (status != VPI_SUCCESS)                                                                   \
        {                                                                                            \
            char buffer[VPI_MAX_STATUS_MESSAGE_LENGTH];                                              \
            vpiGetLastStatusMessage(buffer, sizeof(buffer));                                         \
            std::ostringstream ss;                                                                   \
            ss << __FILE__ << ":" << __LINE__ << ": " << vpiStatusGetName(status) << ": " << buffer; \
            std::cerr << "[[ERROR]]  " << ss.str() << std::endl;                                     \
            return status;                                                                           \
        }                                                                                            \
    } while (0);

// 参数结构体定义
typedef struct
{
    // 基础摄像头参数
    int cam_id = 0;
    std::string device;
    int width = 1920;
    int height = 1080;
    double framerate = 30.0;
    std::string format = "UYVY";
    std::string frame_id;
    std::string camera_name;
    std::string camera_info_url;

    // H264输出参数
    bool pub_h264 = false;
    std::string h264_topic_name;
    int h264_width = 1280;
    int h264_height = 720;
    double h264_framerate = 15.0;
    int h264_bitrate = 500000;
    int h264_control_rate = 1;
    int h264_peak_bitrate = 800000;
    int h264_iframeinterval = 30;
    std::string h264_udp_ip = "192.168.1.104";
    int h264_udp_port = 5000;
    
    // H265输出参数
    bool pub_h265 = false;
    std::string h265_topic_name;
    int h265_width = 1280;
    int h265_height = 720;
    double h265_framerate = 15.0;
    int h265_bitrate = 500000;
    int h265_control_rate = 1;
    int h265_peak_bitrate = 800000;
    int h265_iframeinterval = 30;
    std::string h265_udp_ip = "192.168.1.104";
    int h265_udp_port = 5000;

    // JPEG输出参数
    bool pub_jpeg = false;
    std::string jpeg_topic_name;
    int jpeg_width = 1920;
    int jpeg_height = 1080;
    double jpeg_framerate = 15.0;

    // RGBA输出参数
    bool pub_rgba = false;
    std::string rgba_topic_name;
    int rgba_width = 1920;
    int rgba_height = 1080;
    double rgba_framerate = 10.0;
    std::string camera_info_topic_name;
    bool is_aligned = false;
} parameters_t;

namespace camera_streamer
{
    struct nv_buffer
    {
        /* User accessible pointer */
        unsigned char *start;
        /* Buffer length */
        unsigned int size;
        /* File descriptor of NvBuffer */
        int dmabuff_fd;

        nv_buffer() : start(nullptr), size(0), dmabuff_fd(0) {} // 默认构造函数
    };

    class CameraStreamer {
    public:
        CameraStreamer(
                       rclcpp::Node* parent_node,
                       int cam_id,
                       const std::string &frame_id,
                       const std::string &device,
                       int width,
                       int height,
                       int framerate,
                       const std::string &format,
                       // h264
                       bool pub_h264,
                       int h264_bitrate,
                       int h264_control_rate,
                       int h264_peak_bitrate,
                       int h264_iframeinterval,
                       int h264_width,
                       int h264_height,
                       int h264_framerate,
                       const std::string & h264_udp_ip,
                       int h264_udp_port,
                       // h265
                       bool pub_h265,
                       int h265_bitrate,
                       int h265_control_rate,
                       int h265_peak_bitrate,
                       int h265_iframeinterval,
                       int h265_width,
                       int h265_height,
                       int h265_framerate,
                       const std::string & h265_udp_ip,
                       int h265_udp_port,
                       // jpeg
                       bool pub_jpeg,
                       const std::string &jpeg_topic_name,
                       int jpeg_width,
                       int jpeg_height,
                       int jpeg_framerate,
                       // rgba
                       bool pub_rgba,
                       const std::string &rgba_topic_name,
                       int rgba_width,
                       int rgba_height,
                       int rgba_framerate,
                       const std::string &camera_info_topic_name,
                       bool is_aligned,
                       sensor_msgs::msg::CameraInfo::SharedPtr &m_camera_info_msg
                    );

        ~CameraStreamer();

        void start();

        void stop();

        // 初始化VPI资源
        VPIStatus init_vpi_resources(parameters_t &parameters,
            std::string distortion_model,
            float k1, float k2, float k3, float k4, float k5, float k6,
            float t1, float t2,
            float fx, float fy,
            float cx, float cy);


    private:
        // 在类内添加时间戳类型别名
        using time_point = rclcpp::Time;

        // 主探针函数
        static GstPadProbeReturn src_probe(GstPad *pad, GstPadProbeInfo *info, gpointer user_data);

        // 处理完成的视频帧回调函数
        static GstFlowReturn on_new_jpeg_buffer(GstAppSink *sink, gpointer user_data);
        static GstFlowReturn on_new_rgba_buffer(GstAppSink *sink, gpointer user_data);

        // 帧率控制回调函数，使用计数丢帧策略
        static GstPadProbeReturn h264_drop_probe(GstPad *pad, GstPadProbeInfo *info, gpointer user_data);
        static GstPadProbeReturn jpeg_drop_probe(GstPad *pad, GstPadProbeInfo *info, gpointer user_data);
        static GstPadProbeReturn rgba_drop_probe(GstPad *pad, GstPadProbeInfo *info, gpointer user_data);

        // 去畸变回调
        static GstPadProbeReturn dewarp_probe_callback(GstPad *pad, GstPadProbeInfo *info, gpointer user_data);


        // 清理VPI资源
        void cleanup_vpi_resources();

        void make_pipeline_str();

        // 配置 h264 GStreamer 管道
        inline void make_pipeline_h264_str();
        // 配置 h265 GStreamer 管道
        inline void make_pipeline_h265_str();
        // 配置 jpeg GStreamer 管道
        inline void make_pipeline_jpeg_str();
        // 配置 rgba GStreamer 管道
        inline void make_pipeline_rgba_str();
        // 创建 GStreamer管道
        void create_pipeline();

        void set_drop_callbacks();
        void set_pipeline_callbacks();

        bool init_nv_resources();


        rclcpp::Node* parent_node_;  // 存储主节点引用
        rclcpp::Logger logger_;      // 日志接口

        // 配置参数
        const int cam_id_;
        const std::string frame_id_;
        const std::string device_;
        const int width_;
        const int height_;
        const int framerate_;
        const std::string format_;

        // h264
        const bool pub_h264_;
        const int h264_bitrate_;
        const int h264_control_rate_;
        const int h264_peak_bitrate_;
        const int h264_iframeinterval_;
        const int h264_width_;
        const int h264_height_;
        const int h264_framerate_;
        const std::string h264_udp_ip_;
        const int h264_udp_port_;
        // h265
        const bool pub_h265_;
        const int h265_bitrate_;
        const int h265_control_rate_;
        const int h265_peak_bitrate_;
        const int h265_iframeinterval_;
        const int h265_width_;
        const int h265_height_;
        const int h265_framerate_;
        const std::string h265_udp_ip_;
        const int h265_udp_port_;
        // jpeg
        const bool pub_jpeg_;
        const int jpeg_width_;
        const int jpeg_height_;
        const int jpeg_framerate_;
        // rgba
        const bool pub_rgba_;
        const int rgba_width_;
        const int rgba_height_;
        const int rgba_framerate_;
        const bool is_aligned_;

        int h264_keep_counter = 10;
        int jpeg_keep_counter = 10;
        int rgba_keep_counter = 10;
        int h264_frame_counter = 0;
        int jpeg_frame_counter = 0;
        int rgba_frame_counter = 0;  

        sensor_msgs::msg::CameraInfo::SharedPtr m_camera_info_msg_;

        std::string pipeline_str_;
        std::string pipeline_h264_;
        std::string pipeline_h265_;
        std::string pipeline_jpeg_;
        std::string pipeline_rgba_;

        GstElement *pipeline_;
        GMainLoop *main_loop_;
        std::atomic_bool running_;
        rclcpp::Publisher<sensor_msgs::msg::CompressedImage>::SharedPtr jpeg_publisher_;
        rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr rgba_publisher_;
        rclcpp::Publisher<sensor_msgs::msg::CameraInfo>::SharedPtr m_camera_info_publisher;

        std::mutex publish_mutex_;

        // VPI 去畸变相关
        VPIStream vpi_stream_ = nullptr;
        VPIPayload remap_ = nullptr;
        VPIWarpMap warp_map_;
        VPIImage wrapped_input_ = nullptr;  // 包装输入NVMM缓冲区的VPIImage
        VPIImage wrapped_output_ = nullptr; // 包装输出CPU缓冲区的VPIImage

        // rgba 消息体
        sensor_msgs::msg::Image rgba_msg_;

        // // 相机内参和畸变参数
        // struct {
        //     float k1, k2, k3, k4, k5, k6;
        //     float t1, t2;
        //     float fx, fy, cx, cy;
        // } distortion_params_;
    };
}
#endif