# Copyright 2024 Pixmoving, Inc. All rights reserved.
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
from launch.actions import ExecuteProcess
from launch.actions import TimerAction
from launch.conditions import IfCondition
from launch.conditions import UnlessCondition
from launch.substitutions import LaunchConfiguration, FindExecutable
from launch_ros.actions import ComposableNodeContainer
from launch_ros.actions import LoadComposableNodes
from launch_ros.descriptions import ComposableNode
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
import yaml



def generate_launch_description():
    launch_arguments = []
    def add_launch_arg(name: str, default_value=None):
        launch_arguments.append(DeclareLaunchArgument(name, default_value=default_value))
    # 加载参数   ----------------------------------------------------------------------------------------
    add_launch_arg("container_name", "/control/control_container")
    add_launch_arg("interface", "can0")
    add_launch_arg("interval_sec", "0.01")
    add_launch_arg("use_bus_time", "false")
    add_launch_arg("namespace", "")
    
    
    def create_parameter_dict(*args):
        result = {}
        for x in args:
            result[x] = LaunchConfiguration(x)
        return result
    
    # 创建组件节点----------------------------------------------------------------------------------------
    socket_can_receiver_component_node = ComposableNode(
        package="ros2_socketcan",
        plugin="drivers::socketcan::SocketCanReceiverNode",
        name="socket_can0_receiver",
        namespace=LaunchConfiguration("namespace"),
        parameters=[{
            "interface": "can0",
            "interval_sec": 0.03,
            "use_bus_time": False 
        }],
    )

    socket_can_sender_component_node = ComposableNode(
        package="ros2_socketcan",
        plugin="drivers::socketcan::SocketCanSenderNode",
        name="socket_can0_sender",
        namespace=LaunchConfiguration("namespace"),
        parameters=[{
            "interface": "can0",
            "interval_sec": 0.03,
            "use_bus_time": False 
        }],
    )
    
    def invoke_lifecycle_cmd(node_name, verb):
        ros2_exec = FindExecutable(name='ros2')
        return ExecuteProcess(
            cmd=[[ros2_exec, ' lifecycle set ',
                  LaunchConfiguration("namespace"), '/', node_name, ' ', verb]],
            shell=True)
    
    # 加载组件节点-----------------------------------------------------------------------------------------
    socket_can_bridge_loader = LoadComposableNodes(
        composable_node_descriptions=[
            socket_can_receiver_component_node,
            socket_can_sender_component_node,
            ],
        target_container='/control/control_container',
    )

    receiver_configure_cmd = invoke_lifecycle_cmd('socket_can0_receiver', 'configure')
    sender_configure_cmd = invoke_lifecycle_cmd('socket_can0_sender', 'configure')
    receiver_activate_cmd = invoke_lifecycle_cmd('socket_can0_receiver', 'activate')
    sender_activate_cmd = invoke_lifecycle_cmd('socket_can0_sender', 'activate')
    return launch.LaunchDescription([
        *launch_arguments,
        socket_can_bridge_loader,
        ]
    )