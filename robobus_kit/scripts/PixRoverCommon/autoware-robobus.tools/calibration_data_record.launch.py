from launch import LaunchDescription
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode
from pathlib import Path


def generate_launch_description():
    root_path = Path.home() / "pix/failcase_data_local/calibration/input"
    if not root_path.exists():
        root_path.mkdir(parents=True)

    record_topics = [
        "/electronic_rearview_mirror/front_3mm/camera_compressed_image",
        "/electronic_rearview_mirror/front_left/camera_compressed_image",
        "/electronic_rearview_mirror/front_right/camera_compressed_image",
        "/electronic_rearview_mirror/rear_3mm/camera_compressed_image",
        "/electronic_rearview_mirror/rear_left/camera_compressed_image",
        "/electronic_rearview_mirror/rear_right/camera_compressed_image",
        "/sensing/camera/front_3mm/camera_info",
        "/sensing/camera/front_left/camera_info",
        "/sensing/camera/front_right/camera_info",
        "/sensing/camera/rear_3mm/camera_info",
        "/sensing/camera/rear_left/camera_info",
        "/sensing/camera/rear_right/camera_info",
        "/sensing/lidar/front_left/points_cropped_cloudini",
        "/sensing/lidar/front_right/points_cropped_cloudini",
        "/sensing/lidar/front_top/points_cropped_cloudini",
        "/sensing/lidar/rear_center/points_cropped_cloudini",
        "/sensing/lidar/rear_top/points_cropped_cloudini",
    ]

    lidar_converters = [
        ("front_left", "/sensing/lidar/front_left/points_cropped", "/sensing/lidar/front_left/points_cropped_cloudini"),
        ("front_right", "/sensing/lidar/front_right/points_cropped", "/sensing/lidar/front_right/points_cropped_cloudini"),
        ("front_top", "/sensing/lidar/front_top/points_cropped", "/sensing/lidar/front_top/points_cropped_cloudini"),
        ("rear_center", "/sensing/lidar/rear_center/points_cropped", "/sensing/lidar/rear_center/points_cropped_cloudini"),
        ("rear_top", "/sensing/lidar/rear_top/points_cropped", "/sensing/lidar/rear_top/points_cropped_cloudini"),
    ]

    composable_nodes = [
        ComposableNode(
            package="cloudini_ros",
            plugin="CloudiniPointcloudConverter",
            name=f"{name}_cloudini_converter",
            parameters=[{
                "topic_input": topic_input,
                "topic_output": topic_output,
                "compressing": True,
                "resolution": 0.02,
            }],
            extra_arguments=[{"use_intra_process_comms": True}],
        )
        for name, topic_input, topic_output in lidar_converters
    ]

    composable_nodes.append(
        ComposableNode(
            package="rosbag2_composable_recorder",
            plugin="rosbag2_composable_recorder::ComposableRecorder",
            name="recorder_node",
            namespace="/calibration_data",
            parameters=[{
                "root_path": str(root_path),
                "bag_prefix": "calibration_data_",
                "topics": record_topics,
                "storage_id": "mcap",
                "max_bagfile_size": 2 * 1024 * 1024 * 1024,
                "max_cache_size": 2 * 1024 * 1024 * 1024,
                "start_recording_immediately": True,
            }],
            extra_arguments=[{"use_intra_process_comms": True}],
        )
    )

    container = ComposableNodeContainer(
        name="calibration_data_container",
        namespace="/calibration_data",
        package="rclcpp_components",
        executable="component_container_mt",
        composable_node_descriptions=composable_nodes,
        output="screen",
    )

    return LaunchDescription([
        container,
    ])
