#!/bin/bash
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)

source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env 
source $SCRIPTS_ROOT/common/common.sh
mkdir -p "$HOME/pix/ros2log/$TMUX_NAME"
exec 2> $HOME/pix/ros2log/$TMUX_NAME/$(basename "$0" ".sh")_err.log
exec 1> $HOME/pix/ros2log/$TMUX_NAME/$(basename "$0" ".sh")_out.log


# $AUTONOMOUS_OPS_PLATFORM_ROOT/backend/run.sh
$AUTONOMOUS_OPS_PLATFORM_ROOT/web_app/run.sh