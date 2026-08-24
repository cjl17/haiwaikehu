// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaChassisWheelTorqueFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_TORQUE_FB__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_TORQUE_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/va_chassis_wheel_torque_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_VaChassisWheelTorqueFb_vcu_chassis_torque_rr
{
public:
  explicit Init_VaChassisWheelTorqueFb_vcu_chassis_torque_rr(::pix_robobus_driver_msgs::msg::VaChassisWheelTorqueFb & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::VaChassisWheelTorqueFb vcu_chassis_torque_rr(::pix_robobus_driver_msgs::msg::VaChassisWheelTorqueFb::_vcu_chassis_torque_rr_type arg)
  {
    msg_.vcu_chassis_torque_rr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaChassisWheelTorqueFb msg_;
};

class Init_VaChassisWheelTorqueFb_vcu_chassis_torque_lr
{
public:
  explicit Init_VaChassisWheelTorqueFb_vcu_chassis_torque_lr(::pix_robobus_driver_msgs::msg::VaChassisWheelTorqueFb & msg)
  : msg_(msg)
  {}
  Init_VaChassisWheelTorqueFb_vcu_chassis_torque_rr vcu_chassis_torque_lr(::pix_robobus_driver_msgs::msg::VaChassisWheelTorqueFb::_vcu_chassis_torque_lr_type arg)
  {
    msg_.vcu_chassis_torque_lr = std::move(arg);
    return Init_VaChassisWheelTorqueFb_vcu_chassis_torque_rr(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaChassisWheelTorqueFb msg_;
};

class Init_VaChassisWheelTorqueFb_vcu_chassis_torque_rf
{
public:
  explicit Init_VaChassisWheelTorqueFb_vcu_chassis_torque_rf(::pix_robobus_driver_msgs::msg::VaChassisWheelTorqueFb & msg)
  : msg_(msg)
  {}
  Init_VaChassisWheelTorqueFb_vcu_chassis_torque_lr vcu_chassis_torque_rf(::pix_robobus_driver_msgs::msg::VaChassisWheelTorqueFb::_vcu_chassis_torque_rf_type arg)
  {
    msg_.vcu_chassis_torque_rf = std::move(arg);
    return Init_VaChassisWheelTorqueFb_vcu_chassis_torque_lr(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaChassisWheelTorqueFb msg_;
};

class Init_VaChassisWheelTorqueFb_vcu_chassis_torque_lf
{
public:
  explicit Init_VaChassisWheelTorqueFb_vcu_chassis_torque_lf(::pix_robobus_driver_msgs::msg::VaChassisWheelTorqueFb & msg)
  : msg_(msg)
  {}
  Init_VaChassisWheelTorqueFb_vcu_chassis_torque_rf vcu_chassis_torque_lf(::pix_robobus_driver_msgs::msg::VaChassisWheelTorqueFb::_vcu_chassis_torque_lf_type arg)
  {
    msg_.vcu_chassis_torque_lf = std::move(arg);
    return Init_VaChassisWheelTorqueFb_vcu_chassis_torque_rf(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaChassisWheelTorqueFb msg_;
};

class Init_VaChassisWheelTorqueFb_header
{
public:
  Init_VaChassisWheelTorqueFb_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VaChassisWheelTorqueFb_vcu_chassis_torque_lf header(::pix_robobus_driver_msgs::msg::VaChassisWheelTorqueFb::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VaChassisWheelTorqueFb_vcu_chassis_torque_lf(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaChassisWheelTorqueFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::VaChassisWheelTorqueFb>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_VaChassisWheelTorqueFb_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_TORQUE_FB__BUILDER_HPP_
