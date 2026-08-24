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
from launch.actions import DeclareLaunchArgument, LogInfo
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
    add_launch_arg("control_container_name", "/control/control_container")
    # 消息周期: 丢失3个周期警告级别，丢失5个周期严重级别
    # report_converter订阅消息周期
    add_launch_arg("autoware_driver_period_ms", "30")
    add_launch_arg("autoware_gear_period_ms", "100")
    # report_converter订阅消息周期
    add_launch_arg("pix_door_lamp_period_ms", "200")
    add_launch_arg("pix_estop_period_ms", "50")
    add_launch_arg("pix_drive_period_ms", "20")
    add_launch_arg("imu_msg_period_ms", "10")
    
    add_launch_arg("steer_mechanical_type", os.getenv("STEER_MECHANICAL_TYPE", "H02B")) # 目前，老转向机：DP139 ，新转向机：H02B
    add_launch_arg("max_steering_angle_DP139_rad", "0.404")  # rad
    add_launch_arg("max_steering_angle_H02B_rad", "0.419580")   # rad
    add_launch_arg("max_steering_angle_DP139_deg", "420.0")  # deg
    add_launch_arg("max_steering_angle_H02B_deg", "450.0")   # deg
    add_launch_arg("loop_rate", "50.0")
    add_launch_arg("base_frame_id", "base_link")
    add_launch_arg("use_steer_mode_correct", "true")
    add_launch_arg("wheel_base", "3.02")
    add_launch_arg("k_threshold", "0.1")
    add_launch_arg("brake_lamp_lpf_alpha", "0.2")
    add_launch_arg("brake_lamp_raw_acc_on_thresh", "-0.25")
    add_launch_arg("brake_lamp_on_thresh", "-0.20")
    add_launch_arg("brake_lamp_off_thresh", "-0.05")
    add_launch_arg("brake_lamp_pedal_on_thresh", "3.0")
    add_launch_arg("brake_lamp_pedal_off_thresh", "1.0")
    add_launch_arg("brake_lamp_min_on_ms", "200")
    add_launch_arg("brake_lamp_off_delay_ms", "150")
    add_launch_arg("epb_hold_brake_pct", "30.0")
    add_launch_arg("epb_brake_apply_threshold", "0.05")
    add_launch_arg("epb_brake_release_threshold", "0.02")
    add_launch_arg("epb_start_velocity_threshold", "0.10")
    add_launch_arg("epb_stationary_speed_threshold", "0.06")
    add_launch_arg("epb_stationary_confirm_frames", "5")
    add_launch_arg("epb_park_trigger_frames", "3")
    add_launch_arg("epb_release_arm_frames", "3")
    add_launch_arg("epb_release_trigger_frames", "3")
    add_launch_arg("epb_reset_default_frames", "3")
    add_launch_arg("epb_intent_debounce_frames", "5")
    add_launch_arg("epb_park_timeout_ms", "2000")
    add_launch_arg("epb_drive_ready_timeout_ms", "700")
    add_launch_arg("epb_release_timeout_ms", "1000")
    add_launch_arg("epb_feedback_timeout_ms", "500")
    add_launch_arg("epb_drive_feedback_timeout_ms", "500")
    add_launch_arg("epb_mode_feedback_timeout_ms", "500")
    add_launch_arg("epb_reset_transition_timeout_ms", "2000")
    add_launch_arg("epb_parked_confirm_frames", "3")
    add_launch_arg("epb_released_confirm_frames", "3")
    add_launch_arg("epb_mode_sync_default_frames", "3")
    add_launch_arg("epb_max_retry", "2")
    # 纯自动长停保持：按坡度自适应抬服务制动，帮助底盘按自身逻辑自主驻车。
    add_launch_arg("epb_chassis_auto_park_hold_enable", "true")
    add_launch_arg("epb_chassis_auto_park_hold_use_slope_table", "true")
    add_launch_arg("epb_chassis_auto_park_hold_min_brake_pct", "30.0")
    add_launch_arg("epb_chassis_auto_park_hold_invalid_slope_brake_pct", "50.0")
    add_launch_arg("epb_chassis_auto_park_hold_margin_pct", "5.0")
    add_launch_arg("epb_chassis_auto_park_hold_max_brake_pct", "60.0")
    add_launch_arg("epb_chassis_auto_park_hold_max_grade_pct", "30.0")
    add_launch_arg("epb_chassis_auto_park_hold_flat_grade_pct", "2.0")
    add_launch_arg("epb_chassis_auto_park_hold_start_frames", "5")
    add_launch_arg("epb_slope_angle_timeout_ms", "500")
    add_launch_arg("epb_slope_stop_hold_enable", "true")
    add_launch_arg("epb_slope_stop_hold_speed_threshold", "0.20")
    add_launch_arg("epb_slope_stop_hold_near_stop_frames", "3")
    add_launch_arg("epb_slope_stop_hold_latch_brake_pct", "10.0")
    add_launch_arg("epb_slope_stop_hold_release_brake_pct", "5.0")
    add_launch_arg("epb_slope_stop_hold_throttle_threshold", "3.0")
    add_launch_arg("epb_slope_stop_hold_min_hold_ms", "1000")
    add_launch_arg("epb_slope_stop_hold_recover_ratio", "0.9")

    def create_parameter_dict(*args):
        result = {}
        for x in args:
            result[x] = LaunchConfiguration(x)
        return result
    
    log_info = LogInfo(msg=["转向电机类型 = ", LaunchConfiguration("steer_mechanical_type")])
    # 创建组件节点----------------------------------------------------------------------------------------
    control_converter_component_node = ComposableNode(
        package="pix_interface",
        plugin="pix_interface::control_converter::ControlConverter",
        name="pix_interface_control_converter_node",
        namespace="",
        parameters=[
            create_parameter_dict(
                "autoware_driver_period_ms",
                "autoware_gear_period_ms",
                "loop_rate",
                "steer_mechanical_type",
                "max_steering_angle_DP139_rad",
                "max_steering_angle_H02B_rad",
                "max_steering_angle_DP139_deg",
                "max_steering_angle_H02B_deg",
                "k_threshold",
                "brake_lamp_lpf_alpha",
                "brake_lamp_raw_acc_on_thresh",
                "brake_lamp_on_thresh",
                "brake_lamp_off_thresh",
                "brake_lamp_pedal_on_thresh",
                "brake_lamp_pedal_off_thresh",
                "brake_lamp_min_on_ms",
                "brake_lamp_off_delay_ms",
                "epb_hold_brake_pct",
                "epb_brake_apply_threshold",
                "epb_brake_release_threshold",
                "epb_start_velocity_threshold",
                "epb_stationary_speed_threshold",
                "epb_stationary_confirm_frames",
                "epb_park_trigger_frames",
                "epb_release_arm_frames",
                "epb_release_trigger_frames",
                "epb_reset_default_frames",
                "epb_intent_debounce_frames",
                "epb_park_timeout_ms",
                "epb_drive_ready_timeout_ms",
                "epb_release_timeout_ms",
                "epb_feedback_timeout_ms",
                "epb_drive_feedback_timeout_ms",
                "epb_mode_feedback_timeout_ms",
                "epb_reset_transition_timeout_ms",
                "epb_parked_confirm_frames",
                "epb_released_confirm_frames",
                "epb_mode_sync_default_frames",
                "epb_max_retry",
                "epb_chassis_auto_park_hold_enable",
                "epb_chassis_auto_park_hold_use_slope_table",
                "epb_chassis_auto_park_hold_min_brake_pct",
                "epb_chassis_auto_park_hold_invalid_slope_brake_pct",
                "epb_chassis_auto_park_hold_margin_pct",
                "epb_chassis_auto_park_hold_max_brake_pct",
                "epb_chassis_auto_park_hold_max_grade_pct",
                "epb_chassis_auto_park_hold_flat_grade_pct",
                "epb_chassis_auto_park_hold_start_frames",
                "epb_slope_angle_timeout_ms",
                "epb_slope_stop_hold_enable",
                "epb_slope_stop_hold_speed_threshold",
                "epb_slope_stop_hold_near_stop_frames",
                "epb_slope_stop_hold_latch_brake_pct",
                "epb_slope_stop_hold_release_brake_pct",
                "epb_slope_stop_hold_throttle_threshold",
                "epb_slope_stop_hold_min_hold_ms",
                "epb_slope_stop_hold_recover_ratio"
            )
        ],
    )
    
    report_converter_component_node = ComposableNode(
        package="pix_interface",
        plugin="pix_interface::report_converter::ReportConverter",
        name="pix_interface_report_converter_node",
        namespace="",
        parameters=[
            create_parameter_dict(
                "base_frame_id",
                "pix_door_lamp_period_ms",
                "pix_estop_period_ms",
                "pix_drive_period_ms",
                "imu_msg_period_ms",
                "loop_rate",
                "steer_mechanical_type",
                "max_steering_angle_DP139_rad",
                "max_steering_angle_H02B_rad",
                "max_steering_angle_DP139_deg",
                "max_steering_angle_H02B_deg",
                "use_steer_mode_correct",
                "wheel_base"
            )
        ],
    )
    
    
    # 加载组件节点-----------------------------------------------------------------------------------------
    pix_robobus_driver_loader = LoadComposableNodes(
        composable_node_descriptions=[
            control_converter_component_node,
            report_converter_component_node
            ],
        target_container=LaunchConfiguration(
          'control_container_name'
          ),
    )
    return launch.LaunchDescription([
        *launch_arguments,
        log_info,
        pix_robobus_driver_loader,
    ])
