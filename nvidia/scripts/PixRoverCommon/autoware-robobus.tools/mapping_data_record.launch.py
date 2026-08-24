from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode
from pathlib import Path


def generate_launch_description():
    root_path = Path.home() / "pix/failcase_data_local/mapping/input"
    if not root_path.exists():
        root_path.mkdir(parents=True)   
    
    failcase_topics = [
        "/sensing/lidar/front_top/points_cloudini",
        "/sensing/lidar/rear_top/points_cloudini",
        "/electronic_rearview_mirror/front_3mm/camera_compressed_image",
        "/electronic_rearview_mirror/rear_3mm/camera_compressed_image",
        "/sensing/camera/front_3mm/camera_info",
        "/sensing/camera/rear_3mm/camera_info",
        "/sensing/gnss/fix",
        "/sensing/imu/imu_data",
        "/tf_static_relay",
    ]

    container = ComposableNodeContainer(
        name="failcase_data_container",
        namespace="/failcase_data",
        package="rclcpp_components",
        executable="component_container_mt",
        composable_node_descriptions=[
            ComposableNode(
                package="cloudini_ros",
                plugin="CloudiniPointcloudConverter",
                name="front_top_cloudini_converter",
                parameters=[{
                    "topic_input": "/sensing/lidar/front_top/points",
                    "topic_output": "/sensing/lidar/front_top/points_cloudini",
                    "compressing": True,
                    "resolution": 0.02,
                }],
                extra_arguments=[{"use_intra_process_comms": True}],
            ),
            ComposableNode(
                package="cloudini_ros",
                plugin="CloudiniPointcloudConverter",
                name="rear_top_cloudini_converter",
                parameters=[{
                    "topic_input": "/sensing/lidar/rear_top/points",
                    "topic_output": "/sensing/lidar/rear_top/points_cloudini",
                    "compressing": True,
                    "resolution": 0.02,
                }],
                extra_arguments=[{"use_intra_process_comms": True}],
            ),
            ComposableNode(
                package="rosbag2_composable_recorder",
                plugin="rosbag2_composable_recorder::ComposableRecorder",
                name="recorder_node",
                namespace="/failcase_data",
                parameters=[{
                    "root_path": str(root_path),
                    "bag_prefix": "mapping_data_",
                    "topics": failcase_topics,
                    "storage_id": "mcap",
                    "max_bagfile_size": 2 * 1024 * 1024 * 1024,
                    "max_cache_size": 2 * 1024 * 1024 * 1024,
       
                    "start_recording_immediately": True,
                }],
                extra_arguments=[{"use_intra_process_comms": True}],
            ),
        ],
        output="screen",
    )

    return LaunchDescription([
        container,
    ])