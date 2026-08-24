from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, GroupAction, IncludeLaunchDescription
from launch.conditions import LaunchConfigurationEquals
from launch.launch_description_sources import AnyLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument(
            "backend_type",
            default_value="mqtt_node",
            # default_value="web_server",
            description="选择后端节点: web_server 或 mqtt_node",
            choices=["web_server", "mqtt_node"],
        ),

        GroupAction([
            Node(
                package="web_server",
                executable="webserver",
                output="screen",
            ),
        ], condition=LaunchConfigurationEquals("backend_type", "web_server")),

        GroupAction([
            Node(
                package="mqtt_node",
                executable="mqtt_node",
                output="screen",
            ),
        ], condition=LaunchConfigurationEquals("backend_type", "mqtt_node")),

        IncludeLaunchDescription(
            AnyLaunchDescriptionSource(
                PathJoinSubstitution([
                    FindPackageShare("foxglove_bridge"),
                    "launch",
                    "foxglove_bridge_launch.xml",
                ])
            ),
            launch_arguments={"port": "18766"}.items(),
        ),
    ])
