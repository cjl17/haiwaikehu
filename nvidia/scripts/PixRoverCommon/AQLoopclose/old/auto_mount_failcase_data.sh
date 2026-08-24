#!/bin/bash
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)
 
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env

set -euo pipefail

TARGET_MOUNT="/home/$PIX_USER/pix/failcase_data"
DISK_ID_GLOB="/dev/disk/by-id/usb-SanDisk*"
FS_TYPE="ext4"
MOUNT_OPTS="defaults,noatime,nodiratime,barrier=1"
SLEEP_INTERVAL=5  # 每次循环间隔（秒）

log() {
    echo "[`date '+%F %T'`] $*"
}

# 1. 找 SanDisk Extreme 磁盘
find_disk() {
    ls $DISK_ID_GLOB 2>/dev/null | grep -v part | head -n1
}

# 2. 找该磁盘的第一个分区
find_partition() {
    local disk="$1"
    lsblk -rpno NAME,TYPE "$disk" | awk '$2=="part"{print $1; exit}'
}

# 3. 判断是否已正确挂载
is_mounted_correctly() {
    mountpoint -q "$TARGET_MOUNT" || return 1
    findmnt -n -o SOURCE "$TARGET_MOUNT" | grep -q "$1"
}

# 4. 卸载磁盘所有挂载点
umount_all_mounts() {
    local part="$1"
    local mounts
    mounts=$(findmnt -rn -S "$part" -o TARGET || true)
    if [[ -n "$mounts" ]]; then
        while read -r mp; do
            log "卸载挂载点: $mp"
            sudo umount "$mp"
        done <<< "$mounts"
    else
        log "磁盘 $part 当前没有任何挂载点"
    fi
}

# ================= 主循环 =================


# 安全检查：防止误操作根目录
[[ "$TARGET_MOUNT" == "/" ]] && exit 1

if mountpoint -q "$TARGET_MOUNT" 2>/dev/null; then
    # 是挂载点：杀进程 + 卸载
    sudo fuser -mv "$TARGET_MOUNT" || true   # kill占用
    sudo fuser -km -9 "$TARGET_MOUNT" 2>/dev/null || true
    sudo umount -l "$TARGET_MOUNT" || true
    df -h
elif [[ -d "$TARGET_MOUNT" ]]; then
    # 是普通文件夹：直接重命名备份
    # sudo mv "$TARGET_MOUNT" "$TARGET_MOUNT.bak.$(date +%s)"
    echo $TARGET_MOUNT
    mkdir -p $TARGET_MOUNT
fi

while true; do
    log "检查 SanDisk Extreme 磁盘挂载状态"

    DISK=$(find_disk || true)
    if [[ -z "$DISK" ]]; then
        log "未找到 SanDisk Extreme 磁盘，等待 $SLEEP_INTERVAL 秒"
        sleep $SLEEP_INTERVAL
        continue
    fi
    log "识别到磁盘: $DISK"

    PART=$(find_partition "$DISK" || true)
    if [[ -z "$PART" ]]; then
        log "未找到磁盘分区: $DISK，等待 $SLEEP_INTERVAL 秒"
        sleep $SLEEP_INTERVAL
        continue
    fi
    log "识别到磁盘分区: $PART"

    if is_mounted_correctly "$PART"; then
        log "磁盘已正确挂载到 $TARGET_MOUNT，退出循环"
        break
    fi

    log "磁盘未正确挂载，执行重新挂载"
    umount_all_mounts "$PART"

    sudo mkdir -p "$TARGET_MOUNT"
    log "挂载 $PART -> $TARGET_MOUNT"
    if sudo mount -t "$FS_TYPE" -o "$MOUNT_OPTS" "$PART" "$TARGET_MOUNT"; then
        log "挂载成功，退出循环"
        break
    else
        log "挂载失败，等待 $SLEEP_INTERVAL 秒后重试"
        sleep $SLEEP_INTERVAL
    fi
done

USER_ID=$(id -u "$PIX_USER")
GROUP_ID=$(id -g "$PIX_USER")

# 检查根目录权限，如果正确就跳过递归
CURRENT_OWNER=$(stat -c "%u:%g" "$TARGET_MOUNT")
if [ "$CURRENT_OWNER" != "$USER_ID:$GROUP_ID" ]; then
    echo "首次挂载，修改权限中..."
    sudo chown -R "$USER_ID:$GROUP_ID" "$TARGET_MOUNT"
else
    echo "权限已正确，跳过修改"
fi

# 检查根目录权限，如果正确就跳过递归
ROS_LOG_PATH="/home/$PIX_USER/pix/ros2log/perception_recoder/"
CURRENT_OWNER=$(stat -c "%u:%g" "$ROS_LOG_PATH")
if [ "$CURRENT_OWNER" != "$USER_ID:$GROUP_ID" ]; then
    echo "首次挂载，修改权限中..."
    sudo chown -R "$USER_ID:$GROUP_ID" "$ROS_LOG_PATH"
else
    echo "权限已正确，跳过修改"
fi