#!/usr/bin/python3
import psutil

# 定义需要检查的命令行字符串
commands = [
    "/opt/ros/humble/lib",
    "pix/robobus/",
    "progress_gui",
    "gnss_initialization",
    "constant_initialization",
    
]

# 定义需要排除的字符串 - 文件路径里的名称
exclude_keywords = {
    '__node:=godot_rosbridge_websocket',
    '/opt/ros/humble/lib/rosapi/rosapi_node',
    'electronic_rearview_mirror',
    'ScreenHMI/HMIarm',
    'rosbridge_websocket',
    "vehicle_voice_alert_system",
    "vehicle_voice_alert",
    'traffic_signal_publisher',
    'foxglove_bridge',
    'nvenc_multicam',
    'nvenc_multicam_container',
    'system_monitor_container',
    'robobus_main_container',
    'robobus_platform_analysis_container',
    # 度盘驱动和组合导航
    'pix_robobus_driver',
    'pix_interface',
    'robobus_launch',
    'ros2_socketcan',
    'raw_vehicle_cmd_converter',
    'nmea_navsat_driver',
    'gnss_poser',
    'imu_corrector',
    'robot_state_publisher',
    #云控平台
    "pixmoving_api_central_analysis",
    "pixmoving_api_central_business",
    "pixmoving_api_central_common",
    "pixmoving_api_central_platform",
    "pixmoving_chassis_interface",
    "pixmoving_chassis_interface_common",
    "pixmoving_hmi_stack",
    "pixmoving_vehicle_display_bridge",

    "autoware_simplicity_gui",
    "circular_publisher",
    "cloud_control_platform",
    "cloud_control_platform_business",
    "cloud_control_platform_common",
    "cloud_control_platform_driver",
    "cloud_control_platform_old",
    "get_osm_info",
    "hmi_launch",
    "mongodb_operations",
    "pix_io_context",
    "pix_protocol_adapter",
    "pix_tassl_mqtt_driver",
    "pix_tcp_driver",
    "pixmoving_hmi_common",
    "pixmoving_hmi_driver",
    "robobus_hmi_driver",
    "ros2_socket_tcp",
    "ros2_tmux",
    "sqlist3_operations",
    "station_dispatch",
    "failcase_tools",
    "crow_vendor",
    "sqlite3_rest",
    "failcase_ui",
    "rosbag2_composable_recorder",
    "pixmoving_ros_mqtt_bridge",
    "pixmoving_ros_zenoh_bridge",
    "pixmoving_ros_proto_bridge",
    "blind_spot_monitor",
    "relay_autoware_transfer",
}



def ros2_node_status():
    # 迭代所有正在运行的进程
    for proc in psutil.process_iter(['cmdline']):
        try:
            # 获取进程的命令行参数
            cmdline = ' '.join(proc.info['cmdline'])

            # 检查命令行是否包含任何目标命令，并且不包含排除条件
            if any(command in cmdline for command in commands) and not any(exclude in cmdline for exclude in exclude_keywords):
                # 你可以选择在此行取消注释来结束不需要的进程
                return (False, cmdline)
        except (psutil.NoSuchProcess, psutil.AccessDenied, psutil.ZombieProcess):
            # 处理进程不可访问或已终止的情况
            return (False, "查询报错")

    return (True, "没有ros2进程")
    

def kill_ros():
    # 迭代所有正在运行的进程
    for proc in psutil.process_iter(['cmdline', "pid"]):
        try:
            # 获取进程的命令行参数
            cmdline = ' '.join(proc.info['cmdline'])

            # 检查命令行是否包含任何目标命令，并且不包含排除条件
            if any(command in cmdline for command in commands) and not any(exclude in cmdline for exclude in exclude_keywords):
                # 你可以选择在此行取消注释来结束不需要的进程
                proc.kill()
                print(f"Killing process: {proc.info['pid']} with command line: {cmdline}")
                print(f"--------------------------------")
        except (psutil.NoSuchProcess, psutil.AccessDenied, psutil.ZombieProcess):
            # 处理进程不可访问或已终止的情况
            pass

if __name__ == '__main__':
    print(ros2_node_status())
