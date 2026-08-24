#!/bin/bash
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)

AUTOWARE_ROBOBUS_WORKSPACE=$1

# 重启底盘驱动和hmi ----------------------------------------------------------------------
is_run1_cmd=false
[[ "$AUTOPILOT_VERSION" == "PixRover1.6" ]] && is_run1_cmd=true
[[ "$AUTOPILOT_VERSION" != "PixRover1.6" && "$TMUX_NAME" == "ORIN2" ]] && is_run1_cmd=true

if [ "$is_run1_cmd" == "true" ]; then

  echo "重启底盘驱动"
  $SCRIPTS_ROOT/common/tmux_common/main.py  close vehicle_interface
  sleep 2
  $SCRIPTS_ROOT/common/tmux_common/main.py  force_close vehicle_interface
  sleep 2
  $SCRIPTS_ROOT/common/tmux_common/tmux_run.sh  $SCRIPTS_ROOT/PixRoverCommon/scripts/vehicle_interface.sh vehicle_interface $AUTOWARE_ROBOBUS_WORKSPACE

  echo "hmi_launch 重启"
  $SCRIPTS_ROOT/common/tmux_common/main.py  close pixmoving_hmi
  sleep 2
  $SCRIPTS_ROOT/common/tmux_common/main.py  force_close pixmoving_hmi
  sleep 2
  $SCRIPTS_ROOT/common/tmux_common/tmux_run.sh  $SCRIPTS_ROOT/PixRoverCommon/scripts/pixmoving_hmi.sh pixmoving_hmi $AUTOWARE_ROBOBUS_WORKSPACE

fi

# 重启组合导航 ----------------------------------------------------------------------
is_run2_cmd=false
[[ "$COMBINED_NAVIGATION_VERSION" == "chc"   && "$TMUX_NAME" == "ORIN2" ]] && is_run2_cmd=true
[[ "$COMBINED_NAVIGATION_VERSION" == "eaora" && "$TMUX_NAME" == "ORIN1" ]] && is_run2_cmd=true
[[ "$COMBINED_NAVIGATION_VERSION" == "pbox"  && "$TMUX_NAME" == "ORIN1" ]] && is_run2_cmd=true

if [ "$is_run2_cmd" == "true" ]; then
  echo 重启组合驱动
  $SCRIPTS_ROOT/common/tmux_common/main.py  close combined_navigation
  sleep 2
  $SCRIPTS_ROOT/common/tmux_common/main.py  force_close combined_navigation
  sleep 2
  $SCRIPTS_ROOT/common/tmux_common/tmux_run.sh  $SCRIPTS_ROOT/PixRoverCommon/scripts/combined_navigation.sh combined_navigation $AUTOWARE_ROBOBUS_WORKSPACE
fi
