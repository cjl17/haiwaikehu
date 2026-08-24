#!/bin/bash
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 
source /opt/pix/pix.env 

source ~/pix/robobus/autoware-robobus.dev-master/install/setup.bash

call_pix_vehicle_setbool() {
    local topic_name=$1    
    local topic_value=$2   
    local timeout_sec=3    

    echo "调用服务 $topic_name SetBool(data=true)，超时 ${timeout_sec}s"

    # 后台执行 call_pix_vehicle_setbool
    ros2 service call  $topic_name   std_srvs/srv/SetBool "{data: $topic_value}" &
    local pid=$!

    # 等待执行完成或超时
    while [ $timeout_sec -gt 0 ]; do
        if ! kill -0 $pid 2>/dev/null; then
            echo "✔ 服务调用成功结束"
            wait $pid
            return 0
        fi
        sleep 1
        timeout_sec=$((timeout_sec - 1))
    done

    # 超时处理
    echo "❌ 服务 $topic_name 调用超时，强制终止 ros2 进程"
    kill -9 $pid 2>/dev/null
    wait $pid 2>/dev/null
    return 124
}


case "$1" in
    all_light_off)
        echo "关闭所有灯光"

        call_pix_vehicle_setbool /pix_interface/control/low_beam false
        call_pix_vehicle_setbool /pix_interface/control/high_beam false
        ;;

    low_beam_on)
        echo "打开近光灯, 关闭远光灯"
        call_pix_vehicle_setbool /pix_interface/control/low_beam true
        call_pix_vehicle_setbool /pix_interface/control/high_beam false
        ;;

    high_beam_on)
        echo "关闭近光灯, 打远光灯"
        call_pix_vehicle_setbool /pix_interface/control/high_beam true
        call_pix_vehicle_setbool /pix_interface/control/low_beam false
        ;;

    *)
        echo "用法: $0 {all_light_off|low_beam_on|high_beam_on}"
        exit 1
        ;;
esac
