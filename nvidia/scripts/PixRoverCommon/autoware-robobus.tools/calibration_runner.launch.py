from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
def generate_launch_description():
    # TODO: 根据标定业务需求添加需要启动的 ROS 2 节点
    return LaunchDescription([
        # 示例：根据 backend_type 条件启动不同后端节点
        # Node(
        #     package="web_server",
        #     executable="webserver",
        #     output="screen",
        #     condition=IfCondition([
        #         TextSubstitution(text="'"),
        #         LaunchConfiguration("backend_type"),
        #         TextSubstitution(text="' == 'web_server'"),
        #     ]),
        # ),
        # Node(
        #     package="mqtt_node",
        #     executable="mqtt_node",
        #     output="screen",
        #     condition=IfCondition([
        #         TextSubstitution(text="'"),
        #         LaunchConfiguration("backend_type"),
        #         TextSubstitution(text="' == 'mqtt_node'"),
        #     ]),
        # ),
    ])
