#!/usr/bin/python3
# /gmsl/camera_compressed_image

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import CompressedImage
import av
import sys
import cv2
import io

class H264ViewerNode(Node):
    def __init__(self, topic_name:str):
        super().__init__('h264_viewer_node')
        
        self.subscription = self.create_subscription(
            CompressedImage,
            topic_name,  
            self.image_callback,
            10
        )
        self.subscription  # 防止垃圾回收

    def image_callback(self, msg):
        try:
            # 解码 H.264 数据
            h264_data = msg.data
            if not h264_data or len(h264_data) < 4:
                self.get_logger().warning("Received empty or invalid H.264 data.")
                return
            container = av.open(io.BytesIO(h264_data), format='h264')
            for frame in container.decode(video=0):
                rgb_frame = frame.to_ndarray(format='rgb24')
                bgr_frame = cv2.cvtColor(rgb_frame, cv2.COLOR_RGB2BGR)
                cv2.imshow("Decoded Frame", bgr_frame)
                if cv2.waitKey(1) & 0xFF == ord('q'):
                    break
        except OSError as e:
            self.get_logger().error(f"Decoding error: {e}")

def main(args=None):
    topic_name = '/gmsl/camera_compressed_image'
    if(len(sys.argv)==2):
        topic_name = sys.argv[1]   # 其他命令行参数
    rclpy.init(args=args)
    node = H264ViewerNode(topic_name)  # 替换为你的话题名称
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("Shutting down.")
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()

if __name__ == '__main__':
    main()
