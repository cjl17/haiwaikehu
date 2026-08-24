#!/bin/bash
# 不使用SCRIPT_DIR原因，source后会被改变
source /opt/pix/pix.env
source $SCRIPTS_ROOT/common/common.sh
source $SCRIPTS_ROOT/PixRoverCommon/config/common.sh 

export CYCLONEDDS_URI=file://$SCRIPTS_ROOT/PixRoverCommon/config/humble_localhost.xml
export ROS_DOMAIN_ID=22
export ROS_LOCALHOST_ONLY=1
source /opt/ros/humble/setup.bash
