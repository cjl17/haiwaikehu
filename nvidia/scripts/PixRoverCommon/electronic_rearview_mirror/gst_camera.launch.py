from launch import LaunchDescription
from launch.actions import TimerAction
from launch_ros.actions import ComposableNodeContainer
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os
import yaml

class CameraConfigParser:
    def __init__(self, config_path):
        with open(config_path, 'r') as f:
            self.config = yaml.safe_load(f)
    
    def get_camera_configs(self):
        return self.config.get('cameras', {})

def generate_launch_description():
    SCRIPTS_ROOT  = os.getenv("SCRIPTS_ROOT")
    AUTOPILOT_VERSION = os.getenv("AUTOPILOT_VERSION")
    TMUX_NAME = os.getenv("TMUX_NAME")
    
    CONFIG_MAP = {
        "ORIN1": {
            ("PixRover1.0_1.1a", "PixRover1.0_1.1b"): "PixRover1.0_1.1/config/gst_camera.yaml",
            
            ("PixRover1.2_1.3", "PixRover1.2_1.3b"): "PixRover1.2_1.3/config/gst_camera.yaml",
            
            ("PixRover1.2_1.3a", ): "PixRover1.2_1.3/config/gst_camera_a.yaml",
            
            ("PixRover1.4", "PixRover1.5"): "PixRover1.4_1.5/config/gst_camera.yaml",
            
            ("PixRover1.6", ): "PixRover1.6/config/gst_camera.yaml",
        },
        
    }
    if TMUX_NAME not in CONFIG_MAP:
        print(f"[ERROR] 未知主机: {TMUX_NAME}")
        return
    host_configs = CONFIG_MAP[TMUX_NAME]
    matched = False
    for versions, path in host_configs.items():
        if AUTOPILOT_VERSION in versions :
            config_file = os.path.join(SCRIPTS_ROOT, path)
            matched = True
            break
    if not matched:
        print(f"[ERROR] {TMUX_NAME} 不支持版本: {AUTOPILOT_VERSION}")
        return 
    
    print(f"配置文件: {config_file}")
    config_parser = CameraConfigParser(config_file)
    camera_configs = config_parser.get_camera_configs()
    
    launch_nodes = []
    for i, (cam_name, config) in enumerate(camera_configs.items()):
        namespace = cam_name
        
        node = Node(
            package='nvenc_multicam',
            executable='nvenc_multicam_node_exe',
            namespace=f'/',
            name=f"{config['jpeg_file_prefix']}_camera_node",
            parameters=[config],
            output='screen'
        )
        # 每个节点间隔 2 秒启动
        launch_nodes.append(
            TimerAction(
                period=float(i * 2.0),
                actions=[node]
            )
        )
    
    container = ComposableNodeContainer(
        name='nvenc_multicam_container',
        namespace='',
        package='rclcpp_components',
        executable='component_container_mt',
        composable_node_descriptions=[],
        output='screen'
    )
    launch_nodes.insert(0, container)
    return LaunchDescription(launch_nodes)