#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import NavSatFix
import subprocess
import re
import os
import csv
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation
import pandas as pd


class GPSLatencyRecorder(Node):
    def __init__(self):
        super().__init__('gps_latency_recorder')
        
        # 订阅 NavSatFix 消息
        self.subscription = self.create_subscription(
            NavSatFix,
            '/gps/fix',
            self.gps_callback,
            10
        )
        
        # 初始化数据文件
        self.data_file = self.init_data_file()
        
        # 初始化 matplotlib
        self.fig, self.ax = plt.subplots()
        self.scatter = self.ax.scatter([], [], c=[], cmap="jet", alpha=0.7)
        self.ax.set_title("Real-time GPS Latency from CSV")
        self.ax.set_xlabel("Longitude")
        self.ax.set_ylabel("Latitude")
        plt.colorbar(self.scatter, label="Latency (ms)")

        # 开启动画
        self.ani = FuncAnimation(self.fig, self.update_plot, interval=2000)
        
        self.get_logger().info("GPS Latency Recorder Started.")
        plt.show()

    def init_data_file(self):
        # 创建数据存储目录
        data_dir = os.path.expanduser("~/gps_data")
        os.makedirs(data_dir, exist_ok=True)
        
        # 根据当前时间创建唯一的数据文件
        file_path = os.path.join(data_dir, "gps_latency.csv")
        
        # 写入CSV头
        if not os.path.exists(file_path):
            with open(file_path, mode='w', newline='') as file:
                writer = csv.writer(file)
                writer.writerow(["longitude", "latitude", "latency"])
        
        self.get_logger().info(f"Data file created: {file_path}")
        return file_path

    def gps_callback(self, msg: NavSatFix):
        # 获取经纬度和高度
        longitude = float(msg.longitude)
        latitude = float(msg.latitude)
        
        # 获取ping延迟
        latency = self.get_ping_latency("www.baidu.com")
        
        # 跳过延迟为 -1.0 的数据
        if latency < 0:
            self.get_logger().warning("No valid latency data, skipping this point.")
            return
        
        # 保存到文件
        self.save_to_csv(longitude, latitude, latency)
        
        self.get_logger().info(f"Saved: [{longitude}, {latitude}, {latency}]")

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

    def save_to_csv(self, longitude, latitude, latency):
        # 追加写入CSV文件
        with open(self.data_file, mode='a', newline='') as file:
            writer = csv.writer(file)
            writer.writerow([longitude, latitude, latency])

    def update_plot(self, frame):
        try:
            # 从 CSV 文件读取数据
            df = pd.read_csv(self.data_file)
            
            # 过滤掉无效数据
            df.dropna(inplace=True)
            
            # 更新散点数据
            self.scatter.set_offsets(df[["longitude", "latitude"]].values)
            self.scatter.set_array(df["latency"].values)
            self.ax.relim()
            self.ax.autoscale_view()
            
            # 动态更新标题
            self.ax.set_title(f"Real-time GPS Latency from CSV (Points: {len(df)})")
        
        except Exception as e:
            self.get_logger().error(f"Plot Update Error: {e}")


def main(args=None):
    rclpy.init(args=args)
    node = GPSLatencyRecorder()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
