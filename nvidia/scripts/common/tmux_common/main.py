#!/usr/bin/python3
import yaml
import os
import sys
import time

current_file_dir = os.path.dirname(os.path.abspath(__file__))   # 当前脚本所在绝对路径
current_working_dir = os.getcwd()  # 当前工作目录

sys.path.append(current_file_dir)
import tmux_wrapper


def get_sessions_list(tmux_info:list):
    session_lists = []
    for script_file_path in tmux_info:
        script_name = os.path.basename(script_file_path)  # 获取文件名称
        session_name = os.path.splitext(script_name)[0]   # 获取文件名称(无扩展名)
        session_lists.append(session_name)
    return session_lists

TMUX_NAME = os.getenv('TMUX_NAME')
if TMUX_NAME==None or TMUX_NAME not in ('ORIN1', 'ORIN2', 'IPC'):
    print("请设置TMUX_NAME环境变量为('ORIN1', 'ORIN2', 'IPC'): export TMUX_NAME=ORIN1")
    exit(1)

# 打开并读取 YAML 文件
tmux_cfg_path=os.getenv("PIXMOVING_TMUX_CFG")
if tmux_cfg_path is None or tmux_cfg_path == "":
    print("请设置PIXMOVING_TMUX_CFG环境变量", file=sys.stderr)
    exit(1)
if not os.path.exists(tmux_cfg_path):
    print(f"找不到配置文件: {tmux_cfg_path}", file=sys.stderr)
    exit(1)

with open(tmux_cfg_path, "r") as file:
    config = yaml.safe_load(file)
tmux_info = config[TMUX_NAME]
# ------------------------------------------------------------------------

"""
send_space : 发送空格
safe_close : 安全的关闭, 先发送ctrl+c关闭, 在强制快速关闭
close : 发送ctrl+c关闭
force_close : 强制快速关闭
run_status: ros2_status+tmux_info
ros2_status: 是否有ros2进程存在
tmux_info: 查看部分tmux信息 - 开机后手动启动部分
tmux_info_all: 查看所有的tmux信息
reboot: 电脑重启
shutdown: 电脑关机
"""
cmds = ["close", "run_status", "safe_close", "force_close", "ros2_status", "tmux_info", "tmux_info_all",  "reboot", "shutdown"]
cmd = ""
arg_1 = ""

if len(sys.argv) == 3:
    # 输入参数
    cmd = sys.argv[1] 
    arg_1 = sys.argv[2]
    if cmd not in cmds:
        print(f"传入参数{cmd}, 不在{cmds}范围")
        exit(1)
elif len(sys.argv) == 2:
        # 输入参数
    cmd = sys.argv[1] 
    if cmd not in cmds:
        print(f"传入参数{cmd}, 不在{cmds}范围")
        exit(1)
elif len(sys.argv) == 1:
    # 没有输入参数，默认获取tmux信息状态
    cmd = "tmux_info"
else:
    # 输入参数不正确
    print("传入参数数量不正确")
    exit(1)

tmux = tmux_wrapper.TmuxWrapper()
if  cmd == "send_space":
    if(arg_1 == ""):
        print("请输入指定会话名称", file=sys.stderr)
        exit(1)
    pane = tmux.get_pane(arg_1)
    if(pane==None):
        print("没有此会话", file=sys.stderr)
        exit(1)
    tmux.space_tmuxs(arg_1)
    print(f"向会话发送了空格{arg_1}")
elif  cmd == "safe_close":
    if(arg_1 != ""):
        # 关闭指定会话
        tmux.close_tmuxs_only(arg_1)
        time.sleep(2)
        tmux.force_close_tmuxs_only(arg_1)
    else:
        # 卸载相机容器其他节点
        # script_path = os.path.join(os.getenv("SCRIPTS_ROOT"), "PixRoverCommon", "electronic_rearview_mirror", "cam_containe_unload.sh")
        # res = tmux.shell_scripts_run([script_path, ])
        
        # 过滤开机启动项
        tmux.close_tmuxs(tmux_info['BootupRun'])
        time.sleep(2)
        tmux.force_close_tmuxs(tmux_info['BootupRun'])
elif  cmd == "close":
    if(arg_1 != ""):
        # 关闭指定会话
        tmux.close_tmuxs_only(arg_1)
    else:
        # 过滤开机启动项
        tmux.close_tmuxs(tmux_info['BootupRun'])
elif  cmd == "force_close":
    if(arg_1 != ""):
        # 关闭指定会话
        tmux.close_tmuxs_only(arg_1)
        tmux.force_close_tmuxs_only(arg_1)
    else:
        # 过滤开机启动项
        tmux.close_tmuxs(tmux_info['BootupRun'])
        tmux.force_close_tmuxs(tmux_info['BootupRun'])
elif  cmd == "run_status":
    message = list()
    result = 0
    res = tmux.ros2_node_status()
    message.append(res[1])
    result = res[0]
    res = tmux.tmuxs_status(tmux_info['BootupRun']) # 过滤开机启动项
    message.append(res[1])
    result = res[0]
    if(result):
        print(message)
    else:
        print(message, file=sys.stderr)
        exit(1)
elif  cmd == "ros2_status":
    res = tmux.ros2_node_status()
    if(res[0]):
        print(res[1])
    else:
        print(res[1], file=sys.stderr)
        exit(1)
elif cmd == "tmux_info":
    res = tmux.tmuxs_status(tmux_info['BootupRun']) # 过滤开机启动项
    if(res[0]):
        print(res[1])
    else:
        print(res[1], file=sys.stderr)
        exit(1)
elif cmd == "tmux_info_all":
    res = tmux.tmuxs_status(list())
    if(not res[0]):
        print(res[1])
    else:
        print(res[1], file=sys.stderr)
        exit(1)
elif  cmd == "reboot":
    # 先强制关闭程序在重启
    print("开始等待 3 秒...")
    time.sleep(3)
    print("3 秒结束，继续执行")
    tmux_wrapper.reboot_system(tmux_info["passworld"])
elif  cmd == "shutdown":
    # 先强制关闭程序在关机
    print("开始等待 3 秒...")
    time.sleep(3)
    print("3 秒结束，继续执行")
    tmux_wrapper.shutdown_system(tmux_info["passworld"])

# if cmd == "start_up_maun":
#     # 根据配置文件启动
#     res = tmux.shell_scripts_run(tmux_info['ManuRun'])
#     print(res)
# elif  cmd == "start_up_name":
#     if(arg_1 == ""):
#         print("请输入指定执行脚本路径", file=sys.stderr)
#     else:
#         # 将$SCRIPTS_ROOT/xxx换成绝对路径
#         expanded_path = os.path.expandvars(arg_1)
#         absolute_path = os.path.abspath(expanded_path)
#         if not os.path.exists(absolute_path):
#             print(f"文件 {absolute_path} 不存在", file=sys.stderr)
#             exit(1)
#         res = tmux.shell_scripts_run([absolute_path])
#         print(res)
# elif  cmd == "restart":
#     if(arg_1 == ""):
#         print("请输入指定执行脚本路径", file=sys.stderr)
#     else:
#         # 将$SCRIPTS_ROOT/xxx换成绝对路径
#         expanded_path = os.path.expandvars(arg_1)
#         absolute_path = os.path.abspath(expanded_path)
#         if not os.path.exists(absolute_path):
#             print(f"文件 {absolute_path} 不存在", file=sys.stderr)
#             exit(1)
        
#         file_name = os.path.basename(absolute_path)  # 获取文件名
#         session_name = os.path.splitext(file_name)[0]  # 去掉扩展名
        
#         tmux.close_tmuxs_only(session_name)
#         tmux.force_close_tmuxs_only(session_name)
#         res = tmux.shell_scripts_run([absolute_path])
#         print(res)

# for idx in range(len(tmux_info['ManuRun'])):
#     expanded_path = os.path.expandvars(tmux_info[idx])           # 展开环境变量
#     absolute_path = os.path.abspath(expanded_path)                  # 转成绝对路径
#     tmux_info['ManuRun'][idx] = absolute_path              # 直接修改列表元素