// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/AvWheelTorqueCtrl.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_WHEEL_TORQUE_CTRL__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_WHEEL_TORQUE_CTRL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/av_wheel_torque_ctrl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_AvWheelTorqueCtrl_acu_motor_torque_rr_ctrl
{
public:
  explicit Init_AvWheelTorqueCtrl_acu_motor_torque_rr_ctrl(::pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl acu_motor_torque_rr_ctrl(::pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl::_acu_motor_torque_rr_ctrl_type arg)
  {
    msg_.acu_motor_torque_rr_ctrl = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl msg_;
};

class Init_AvWheelTorqueCtrl_acu_motor_torque_lr_ctrl
{
public:
  explicit Init_AvWheelTorqueCtrl_acu_motor_torque_lr_ctrl(::pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl & msg)
  : msg_(msg)
  {}
  Init_AvWheelTorqueCtrl_acu_motor_torque_rr_ctrl acu_motor_torque_lr_ctrl(::pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl::_acu_motor_torque_lr_ctrl_type arg)
  {
    msg_.acu_motor_torque_lr_ctrl = std::move(arg);
    return Init_AvWheelTorqueCtrl_acu_motor_torque_rr_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl msg_;
};

class Init_AvWheelTorqueCtrl_acu_motor_torque_rf_ctrl
{
public:
  explicit Init_AvWheelTorqueCtrl_acu_motor_torque_rf_ctrl(::pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl & msg)
  : msg_(msg)
  {}
  Init_AvWheelTorqueCtrl_acu_motor_torque_lr_ctrl acu_motor_torque_rf_ctrl(::pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl::_acu_motor_torque_rf_ctrl_type arg)
  {
    msg_.acu_motor_torque_rf_ctrl = std::move(arg);
    return Init_AvWheelTorqueCtrl_acu_motor_torque_lr_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl msg_;
};

class Init_AvWheelTorqueCtrl_acu_motor_torque_lf_ctrl
{
public:
  explicit Init_AvWheelTorqueCtrl_acu_motor_torque_lf_ctrl(::pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl & msg)
  : msg_(msg)
  {}
  Init_AvWheelTorqueCtrl_acu_motor_torque_rf_ctrl acu_motor_torque_lf_ctrl(::pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl::_acu_motor_torque_lf_ctrl_type arg)
  {
    msg_.acu_motor_torque_lf_ctrl = std::move(arg);
    return Init_AvWheelTorqueCtrl_acu_motor_torque_rf_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl msg_;
};

class Init_AvWheelTorqueCtrl_header
{
public:
  Init_AvWheelTorqueCtrl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AvWheelTorqueCtrl_acu_motor_torque_lf_ctrl header(::pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AvWheelTorqueCtrl_acu_motor_torque_lf_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_AvWheelTorqueCtrl_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_WHEEL_TORQUE_CTRL__BUILDER_HPP_
