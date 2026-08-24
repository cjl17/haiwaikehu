import os
import launch
import launch_ros.actions

def generate_launch_description():
    return launch.LaunchDescription([
        launch_ros.actions.Node(
            package='pixmoving_hmi_driver',
            executable='pixmoving_hmi_driver_node',
            name='pixmoving_hmi_driver_node',
            output='own_log',  # "own_log" "screen" 在 ROS 2 中通常用 "log"
            prefix=['gdb -ex=r --args'],
            parameters=[{
                'loop_rate': 10.0,
                'station_yaml_file_path': os.path.expanduser('~/pix/map/main/stations.yaml')
            }]
        )
    ])
