#!/bin/bash

check_network_speed() {
  # 获取所有已连接的网口列表
  interfaces=$(ls /sys/class/net | grep -vE 'lo|docker|veth|br|vir|vmnet|tailscale|can')

  echo "检查所有有效网口的协商速率："
  echo "=============================="

  for iface in $interfaces; do
    # 检查网口是否已连接并有有效速度
    speed=$(cat /sys/class/net/$iface/speed 2>/dev/null)
    
    # 过滤掉没有速率信息的网口
    if [ -n "$speed" ]; then
      # 判断是否为百兆
      if [ "$speed" -lt 1000 ]; then
        echo "⚠️ 网口 $iface 仅协商到 ${speed}Mb/s"
      else
        echo "✅ 网口 $iface 协商到 ${speed}Mb/s"
      fi
    fi
  done
}

check_network_speed
