// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaChassisWheelRpmFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_RPM_FB__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_RPM_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/va_chassis_wheel_rpm_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_VaChassisWheelRpmFb_vcu_chassis_wheel_rpm_rr
{
public:
  explicit Init_VaChassisWheelRpmFb_vcu_chassis_wheel_rpm_rr(::pix_robobus_driver_msgs::msg::VaChassisWheelRpmFb & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::VaChassisWheelRpmFb vcu_chassis_wheel_rpm_rr(::pix_robobus_driver_msgs::msg::VaChassisWheelRpmFb::_vcu_chassis_wheel_rpm_rr_type arg)
  {
    msg_.vcu_chassis_wheel_rpm_rr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaChassisWheelRpmFb msg_;
};

class Init_VaChassisWheelRpmFb_vcu_chassis_wheel_rpm_lr
{
public:
  explicit Init_VaChassisWheelRpmFb_vcu_chassis_wheel_rpm_lr(::pix_robobus_driver_msgs::msg::VaChassisWheelRpmFb & msg)
  : msg_(msg)
  {}
  Init_VaChassisWheelRpmFb_vcu_chassis_wheel_rpm_rr vcu_chassis_wheel_rpm_lr(::pix_robobus_driver_msgs::msg::VaChassisWheelRpmFb::_vcu_chassis_wheel_rpm_lr_type arg)
  {
    msg_.vcu_chassis_wheel_rpm_lr = std::move(arg);
    return Init_VaChassisWheelRpmFb_vcu_chassis_wheel_rpm_rr(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaChassisWheelRpmFb msg_;
};

class Init_VaChassisWheelRpmFb_vcu_chassis_wheel_rpm_rf
{
public:
  explicit Init_VaChassisWheelRpmFb_vcu_chassis_wheel_rpm_rf(::pix_robobus_driver_msgs::msg::VaChassisWheelRpmFb & msg)
  : msg_(msg)
  {}
  Init_VaChassisWheelRpmFb_vcu_chassis_wheel_rpm_lr vcu_chassis_wheel_rpm_rf(::pix_robobus_driver_msgs::msg::VaChassisWheelRpmFb::_vcu_chassis_wheel_rpm_rf_type arg)
  {
    msg_.vcu_chassis_wheel_rpm_rf = std::move(arg);
    return Init_VaChassisWheelRpmFb_vcu_chassis_wheel_rpm_lr(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaChassisWheelRpmFb msg_;
};

class Init_VaChassisWheelRpmFb_vcu_chassis_wheel_rpm_lf
{
public:
  explicit Init_VaChassisWheelRpmFb_vcu_chassis_wheel_rpm_lf(::pix_robobus_driver_msgs::msg::VaChassisWheelRpmFb & msg)
  : msg_(msg)
  {}
  Init_VaChassisWheelRpmFb_vcu_chassis_wheel_rpm_rf vcu_chassis_wheel_rpm_lf(::pix_robobus_driver_msgs::msg::VaChassisWheelRpmFb::_vcu_chassis_wheel_rpm_lf_type arg)
  {
    msg_.vcu_chassis_wheel_rpm_lf = std::move(arg);
    return Init_VaChassisWheelRpmFb_vcu_chassis_wheel_rpm_rf(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaChassisWheelRpmFb msg_;
};

class Init_VaChassisWheelRpmFb_header
{
public:
  Init_VaChassisWheelRpmFb_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VaChassisWheelRpmFb_vcu_chassis_wheel_rpm_lf header(::pix_robobus_driver_msgs::msg::VaChassisWheelRpmFb::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VaChassisWheelRpmFb_vcu_chassis_wheel_rpm_lf(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaChassisWheelRpmFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::VaChassisWheelRpmFb>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_VaChassisWheelRpmFb_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_RPM_FB__BUILDER_HPP_
