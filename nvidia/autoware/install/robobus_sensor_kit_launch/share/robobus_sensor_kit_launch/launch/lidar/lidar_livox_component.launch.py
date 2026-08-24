# Copyright 2023 Pixmoving, Inc. All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import os
from ament_index_python import get_package_share_directory

import launch
from launch.actions import DeclareLaunchArgument
from launch.actions import OpaqueFunction
from launch.actions import SetLaunchConfiguration
from launch.conditions import IfCondition
from launch.conditions import UnlessCondition
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import ComposableNodeContainer
from launch_ros.actions import LoadComposableNodes
from launch_ros.descriptions import ComposableNode
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
import yaml

# 工具函数----------------------------------------------------------------------------------------
launch_arguments = []
def add_launch_arg(name: str, default_value=None):
    global launch_arguments
    launch_arguments.append(DeclareLaunchArgument(name, default_value=default_value))

def generate_launch_description():
    global launch_arguments
    # livox lidar driver
    ################### user configure parameters for ros2 start ###################
    xfer_format   = 0    # 0-Pointcloud2(PointXYZRTL), 1-customized pointcloud format
    multi_topic   = 1    # 0-All LiDARs share the same topic, 1-One LiDAR one topic
    data_src      = 0    # 0-lidar, others-Invalid data src
    publish_freq  = 10.0 # freqency of publish, 5.0, 10.0, 20.0, 50.0, etc.
    output_type   = 0
    frame_id      = 'lidar_front_base_link'
    lvx_file_path = '/home/livox/livox_test.lvx'
    cmdline_bd_code = 'livox0000000001'

    user_config_path = os.path.join(get_package_share_directory('robobus_sensor_kit_launch'), 'config', 'lidar_muti_livox.json')
    ################### user configure parameters for ros2 end #####################

    livox_ros2_params = [
        {"xfer_format": xfer_format},
        {"multi_topic": multi_topic},
        {"data_src": data_src},
        {"publish_freq": publish_freq},
        {"output_data_type": output_type},
        {"frame_id": frame_id},
        {"lvx_file_path": lvx_file_path},
        {"user_config_path": user_config_path},
        {"cmdline_input_bd_code": cmdline_bd_code}
    ]

    livox_component_driver = ComposableNode(
        package="livox_ros_driver2",
        plugin="livox_ros::DriverNode",
        name="muti_livox_ros_driver2_node",
        remappings=[
            ('livox/lidar_192_168_1_120', 'front/livox/points'),
            ('livox/imu_192_168_1_120', 'front/livox/imu'),
            
            ('livox/lidar_192_168_1_122', 'front_left/livox/points'),
            ('livox/imu_192_168_1_122', 'front_left/livox/imu'),
            
            ('livox/lidar_192_168_1_123', 'front_right/livox/points'),
            ('livox/imu_192_168_1_123', 'front_right/livox/imu'),
            
            ('livox/lidar_192_168_1_121', 'rear/livox/points'),
            ('livox/imu_192_168_1_121', 'rear/livox/imu'),
            ],
        parameters=livox_ros2_params,
    )
    # 加载组件节点-----------------------------------------------------------------------------------------
    camera_perception_loader = LoadComposableNodes(
        composable_node_descriptions=[
            livox_component_driver,
            ],
        target_container='pointcloud_container',
    )
    
    set_container_mt_executable = SetLaunchConfiguration(
        "container_executable",
        "component_container_mt",
        condition=IfCondition(LaunchConfiguration("use_multithread")),
    )
    
    return launch.LaunchDescription([
        *launch_arguments,
        set_container_mt_executable,
        camera_perception_loader,
        ]
    )