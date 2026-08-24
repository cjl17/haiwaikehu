#!/bin/bash
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env
source $SCRIPTS_ROOT/common/common.sh

SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)

echo "✅ 启动时间同步 ===================="
sudo $SCRIPTS_ROOT/PixRoverCommon/scripts/ptp_gps_sync_1.4.sh
# 确保ptp时间同步完毕后
# while true; do  
#   check_ptp_lock pixmoving
#   if [ -f "/tmp/ptp_ok" ]; then    
#     echo "✅ 检测到文件：/tmp/ptp_ok, 确保退出循环"    
#     rm /tmp/ptp_ok   
#     break  
#   else    
#     echo "⏳ 等待文件创建中..."   
#     sleep 2  
#   fi
# done

$SCRIPTS_ROOT/common/tmux_common/tmux_run.sh  $SCRIPTS_ROOT/PixRoverCommon/scripts/script_executor.sh
$SCRIPTS_ROOT/common/tmux_common/tmux_run.sh  $SCRIPTS_ROOT/PixRoverCommon/scripts/pixmoving_hmi.sh
$SCRIPTS_ROOT/common/tmux_common/tmux_run.sh  $SCRIPTS_ROOT/PixRoverCommon/scripts/vehicle_interface.sh
$SCRIPTS_ROOT/common/tmux_common/tmux_run.sh  $SCRIPTS_ROOT/PixRoverCommon/scripts/combined_navigation.sh

$SCRIPTS_ROOT/common/tmux_common/tmux_run.sh  $SCRIPTS_ROOT/PixRoverCommon/zenoh_bridge/zenoh_router.sh

$SCRIPTS_ROOT/PixRoverCommon/AQLoopclose/get_mileage.sh || true
