#!/bin/bash
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)


source $SCRIPTS_ROOT/common/common.sh
common_main robobus_display

log_info "提示🔔" "车内大屏程序 - 已启动 ✅"

export DISPLAY=:0
export XDG_RUNTIME_DIR=/run/user/1000
export DBUS_SESSION_BUS_ADDRESS=unix:path=/run/user/1000/bus

$HOME/pix/robobus/ScreenHMI/HMIarm
