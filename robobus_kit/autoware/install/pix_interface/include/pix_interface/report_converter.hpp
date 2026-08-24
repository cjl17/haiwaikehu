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

#include <memory>
#include <string>
#include <rclcpp/rclcpp.hpp>
#include <diagnostic_updater/diagnostic_updater.hpp>

// geometry_msgs
#include <geometry_msgs/msg/twist_with_covariance.hpp>
#include <geometry_msgs/msg/vector3_stamped.hpp>

// sensor_msgs
#include <sensor_msgs/msg/imu.hpp>

// autoware_msgs
#include <autoware_vehicle_msgs/msg/control_mode_report.hpp>
#include <autoware_vehicle_msgs/msg/gear_report.hpp>
#include <autoware_vehicle_msgs/msg/hazard_lights_report.hpp>
#include <autoware_vehicle_msgs/msg/steering_report.hpp>
#include <autoware_vehicle_msgs/msg/turn_indicators_report.hpp>
#include <autoware_vehicle_msgs/msg/velocity_report.hpp>

// tier4_msgs
#include <tier4_vehicle_msgs/msg/actuation_status_stamped.hpp>
#include <tier4_vehicle_msgs/msg/steering_wheel_status_stamped.hpp>
#include <tier4_api_msgs/msg/door_status.hpp>

// pix_robobus_driver_msgs
#include <pix_robobus_driver_msgs/msg/va_drive_sta_fb.hpp>
#include <pix_robobus_driver_msgs/msg/va_brake_sta_fb.hpp>
#include <pix_robobus_driver_msgs/msg/va_steer_sta_fb.hpp>
#include <pix_robobus_driver_msgs/msg/va_vehicle_work_sta_fb.hpp>
#include <pix_robobus_driver_msgs/msg/va_vehicle_sta_fb.hpp>
#include <pix_robobus_driver_msgs/msg/va_chassis_wheel_rpm_fb.hpp>

#include "common.hpp"

namespace pix_interface
{
namespace report_converter
{

enum class GearSta : int8_t {
  NOT_USED = 0,
  DRIVE = 1,
  NEUTRAL = 2,
  REVERSE = 3
};

enum class EnSta : uint8_t{ 
  DISABLE = 0, 
  ENABLE = 1
};

enum class DrivingMode : uint8_t{
  STANDBY = 0,   // 待机
  SELF_DRIVING= 1,
  REMOTE = 2,   // 遥控
  TAKEOVER = 3
};

enum class DoorSta : uint8_t { 
  INVALID = 0,
  OPENING = 1,
  CLOSING = 2,
  OPEN_INPLACE = 3,
  CLOSE_INPLACE = 4,
  OPEN_TIMEOUT = 5,
  CLOSE_TIMEOUT = 6
};

// chassi steer mode status
enum class SteerModeSta : int8_t {
  FRONT_ACKERMAN = 0,
  SAME_FRONT_AND_BACK = 1,
  FRONT_DIFFERENT_BACK = 2,
  BACK_ACKRMAN = 3,
  FRONT_BACK = 4
};

enum class ParkSta : int8_t {
  RELEASE = 0,
  BRAKE = 1,
  RELEASING = 2,
  BRAKING = 3,
};

/**
 * @param pix_door_lamp_eorro pix_robobus_driver 门和灯反馈的严重超时阀值
 * @param pix_estop_eorro pix_robobus_driver 紧急情况的严重超时阀值
 * @param pix_drive_eorro pix_robobus_driver 油门，转向，刹车的严重超时阀值
 * @param imu_msg_eorro 来自传感器的IMU的严重超时阀值
 * @param pix_door_lamp_warn pix_robobus_driver 门和灯反馈的警告超时阀值
 * @param pix_estop_warn pix_robobus_driver 紧急情况的警告超时阀值
 * @param pix_drive_warn pix_robobus_driver 油门，转向，刹车的警告超时阀值
 * @param imu_msg_warn 来自传感器的IMU的警告超时阀值
 */
struct TimeoutThresholdMs
{
  uint8_t pix_door_lamp_eorro;  // ms
  uint8_t pix_estop_eorro;  // ms
  uint8_t pix_drive_eorro;  // ms
  uint8_t imu_msg_eorro;  // ms
  uint8_t pix_door_lamp_warn;  // ms
  uint8_t pix_estop_warn;  // ms
  uint8_t pix_drive_warn;  // ms
  uint8_t imu_msg_warn;  // ms
};

/**
 * @brief param structure of report converter node
 * @param period loop rate of publishers in hz
 * @param max_steering_angle max steering angle in radians
 * @param base_frame_id frame id of vehicle
 * @param steering_factor the factor that convert steering feedback signal value to autoware steering value
 * @param use_steer_mode_correct corret linear velocity according to steering mode
 * @param wheel_base wheel base of vehicle
 * @param timeout_threshold_ms 超时阀值
 */
struct Param
{
  double loop_rate;           // hz
  std::string steer_mechanical_type;
  double max_steering_angle_DP139_rad;
  double max_steering_angle_H02B_rad;
  double max_steering_angle_DP139_deg;
  double max_steering_angle_H02B_deg;
  
  TimeoutThresholdMs timeout_threshold_ms;

  std::string base_frame_id;  // vehicle frame id
  double steering_factor;
  bool use_steer_mode_correct;
  double wheel_base;
};

class ReportConverter : public rclcpp::Node
{
public:
  /// @brief Construct a new Report Converter object
  ReportConverter(const rclcpp::NodeOptions & node_options);
private:
  Param param_;
  double steering_factor_;

private:
  // Diagnostics Updater
  diagnostic_updater::Updater updater_;
  void onDelayedAlarm(diagnostic_updater::DiagnosticStatusWrapper & stat);

  // 来自pix_robobus_driver和IMU msg延迟记录
  DelayRecording pix_driver_delay_;
  DelayRecording pix_brake_delay_;
  DelayRecording pix_steer_delay_;
  DelayRecording pix_estop_delay_;
  DelayRecording pix_door_lamp_delay_;
  DelayRecording sensor_imu_delay_;

private:  // Autoware
  // publishers 
  rclcpp::Publisher<autoware_vehicle_msgs::msg::ControlModeReport>::SharedPtr control_mode_pub_;
  rclcpp::Publisher<autoware_vehicle_msgs::msg::VelocityReport>::SharedPtr vehicle_twist_pub_;
  rclcpp::Publisher<autoware_vehicle_msgs::msg::SteeringReport>::SharedPtr steering_status_pub_;
  rclcpp::Publisher<autoware_vehicle_msgs::msg::GearReport>::SharedPtr gear_status_pub_;
  rclcpp::Publisher<autoware_vehicle_msgs::msg::TurnIndicatorsReport>::SharedPtr turn_indicators_status_pub_;
  rclcpp::Publisher<autoware_vehicle_msgs::msg::HazardLightsReport>::SharedPtr hazard_lights_status_pub_;
  rclcpp::Publisher<geometry_msgs::msg::Vector3Stamped>::SharedPtr slip_angle_pub_;

  rclcpp::Publisher<tier4_vehicle_msgs::msg::ActuationStatusStamped>::SharedPtr actuation_status_pub_;
  rclcpp::Publisher<tier4_vehicle_msgs::msg::SteeringWheelStatusStamped>::SharedPtr steering_wheel_status_pub_;
  rclcpp::Publisher<tier4_api_msgs::msg::DoorStatus>::SharedPtr door_status_pub_;
  
  // autoware msgs
  autoware_vehicle_msgs::msg::GearReport gear_msg_;
  autoware_vehicle_msgs::msg::ControlModeReport control_mode_report_msg_;
  autoware_vehicle_msgs::msg::HazardLightsReport hazard_lights_report_msg_;       
  autoware_vehicle_msgs::msg::SteeringReport steer_report_msg_;                   
  autoware_vehicle_msgs::msg::VelocityReport velocity_report_msg_;                
  autoware_vehicle_msgs::msg::TurnIndicatorsReport turn_indicators_report_msg_;  

  // tier4 msgs
  tier4_vehicle_msgs::msg::ActuationStatusStamped actuation_status_stamped_msg_;
  tier4_vehicle_msgs::msg::SteeringWheelStatusStamped steering_wheel_status_msg_;
  tier4_api_msgs::msg::DoorStatus door_status_msg_;

private:  // other
  // timers
  rclcpp::TimerBase::ConstSharedPtr timer_;

  void timerCallback();
  
  // subscrier of imu
  rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr imu_sub_;

  sensor_msgs::msg::Imu::ConstSharedPtr imu_ptr_;

  rclcpp::Time imu_received_timestamp_;
  
  void imuCallback(const sensor_msgs::msg::Imu::ConstSharedPtr & msg);

private:  // pix robobus driver 
  // subscribers 
  rclcpp::Subscription<pix_robobus_driver_msgs::msg::VaDriveStaFb>::SharedPtr va_drive_sta_fb_sub_;
  void onVaDriveStaFb(const pix_robobus_driver_msgs::msg::VaDriveStaFb::ConstSharedPtr & msg);
  pix_robobus_driver_msgs::msg::VaDriveStaFb::ConstSharedPtr va_drive_sta_fb_ptr_;
  rclcpp::Time va_drive_sta_fb_received_timestamp_;

  rclcpp::Subscription<pix_robobus_driver_msgs::msg::VaBrakeStaFb>::SharedPtr va_brake_sta_fb_sub_;
  void onVaBrakeStaFb(const pix_robobus_driver_msgs::msg::VaBrakeStaFb::ConstSharedPtr & msg);
  pix_robobus_driver_msgs::msg::VaBrakeStaFb::ConstSharedPtr va_brake_sta_fb_ptr_;
  rclcpp::Time va_brake_sta_fb_received_timestamp_;

  rclcpp::Subscription<pix_robobus_driver_msgs::msg::VaSteerStaFb>::SharedPtr va_steer_sta_fb_sub_;
  void onVaSteerStaFb(const pix_robobus_driver_msgs::msg::VaSteerStaFb::ConstSharedPtr & msg);
  pix_robobus_driver_msgs::msg::VaSteerStaFb::ConstSharedPtr va_steer_sta_fb_ptr_;
  rclcpp::Time va_steer_sta_fb_received_timestamp_;

  // 534 20hz 紧急状态反馈
  rclcpp::Subscription<pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb>::SharedPtr va_vehicle_work_sta_fb_sub_;
  void onVaVehicleWorkStaFb(const pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb::ConstSharedPtr & msg);
  pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb::ConstSharedPtr va_vehicle_work_sta_fb_ptr_;
  rclcpp::Time va_vehicle_work_sta_fb_received_timestamp_;

  // 536 5hz 灯光+门反馈
  rclcpp::Subscription<pix_robobus_driver_msgs::msg::VaVehicleStaFb>::SharedPtr va_vehicle_sta_fb_sub_;
  void onVaVehicleStaFb(const pix_robobus_driver_msgs::msg::VaVehicleStaFb::ConstSharedPtr & msg);
  pix_robobus_driver_msgs::msg::VaVehicleStaFb::ConstSharedPtr va_vehicle_sta_fb_ptr_;
  rclcpp::Time va_vehicle_sta_fb_received_timestamp_;
};
} // report_converter
} // pix_interface