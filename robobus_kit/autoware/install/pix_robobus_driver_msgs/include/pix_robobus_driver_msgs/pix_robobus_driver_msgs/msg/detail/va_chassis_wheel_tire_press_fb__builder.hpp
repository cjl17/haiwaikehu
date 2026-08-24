// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaChassisWheelTirePressFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_TIRE_PRESS_FB__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_TIRE_PRESS_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/va_chassis_wheel_tire_press_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_VaChassisWheelTirePressFb_vcu_chassis_wheel_tire_press_rr
{
public:
  explicit Init_VaChassisWheelTirePressFb_vcu_chassis_wheel_tire_press_rr(::pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb vcu_chassis_wheel_tire_press_rr(::pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb::_vcu_chassis_wheel_tire_press_rr_type arg)
  {
    msg_.vcu_chassis_wheel_tire_press_rr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb msg_;
};

class Init_VaChassisWheelTirePressFb_vcu_chassis_wheel_tire_press_lr
{
public:
  explicit Init_VaChassisWheelTirePressFb_vcu_chassis_wheel_tire_press_lr(::pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb & msg)
  : msg_(msg)
  {}
  Init_VaChassisWheelTirePressFb_vcu_chassis_wheel_tire_press_rr vcu_chassis_wheel_tire_press_lr(::pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb::_vcu_chassis_wheel_tire_press_lr_type arg)
  {
    msg_.vcu_chassis_wheel_tire_press_lr = std::move(arg);
    return Init_VaChassisWheelTirePressFb_vcu_chassis_wheel_tire_press_rr(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb msg_;
};

class Init_VaChassisWheelTirePressFb_vcu_chassis_wheel_tire_press_rf
{
public:
  explicit Init_VaChassisWheelTirePressFb_vcu_chassis_wheel_tire_press_rf(::pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb & msg)
  : msg_(msg)
  {}
  Init_VaChassisWheelTirePressFb_vcu_chassis_wheel_tire_press_lr vcu_chassis_wheel_tire_press_rf(::pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb::_vcu_chassis_wheel_tire_press_rf_type arg)
  {
    msg_.vcu_chassis_wheel_tire_press_rf = std::move(arg);
    return Init_VaChassisWheelTirePressFb_vcu_chassis_wheel_tire_press_lr(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb msg_;
};

class Init_VaChassisWheelTirePressFb_vcu_chassis_wheel_tire_press_lf
{
public:
  explicit Init_VaChassisWheelTirePressFb_vcu_chassis_wheel_tire_press_lf(::pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb & msg)
  : msg_(msg)
  {}
  Init_VaChassisWheelTirePressFb_vcu_chassis_wheel_tire_press_rf vcu_chassis_wheel_tire_press_lf(::pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb::_vcu_chassis_wheel_tire_press_lf_type arg)
  {
    msg_.vcu_chassis_wheel_tire_press_lf = std::move(arg);
    return Init_VaChassisWheelTirePressFb_vcu_chassis_wheel_tire_press_rf(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb msg_;
};

class Init_VaChassisWheelTirePressFb_header
{
public:
  Init_VaChassisWheelTirePressFb_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VaChassisWheelTirePressFb_vcu_chassis_wheel_tire_press_lf header(::pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VaChassisWheelTirePressFb_vcu_chassis_wheel_tire_press_lf(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_VaChassisWheelTirePressFb_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_TIRE_PRESS_FB__BUILDER_HPP_
