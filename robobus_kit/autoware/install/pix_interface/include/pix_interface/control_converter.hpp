// Copyright 2023 Pixmoving, Inc. 
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef PIX_ROBOBUS_DRIVER__CONTROL_CONVERTER_HPP_
#define PIX_ROBOBUS_DRIVER__CONTROL_CONVERTER_HPP_

#include <memory>
#include <string>
//ros
#include <rclcpp/rclcpp.hpp>
#include <std_srvs/srv/set_bool.hpp>
#include <std_msgs/msg/bool.hpp>
#include <diagnostic_updater/diagnostic_updater.hpp>

// autoware
#include <autoware_vehicle_msgs/msg/gear_command.hpp>
#include <autoware_vehicle_msgs/msg/turn_indicators_command.hpp>
#include <autoware_vehicle_msgs/srv/control_mode_command.hpp>
#include <tier4_vehicle_msgs/msg/actuation_command_stamped.hpp>
#include <tier4_vehicle_msgs/msg/vehicle_emergency_stamped.hpp>
#include <autoware_internal_planning_msgs/msg/scenario.hpp>
#include <tier4_api_msgs/msg/door_status.hpp>
#include <tier4_external_api_msgs/srv/set_door.hpp>
#include <autoware_adapi_v1_msgs/msg/operation_mode_state.hpp>
#include <autoware_adapi_v1_msgs/srv/change_operation_mode.hpp>
#include "autoware_internal_debug_msgs/msg/float32_multi_array_stamped.hpp"
#include <autoware_control_msgs/msg/control.hpp>
#include <aeb_interfaces/msg/aeb_info_report.hpp>

// pix control
#include "pix_robobus_driver_msgs/msg/av_drive_ctrl.hpp"
#include "pix_robobus_driver_msgs/msg/av_brake_ctrl.hpp"
#include "pix_robobus_driver_msgs/msg/av_steer_ctrl.hpp"
#include "pix_robobus_driver_msgs/msg/av_vehicle_ctrl.hpp"
#include "pix_robobus_driver_msgs/msg/av_aeb_ctrl.hpp"
#include "pix_robobus_driver_msgs/msg/auto_message.hpp"
#include "pix_robobus_driver_msgs/msg/remote_message.hpp"

// pix report
#include "pix_robobus_driver_msgs/msg/va_drive_sta_fb.hpp"
#include "pix_robobus_driver_msgs/msg/va_brake_sta_fb.hpp"
#include "pix_robobus_driver_msgs/msg/va_steer_sta_fb.hpp"
#include "pix_robobus_driver_msgs/msg/va_vehicle_sta_fb.hpp"

#include "common.hpp"

namespace pix_interface
{
namespace control_converter
{
using AvDriveCtrl = pix_robobus_driver_msgs::msg::AvDriveCtrl;
using AvBrakeCtrl = pix_robobus_driver_msgs::msg::AvBrakeCtrl;
using AvSteerCtrl = pix_robobus_driver_msgs::msg::AvSteerCtrl;
using AvVehicleCtrl = pix_robobus_driver_msgs::msg::AvVehicleCtrl;
using AvAebCtrl = pix_robobus_driver_msgs::msg::AvAebCtrl;

using VaDriveStaFb = pix_robobus_driver_msgs::msg::VaDriveStaFb;
using VaBrakeStaFb = pix_robobus_driver_msgs::msg::VaBrakeStaFb;
using VaSteerStaFb = pix_robobus_driver_msgs::msg::VaSteerStaFb;
using VaVehicleStaFb = pix_robobus_driver_msgs::msg::VaVehicleStaFb;

using Control = autoware_control_msgs::msg::Control;
using Float32MultiArrayStamped = autoware_internal_debug_msgs::msg::Float32MultiArrayStamped;
using Scenario = autoware_internal_planning_msgs::msg::Scenario;

// 驱动模式
enum class DrivingModeCtrl : uint8_t{
  SPEED_CTRL_MODE = 0,
  THROTTLE_CTRL_MODE = 1,
  RESERVE1 = 2,
  RESERVE2 = 3,
};

enum class GearCtrl : int8_t {
  NOT_USED = 0,
  DRIVE = 1,
  NEUTRAL = 2,
  REVERSE = 3
};

enum class SteerModeCtrl : int8_t {
  FRONT_ACKERMAN = 0,
  SAME_FRONT_AND_BACK = 1,
  FRONT_DIFFERENT_BACK = 2,
  BACK_ACKRMAN = 3,
  FRONT_BACK = 4
};

enum class ParkingCtrl : uint8_t{ 
  DEFAULT = 0,
  BRAKE = 1,
  RELEASE = 2,
};

enum class ParkSta : int8_t {
  RELEASE = 0,
  BRAKE = 1,
  RELEASING = 2,
  BRAKING = 3,
};

enum class EnCtrl : uint8_t{ 
  DISABLE = 0, 
  ENABLE = 1
};

enum class SwitchCtrl : bool{ 
  OFF = false, 
  ON = true,
  ENABLE = false,
  DISABLE = true
};

enum class DoorSta : uint8_t{ 
  INVALID=0,
  OPENING=1,
  CLOSING=2,
  OPEN_INPLACE=3,
  CLOSE_INPLACE=4,
  OPEN_TIMEOUT=5,
  CLOSE_TIMEOUT=6,
};

enum class DoorCtrl : uint8_t{ 
  DEFAULT=0,
  CLOSE=1,
  OPEN=2
};


/**
 * @brief node parameter
 * @param loop_rate loop rate of publisher
 * @param max_steerig_angle max steering angle in radians
 * @param steering_factor the rate to convert steering angle to steering command signal value
 * @param autoware_driver_timeout_threshold_eorro_ms autoware control command timeout threshold in ms - eorro 
 * @param autoware_driver_timeout_threshold_warn_ms autoware control command timeout threshold in ms - warn
 * @param autoware_gear_timeout_threshold_eorro_ms autoware control command timeout threshold in ms - eorro 
 * @param autoware_gear_timeout_threshold_warn_ms autoware gear command timeout threshold in ms - warn
 */
struct Param
{
  double loop_rate;                     // hz
  std::string steer_mechanical_type;
  double max_steering_angle_DP139_rad;
  double max_steering_angle_H02B_rad;
  double max_steering_angle_DP139_deg;
  double max_steering_angle_H02B_deg;
  double steering_factor;               //
  int autoware_driver_timeout_threshold_eorro_ms;        // ms 严重级别超时阀值
  int autoware_driver_timeout_threshold_warn_ms;        // ms  警告级别超时阀值
  int autoware_gear_timeout_threshold_eorro_ms;        // ms 严重级别超时阀值
  int autoware_gear_timeout_threshold_warn_ms;        // ms  警告级别超时阀值
  double k_threshold;
};

class ControlConverter : public rclcpp::Node
{
public:
  /// @brief Construct a new Control Converter object
  ControlConverter(const rclcpp::NodeOptions & node_options);
private:
  // Diagnostics Updater
  diagnostic_updater::Updater updater_;
  void onDelayedAlarm(diagnostic_updater::DiagnosticStatusWrapper & stat);

  DelayRecording actuation_command_delay_;
  DelayRecording gear_command_delay_;

  // parameters
  Param param_;
  bool engage_cmd_;
  double curvature_ = 0.0;
  bool is_parking_ = false;
  bool is_4ws_ = false;

  // shared msgs
  autoware_vehicle_msgs::msg::GearCommand::ConstSharedPtr gear_command_ptr_;
  autoware_vehicle_msgs::msg::TurnIndicatorsCommand::ConstSharedPtr turn_indicators_command_ptr_;
  tier4_vehicle_msgs::msg::ActuationCommandStamped::ConstSharedPtr actuation_command_ptr_;
  tier4_vehicle_msgs::msg::VehicleEmergencyStamped::ConstSharedPtr vehicle_emergency_ptr_;
  tier4_api_msgs::msg::DoorStatus::ConstSharedPtr door_status_ptr_;
  autoware_adapi_v1_msgs::msg::OperationModeState::ConstSharedPtr operation_mode_ptr_;
  Control::ConstSharedPtr control_cmd_ptr_;
  bool set_whistle_;

  AvAebCtrl av_aeb_ctrl_msg_;

  // timestamps
  rclcpp::Time gear_command_received_time_;
  rclcpp::Time actuation_command_received_time_;

  // subscribers
  rclcpp::Subscription<tier4_vehicle_msgs::msg::ActuationCommandStamped>::ConstSharedPtr
    actuation_command_sub_;
  rclcpp::Subscription<tier4_vehicle_msgs::msg::VehicleEmergencyStamped>::ConstSharedPtr
    vehicle_emergency_sub_;
  rclcpp::Subscription<autoware_vehicle_msgs::msg::GearCommand>::ConstSharedPtr
    gear_command_sub_;
  rclcpp::Subscription<autoware_vehicle_msgs::msg::TurnIndicatorsCommand>::ConstSharedPtr
    turn_indicators_command_sub_; 
  rclcpp::Subscription<std_msgs::msg::Bool>::ConstSharedPtr whistle_sub_;  // 鸣笛功能
  rclcpp::Subscription<Float32MultiArrayStamped>::SharedPtr lat_diag_sub_;
  rclcpp::Subscription<Scenario>::SharedPtr scenario_sub_;
  rclcpp::Subscription<Control>::SharedPtr sub_control_cmd_;

  // need to be done
  // emergency command
  // hazard lights command
  // turn indicators command
  // operation mode
  rclcpp::Subscription<autoware_adapi_v1_msgs::msg::OperationModeState>::ConstSharedPtr
    operation_mode_sub_;

  // services
  rclcpp::Service<autoware_vehicle_msgs::srv::ControlModeCommand>::SharedPtr control_mode_server_;
  rclcpp::Service<tier4_external_api_msgs::srv::SetDoor>::SharedPtr set_door_server_;
  rclcpp::Service<std_srvs::srv::SetBool>::SharedPtr set_find_vehicle_server_;
  rclcpp::Service<std_srvs::srv::SetBool>::SharedPtr set_low_beam_server_;
  rclcpp::Service<std_srvs::srv::SetBool>::SharedPtr set_high_beam_server_;

  // 标识位
  uint8_t door_cmd_;   // 0 无执行, 2 关门执行, 1 开门执行,  

  // timer
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::TimerBase::SharedPtr timeout_timer_;   // 用于超时执行

  /// @brief callback function of actuation command, in order to get accel pedal, brake pedal, steer command
  void callbackActuationCommand(
    const tier4_vehicle_msgs::msg::ActuationCommandStamped::ConstSharedPtr & msg);
  
  /// @brief callback function of emergency command stamped, in order to trigger the harzard light and emergency braking
  void callbackVehicleEmergency(
    const tier4_vehicle_msgs::msg::VehicleEmergencyStamped::ConstSharedPtr & msg);
  
  /// @brief callback function of actuation command, in order to get the gear command
  void callbackGearCommand(
    const autoware_vehicle_msgs::msg::GearCommand::ConstSharedPtr & msg);
  
  /// @brief callback function of turn indicators command, in order to get the turn indicators command
  void callbackTurnIndicatorsCommand(
    const autoware_vehicle_msgs::msg::TurnIndicatorsCommand::ConstSharedPtr & msg);

  void callbackOperationMode(
    const autoware_adapi_v1_msgs::msg::OperationModeState::ConstSharedPtr & msg);

  /// @brief 鸣笛功能；发一帧响一声，不发或者发生false就不响
  void callbackWhistle(
    const std_msgs::msg::Bool::ConstSharedPtr & msg);

  /// @brief request function to modify control mode AUTO/MANUAL
  void onControlModeRequest(
    const autoware_vehicle_msgs::srv::ControlModeCommand::Request::SharedPtr request,
    const autoware_vehicle_msgs::srv::ControlModeCommand::Response::SharedPtr response);
  
  /// @brief 开门指令
  void onSetDoor(
    const std::shared_ptr<rmw_request_id_t> header,
    const tier4_external_api_msgs::srv::SetDoor::Request::SharedPtr request);

  /// @brief 寻车: 鸣笛 3 声、双闪 3 次
  void onFindVehicle(
    const std_srvs::srv::SetBool::Request::SharedPtr request,
    const std_srvs::srv::SetBool::Response::SharedPtr response);
  
  /// @brief 设置近光灯
  void onSetLowBeam(
    const std_srvs::srv::SetBool::Request::SharedPtr request,
    const std_srvs::srv::SetBool::Response::SharedPtr response);
  
  /// @brief 设置远光灯
  void onSetHighBeam(
    const std_srvs::srv::SetBool::Request::SharedPtr request,
    const std_srvs::srv::SetBool::Response::SharedPtr response);

  /// @brief AEB信息报告回调
  void onAebInfoReport(
    const aeb_interfaces::msg::AebInfoReport::ConstSharedPtr & msg);
  
  /// @brief timer callback function, to evaluate whether if msgs are timeout, than publish control msgs to pix driver control command node
  void timerCallback();

private:  // pix robobus driver 

  // publishers
  rclcpp::Publisher<AvDriveCtrl>::SharedPtr av_drive_ctrl_pub_;
  rclcpp::Publisher<AvBrakeCtrl>::SharedPtr av_brake_ctrl_pub_;
  rclcpp::Publisher<AvSteerCtrl>::SharedPtr av_steer_ctrl_pub_;
  rclcpp::Publisher<AvVehicleCtrl>::SharedPtr av_vehicle_ctrl_pub_;
  rclcpp::Publisher<AvAebCtrl>::SharedPtr av_aeb_ctrl_pub_;

  // 触发模式发布
  int8_t set_door_;  // 门  关:1->0  开:2->0
  int8_t set_park_;  // 手刹 拉上0->1 松开0->2
  int8_t set_gear_;  // 换档 n档踩刹车，D2-1 R2->3
  uint16_t set_find_vehicle_; // 寻车: 鸣笛 3 声、双闪 3 次 1秒一次
  int8_t set_low_beam_; // 近光灯  关:0  开:1
  int8_t set_high_beam_; // 远光灯  关:0  开:1

  // subscribers
  // 获取车辆当前档位情况
  rclcpp::Subscription<VaDriveStaFb>::ConstSharedPtr va_drive_sta_fb_sub_;
  void onVaDriveStaFb(const VaDriveStaFb::ConstSharedPtr & msg);
  VaDriveStaFb::ConstSharedPtr va_drive_sta_ptr_;

  // 获取车辆当前驻车情况 
  rclcpp::Subscription<VaBrakeStaFb>::ConstSharedPtr va_brake_sta_fb_sub_;
  void onVaBrakeStaFb(const VaBrakeStaFb::ConstSharedPtr & msg);
  VaBrakeStaFb::ConstSharedPtr va_brake_sta_fb_ptr_;

  rclcpp::Subscription<VaSteerStaFb>::ConstSharedPtr va_steer_sta_fb_sub_;
  void onVaSteerStaFb(const VaSteerStaFb::ConstSharedPtr & msg);
  VaSteerStaFb::ConstSharedPtr va_steer_sta_fb_ptr_;
  
  // 获取门状态
  rclcpp::Subscription<VaVehicleStaFb>::ConstSharedPtr va_vehicle_sta_fb_sub_;
  void onVaVehicleStaFb(const VaVehicleStaFb::ConstSharedPtr & msg);
  VaVehicleStaFb::ConstSharedPtr va_vehicle_sta_fb_ptr_;
  void onLatDiag(const Float32MultiArrayStamped::ConstSharedPtr msg);
  void onScenario(const Scenario::ConstSharedPtr msg);
  void onControlCmd(const Control::ConstSharedPtr msg);

  rclcpp::Subscription<aeb_interfaces::msg::AebInfoReport>::ConstSharedPtr aeb_info_report_sub_;
};

} // namespace control_converter
} // namespace pix_interface

#endif // PIX_ROBOBUS_DRIVER__CONTROL_CONVERTER_HPP_