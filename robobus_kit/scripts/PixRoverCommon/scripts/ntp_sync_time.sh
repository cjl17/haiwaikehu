#!/bin/bash 
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 
source /opt/pix/pix.env
source $SCRIPTS_ROOT/common/common.sh

echo ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

if [[ "$AUTOPILOT_VERSION" =~ ^PixRover1\.(0_1\.1.*|2_1\.3[a-b]?)$ ]]; then
  # 配置ros网口
  sudo systemctl restart systemd-networkd
  # 重制下联网口
  if [ "$TMUX_NAME" == "ORIN1" ]; then
    sudo nmcli device disconnect eth2
    sudo nmcli device connect eth2
  fi
fi

if [ "$TMUX_NAME" == "ORIN1" ]; then
  systemctl status sys2phc@*
elif [ "$TMUX_NAME" == "ORIN2" ]; then
  systemctl status phc2sys@*
else
  log_error "❌ 不是[ORIN1 | ORIN2 | IPC]"
  exit 1
fi

wait_power_on www.baidu.com
# 循环重试 NTP 同步，成功即退出，最多 10 次
ntp_sync_ok=false
for ((i = 1; i <= 10; i++)); do
  if sudo ntpdate -u ntp.aliyun.com; then
    ntp_sync_ok=true
    echo "✅ NTP 时间同步成功(第 ${i} 次)"
    break
  fi
  echo "⚠️ NTP 时间同步失败(第 ${i} 次), 1s后重试..."
  sleep 1
done
if [ "$ntp_sync_ok" = false ]; then
  log_error "❌ NTP 时间同步失败, 已重试 10 次"
fi
timedatectl status

echo 同步系统时间到硬件时间
sudo hwclock --systohc --utc  && timedatectl status

echo ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++