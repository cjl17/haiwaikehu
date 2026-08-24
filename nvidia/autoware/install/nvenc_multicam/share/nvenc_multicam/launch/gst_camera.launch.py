from launch import LaunchDescription
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
    root_path = get_package_share_directory('nvenc_multicam')
    camera_config_path = os.path.join(root_path, "config", "camera_config.yaml")

    config_parser = CameraConfigParser(camera_config_path)
    camera_configs = config_parser.get_camera_configs()
    
    launch_nodes = []
    for cam_name, config in camera_configs.items():
        namespace = cam_name
        
        node = Node(
            package='nvenc_multicam',
            executable='nvenc_multicam_node_exe',
            namespace=f'camera/{cam_name}',
            name=f'nvenc_multicam_{cam_name}',
            parameters=[config],
            output='screen'
        )
        launch_nodes.append(node)
    
    return LaunchDescription(launch_nodes)