#!/bin/bash 
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 
source /opt/pix/pix.env
source $SCRIPTS_ROOT/common/common.sh

mkdir -p "$HOME/pix/ros2log/$TMUX_NAME"
exec 2> $HOME/pix/ros2log/$TMUX_NAME/$(basename "$0" ".sh")_err.log
exec 1> $HOME/pix/ros2log/$TMUX_NAME/$(basename "$0" ".sh")_out.log

# 重启autoware启动版本
echo "autoware-robobus.dev-master" > $PIX_CFG_PATH/current_autoware_version

# 下电关机监控脚本
$SCRIPTS_ROOT/common/tmux_common/tmux_run.sh  $SCRIPTS_ROOT/tools/safe/disk_safe/disk_safe.sh
$SCRIPTS_ROOT/common/tmux_common/tmux_run.sh  $SCRIPTS_ROOT/PixRoverCommon/scripts/auto_web_app.sh

arch=$(uname -m)
if [[ "$arch" == "aarch64" || "$arch" == "arm"* ]]; then
  echo "这是 ARM 架构"
  MONOTIME_CMD="$SCRIPTS_ROOT/PixRoverCommon/tools/system_check/monotime.arm"
elif [[ "$arch" == "x86_64" ]]; then
  echo "这是 x86_64 架构（AMD/Intel）"
  MONOTIME_CMD="$SCRIPTS_ROOT/PixRoverCommon/tools/system_check/monotime.amd"
else
  echo "未知架构: $arch"
fi
start_time=$($MONOTIME_CMD)
echo 系统时间:$(date)
echo "ntp时间北京同步"
sudo $SCRIPTS_ROOT/PixRoverCommon/scripts/ntp_sync_time.sh
echo 系统时间:$(date)
echo ---------------------------------------------------------------------------
if [ "$TMUX_NAME" == "ORIN1" ]; then
  passworld=nvidia
  echo "等待其他主机上线"
  wait_power_on 192.168.1.103
elif [ "$TMUX_NAME" == "ORIN2" ]; then
  passworld=pixmoving
  echo "等待其他主机上线"
  wait_power_on 192.168.1.102
else
  log_error "❌ 不是[ORIN1 | ORIN2 | IPC]"
  exit 1
fi

echo "启动 $TMUX_NAME"
$SCRIPTS_ROOT/PixRover1.4_1.5/scripts/power_boot/$TMUX_NAME.sh
$SCRIPTS_ROOT/common/tmux_common/tmux_run.sh $SCRIPTS_ROOT/PixRoverCommon/autoware-robobus.tools/autoware_system_main.sh
echo ---------------------------------------------------------------------------

echo 系统时间:$(date)
end_time=$($MONOTIME_CMD)
elapsed=$(echo "$end_time - $start_time" | bc -l)
elapsed=$(printf "%.3f" "$elapsed")
echo "开始时间:$start_time s | 结束时间:$end_time s | 时间差:$elapsed s"


