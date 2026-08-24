#!/usr/bin/python3
import yaml
import libtmux
import os
import sys
import subprocess
from pathlib import Path
import time
import subprocess

current_file_dir = os.path.dirname(os.path.abspath(__file__))   # 当前脚本所在绝对路径
current_working_dir = os.getcwd()  # 当前工作目录

sys.path.append(current_file_dir)
import ros2status

class TmuxWrapper:
    def __init__(self):
        self.server = libtmux.Server()  # 创建socket
        
    def ros2_node_status(self):
        return ros2status.ros2_node_status()

    def tmuxs_status(self, exclude_list:list):
        """ 
            获取当前tmux的信息
            {'sesssion_name1': dict_obj, .....} 
            dict_obj = {'window_name1': pane_list, ...}
            pane_list = ['%0' ...]
        """
        status = {}
        session_list = list()
        for session in self.server.sessions:
            if(session.name in exclude_list):
                continue
            session_list.append(session.name)
            status[session.name] = dict()
            for window in session.windows:
                status[session.name][window.name] = list()
                for pane in window.panes:
                    status[session.name][window.name].append(pane.index)
        # print(status)
        return (len(session_list)==0, session_list)
    
    # def shell_scripts_run(self, script_file_paths:list):
    #     """ 
    #         简单执行脚本,执行完毕必定退出
    #         script_file_paths: 脚本绝对路径列表
    #     """
    #     session_lists = []
    #     for script_file_path in script_file_paths:
    #         script_name = os.path.basename(script_file_path)  # 获取文件名称
    #         session_name = os.path.splitext(script_name)[0]  # # 获取文件名称(无扩展名)
    #         session_lists.append(session_name)
    #         command = ['bash', f"{os.getenv('SCRIPTS_ROOT')}/common/tmux_common/tmux_run.sh", script_file_path]
    #         subprocess.run(command)
    #     return session_lists
    def shell_scripts_run(self, script_file_paths:list):
        log_file= Path(f"{os.getenv('PIX_PATH')}/ros2log/shell_scripts_run.log")
        log_file.parent.mkdir(parents=True, exist_ok=True)
        for script_file_path in script_file_paths:
            # 二进制追加，避免编码问题
            command = ['bash', f"{os.getenv('SCRIPTS_ROOT')}/common/tmux_common/tmux_run.sh", script_file_path]
            with open(log_file, "ab", buffering=0) as logf:
                subprocess.run(
                    command,
                    check=False,
                    stdin=subprocess.DEVNULL,
                    stdout=logf,
                    stderr=subprocess.STDOUT,
                    close_fds=True,
                    start_new_session=True,
            )
    def open_tmuxs(self, script_files:list):
        """
        输入启动参数, 一个会话一个终端,便于管理, 脚本运行结束后窗口自动关闭
        windows启动参数:
            - path: str(绝对路径)
              status: str(NotStarted, StartSuccess, StartFailedExists)
            - path: str(绝对路径)
              status: str(NotStarted, StartSuccess, StartFailedExists)
            ... ... 
        """
        for script_file in script_files:
            script_name = os.path.basename(script_file['path'])  # 获取文件名称
            script_name = os.path.splitext(script_name)[0]  # # 获取文件名称(无扩展名)
            if(self.server.has_session(target_session=script_name)):
                # 会话已经存在，无需启动
                script_file['status'] = 'StartFailedExists'
                continue
            
            if(not script_file['is_run']):
                # 不执行
                script_file['status'] = 'NotStarted'
                continue
            # command = f"bach -i -c {script_file['path']}"  #会报错
            self.server.new_session(
                session_name=script_name,
                window_name=script_name,
                window_command = script_file['path']
            )
            # 会话已经存在，启动成功
            script_file['status'] = 'StartSuccess'
            
        return script_files
    
    def close_tmuxs(self, exclude_list:list):
        """ 
            exclude_list: 排除列表
            向未结束运行的所有会话中发送ctrl+c 
            一个会话一个终端
        """
        sessions = self.server.sessions
        # 在运行中的窗口, 发送ctrl+c信息
        for session in sessions:
            if session.name in exclude_list:
                continue
            pane = self.get_pane(session.name)
            pane.send_keys(cmd="C-C")  # 发送ctrl+c信息
        return "已发送crtl+c"
    
    def space_tmuxs(self, exclude_list:list):
        """ 
            exclude_list: 排除列表
            向未结束运行的所有会话中发送空格
            一个会话一个终端
        """
        sessions = self.server.sessions
        # 在运行中的窗口, 发送ctrl+c信息
        for session in sessions:
            if session.name in exclude_list:
                continue
            pane = self.get_pane(session.name)
            pane.send_keys(cmd=" ")  # 发送ctrl+c信息
        return "已发送空格"
    
    def force_close_tmuxs(self, exclude_list:list):
        """ 强制关闭, 先执行kill脚本, 然后在直接kill掉所有会话"""
        ros2status.kill_ros()
        sessions = self.server.sessions
        # 在运行中的窗口, 发送ctrl+c信息
        for session in sessions:
            if session.name in exclude_list:
                continue
            session.kill()
        return "强制关闭完成"
    
    def close_tmuxs_only(self, session_name:str):
        """ 关闭指定会话 """
        sessions = self.server.sessions
        # 在运行中的窗口, 发送ctrl+c信息
        for session in sessions:
            if session.name == session_name:
                pane = self.get_pane(session.name)
                pane.send_keys(cmd="C-C")  # 发送ctrl+c信息
        return "已发送crtl+c"
    def force_close_tmuxs_only(self, session_name:str):
        """ 强制关闭指定会话 """
        sessions = self.server.sessions
        # 在运行中的窗口, 发送ctrl+c信息
        for session in sessions:
            if session.name == session_name:
                session.kill()
        return "强制关闭完成"
    
    def script_file_run(self, script_file_path:str):
        """
        创建一个临时会话执行脚本,执行完毕会话自动关闭
        @script_file_path 脚本绝对路径
        """
        session_name = os.path.basename(script_file_path)
        session_name = os.path.splitext(session_name)[0]
        # 1.0 判断终端是否存在，如果存在，则脚本在运行中，无法执行
        if(self.server.has_session(target_session=session_name)):
            return (False, f"这个会话已存在{session_name}")

        # 2.0 创建终端，执行脚本
        # command = f"bach -i -c {script_file_path}"  会报错
        self.server.new_session(
            session_name=session_name, 
            window_name=session_name,
            window_command = script_file_path)
        return (True, f"{script_file_path} 脚本执行成功")
    
    def get_pane(self, session_name:str, window_index:str="0", pane_index:str='0'):
        """ 
        创建一个临时会话执行脚本,执行完毕会话自动关闭
        获取终端对象, 前提是确定终端存在
        """
        if(not self.server.has_session(target_session=session_name)):
            # 会话不存在
            return None
        session = self.server.sessions.get(session_name=session_name)
        
        window = session.windows.get(window_index=window_index)
        if window == None:
            # 窗口不存在
            return None
        pane = window.panes.get(pane_index=pane_index)
        return pane

def reboot_system(password):
    try:
        # 构建命令
        command = "sudo -S reboot"
        
        # 向 sudo 提供密码并执行命令
        process = subprocess.Popen(
            command, shell=True, stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE
        )
        
        # 向进程传递密码并读取输出
        stdout, stderr = process.communicate(input=f"{password}\n".encode())
        
        # 检查执行结果
        if process.returncode == 0:
            print("系统正在重启...")
        else:
            print("执行失败:", stderr.decode())
    except Exception as e:
        print("发生错误:", str(e))


def shutdown_system(password):
    try:
        # 构建关机命令
        time.sleep(2) # 延迟2s防止，没有执行
        command = "sudo -S shutdown -h now"

        # 向 sudo 提供密码并执行命令
        process = subprocess.Popen(
            command, shell=True, stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE
        )

        # 传递密码并获取输出
        stdout, stderr = process.communicate(input=f"{password}\n".encode())

        # 检查执行结果
        if process.returncode == 0:
            print("系统正在关机...")
        else:
            print("执行失败:", stderr.decode())
    except Exception as e:
        print("发生错误:", str(e))
def log_redirection():
    """ 日志重定向 """
    
    # 获取 TMUX_NAME 环境变量，如果不存在则设置为默认值
    tmux_name = os.getenv("TMUX_NAME")
    if tmux_name==None or tmux_name not in ('ORIN1', 'ORIN2', 'IPC'):
        print("请设置TMUX_NAME环境变量为('ORIN1', 'ORIN2', 'IPC'): export TMUX_NAME=ORIN1")
        exit(1)
    # 构建日志目录路径
    log_dir = Path.home() / "pix" / "ros2log" / tmux_name

    # 创建日志目录（相当于 mkdir -p）
    log_dir.mkdir(parents=True, exist_ok=True)

    # 设置 ROS_LOG_DIR 环境变量
    os.environ["ROS_LOG_DIR"] = str(log_dir)

    # 打开日志文件，重定向 stdout 和 stderr
    stdout_log = log_dir / "boot_up_stdout.log"
    stderr_log = log_dir / "boot_up_stderr.log"

    # 重定向标准输出和标准错误到日志文件
    sys.stdout = open(stdout_log, "w")
    sys.stderr = open(stderr_log, "w")


if __name__ == "__main__":
    pass
    # server = libtmux.Server()
    # print(server.sessions)
    # print(server.sessions.get(session_index='autoware_robobus_orin1').windows)
    # print(server.sessions.get(session_name='autoware_robobus_orin1').windows.get(window_index='0').panes)
    # print(server.sessions.get(session_name='autoware_robobus_orin1').windows.get(window_index='0').panes.get(pane_index='0'))
    
    tmux_wrapper = TmuxWrapper()
    with open(f"{current_file_dir}/tmuxs.yaml", "r") as file:
        config = yaml.safe_load(file)
    print(tmux_wrapper.tmuxs_status(config['ORIN1']['exclude_list']))
    