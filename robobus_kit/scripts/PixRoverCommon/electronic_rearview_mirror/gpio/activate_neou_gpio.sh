#!/bin/bash
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)

CMD1="$SCRIPT_DIR/neou_1.3/set_pwm_low_neou"
CMD2="$SCRIPT_DIR/neou_1.3/set_pwm_neou"
LOGFILE="$HOME/pix/ros2log/set_pwm_neou_1.3.log"
echo "" > $LOGFILE

# 确保以 root 执行
if [ "$EUID" -ne 0 ]; then
  echo "请使用 sudo 运行本脚本"
  exit 1
fi

if [ "$GPIO_VERSION" != "NEOU" ]; then
  echo "当前版本不需要执行 NEOU GPIO 设置，跳过。"
  exit 0
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