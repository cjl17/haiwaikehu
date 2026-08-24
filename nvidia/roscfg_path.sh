#!/bin/bash
source /opt/pix/pix.env
source $SCRIPTS_ROOT/common/common.sh
source $SCRIPTS_ROOT/PixRoverCommon/config/common.sh 
source $SCRIPTS_ROOT/PixRover1.4_1.5/config/common.sh 

export CYCLONEDDS_URI=file://$SCRIPTS_ROOT/PixRover1.4_1.5/config/humble_orin1.xml
export ROS_DOMAIN_ID=22
# export ROS_LOCALHOST_ONLY=1
source /opt/ros/humble/setup.bash