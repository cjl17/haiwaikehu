#!/bin/bash
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)

source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env 

source $SCRIPTS_ROOT/common/common.sh
common_main autoware_robobus

log_info "提示🔔" "autoware_robobus自动驾驶程序[多机1号] - 已启动 ✅"

AUTOWARE_ROBOBUS_WORKSPACE=$1
if [ -z "$AUTOWARE_ROBOBUS_WORKSPACE" ]; then
  AUTOWARE_ROBOBUS_WORKSPACE=autoware-robobus.dev-master
else
  # 如果不为空，检查是否为正确的工作空间
  if [ $AUTOWARE_ROBOBUS_WORKSPACE == "autoware-robobus.dev-master" ]; then
    AUTOWARE_ROBOBUS_WORKSPACE=autoware-robobus.dev-master
  else
    AUTOWARE_ROBOBUS_WORKSPACE=autoware-robobus.master
  fi
fi

# 启动不同版本的autoware
old_AUTOWARE_ROBOBUS_WORKSPACE=$(cat $PIX_CFG_PATH/current_autoware_version)
echo $AUTOWARE_ROBOBUS_WORKSPACE > $PIX_CFG_PATH/current_autoware_version
if [ $AUTOWARE_ROBOBUS_WORKSPACE != $old_AUTOWARE_ROBOBUS_WORKSPACE ]; then
  log_info "启动了不同版本autoware[$old_AUTOWARE_ROBOBUS_WORKSPACE -> $AUTOWARE_ROBOBUS_WORKSPACE ],需要重启组合导航和底盘驱动"
  $SCRIPTS_ROOT/PixRoverCommon/maun_run/node_restart.sh $AUTOWARE_ROBOBUS_WORKSPACE
fi

source ~/pix/robobus/$AUTOWARE_ROBOBUS_WORKSPACE/install/setup.bash

if [ "$AUTOWARE_ROBOBUS_WORKSPACE" = "autoware-robobus.master" ] ; then
  autoware_data_path=$HOME/autoware_data_1.0
else
  autoware_data_path=$HOME/autoware_data_2.0
fi

# 软连接到对于版本模型文件路径 -----------------------------------
AutowareDataPATH=$HOME/autoware_data
rm $AutowareDataPATH
ln -s $autoware_data_path  $AutowareDataPATH
# ------------------------------------------------------------

log_info "工作空间: $AUTOWARE_ROBOBUS_WORKSPACE"
log_info "模型路径: $autoware_data_path"

ros2 launch $SCRIPTS_ROOT/launch/robobus_autoware.launch.xml \
    map_path:=$HOME/pix/map/main  \
    vehicle_model:=robobus \
    sensor_model:=robobus_sensor_kit\
    pointcloud_container_name:=orin_pointcloud_container \
    use_pointcloud_container:=false \
    use_perception_container:=true \
    launch_sensing:=false \
    launch_sensing_driver:=false \
    launch_sensing_ipc:=false \
    launch_sensing_orin:=true \
    launch_perception:=true \
    launch_detection:=true \
    use_deeplearning_model:=true \
    use_non_deeplearning_model:=false \
    launch_tracking:=false \
    launch_prediction:=false \
    use_perception_detection:=true \
    use_traffic_light_recognition:=true \
    launch_map:=false \
    launch_localization:=false \
    launch_system:=false \
    launch_system_monitor:=false \
    launch_vehicle:=false \
    launch_control:=false \
    launch_planning:=false \
    launch_api:=false \
    rviz:=false \
    rviz_respawn:=false \
    scripts_root_path:=$SCRIPT_DIR/../..

# rviz_config


# use_perception_detection[true启动]: (launch_detection[gpu], launch_tracking[cpu], launch_prediction[cpu], use_non_deeplearning_model[CPU])
# 
# launch_perception(use_non_deeplearning_model[CPU], use_deeplearning_model, use_perception_detection, use_traffic_light_recognition[GPU])
# 


# 关闭录制
ros2 service call /failcase_data/pause_all std_srvs/srv/Trigger