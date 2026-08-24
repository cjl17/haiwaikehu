#!/bin/bash
# 等待 PHC 时间大于 2026-01-01，确保 PTP master 已同步有效时间
# 用法: wait_phc_ready.sh <网卡名>

iface=${1:?缺少网卡名参数}

sleep 30
while true; do
    ts=$(phc_ctl "$iface" get 2>/dev/null | grep -oP "clock time is \K[0-9]+")
    if [ -n "$ts" ] && [ "$ts" -gt 1767225600 ]; then
        exit 0
    fi
    sleep 2
done