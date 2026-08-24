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


def launch_setup(context, *args, **kwargs):
    # set concat filter as a component
    livox_tag_filter_1 = ComposableNode(
        package="autoware_livox_tag_filter",
        plugin="autoware::livox_tag_filter::LivoxTagFilterNode",
        name="livox_tag_filter_1",
        remappings=[
            ("input", "/sensing/lidar/front/livox/points"),
            ("output", "/sensing/lidar/front/livox/points_filtered")
            ],
        parameters=[
            {
                "ignore_tags": [67, 79],
            }
        ],
        extra_arguments=[{"use_intra_process_comms": LaunchConfiguration("use_intra_process")}],
    ) 
    livox_tag_filter_2 = ComposableNode(
        package="autoware_livox_tag_filter",
        plugin="autoware::livox_tag_filter::LivoxTagFilterNode",
        name="livox_tag_filter_2",
        remappings=[
            ("input", "/sensing/lidar/front_left/livox/points"),
            ("output", "/sensing/lidar/front_left/livox/points_filtered")
            ],
        parameters=[
            {
                "ignore_tags": [67, 79],
            }
        ],
        extra_arguments=[{"use_intra_process_comms": LaunchConfiguration("use_intra_process")}],
    ) 
    livox_tag_filter_3 = ComposableNode(
        package="autoware_livox_tag_filter",
        plugin="autoware::livox_tag_filter::LivoxTagFilterNode",
        name="livox_tag_filter_3",
        remappings=[
            ("input", "/sensing/lidar/front_right/livox/points"),
            ("output", "/sensing/lidar/front_right/livox/points_filtered")
            ],
        parameters=[
            {
                "ignore_tags": [67, 79],
            }
        ],
        extra_arguments=[{"use_intra_process_comms": LaunchConfiguration("use_intra_process")}],
    ) 
    livox_tag_filter_4 = ComposableNode(
        package="autoware_livox_tag_filter",
        plugin="autoware::livox_tag_filter::LivoxTagFilterNode",
        name="livox_tag_filter_4",
        remappings=[
            ("input", "/sensing/lidar/rear/livox/points"),
            ("output", "/sensing/lidar/rear/livox/points_filtered")
            ],
        parameters=[
            {
                "ignore_tags": [67, 79],
            }
        ],
        extra_arguments=[{"use_intra_process_comms": LaunchConfiguration("use_intra_process")}],
    ) 
    pointcloud_correction_1 = ComposableNode(
        package="autoware_pointcloud_preprocessor",
        plugin="autoware::pointcloud_preprocessor::DistortionCorrectorComponent",
        name="pointcloud_correction_1",
        remappings=[
            ("~/output/pointcloud", "/sensing/lidar/corrected/front_top/points"),
            ("~/input/twist", "/localization/twist_estimator/twist_with_covariance"),
            ("~/input/pointcloud", "/sensing/lidar/front/livox/points_filtered"),
            ("~/input/imu", "/sensing/imu/imu_data"),
            ],
        parameters=[
            {
                "time_stamp_field_name": "time_stamp",
                "use_imu": False,
                "base_frame": LaunchConfiguration("base_frame"),
                "use_3d_distortion_correction": False,
                "update_azimuth_and_distance": False,
                "processing_time_threshold_sec": 0.01,
                "timestamp_mismatch_fraction_threshold": 0.01,
                "use_fuzzy_mode": False,
                "use_base_link": True,
            }
        ],
        extra_arguments=[{"use_intra_process_comms": LaunchConfiguration("use_intra_process")}],
    )
    pointcloud_correction_2 = ComposableNode(
        package="autoware_pointcloud_preprocessor",
        plugin="autoware::pointcloud_preprocessor::DistortionCorrectorComponent",
        name="pointcloud_correction_2",
        remappings=[
            ("~/output/pointcloud", "/sensing/lidar/corrected/rear_top/points"),
            ("~/input/twist", "/localization/twist_estimator/twist_with_covariance"),
            ("~/input/pointcloud", "/sensing/lidar/rear/livox/points_filtered"),
            ("~/input/imu", "/sensing/imu/imu_data"),
            ],
        parameters=[
            {
                "time_stamp_field_name": "time_stamp",
                "use_imu": False,
                "base_frame": LaunchConfiguration("base_frame"),
                "use_3d_distortion_correction": False,
                "update_azimuth_and_distance": False,
                "processing_time_threshold_sec": 0.01,
                "timestamp_mismatch_fraction_threshold": 0.01,
                "use_fuzzy_mode": False,
                "use_base_link": True,
            }
        ],
        extra_arguments=[{"use_intra_process_comms": LaunchConfiguration("use_intra_process")}],
    )
    pointcloud_correction_3 = ComposableNode(
        package="autoware_pointcloud_preprocessor",
        plugin="autoware::pointcloud_preprocessor::DistortionCorrectorComponent",
        name="pointcloud_correction_3",
        remappings=[
            ("~/output/pointcloud", "/sensing/lidar/corrected/front_left/points"),
            ("~/input/twist", "/localization/twist_estimator/twist_with_covariance"),
            ("~/input/pointcloud", "/sensing/lidar/front_left/livox/points_filtered"),
            ("~/input/imu", "/sensing/imu/imu_data"),
            ],
        parameters=[
            {
                "time_stamp_field_name": "time_stamp",
                "use_imu": False,
                "base_frame": LaunchConfiguration("base_frame"),
                "use_3d_distortion_correction": False,
                "update_azimuth_and_distance": False,
                "processing_time_threshold_sec": 0.01,
                "timestamp_mismatch_fraction_threshold": 0.01,
                "use_fuzzy_mode": False,
                "use_base_link": True,
            }
        ],
        extra_arguments=[{"use_intra_process_comms": LaunchConfiguration("use_intra_process")}],
    )
    pointcloud_correction_4 = ComposableNode(
        package="autoware_pointcloud_preprocessor",
        plugin="autoware::pointcloud_preprocessor::DistortionCorrectorComponent",
        name="pointcloud_correction_4",
        remappings=[
            ("~/output/pointcloud", "/sensing/lidar/corrected/front_right/points"),
            ("~/input/twist", "/localization/twist_estimator/twist_with_covariance"),
            ("~/input/pointcloud", "/sensing/lidar/front_right/livox/points_filtered"),
            ("~/input/imu", "/sensing/imu/imu_data"),
            ],
        parameters=[
            {
                "time_stamp_field_name": "time_stamp",
                "use_imu": False,
                "base_frame": LaunchConfiguration("base_frame"),
                "use_3d_distortion_correction": False,
                "update_azimuth_and_distance": False,
                "processing_time_threshold_sec": 0.01,
                "timestamp_mismatch_fraction_threshold": 0.01,
                "use_fuzzy_mode": False,
                "use_base_link": True,
            }
        ],
        extra_arguments=[{"use_intra_process_comms": LaunchConfiguration("use_intra_process")}],
    )
    pointcloud_correction_5 = ComposableNode(
        package="autoware_pointcloud_preprocessor",
        plugin="autoware::pointcloud_preprocessor::DistortionCorrectorComponent",
        name="pointcloud_correction_5",
        remappings=[
            ("~/output/pointcloud", "/sensing/lidar/corrected/rear_center/points"),
            ("~/input/twist", "/localization/twist_estimator/twist_with_covariance"),
            ("~/input/pointcloud", "/sensing/lidar/rear_center/points"),
            ("~/input/imu", "/sensing/imu/imu_data"),
            ],
        parameters=[
            {
                "time_stamp_field_name": "time_stamp",
                "use_imu": False,
                "base_frame": LaunchConfiguration("base_frame"),
                "use_3d_distortion_correction": False,
                "update_azimuth_and_distance": False,
                "processing_time_threshold_sec": 0.01,
                "timestamp_mismatch_fraction_threshold": 0.01,
                "use_fuzzy_mode": False,
                "use_base_link": True,
            }
        ],
        extra_arguments=[{"use_intra_process_comms": LaunchConfiguration("use_intra_process")}],
    )
    
    # set crop box filter as a component
    cropbox_component_1 = ComposableNode(
        package="autoware_pointcloud_preprocessor",
        plugin="autoware::pointcloud_preprocessor::CropBoxFilterComponent",
        name="crop_box_filter_1",
        remappings=[
            ("input", "/sensing/lidar/corrected/front_top/points"),
            ("output", "/sensing/lidar/corrected/front_top/points_cropped"),
        ],
        parameters=[
            {
                "input_frame": LaunchConfiguration("base_frame"),
                "output_frame": LaunchConfiguration("base_frame"),
                "min_x": -0.39,
                "max_x": 3.41,
                "min_y": -1.3,
                "max_y": 1.3,
                "min_z": -0.4,
                "max_z": 2.5,
                "negative": True,
                "processing_time_threshold_sec": 0.1,
            },
        ],
    )
    cropbox_component_2 = ComposableNode(
        package="autoware_pointcloud_preprocessor",
        plugin="autoware::pointcloud_preprocessor::CropBoxFilterComponent",
        name="crop_box_filter_2",
        remappings=[
            ("input", "/sensing/lidar/corrected/rear_top/points"),
            ("output", "/sensing/lidar/corrected/rear_top/points_cropped"),
        ],
        parameters=[
            {
                "input_frame": LaunchConfiguration("base_frame"),
                "output_frame": LaunchConfiguration("base_frame"),
                "min_x": -0.39,
                "max_x": 3.41,
                "min_y": -1.3,
                "max_y": 1.3,
                "min_z": -0.4,
                "max_z": 2.5,
                "negative": True,
                "processing_time_threshold_sec": 0.1,
            },
        ],
    )
    cropbox_component_3 = ComposableNode(
        package="autoware_pointcloud_preprocessor",
        plugin="autoware::pointcloud_preprocessor::CropBoxFilterComponent",
        name="crop_box_filter_3",
        remappings=[
            ("input", "/sensing/lidar/corrected/front_left/points"),
            ("output", "/sensing/lidar/corrected/front_left/points_cropped"),
        ],
        parameters=[
            {
                "input_frame": LaunchConfiguration("base_frame"),
                "output_frame": LaunchConfiguration("base_frame"),
                "min_x": -0.39,
                "max_x": 3.41,
                "min_y": -1.3,
                "max_y": 1.3,
                "min_z": -0.4,
                "max_z": 2.5,
                "negative": True,
                "processing_time_threshold_sec": 0.1,
            },
        ],
    )
    cropbox_component_4 = ComposableNode(
        package="autoware_pointcloud_preprocessor",
        plugin="autoware::pointcloud_preprocessor::CropBoxFilterComponent",
        name="crop_box_filter_4",
        remappings=[
            ("input", "/sensing/lidar/corrected/front_right/points"),
            ("output", "/sensing/lidar/corrected/front_right/points_cropped"),
        ],
        parameters=[
            {
                "input_frame": LaunchConfiguration("base_frame"),
                "output_frame": LaunchConfiguration("base_frame"),
                "min_x": -0.39,
                "max_x": 3.41,
                "min_y": -1.3,
                "max_y": 1.3,
                "min_z": -0.4,
                "max_z": 2.5,
                "negative": True,
                "processing_time_threshold_sec": 0.1,
            },
        ],
    )
    cropbox_component_5 = ComposableNode(
        package="autoware_pointcloud_preprocessor",
        plugin="autoware::pointcloud_preprocessor::CropBoxFilterComponent",
        name="crop_box_filter_5",
        remappings=[
            ("input", "/sensing/lidar/corrected/rear_center/points"),
            ("output", "/sensing/lidar/corrected/rear_center/points_cropped"),
        ],
        parameters=[
            {
                "input_frame": LaunchConfiguration("base_frame"),
                "output_frame": LaunchConfiguration("base_frame"),
                "min_x": -0.39,
                "max_x": 3.41,
                "min_y": -1.3,
                "max_y": 1.3,
                "min_z": -0.4,
                "max_z": 2.5,
                "negative": True,
                "processing_time_threshold_sec": 0.1,
            },
        ],
    )
    
    # set concat filter as a component
    concat_component_raw = ComposableNode(
        package="autoware_pointcloud_preprocessor",
        plugin="autoware::pointcloud_preprocessor::PointCloudConcatenateDataSynchronizerComponent",
        name="concatenate_data_raw",
        remappings=[
            ("output", "concatenated/pointcloud"),
            ("~/input/twist", "/localization/twist_estimator/twist_with_covariance")
            ],
        parameters=[
            {
                "input_topics": [
                    "/sensing/lidar/corrected/front_top/points_cropped",
                    "/sensing/lidar/corrected/rear_top/points_cropped",
                    "/sensing/lidar/corrected/front_left/points_cropped",
                    "/sensing/lidar/corrected/front_right/points_cropped",
                ],
                "output_frame": LaunchConfiguration("base_frame"),
                "debug_mode": False,
                "rosbag_length": 10.0,
                "is_motion_compensated": True,
                "maximum_queue_size": 5,
                "timeout_sec": 0.2,
                "publish_synchronized_pointcloud": False,
                "keep_input_frame_in_synchronized_pointcloud": True,
                "publish_previous_but_late_pointcloud": False,
                "synchronized_pointcloud_postfix": "pointcloud",
                "input_twist_topic_type": "twist",
                "matching_strategy.type": "naive",
            }
        ],
        extra_arguments=[{"use_intra_process_comms": LaunchConfiguration("use_intra_process")}],
    )
    
    

    # set container to run all required components in the same process
    container = ComposableNodeContainer(
        name=LaunchConfiguration("container_name"),
        namespace="",
        package="rclcpp_components",
        executable=LaunchConfiguration("container_executable"),
        composable_node_descriptions=[],
        condition=UnlessCondition(LaunchConfiguration("use_pointcloud_container")),
        output="screen",
    )

    target_container = (
        LaunchConfiguration("container_name")
    )

    # load concat or passthrough filter
    concat_loader = LoadComposableNodes(
        composable_node_descriptions=[pointcloud_correction_1, pointcloud_correction_2, pointcloud_correction_3, 
                                      pointcloud_correction_4, 
                                      cropbox_component_1, cropbox_component_2, cropbox_component_3,
                                      cropbox_component_4, 
                                      concat_component_raw, 
                                      livox_tag_filter_1, livox_tag_filter_2, livox_tag_filter_3, livox_tag_filter_4,],

        target_container=target_container,
        condition=IfCondition(LaunchConfiguration("use_concat_filter")),
    )

    return [container, concat_loader]


def generate_launch_description():
    launch_arguments = []

    def add_launch_arg(name: str, default_value=None):
        launch_arguments.append(DeclareLaunchArgument(name, default_value=default_value))

    add_launch_arg("base_frame", "base_link")
    add_launch_arg("use_multithread", "False")
    add_launch_arg("use_intra_process", "False")
    add_launch_arg("use_pointcloud_container", "True")
    add_launch_arg("container_name", "pointcloud_preprocessor_container")
    add_launch_arg("use_concat_filter", "True")

    set_container_executable = SetLaunchConfiguration(
        "container_executable",
        "component_container",
        condition=UnlessCondition(LaunchConfiguration("use_multithread")),
    )

    set_container_mt_executable = SetLaunchConfiguration(
        "container_executable",
        "component_container_mt",
        condition=IfCondition(LaunchConfiguration("use_multithread")),
    )

    return launch.LaunchDescription(
        launch_arguments
        + [set_container_executable, set_container_mt_executable]
        + [OpaqueFunction(function=launch_setup)]
    )