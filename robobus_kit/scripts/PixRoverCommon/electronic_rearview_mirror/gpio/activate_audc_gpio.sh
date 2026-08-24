#!/bin/bash
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)


if [[ "$AUTOPILOT_VERSION" == "PixRover1.4" ]]; then
  CMD1="$SCRIPT_DIR/eaor_1.4/set_pwm_low_audc"
  CMD2="$SCRIPT_DIR/eaor_1.4/set_pwm_audc"
  LOGFILE="$HOME/pix/ros2log/set_pwm_audc_1.4.log"
fi

if [[ "$AUTOPILOT_VERSION" == "PixRover1.6" ]]; then
  CMD1="$SCRIPT_DIR/eaor_1.6/set_pwm_low_audc"
  CMD2="$SCRIPT_DIR/eaor_1.6/set_pwm_audc"
  LOGFILE="$HOME/pix/ros2log/set_pwm_audc_1.6.log"
fi

echo "" > $LOGFILE

# 确保以 root 执行
if [ "$EUID" -ne 0 ]; then
  echo "请使用 sudo 运行本脚本"
  exit 1
fi

# 1. 检查第二个程序是否已经在运行
if pgrep -f "$(basename "$CMD2")" > /dev/null; then
  echo "⚠️ $CMD2 已在运行，跳过启动。"
  exit 0
fi

# 2. 执行第一个程序，并捕获输出
OUTPUT=$($CMD1 2>&1)
RET=$?
echo "$OUTPUT"
if [ $RET -ne 0 ] || echo "$OUTPUT" | grep -qi "failed"; then
  echo "❌ $CMD1 执行失败: $OUTPUT"
  exit 1
fi

echo "✅ $CMD1 执行成功"

# 2.1  
sudo $SCRIPT_DIR/set_camera_sync.sh

# 3. 启动第二个程序（后台运行，不保存日志）
nohup stdbuf -oL -eL "$CMD2" > "$LOGFILE" 2>&1 &
echo "✅ $CMD2 已启动"

# ----------------------------
# 日志轮转函数
rotate_log() {
  while true; do
    if [ -f "$LOGFILE" ]; then
      LINE_COUNT=$(wc -l < "$LOGFILE")
      if [ "$LINE_COUNT" -ge "1000" ]; then
        : > "$LOGFILE"
      fi
    fi
    sleep 60
  done
}
rotate_log &
echo "✅ 日志轮转守护进程已启动"