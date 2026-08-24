#!/bin/bash
SCRIPT_DIR=$SCRIPTS_ROOT/PixRoverCommon/scripts

source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh

source /opt/pix/pix.env
source $SCRIPTS_ROOT/common/common.sh

# 如果未设置 PIXMOVING_TMUX_CFG，根据 AUTOPILOT_VERSION 加载对应版本配置
if [ -z "$PIXMOVING_TMUX_CFG" ]; then
    case "$AUTOPILOT_VERSION" in
        PixRover1.0_1.1|PixRover1.0_1.1a|PixRover1.0_1.1b)
            CONFIG_DIR="PixRover1.0_1.1"
            ;;
        PixRover1.2_1.3|PixRover1.2_1.3a|PixRover1.2_1.3b)
            CONFIG_DIR="PixRover1.2_1.3"
            ;;
        PixRover1.4|PixRover1.5)
            CONFIG_DIR="PixRover1.4_1.5"
            ;;
        PixRover1.6)
            CONFIG_DIR="PixRover1.6"
            ;;
        *)
            CONFIG_DIR="PixRoverCommon"
            ;;
    esac

    if [ -n "$CONFIG_DIR" ] && [ -f "$SCRIPTS_ROOT/$CONFIG_DIR/config/common.sh" ]; then
        source "$SCRIPTS_ROOT/$CONFIG_DIR/config/common.sh"
    fi
fi

close_session() {
    local session=$1
    echo "停止-$session"
    $SCRIPTS_ROOT/common/tmux_common/main.py close "$session"
    sleep 2
    $SCRIPTS_ROOT/common/tmux_common/main.py force_close "$session"
}

case "$1" in
    mapping_record_start)
        echo "启动-建图数据录制程序"
        close_session calibration_data_record
        $SCRIPTS_ROOT/common/tmux_common/tmux_run.sh $SCRIPTS_ROOT/PixRoverCommon/autoware-robobus.tools/mapping_data_record.sh
        ;;
    mapping_record_stop)
        echo "停止-建图数据录制程序"
        close_session mapping_data_record
        ;;
    calibration_record_start)
        echo "启动-标定数据录制程序"
        close_session mapping_data_record
        $SCRIPTS_ROOT/common/tmux_common/tmux_run.sh $SCRIPTS_ROOT/PixRoverCommon/autoware-robobus.tools/calibration_data_record.sh
        ;;
    calibration_record_stop)
        echo "停止-标定数据录制程序"
        close_session calibration_data_record
        ;;
    mapping_runner_start)
        echo "启动-建图服务程序"
        close_session mapping_data_record
        close_session calibration_data_record
        $SCRIPTS_ROOT/common/tmux_common/tmux_run.sh $SCRIPTS_ROOT/PixRoverCommon/autoware-robobus.tools/mapping_runner.sh
        ;;
    mapping_runner_stop)
        echo "停止-建图服务程序"
        close_session mapping_data_record
        close_session calibration_data_record
        close_session mapping_runner
        ;;
    calibration_runner_start)
        echo "启动-标定服务程序"
        close_session mapping_data_record
        close_session calibration_data_record
        $SCRIPTS_ROOT/common/tmux_common/tmux_run.sh $SCRIPTS_ROOT/PixRoverCommon/autoware-robobus.tools/calibration_runner.sh
        ;;
    calibration_runner_stop)
        echo "停止-标定服务程序"
        close_session mapping_data_record
        close_session calibration_data_record
        close_session calibration_runner
        ;;
    *)
        echo "用法: $0 {mapping_record_start|mapping_record_stop|calibration_record_start|calibration_record_stop|mapping_runner_start|mapping_runner_stop|calibration_runner_start|calibration_runner_stop}"
        echo ""
        echo "选项说明:"
        echo "  mapping_record_start    启动建图数据录制"
        echo "  mapping_record_stop     停止建图数据录制"
        echo "  calibration_record_start  启动标定数据录制"
        echo "  calibration_record_stop   停止标定数据录制"
        echo "  mapping_runner_start    启动建图服务"
        echo "  mapping_runner_stop     停止建图服务"
        echo "  calibration_runner_start  启动标定服务"
        echo "  calibration_runner_stop   停止标定服务"
        exit 1
        ;;
esac
