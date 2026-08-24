// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaChassisWheelAngleFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_ANGLE_FB__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_ANGLE_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/va_chassis_wheel_angle_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_VaChassisWheelAngleFb_vcu_chassis_wheel_angle_rr
{
public:
  explicit Init_VaChassisWheelAngleFb_vcu_chassis_wheel_angle_rr(::pix_robobus_driver_msgs::msg::VaChassisWheelAngleFb & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::VaChassisWheelAngleFb vcu_chassis_wheel_angle_rr(::pix_robobus_driver_msgs::msg::VaChassisWheelAngleFb::_vcu_chassis_wheel_angle_rr_type arg)
  {
    msg_.vcu_chassis_wheel_angle_rr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaChassisWheelAngleFb msg_;
};

class Init_VaChassisWheelAngleFb_vcu_chassis_wheel_angle_lr
{
public:
  explicit Init_VaChassisWheelAngleFb_vcu_chassis_wheel_angle_lr(::pix_robobus_driver_msgs::msg::VaChassisWheelAngleFb & msg)
  : msg_(msg)
  {}
  Init_VaChassisWheelAngleFb_vcu_chassis_wheel_angle_rr vcu_chassis_wheel_angle_lr(::pix_robobus_driver_msgs::msg::VaChassisWheelAngleFb::_vcu_chassis_wheel_angle_lr_type arg)
  {
    msg_.vcu_chassis_wheel_angle_lr = std::move(arg);
    return Init_VaChassisWheelAngleFb_vcu_chassis_wheel_angle_rr(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaChassisWheelAngleFb msg_;
};

class Init_VaChassisWheelAngleFb_vcu_chassis_wheel_angle_rf
{
public:
  explicit Init_VaChassisWheelAngleFb_vcu_chassis_wheel_angle_rf(::pix_robobus_driver_msgs::msg::VaChassisWheelAngleFb & msg)
  : msg_(msg)
  {}
  Init_VaChassisWheelAngleFb_vcu_chassis_wheel_angle_lr vcu_chassis_wheel_angle_rf(::pix_robobus_driver_msgs::msg::VaChassisWheelAngleFb::_vcu_chassis_wheel_angle_rf_type arg)
  {
    msg_.vcu_chassis_wheel_angle_rf = std::move(arg);
    return Init_VaChassisWheelAngleFb_vcu_chassis_wheel_angle_lr(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaChassisWheelAngleFb msg_;
};

class Init_VaChassisWheelAngleFb_vcu_chassis_wheel_angle_lf
{
public:
  explicit Init_VaChassisWheelAngleFb_vcu_chassis_wheel_angle_lf(::pix_robobus_driver_msgs::msg::VaChassisWheelAngleFb & msg)
  : msg_(msg)
  {}
  Init_VaChassisWheelAngleFb_vcu_chassis_wheel_angle_rf vcu_chassis_wheel_angle_lf(::pix_robobus_driver_msgs::msg::VaChassisWheelAngleFb::_vcu_chassis_wheel_angle_lf_type arg)
  {
    msg_.vcu_chassis_wheel_angle_lf = std::move(arg);
    return Init_VaChassisWheelAngleFb_vcu_chassis_wheel_angle_rf(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaChassisWheelAngleFb msg_;
};

class Init_VaChassisWheelAngleFb_header
{
public:
  Init_VaChassisWheelAngleFb_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VaChassisWheelAngleFb_vcu_chassis_wheel_angle_lf header(::pix_robobus_driver_msgs::msg::VaChassisWheelAngleFb::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VaChassisWheelAngleFb_vcu_chassis_wheel_angle_lf(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaChassisWheelAngleFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::VaChassisWheelAngleFb>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_VaChassisWheelAngleFb_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_ANGLE_FB__BUILDER_HPP_
