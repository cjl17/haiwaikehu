#!/bin/bash
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)

swith=$1
if [ -z "$swith" ]; then
  echo "No argument supplied, default to restart rviz"
  exit 1
fi

if [ $swith == "start" ]; then
  echo "start rviz"
  $SCRIPTS_ROOT/common/tmux_common/tmux_run.sh  $SCRIPTS_ROOT/PixRoverCommon/scripts/autoware_rviz2.sh
elif [ $swith == "close" ]; then
  echo "close rviz"
  $SCRIPTS_ROOT/common/tmux_common/main.py  close autoware_rviz2
  sleep 2
  $SCRIPTS_ROOT/common/tmux_common/main.py  force_close autoware_rviz2
else
  echo "Unknown argument: $swith"
  exit 1
fi




