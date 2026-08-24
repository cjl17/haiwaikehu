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
  echo "start hmi"
  export DISPLAY=:0
  export XDG_RUNTIME_DIR=/run/user/1000
  export DBUS_SESSION_BUS_ADDRESS=unix:path=/run/user/1000/bus
  $SCRIPTS_ROOT/common/tmux_common/tmux_run.sh  $SCRIPTS_ROOT/PixRoverCommon/scripts/robobus_display.sh
elif [ $swith == "close" ]; then
  echo "close hmi"
  $SCRIPTS_ROOT/common/tmux_common/main.py  close robobus_display
  sleep 2
  $SCRIPTS_ROOT/common/tmux_common/main.py  force_close robobus_display
else
  echo "Unknown argument: $swith"
  exit 1
fi




