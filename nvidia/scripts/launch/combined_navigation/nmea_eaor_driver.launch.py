# Software License Agreement (BSD License)
#
# Copyright (c) 2013, Eric Perko
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
#
#  * Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
#  * Redistributions in binary form must reproduce the above
#    copyright notice, this list of conditions and the following
#    disclaimer in the documentation and/or other materials provided
#    with the distribution.
#  * Neither the names of the authors nor the names of their
#    affiliated organizations may be used to endorse or promote products derived
#    from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
# FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
# COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
# BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
# LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
# CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
# LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
# ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.

import os
import sys

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription, LaunchIntrospector, LaunchService
from launch.actions import DeclareLaunchArgument,LogInfo
from launch.substitutions import LaunchConfiguration
from launch_ros import actions


def generate_launch_description():
    """Generate a launch description for the GPSD NMEA driver."""
    # 使用现有的配置文件
    config_file = os.path.join(get_package_share_directory("nmea_navsat_driver"), "config", "nmea_gpsd_driver.yaml")
    
    # 创建GPSD驱动节点
    driver_node = actions.Node(
        package='nmea_navsat_driver',
        executable='nmea_gpsd_driver',
        name='nmea_gpsd_driver',
        parameters=[{
            "frame_id": "gnss",                    # GPS数据的frame_id
            "tf_prefix": "",                       # TF前缀
            "timeout": 2.0,                        # GPSD连接超时时间(秒)
            "time_ref_source": "gnss",             # 时间参考源
            "auto_detect": True,                   # 启用自动GPSD检测
            "useRMC": False,                       # RMC消息使用 - 是否使用RMC消息进行位置修复
            # 位置精度估计 (Estimated Position Error)
            "epe_quality0": 1000000.0,            # 质量0 (无效) 的估计位置误差(米)
            "epe_quality1": 4.0,                  # 质量1 (SPS) 的估计位置误差(米)
            "epe_quality2": 0.1,                  # 质量2 (DGPS) 的估计位置误差(米)
            "epe_quality4": 0.02,                 # 质量4 (RTK Fix) 的估计位置误差(米)
            "epe_quality5": 4.0,                  # 质量5 (RTK Float) 的估计位置误差(米)
            "epe_quality9": 3.0,                  # 质量9 (WAAS) 的估计位置误差(米)
        }],
        remappings=[
            ("pose", "chc_pose"),
        ],
        output='screen',
    )

    log_info = LogInfo(msg=["组合导航类型: 优控组合导航数据", ])
    
    return LaunchDescription([
        driver_node,
        log_info
    ])


def main(argv):
    ld = generate_launch_description()

    print('Starting introspection of launch description...')
    print('')

    print(LaunchIntrospector().format_launch_description(ld))

    print('')
    print('Starting launch of launch description')
    print('')

    
    ls = LaunchService()
    ls.include_launch_description(ld)
    return ls.run()


if __name__ == '__main__':
    main(sys.argv)