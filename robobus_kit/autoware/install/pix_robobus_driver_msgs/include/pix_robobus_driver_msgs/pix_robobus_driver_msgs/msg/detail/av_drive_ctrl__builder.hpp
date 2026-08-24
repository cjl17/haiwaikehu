// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/AvDriveCtrl.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_DRIVE_CTRL__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_DRIVE_CTRL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/av_drive_ctrl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_AvDriveCtrl_acu_check_sum130
{
public:
  explicit Init_AvDriveCtrl_acu_check_sum130(::pix_robobus_driver_msgs::msg::AvDriveCtrl & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::AvDriveCtrl acu_check_sum130(::pix_robobus_driver_msgs::msg::AvDriveCtrl::_acu_check_sum130_type arg)
  {
    msg_.acu_check_sum130 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvDriveCtrl msg_;
};

class Init_AvDriveCtrl_acu_drive_life_sig
{
public:
  explicit Init_AvDriveCtrl_acu_drive_life_sig(::pix_robobus_driver_msgs::msg::AvDriveCtrl & msg)
  : msg_(msg)
  {}
  Init_AvDriveCtrl_acu_check_sum130 acu_drive_life_sig(::pix_robobus_driver_msgs::msg::AvDriveCtrl::_acu_drive_life_sig_type arg)
  {
    msg_.acu_drive_life_sig = std::move(arg);
    return Init_AvDriveCtrl_acu_check_sum130(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvDriveCtrl msg_;
};

class Init_AvDriveCtrl_acu_chassis_throttle_pdl_target
{
public:
  explicit Init_AvDriveCtrl_acu_chassis_throttle_pdl_target(::pix_robobus_driver_msgs::msg::AvDriveCtrl & msg)
  : msg_(msg)
  {}
  Init_AvDriveCtrl_acu_drive_life_sig acu_chassis_throttle_pdl_target(::pix_robobus_driver_msgs::msg::AvDriveCtrl::_acu_chassis_throttle_pdl_target_type arg)
  {
    msg_.acu_chassis_throttle_pdl_target = std::move(arg);
    return Init_AvDriveCtrl_acu_drive_life_sig(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvDriveCtrl msg_;
};

class Init_AvDriveCtrl_acu_chassis_speed_ctrl
{
public:
  explicit Init_AvDriveCtrl_acu_chassis_speed_ctrl(::pix_robobus_driver_msgs::msg::AvDriveCtrl & msg)
  : msg_(msg)
  {}
  Init_AvDriveCtrl_acu_chassis_throttle_pdl_target acu_chassis_speed_ctrl(::pix_robobus_driver_msgs::msg::AvDriveCtrl::_acu_chassis_speed_ctrl_type arg)
  {
    msg_.acu_chassis_speed_ctrl = std::move(arg);
    return Init_AvDriveCtrl_acu_chassis_throttle_pdl_target(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvDriveCtrl msg_;
};

class Init_AvDriveCtrl_acu_chassis4_wd_mode_ctrl
{
public:
  explicit Init_AvDriveCtrl_acu_chassis4_wd_mode_ctrl(::pix_robobus_driver_msgs::msg::AvDriveCtrl & msg)
  : msg_(msg)
  {}
  Init_AvDriveCtrl_acu_chassis_speed_ctrl acu_chassis4_wd_mode_ctrl(::pix_robobus_driver_msgs::msg::AvDriveCtrl::_acu_chassis4_wd_mode_ctrl_type arg)
  {
    msg_.acu_chassis4_wd_mode_ctrl = std::move(arg);
    return Init_AvDriveCtrl_acu_chassis_speed_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvDriveCtrl msg_;
};

class Init_AvDriveCtrl_acu_chassis_gear_ctrl
{
public:
  explicit Init_AvDriveCtrl_acu_chassis_gear_ctrl(::pix_robobus_driver_msgs::msg::AvDriveCtrl & msg)
  : msg_(msg)
  {}
  Init_AvDriveCtrl_acu_chassis4_wd_mode_ctrl acu_chassis_gear_ctrl(::pix_robobus_driver_msgs::msg::AvDriveCtrl::_acu_chassis_gear_ctrl_type arg)
  {
    msg_.acu_chassis_gear_ctrl = std::move(arg);
    return Init_AvDriveCtrl_acu_chassis4_wd_mode_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvDriveCtrl msg_;
};

class Init_AvDriveCtrl_acu_chassis_driver_mode_ctrl
{
public:
  explicit Init_AvDriveCtrl_acu_chassis_driver_mode_ctrl(::pix_robobus_driver_msgs::msg::AvDriveCtrl & msg)
  : msg_(msg)
  {}
  Init_AvDriveCtrl_acu_chassis_gear_ctrl acu_chassis_driver_mode_ctrl(::pix_robobus_driver_msgs::msg::AvDriveCtrl::_acu_chassis_driver_mode_ctrl_type arg)
  {
    msg_.acu_chassis_driver_mode_ctrl = std::move(arg);
    return Init_AvDriveCtrl_acu_chassis_gear_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvDriveCtrl msg_;
};

class Init_AvDriveCtrl_acu_chassis_driver_en_ctrl
{
public:
  explicit Init_AvDriveCtrl_acu_chassis_driver_en_ctrl(::pix_robobus_driver_msgs::msg::AvDriveCtrl & msg)
  : msg_(msg)
  {}
  Init_AvDriveCtrl_acu_chassis_driver_mode_ctrl acu_chassis_driver_en_ctrl(::pix_robobus_driver_msgs::msg::AvDriveCtrl::_acu_chassis_driver_en_ctrl_type arg)
  {
    msg_.acu_chassis_driver_en_ctrl = std::move(arg);
    return Init_AvDriveCtrl_acu_chassis_driver_mode_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvDriveCtrl msg_;
};

class Init_AvDriveCtrl_header
{
public:
  Init_AvDriveCtrl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AvDriveCtrl_acu_chassis_driver_en_ctrl header(::pix_robobus_driver_msgs::msg::AvDriveCtrl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AvDriveCtrl_acu_chassis_driver_en_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvDriveCtrl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::AvDriveCtrl>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_AvDriveCtrl_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_DRIVE_CTRL__BUILDER_HPP_
