#!/bin/bash
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)

source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env 

source $SCRIPTS_ROOT/common/common.sh
common_main autoware_robobus

# echo "启动激活脚本"
# shell_command="bash -i -c $SCRIPTS_ROOT/PixRoverCommon/scripts/activate.sh"
# tmux new-session -d -s activate $shell_command

log_info "提示🔔" "autoware_robobus自动驾驶程序[多机2号] - 已启动 ✅"
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

echo "启动 failcase_tools.sh"
$SCRIPTS_ROOT/PixRoverCommon/AQLoopclose/main.sh $AUTOWARE_ROBOBUS_WORKSPACE

log_info "工作空间: $AUTOWARE_ROBOBUS_WORKSPACE"
source ~/pix/robobus/$AUTOWARE_ROBOBUS_WORKSPACE/install/setup.bash

ros2 launch $SCRIPTS_ROOT/launch/robobus_autoware.launch.xml \
    map_path:=$HOME/pix/map/main  \
    vehicle_model:=robobus \
    sensor_model:=robobus_sensor_kit\
    use_pointcloud_container:=true \
    use_perception_container:=false \
    launch_sensing:=true \
    launch_sensing_driver:=true \
    launch_sensing_ipc:=true \
    launch_sensing_orin:=false \
    launch_perception:=true \
    launch_detection:=true \
    use_deeplearning_model:=false \
    use_non_deeplearning_model:=true \
    launch_tracking:=true \
    launch_prediction:=true \
    use_perception_detection:=true \
    use_traffic_light_recognition:=false \
    launch_map:=true \
    launch_localization:=true \
    launch_system:=true \
    launch_system_monitor:=false \
    launch_vehicle:=false \
    launch_control:=true \
    launch_planning:=true \
    launch_api:=true \
    rviz:=false \
    rviz_respawn:=false \
    rviz_config:=$SCRIPTS_ROOT/rviz/autoware.rviz \
    scripts_root_path:=$SCRIPT_DIR/../..



