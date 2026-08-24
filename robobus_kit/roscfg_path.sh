#!/bin/bash
source /opt/pix/pix.env
source $SCRIPTS_ROOT/common/common.sh
source $SCRIPTS_ROOT/PixRoverCommon/config/common.sh 

export CYCLONEDDS_URI=file://$SCRIPTS_ROOT/PixRover1.4_1.5/config/humble_orin2.xml
export ROS_DOMAIN_ID=22
export LIDAR_TYPE=robosense
# export ROS_LOCALHOST_ONLY=1
source /opt/ros/humble/setup.bash
export PYTHONPATH=/home/ipc/pix/robobus_kit/autoware/install/autoware_sensing_msgs/local/lib/python3.10/dist-packages:$PYTHONPATH
export PYTHONPATH=/home/ipc/pix/robobus_kit/autoware/install/autoware_sensing_msgs/local/lib/python3.10/dist-packages:$PYTHONPATH
export PYTHONPATH=/home/ipc/pix/robobus_kit/autoware/install/autoware_sensing_msgs/local/lib/python3.10/dist-packages:$PYTHONPATH
export PYTHONPATH=/home/ipc/pix/robobus_kit/autoware/install/autoware_sensing_msgs/local/lib/python3.10/dist-packages:$PYTHONPATH