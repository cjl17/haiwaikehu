#!/usr/bin/python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import CompressedImage
import av
import sys
import cv2
import io
import av
import numpy as np

class H264ViewerNode(Node):
    def __init__(self, topic_name: str):
        super().__init__('h264_viewer_node')
        # 初始化 H.264 解码器上下文
        self.codec = av.CodecContext.create("h264", "r")
        # 存储累积的数据（应对分片传输）
        self.buffer = bytearray()
        
        self.subscription = self.create_subscription(
            CompressedImage,
            topic_name,
            self.image_callback,
            10
        )

    def image_callback(self, msg):
        try:
            # 将数据追加到缓冲区
            self.buffer.extend(msg.data)
            
            # 查找起始码分隔符 (0x00000001 或 0x000001)
            start_pos = 0
            nal_count = 0
            while True:
                
                # 查找下一个起始码位置
                next_start = self.buffer.find(b'\x00\x00\x00\x01', start_pos + 4)
                if next_start == -1:
                    break
                
                # 提取一个完整的 NAL 单元
                nal_unit = self.buffer[start_pos:next_start]
                if len(nal_unit) == 0:
                    continue
                nal_count += 1
                # 处理 NAL 单元
                packet = av.Packet(nal_unit)
                try:
                    # 将数据包送入解码器
                    frames = self.codec.decode(packet)
                    for frame in frames:
                        # 转换为 OpenCV 格式并显示
                        bgr_frame = frame.to_ndarray(format='bgr24')
                        cv2.imshow("Decoded Frame", bgr_frame)
                        if cv2.waitKey(1) & 0xFF == ord('q'):
                            return
                        self.get_logger().info("解码成功")
                except av.error.InvalidDataError as e:
                    pass
                # 移动起始位置
                start_pos = next_start
            
            # 移除已处理的数据
            self.buffer = self.buffer[start_pos:]

        except Exception as e:
            self.get_logger().error(f"处理异常: {e}")
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

