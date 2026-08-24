// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/AvSteerCtrl.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_STEER_CTRL__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_STEER_CTRL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/av_steer_ctrl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_AvSteerCtrl_acu_check_sum132
{
public:
  explicit Init_AvSteerCtrl_acu_check_sum132(::pix_robobus_driver_msgs::msg::AvSteerCtrl & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::AvSteerCtrl acu_check_sum132(::pix_robobus_driver_msgs::msg::AvSteerCtrl::_acu_check_sum132_type arg)
  {
    msg_.acu_check_sum132 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvSteerCtrl msg_;
};

class Init_AvSteerCtrl_acu_steer_life_sig
{
public:
  explicit Init_AvSteerCtrl_acu_steer_life_sig(::pix_robobus_driver_msgs::msg::AvSteerCtrl & msg)
  : msg_(msg)
  {}
  Init_AvSteerCtrl_acu_check_sum132 acu_steer_life_sig(::pix_robobus_driver_msgs::msg::AvSteerCtrl::_acu_steer_life_sig_type arg)
  {
    msg_.acu_steer_life_sig = std::move(arg);
    return Init_AvSteerCtrl_acu_check_sum132(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvSteerCtrl msg_;
};

class Init_AvSteerCtrl_acu_chassis_steer_angle_speed_ctrl
{
public:
  explicit Init_AvSteerCtrl_acu_chassis_steer_angle_speed_ctrl(::pix_robobus_driver_msgs::msg::AvSteerCtrl & msg)
  : msg_(msg)
  {}
  Init_AvSteerCtrl_acu_steer_life_sig acu_chassis_steer_angle_speed_ctrl(::pix_robobus_driver_msgs::msg::AvSteerCtrl::_acu_chassis_steer_angle_speed_ctrl_type arg)
  {
    msg_.acu_chassis_steer_angle_speed_ctrl = std::move(arg);
    return Init_AvSteerCtrl_acu_steer_life_sig(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvSteerCtrl msg_;
};

class Init_AvSteerCtrl_acu_chassis_steer_angle_rear_target
{
public:
  explicit Init_AvSteerCtrl_acu_chassis_steer_angle_rear_target(::pix_robobus_driver_msgs::msg::AvSteerCtrl & msg)
  : msg_(msg)
  {}
  Init_AvSteerCtrl_acu_chassis_steer_angle_speed_ctrl acu_chassis_steer_angle_rear_target(::pix_robobus_driver_msgs::msg::AvSteerCtrl::_acu_chassis_steer_angle_rear_target_type arg)
  {
    msg_.acu_chassis_steer_angle_rear_target = std::move(arg);
    return Init_AvSteerCtrl_acu_chassis_steer_angle_speed_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvSteerCtrl msg_;
};

class Init_AvSteerCtrl_acu_chassis_steer_angle_target
{
public:
  explicit Init_AvSteerCtrl_acu_chassis_steer_angle_target(::pix_robobus_driver_msgs::msg::AvSteerCtrl & msg)
  : msg_(msg)
  {}
  Init_AvSteerCtrl_acu_chassis_steer_angle_rear_target acu_chassis_steer_angle_target(::pix_robobus_driver_msgs::msg::AvSteerCtrl::_acu_chassis_steer_angle_target_type arg)
  {
    msg_.acu_chassis_steer_angle_target = std::move(arg);
    return Init_AvSteerCtrl_acu_chassis_steer_angle_rear_target(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvSteerCtrl msg_;
};

class Init_AvSteerCtrl_acu_chassis_steer_mode_ctrl
{
public:
  explicit Init_AvSteerCtrl_acu_chassis_steer_mode_ctrl(::pix_robobus_driver_msgs::msg::AvSteerCtrl & msg)
  : msg_(msg)
  {}
  Init_AvSteerCtrl_acu_chassis_steer_angle_target acu_chassis_steer_mode_ctrl(::pix_robobus_driver_msgs::msg::AvSteerCtrl::_acu_chassis_steer_mode_ctrl_type arg)
  {
    msg_.acu_chassis_steer_mode_ctrl = std::move(arg);
    return Init_AvSteerCtrl_acu_chassis_steer_angle_target(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvSteerCtrl msg_;
};

class Init_AvSteerCtrl_acu_chassis_steer_en_ctrl
{
public:
  explicit Init_AvSteerCtrl_acu_chassis_steer_en_ctrl(::pix_robobus_driver_msgs::msg::AvSteerCtrl & msg)
  : msg_(msg)
  {}
  Init_AvSteerCtrl_acu_chassis_steer_mode_ctrl acu_chassis_steer_en_ctrl(::pix_robobus_driver_msgs::msg::AvSteerCtrl::_acu_chassis_steer_en_ctrl_type arg)
  {
    msg_.acu_chassis_steer_en_ctrl = std::move(arg);
    return Init_AvSteerCtrl_acu_chassis_steer_mode_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvSteerCtrl msg_;
};

class Init_AvSteerCtrl_header
{
public:
  Init_AvSteerCtrl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AvSteerCtrl_acu_chassis_steer_en_ctrl header(::pix_robobus_driver_msgs::msg::AvSteerCtrl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AvSteerCtrl_acu_chassis_steer_en_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvSteerCtrl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::AvSteerCtrl>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_AvSteerCtrl_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_STEER_CTRL__BUILDER_HPP_
