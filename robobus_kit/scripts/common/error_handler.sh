#!/bin/bash

# 开启遇错退出
set -e

# 定义统一的错误捕获
trap 'echo -e "\033[31m执行中断 [行号:$LINENO]，最后失败命令：$BASH_COMMAND\033[0m"' ERR
