// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/AutoVcuMessage2.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AUTO_VCU_MESSAGE2__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AUTO_VCU_MESSAGE2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/auto_vcu_message2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_AutoVcuMessage2_atmospherelightbrightness
{
public:
  explicit Init_AutoVcuMessage2_atmospherelightbrightness(::pix_robobus_driver_msgs::msg::AutoVcuMessage2 & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::AutoVcuMessage2 atmospherelightbrightness(::pix_robobus_driver_msgs::msg::AutoVcuMessage2::_atmospherelightbrightness_type arg)
  {
    msg_.atmospherelightbrightness = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AutoVcuMessage2 msg_;
};

class Init_AutoVcuMessage2_pwm_blue_ctrl
{
public:
  explicit Init_AutoVcuMessage2_pwm_blue_ctrl(::pix_robobus_driver_msgs::msg::AutoVcuMessage2 & msg)
  : msg_(msg)
  {}
  Init_AutoVcuMessage2_atmospherelightbrightness pwm_blue_ctrl(::pix_robobus_driver_msgs::msg::AutoVcuMessage2::_pwm_blue_ctrl_type arg)
  {
    msg_.pwm_blue_ctrl = std::move(arg);
    return Init_AutoVcuMessage2_atmospherelightbrightness(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AutoVcuMessage2 msg_;
};

class Init_AutoVcuMessage2_pwm_green_ctrl
{
public:
  explicit Init_AutoVcuMessage2_pwm_green_ctrl(::pix_robobus_driver_msgs::msg::AutoVcuMessage2 & msg)
  : msg_(msg)
  {}
  Init_AutoVcuMessage2_pwm_blue_ctrl pwm_green_ctrl(::pix_robobus_driver_msgs::msg::AutoVcuMessage2::_pwm_green_ctrl_type arg)
  {
    msg_.pwm_green_ctrl = std::move(arg);
    return Init_AutoVcuMessage2_pwm_blue_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AutoVcuMessage2 msg_;
};

class Init_AutoVcuMessage2_pwm_red_ctrl
{
public:
  explicit Init_AutoVcuMessage2_pwm_red_ctrl(::pix_robobus_driver_msgs::msg::AutoVcuMessage2 & msg)
  : msg_(msg)
  {}
  Init_AutoVcuMessage2_pwm_green_ctrl pwm_red_ctrl(::pix_robobus_driver_msgs::msg::AutoVcuMessage2::_pwm_red_ctrl_type arg)
  {
    msg_.pwm_red_ctrl = std::move(arg);
    return Init_AutoVcuMessage2_pwm_green_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AutoVcuMessage2 msg_;
};

class Init_AutoVcuMessage2_header
{
public:
  Init_AutoVcuMessage2_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutoVcuMessage2_pwm_red_ctrl header(::pix_robobus_driver_msgs::msg::AutoVcuMessage2::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AutoVcuMessage2_pwm_red_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AutoVcuMessage2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::AutoVcuMessage2>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_AutoVcuMessage2_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AUTO_VCU_MESSAGE2__BUILDER_HPP_
