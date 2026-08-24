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
from launch.conditions import IfCondition
from launch.conditions import UnlessCondition
from launch.substitutions import LaunchConfiguration
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
    raw_vehicle_cmd_converter_share_dir = get_package_share_directory("autoware_raw_vehicle_cmd_converter")
    with open(os.path.join(raw_vehicle_cmd_converter_share_dir, "config", "raw_vehicle_cmd_converter.param.yaml"), "r") as f:
        converter_param = yaml.safe_load(f)["/**"]["ros__parameters"]
    add_launch_arg("csv_path_accel_map", os.path.join(os.environ['HOME'], "pix", "parameter", "vehicle",
                                                      "raw_vehicle_cmd_converter", "accel_map.csv"))
    add_launch_arg("csv_path_brake_map", os.path.join(os.environ['HOME'], "pix", "parameter", "vehicle",
                                                      "raw_vehicle_cmd_converter", "brake_map.csv"))
    add_launch_arg("csv_path_steer_map", os.path.join(os.environ['HOME'], "pix", "parameter", "vehicle",
                                                      "raw_vehicle_cmd_converter", "steer_map.csv"))

    add_launch_arg("max_throttle", "0.8")
    add_launch_arg("max_brake", "0.8")
    add_launch_arg("max_steer", "10.0")
    add_launch_arg("min_steer", "-10.0")
    add_launch_arg("convert_accel_cmd", "true")
    add_launch_arg("convert_brake_cmd", "true")
    add_launch_arg("convert_steer_cmd", "false")
    add_launch_arg("input_control_cmd", "/control/command/control_cmd")
    add_launch_arg("input_odometry", "/localization/kinematic_state")
    add_launch_arg("input_steering", "/vehicle/status/steering_status")
    add_launch_arg("output_actuation_cmd", "/control/command/actuation_cmd")
    
    def create_parameter_dict(*args):
        result = {}
        for x in args:
            result[x] = LaunchConfiguration(x)
        return result
    
    # 创建组件节点----------------------------------------------------------------------------------------
    raw_vehicle_cmd_converter_component_node = ComposableNode(
        package="autoware_raw_vehicle_cmd_converter",
        plugin="autoware::raw_vehicle_cmd_converter::RawVehicleCommandConverterNode",
        name="raw_vehicle_cmd_converter_node",
        namespace="",
        parameters=[
            converter_param,
            create_parameter_dict(
                "csv_path_accel_map",
                "csv_path_brake_map",
                "csv_path_steer_map",
                "max_throttle",
                "max_brake",
                "max_steer",
                "min_steer",
                "convert_accel_cmd",
                "convert_brake_cmd",
                "convert_steer_cmd",
            )
        ],
        remappings=[
            ("~/input/control_cmd", LaunchConfiguration("input_control_cmd")),
            ("~/input/odometry", LaunchConfiguration("input_odometry")),
            ("~/input/steering", LaunchConfiguration("input_steering")),
            ("~/output/actuation_cmd", LaunchConfiguration("output_actuation_cmd"))
        ],
    )
    
    
    # 加载组件节点-----------------------------------------------------------------------------------------
    raw_vehicle_cmd_converter_loader = LoadComposableNodes(
        composable_node_descriptions=[
            raw_vehicle_cmd_converter_component_node,
            ],
        target_container="/control/control_container",
    )

    return launch.LaunchDescription([
        *launch_arguments,
        raw_vehicle_cmd_converter_loader,
        ]
    )