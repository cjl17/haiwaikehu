#ifndef NVENC_ROS2_NODE_HPP_
#define NVENC_ROS2_NODE_HPP_

#include "nvenc_multicam/camera_streamer.hpp"

#include <filesystem>
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/camera_info.hpp"
#include "camera_info_manager/camera_info_manager.hpp"
#include <string>
#include <memory>

#include "nvenc_multicam/camera_streamer.hpp"

namespace nvenc_multicam
{

    class NvencMultiCamNode : public rclcpp::Node
    {
    public:
        explicit NvencMultiCamNode(const rclcpp::NodeOptions &options);
        ~NvencMultiCamNode();

        rclcpp::TimerBase::SharedPtr m_timer;

        rcl_interfaces::msg::SetParametersResult parameters_callback(
            const std::vector<rclcpp::Parameter> &parameters);

    private:
        void init();
        void take_and_send_image();

        parameters_t m_parameters;
        std::unique_ptr<camera_streamer::CameraStreamer> camera_streamer_;
        sensor_msgs::msg::CameraInfo::SharedPtr m_camera_info_msg;
        std::shared_ptr<camera_info_manager::CameraInfoManager> m_camera_info;
    };
}
#endif // ROS2_NODE_HPP