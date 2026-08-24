// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaDriveStaFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_DRIVE_STA_FB__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_DRIVE_STA_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/va_drive_sta_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_VaDriveStaFb_vcu_drive_check_sta
{
public:
  explicit Init_VaDriveStaFb_vcu_drive_check_sta(::pix_robobus_driver_msgs::msg::VaDriveStaFb & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::VaDriveStaFb vcu_drive_check_sta(::pix_robobus_driver_msgs::msg::VaDriveStaFb::_vcu_drive_check_sta_type arg)
  {
    msg_.vcu_drive_check_sta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaDriveStaFb msg_;
};

class Init_VaDriveStaFb_vcu_drive_life
{
public:
  explicit Init_VaDriveStaFb_vcu_drive_life(::pix_robobus_driver_msgs::msg::VaDriveStaFb & msg)
  : msg_(msg)
  {}
  Init_VaDriveStaFb_vcu_drive_check_sta vcu_drive_life(::pix_robobus_driver_msgs::msg::VaDriveStaFb::_vcu_drive_life_type arg)
  {
    msg_.vcu_drive_life = std::move(arg);
    return Init_VaDriveStaFb_vcu_drive_check_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaDriveStaFb msg_;
};

class Init_VaDriveStaFb_vcu_chassis_acceleration_fb
{
public:
  explicit Init_VaDriveStaFb_vcu_chassis_acceleration_fb(::pix_robobus_driver_msgs::msg::VaDriveStaFb & msg)
  : msg_(msg)
  {}
  Init_VaDriveStaFb_vcu_drive_life vcu_chassis_acceleration_fb(::pix_robobus_driver_msgs::msg::VaDriveStaFb::_vcu_chassis_acceleration_fb_type arg)
  {
    msg_.vcu_chassis_acceleration_fb = std::move(arg);
    return Init_VaDriveStaFb_vcu_drive_life(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaDriveStaFb msg_;
};

class Init_VaDriveStaFb_vcu_chassis_throttle_pedal_req_fb
{
public:
  explicit Init_VaDriveStaFb_vcu_chassis_throttle_pedal_req_fb(::pix_robobus_driver_msgs::msg::VaDriveStaFb & msg)
  : msg_(msg)
  {}
  Init_VaDriveStaFb_vcu_chassis_acceleration_fb vcu_chassis_throttle_pedal_req_fb(::pix_robobus_driver_msgs::msg::VaDriveStaFb::_vcu_chassis_throttle_pedal_req_fb_type arg)
  {
    msg_.vcu_chassis_throttle_pedal_req_fb = std::move(arg);
    return Init_VaDriveStaFb_vcu_chassis_acceleration_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaDriveStaFb msg_;
};

class Init_VaDriveStaFb_vcu_chassis_throttle_pald_fb
{
public:
  explicit Init_VaDriveStaFb_vcu_chassis_throttle_pald_fb(::pix_robobus_driver_msgs::msg::VaDriveStaFb & msg)
  : msg_(msg)
  {}
  Init_VaDriveStaFb_vcu_chassis_throttle_pedal_req_fb vcu_chassis_throttle_pald_fb(::pix_robobus_driver_msgs::msg::VaDriveStaFb::_vcu_chassis_throttle_pald_fb_type arg)
  {
    msg_.vcu_chassis_throttle_pald_fb = std::move(arg);
    return Init_VaDriveStaFb_vcu_chassis_throttle_pedal_req_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaDriveStaFb msg_;
};

class Init_VaDriveStaFb_vcu_chassis_speed_fb
{
public:
  explicit Init_VaDriveStaFb_vcu_chassis_speed_fb(::pix_robobus_driver_msgs::msg::VaDriveStaFb & msg)
  : msg_(msg)
  {}
  Init_VaDriveStaFb_vcu_chassis_throttle_pald_fb vcu_chassis_speed_fb(::pix_robobus_driver_msgs::msg::VaDriveStaFb::_vcu_chassis_speed_fb_type arg)
  {
    msg_.vcu_chassis_speed_fb = std::move(arg);
    return Init_VaDriveStaFb_vcu_chassis_throttle_pald_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaDriveStaFb msg_;
};

class Init_VaDriveStaFb_vcu_chassis4_wd_mode_fb
{
public:
  explicit Init_VaDriveStaFb_vcu_chassis4_wd_mode_fb(::pix_robobus_driver_msgs::msg::VaDriveStaFb & msg)
  : msg_(msg)
  {}
  Init_VaDriveStaFb_vcu_chassis_speed_fb vcu_chassis4_wd_mode_fb(::pix_robobus_driver_msgs::msg::VaDriveStaFb::_vcu_chassis4_wd_mode_fb_type arg)
  {
    msg_.vcu_chassis4_wd_mode_fb = std::move(arg);
    return Init_VaDriveStaFb_vcu_chassis_speed_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaDriveStaFb msg_;
};

class Init_VaDriveStaFb_vcu_chassis_gear_fb
{
public:
  explicit Init_VaDriveStaFb_vcu_chassis_gear_fb(::pix_robobus_driver_msgs::msg::VaDriveStaFb & msg)
  : msg_(msg)
  {}
  Init_VaDriveStaFb_vcu_chassis4_wd_mode_fb vcu_chassis_gear_fb(::pix_robobus_driver_msgs::msg::VaDriveStaFb::_vcu_chassis_gear_fb_type arg)
  {
    msg_.vcu_chassis_gear_fb = std::move(arg);
    return Init_VaDriveStaFb_vcu_chassis4_wd_mode_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaDriveStaFb msg_;
};

class Init_VaDriveStaFb_vcu_chassis_driver_mode_sta
{
public:
  explicit Init_VaDriveStaFb_vcu_chassis_driver_mode_sta(::pix_robobus_driver_msgs::msg::VaDriveStaFb & msg)
  : msg_(msg)
  {}
  Init_VaDriveStaFb_vcu_chassis_gear_fb vcu_chassis_driver_mode_sta(::pix_robobus_driver_msgs::msg::VaDriveStaFb::_vcu_chassis_driver_mode_sta_type arg)
  {
    msg_.vcu_chassis_driver_mode_sta = std::move(arg);
    return Init_VaDriveStaFb_vcu_chassis_gear_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaDriveStaFb msg_;
};

class Init_VaDriveStaFb_vcu_chassis_diver_slopover
{
public:
  explicit Init_VaDriveStaFb_vcu_chassis_diver_slopover(::pix_robobus_driver_msgs::msg::VaDriveStaFb & msg)
  : msg_(msg)
  {}
  Init_VaDriveStaFb_vcu_chassis_driver_mode_sta vcu_chassis_diver_slopover(::pix_robobus_driver_msgs::msg::VaDriveStaFb::_vcu_chassis_diver_slopover_type arg)
  {
    msg_.vcu_chassis_diver_slopover = std::move(arg);
    return Init_VaDriveStaFb_vcu_chassis_driver_mode_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaDriveStaFb msg_;
};

class Init_VaDriveStaFb_vcu_chassis_driver_en_sta
{
public:
  explicit Init_VaDriveStaFb_vcu_chassis_driver_en_sta(::pix_robobus_driver_msgs::msg::VaDriveStaFb & msg)
  : msg_(msg)
  {}
  Init_VaDriveStaFb_vcu_chassis_diver_slopover vcu_chassis_driver_en_sta(::pix_robobus_driver_msgs::msg::VaDriveStaFb::_vcu_chassis_driver_en_sta_type arg)
  {
    msg_.vcu_chassis_driver_en_sta = std::move(arg);
    return Init_VaDriveStaFb_vcu_chassis_diver_slopover(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaDriveStaFb msg_;
};

class Init_VaDriveStaFb_header
{
public:
  Init_VaDriveStaFb_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VaDriveStaFb_vcu_chassis_driver_en_sta header(::pix_robobus_driver_msgs::msg::VaDriveStaFb::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VaDriveStaFb_vcu_chassis_driver_en_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaDriveStaFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::VaDriveStaFb>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_VaDriveStaFb_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_DRIVE_STA_FB__BUILDER_HPP_
