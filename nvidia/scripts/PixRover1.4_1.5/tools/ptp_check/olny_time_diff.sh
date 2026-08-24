#!/bin/bash

ITERATIONS=10            # 运行多少次，取最小误差
SLEEP_TIME=0.1           # 采样间隔（秒）

function utc_time_diff(){
  # 系统时间，utc时间
  echo "Testing utc_time difference between Local and Remote Hosts..."
  echo "--------------------------------------------------------"

  REMOTE_USER=$1
  REMOTE_HOST=$2
  BEST_DIFF=999999999  # 设定初始最大误差（纳秒）
  BEST_LOCAL=0
  BEST_REMOTE=0

  echo "Checking utc_time difference with $REMOTE_USER@$REMOTE_HOST..."
  echo "--------------------------------------------------------"

  for i in $(seq 1 $ITERATIONS); do
    # 获取远程主机时间戳（检查 SSH 可用性）
    REMOTE_TIME=$(ssh -o ConnectTimeout=1 $REMOTE_USER@$REMOTE_HOST 'date +"%s.%6N"')
    # 获取本地主机时间戳（单位：秒.微秒）
    LOCAL_TIME=$(date +"%s.%6N")

    if [[ -z "$REMOTE_TIME" ]]; then
      echo "Error: Unable to connect to $REMOTE_USER@$REMOTE_HOST"
      continue
    fi
    

    # 解析秒和微秒部分
    LOCAL_SEC=${LOCAL_TIME%.*}
    LOCAL_USEC=${LOCAL_TIME#*.}
    REMOTE_SEC=${REMOTE_TIME%.*}
    REMOTE_USEC=${REMOTE_TIME#*.}

    # 计算时间差（以微秒为单位）
    if [[ "$LOCAL_SEC" -eq "$REMOTE_SEC" ]]; then
      DIFF=$((10#$LOCAL_USEC - 10#$REMOTE_USEC))
    else
      DIFF=$(((10#$LOCAL_SEC - 10#$REMOTE_SEC) * 1000000 + 10#$LOCAL_USEC - 10#$REMOTE_USEC))
    fi

    # 取绝对值
    DIFF=${DIFF#-}

    echo "Run #$i -> Local: $LOCAL_TIME | $REMOTE_USER@$REMOTE_HOST: $REMOTE_TIME | Diff: ${DIFF}µs"

    # 记录最小时间误差
    if [[ $DIFF -lt $BEST_DIFF ]]; then
      BEST_DIFF=$DIFF
      BEST_LOCAL=$LOCAL_TIME
      BEST_REMOTE=$REMOTE_TIME
    fi

    sleep $SLEEP_TIME
  done

  echo "--------------------------------------------------------"
  echo "Minimum utc_time difference with $REMOTE_USER@$REMOTE_HOST: ${BEST_DIFF}µs"
  echo "Best Local Time  : $BEST_LOCAL"
  echo "Best Remote Time : $BEST_REMOTE"
  echo "--------------------------------------------------------"
}

function tai_time_diff(){
  # NIC网卡时间，TAI时间
  echo "Testing TAI_time difference between Local and Remote Hosts..."
  echo "--------------------------------------------------------"

  REMOTE_USER=$1
  REMOTE_HOST=$2
  BEST_DIFF=999999999  # 设定初始最大误差（纳秒）
  BEST_LOCAL=0
  BEST_REMOTE=0

  echo "Checking TAI_time difference with $REMOTE_USER@$REMOTE_HOST..."
  echo "--------------------------------------------------------"
  

  for i in $(seq 1 $ITERATIONS); do
    # 获取远程主机时间戳（检查 SSH 可用性）
    REMOTE_TIME=$(ssh -o ConnectTimeout=1 $REMOTE_USER@$REMOTE_HOST sudo phc_ctl /dev/ptp2 get)
    # 获取本地主机时间戳（单位：秒.微秒）
    LOCAL_TIME=$(sudo phc_ctl /dev/ptp2 get)
    REMOTE_TIME=$(echo $REMOTE_TIME | awk '/clock time is/ {printf "%.6f\n", $5}')
    LOCAL_TIME=$(echo $LOCAL_TIME | awk '/clock time is/ {printf "%.6f\n", $5}')

    if [[ -z "$REMOTE_TIME" ]]; then
      echo "Error: Unable to connect to $REMOTE_USER@$REMOTE_HOST"
      continue
    fi
    
    # 解析秒和微秒部分
    LOCAL_SEC=${LOCAL_TIME%.*}
    LOCAL_USEC=${LOCAL_TIME#*.}
    REMOTE_SEC=${REMOTE_TIME%.*}
    REMOTE_USEC=${REMOTE_TIME#*.}

    # 计算时间差（以微秒为单位）
    if [[ "$LOCAL_SEC" -eq "$REMOTE_SEC" ]]; then
      DIFF=$((10#$LOCAL_USEC - 10#$REMOTE_USEC))
    else
      DIFF=$(((10#$LOCAL_SEC - 10#$REMOTE_SEC) * 1000000 + 10#$LOCAL_USEC - 10#$REMOTE_USEC))
    fi

    # 取绝对值
    DIFF=${DIFF#-}

    echo "Run #$i -> Local: $LOCAL_TIME | $REMOTE_USER@$REMOTE_HOST: $REMOTE_TIME | Diff: ${DIFF}µs"

    # 记录最小时间误差
    if [[ $DIFF -lt $BEST_DIFF ]]; then
      BEST_DIFF=$DIFF
      BEST_LOCAL=$LOCAL_TIME
      BEST_REMOTE=$REMOTE_TIME
    fi

    sleep $SLEEP_TIME
  done

  echo "--------------------------------------------------------"
  echo "Minimum TAI_time difference with $REMOTE_USER@$REMOTE_HOST: ${BEST_DIFF}µs"
  echo "Best Local Time  : $BEST_LOCAL"
  echo "Best Remote Time : $BEST_REMOTE"
  echo "--------------------------------------------------------"
}

function send_ssh_token(){
  USER=$1
  HOST=$2

  echo "🚀 正在检查 $USER@$HOST 是否已配置 SSH 免密登录..."
  # 测试是否已经免密登录
  ssh -o BatchMode=yes -o ConnectTimeout=3 $USER@$HOST "echo '✅ SSH 免密登录已配置'" 2>/dev/null
  
  if [[ $? -eq 0 ]]; then
    echo "✅ 已经可以免密登录到 $USER@$HOST,跳过密钥传输。"
  else
    echo "🔑 传输 SSH 公钥到 $USER@$HOST..."
    ssh-copy-id -i "$SSH_KEY.pub" $USER@$HOST
    
    # 再次测试是否成功
    ssh -o BatchMode=yes -o ConnectTimeout=3 $USER@$HOST "echo '✅ SSH 免密登录已配置'" 2>/dev/null
    
    if [[ $? -eq 0 ]]; then
      echo "🎉 免密登录 $USER@$HOST 成功！"
    else
      echo "❌ 免密登录 $USER@$HOST 失败，请手动检查。"
    fi
  fi
}

function create_ssh_token(){
  SSH_KEY="$HOME/.ssh/id_rsa"
  # 检查 SSH 密钥是否存在，如果不存在则生成
  if [[ ! -f "$SSH_KEY" ]]; then
    echo "🔑 SSH 密钥不存在，正在生成新的密钥..."
    ssh-keygen -t rsa -b 4096 -f "$SSH_KEY" -N ""
    echo "✅ SSH 密钥生成完成！"
  else
    echo "✅ SSH 密钥已存在，跳过生成步骤。"
  fi
  
}


create_ssh_token
send_ssh_token nvidia "192.168.6.66"
echo "🎯 所有主机的 SSH 免密登录配置完成！"

echo "-------------------------------------------------"
echo "+++++++++++++++++++++++++++++++++++++++++++++++++"
tai_time_diff "nvidia" "192.168.6.66"
echo "+++++++++++++++++++++++++++++++++++++++++++++++++"
echo "-------------------------------------------------"
