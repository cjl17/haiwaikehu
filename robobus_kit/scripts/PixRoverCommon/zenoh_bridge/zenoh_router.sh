#!/bin/bash
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)

function wait_power_on(){
  # 等待开机，退出循环

  HOST=$1
  # 循环检测主机状态
  while true; do
    # 检测 HOST1 是否在线
    ping -c 1 -W 2 $HOST > /dev/null 2>&1
    STATUS=$?

    # 如果两台主机都在线，则执行命令并退出循环
    if [[ $STATUS -eq 0 ]]; then
      echo "所有主机都已上线，执行命令..."
      break
    else
      echo "等待主机上线..."
    fi

    # 等待一段时间后重新检查
    sleep 3
  done

}



# 启动ros2_zenoh_bridge
source $SCRIPTS_ROOT/common/common.sh
source /opt/pix/pix.env

common_main zenoh_router

if [ "$AUTOPILOT_VERSION" == "PixRover1.6" ] ; then
  echo "等待其他主机上线"
  wait_power_on 192.168.1.104
  RUST_LOG=warn zenoh-bridge-ros2dds -c $SCRIPT_DIR/zenoh_router_1.6.json5
else
  echo "等待其他主机上线"
  wait_power_on 192.168.3.104
  RUST_LOG=warn zenoh-bridge-ros2dds -c $SCRIPT_DIR/zenoh_router.json5
fi 


