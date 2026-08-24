import rclpy
from rclpy.node import Node
from sensor_msgs.msg import CompressedImage
import cv2
import sys
import numpy as np
import time

class ImageDisplayNode(Node):
    def __init__(self, topic_name: str):
        super().__init__('image_display_node')

        # 创建订阅者
        self.subscription = self.create_subscription(
            CompressedImage,
            topic_name,
            self.image_callback,
            10)
        
        # 初始化变量
        self.latest_image = None

        # 创建OpenCV窗口
        cv2.namedWindow('Camera Display', cv2.WINDOW_NORMAL)

    def image_callback(self, msg):
        stamp_sec = msg.header.stamp.sec
        stamp_nanosec = msg.header.stamp.nanosec
        stamp_time = stamp_sec + stamp_nanosec * 1e-9
        now = self.get_clock().now().nanoseconds / 1e9  # 转换为秒
                    
        ros2_delay = now - stamp_time

        """图像接收回调函数"""
        try:
            # 将JPEG字节数据转换为numpy数组
            np_arr = np.frombuffer(msg.data, np.uint8)
            
            # 解码JPEG图像
            image = cv2.imdecode(np_arr, cv2.IMREAD_COLOR)
            
            # 验证图像有效性
            if image is None:
                self.get_logger().warn("Failed to decode JPEG image")
                return
            
            # 直接显示图像
            cv2.imshow('Camera Display', image)
            self.latest_image = image  # 可选：保留最新图像（如果需要其他逻辑）
            
            # 窗口响应处理
            if cv2.waitKey(1) & 0xFF == ord('q'):
                # 清理资源并退出
                cv2.destroyAllWindows()
                self.destroy_node()
                rclpy.shutdown()
            
            now = self.get_clock().now().nanoseconds / 1e9  # 转换为秒
            decode_delay = now - stamp_time
            self.get_logger().warn(f"Success decode JPEG image ros2_delay: {str(ros2_delay*1000)} ms, decode_delay: {str(decode_delay*1000)} ms")


        except Exception as e:
            self.get_logger().error(f"Image processing error: {str(e)}")

def main(args=None):

    topic_name = '/electronic_rearview_mirror/camera0/camera_jpeg_image'
    if(len(sys.argv)==2):
        topic_name = sys.argv[1]   # 其他命令行参数
    rclpy.init(args=args)    
    node = ImageDisplayNode(topic_name)
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        # 清理资源
        if not cv2.getWindowProperty('Camera Display', cv2.WND_PROP_VISIBLE) < 0:
            cv2.destroyAllWindows()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()