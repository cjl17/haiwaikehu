#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import NavSatFix
import subprocess
import re
import os
import csv
from datetime import datetime


class GPSLatencyNode(Node):
    def __init__(self):
        super().__init__('gps_latency_node')
        self.subscription = self.create_subscription(
            NavSatFix,
            '/sensing/gnss/fix',
            self.gps_callback,
            10
        )
        self.timer = self.create_timer(2.0, self.publish_avg_latency)
        self.gps_fix = NavSatFix()
        
        # 初始化数据文件
        self.data_file = self.init_data_file()
        
        self.get_logger().info("GPS Latency Node Started.")
        
    def gps_callback(self, msg: NavSatFix):
        self.gps_fix  = msg
        
    def publish_avg_latency(self):
        # 获取ping延迟
        latency = self.get_ping_latency("www.baidu.com")
        
        # 保存到文件
        self.save_to_csv(self.gps_fix.longitude, self.gps_fix.latitude, self.gps_fix.altitude, latency)

    
    def save_to_csv(self, longitude, latitude, altitude, latency):
        # 追加写入CSV文件
        with open(self.data_file, mode='a', newline='') as file:
            writer = csv.writer(file)
            writer.writerow([longitude, latitude, altitude, latency])
 
    def init_data_file(self):
        # 创建数据存储目录
        data_dir = os.path.expanduser("~/gps_data")
        os.makedirs(data_dir, exist_ok=True)
        
        # 根据当前时间创建唯一的数据文件
        filename = datetime.now().strftime("%Y-%m-%d_%H-%M-%S_gps_latency.csv")
        file_path = os.path.join(data_dir, filename)
        
        # 写入CSV头
        with open(file_path, mode='w', newline='') as file:
            writer = csv.writer(file)
            writer.writerow(["longitude", "latitude", "altitude", "latency"])
        
        self.get_logger().info(f"Data file created: {file_path}")
        return file_path

    def get_ping_latency(self, host):
        try:
            # 只发送一个ping包，等待1秒超时
            result = subprocess.run(
                ["ping", "-c", "1", "-W", "1", host],
                capture_output=True,
                text=True
            )
            # 从结果中提取延迟时间
            match = re.search(r"time=(\d+\.\d+)", result.stdout)
            if match:
                latency = float(match.group(1))
                return latency
            else:
                return -1.0  # 无法获取延迟
        except Exception as e:
            self.get_logger().error(f"Ping Error: {e}")
            return -1.0


def main(args=None):
    rclpy.init(args=args)
    node = GPSLatencyNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
