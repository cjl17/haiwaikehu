#!/bin/bash
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)

# 日志管理
source $SCRIPTS_ROOT/common/common.sh
mkdir -p "$HOME/pix/ros2log/$TMUX_NAME"
exec 2> $HOME/pix/ros2log/$TMUX_NAME/$(basename "$0" ".sh")_err.log
exec 1> $HOME/pix/ros2log/$TMUX_NAME/$(basename "$0" ".sh")_out.log

# IP=$(hostname -I | awk '{for(i=1;i<=NF;i++) if ($i ~ /^192\.168\.1\./) print $i}')
if [ "$TMUX_NAME" == "ORIN1" ]; then

  log_info "启动GPS时间同步"
  sudo timeout 10s bash "$SCRIPTS_ROOT/deployment/first_time/gps_time_sync/check_gps_and_pps.sh"
  rc=$?
  case $rc in
    0)
      echo "GPS/PPS 检测完成"
      ;;
    124)
      echo "GPS/PPS 检测超时，被强制终止"
      sudo systemctl restart gpsd
      sudo systemctl restart chrony

      ;;
    *)
      echo "GPS/PPS 检测失败，rc=$rc"
      sudo systemctl restart gpsd
      sudo systemctl restart chrony
      ;;
  esac
  
  log_info "启动ptp主时钟和phc同步"
  sudo systemctl start ptp_master@eth2.service
  sudo systemctl start sys2phc@eth2.service

  sudo systemctl start ptp_master@eth3.service
  sudo systemctl start sys2phc@eth3.service
  log_info "时间同步完成: $TMUX_NAME"
  
  # sudo journalctl -u chrony -f
elif [ "$TMUX_NAME" == "ORIN2" ]; then
  log_info "$TMUX_NAME"
elif [ "$TMUX_NAME" == "IPC" ]; then
  sleep 2

  log_info "启动ptp从时钟和phc同步"
  sudo systemctl start ptp_slave@eno1.service
  sudo systemctl start phc2sys@eno1.service

  log_info "时间同步完成: $TMUX_NAME"
else
  log_error "不是[ORIN1 | ORIN2 | IPC]"
  exit 1
fi

