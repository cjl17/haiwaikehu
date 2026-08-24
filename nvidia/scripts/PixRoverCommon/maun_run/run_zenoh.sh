#!/bin/bash
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)

swith=$1
if [ -z "$swith" ]; then
  echo "No argument supplied, default to restart zenoh_router"
  exit 1
fi

if [ $swith == "start" ]; then
  echo "start zenoh_router"
  $SCRIPTS_ROOT/common/tmux_common/tmux_run.sh  $SCRIPTS_ROOT/PixRoverCommon/zenoh_bridge/zenoh_router.sh
elif [ $swith == "close" ]; then
  echo "close zenoh_router"
  $SCRIPTS_ROOT/common/tmux_common/main.py  close zenoh_router
  sleep 2
  $SCRIPTS_ROOT/common/tmux_common/main.py  force_close zenoh_router
else
  echo "Unknown argument: $swith"
  exit 1
fi




