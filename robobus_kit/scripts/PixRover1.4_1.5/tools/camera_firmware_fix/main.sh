#!/bin/bash
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env
source $SCRIPTS_ROOT/common/common.sh

SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)

MAX9296_MD5="cbaa2dec1c378fed1b82d0e04abe7932"
MAX9295_MD5="828bd99cc0785108da452ab9701b177c"

KERNEL_MODULE_DIR="/lib/modules/5.15.148-tegra/updates/drivers/media/i2c"

if [[ -f "$KERNEL_MODULE_DIR/max9296.ko" && -f "$KERNEL_MODULE_DIR/max9295.ko" ]]; then
    sys_max9296_md5=$(echo "nvidia" | sudo -S md5sum "$KERNEL_MODULE_DIR/max9296.ko" | awk '{print $1}')
    sys_max9295_md5=$(echo "nvidia" | sudo -S md5sum "$KERNEL_MODULE_DIR/max9295.ko" | awk '{print $1}')

    if [[ "$sys_max9296_md5" == "$MAX9296_MD5" && "$sys_max9295_md5" == "$MAX9295_MD5" ]]; then
        echo "camera firmware already fixed, skip"
        exit 0
    fi
fi

cd $SCRIPT_DIR
echo "nvidia" | sudo -S cp max9296.ko $KERNEL_MODULE_DIR/max9296.ko
echo "nvidia" | sudo -S cp max9295.ko $KERNEL_MODULE_DIR/max9295.ko
sync
echo "nvidia" | sudo -S depmod
