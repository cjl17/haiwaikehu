// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaSteerStaFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_STEER_STA_FB__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_STEER_STA_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/va_steer_sta_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_VaSteerStaFb_vcu_steer_check_sta
{
public:
  explicit Init_VaSteerStaFb_vcu_steer_check_sta(::pix_robobus_driver_msgs::msg::VaSteerStaFb & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::VaSteerStaFb vcu_steer_check_sta(::pix_robobus_driver_msgs::msg::VaSteerStaFb::_vcu_steer_check_sta_type arg)
  {
    msg_.vcu_steer_check_sta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaSteerStaFb msg_;
};

class Init_VaSteerStaFb_vcu_steer_life
{
public:
  explicit Init_VaSteerStaFb_vcu_steer_life(::pix_robobus_driver_msgs::msg::VaSteerStaFb & msg)
  : msg_(msg)
  {}
  Init_VaSteerStaFb_vcu_steer_check_sta vcu_steer_life(::pix_robobus_driver_msgs::msg::VaSteerStaFb::_vcu_steer_life_type arg)
  {
    msg_.vcu_steer_life = std::move(arg);
    return Init_VaSteerStaFb_vcu_steer_check_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaSteerStaFb msg_;
};

class Init_VaSteerStaFb_vcu_chassis_steer_angle_speed_fb
{
public:
  explicit Init_VaSteerStaFb_vcu_chassis_steer_angle_speed_fb(::pix_robobus_driver_msgs::msg::VaSteerStaFb & msg)
  : msg_(msg)
  {}
  Init_VaSteerStaFb_vcu_steer_life vcu_chassis_steer_angle_speed_fb(::pix_robobus_driver_msgs::msg::VaSteerStaFb::_vcu_chassis_steer_angle_speed_fb_type arg)
  {
    msg_.vcu_chassis_steer_angle_speed_fb = std::move(arg);
    return Init_VaSteerStaFb_vcu_steer_life(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaSteerStaFb msg_;
};

class Init_VaSteerStaFb_vcu_chassis_steer_angle_rear_fb
{
public:
  explicit Init_VaSteerStaFb_vcu_chassis_steer_angle_rear_fb(::pix_robobus_driver_msgs::msg::VaSteerStaFb & msg)
  : msg_(msg)
  {}
  Init_VaSteerStaFb_vcu_chassis_steer_angle_speed_fb vcu_chassis_steer_angle_rear_fb(::pix_robobus_driver_msgs::msg::VaSteerStaFb::_vcu_chassis_steer_angle_rear_fb_type arg)
  {
    msg_.vcu_chassis_steer_angle_rear_fb = std::move(arg);
    return Init_VaSteerStaFb_vcu_chassis_steer_angle_speed_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaSteerStaFb msg_;
};

class Init_VaSteerStaFb_vcu_chassis_steer_angle_fb
{
public:
  explicit Init_VaSteerStaFb_vcu_chassis_steer_angle_fb(::pix_robobus_driver_msgs::msg::VaSteerStaFb & msg)
  : msg_(msg)
  {}
  Init_VaSteerStaFb_vcu_chassis_steer_angle_rear_fb vcu_chassis_steer_angle_fb(::pix_robobus_driver_msgs::msg::VaSteerStaFb::_vcu_chassis_steer_angle_fb_type arg)
  {
    msg_.vcu_chassis_steer_angle_fb = std::move(arg);
    return Init_VaSteerStaFb_vcu_chassis_steer_angle_rear_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaSteerStaFb msg_;
};

class Init_VaSteerStaFb_vcu_chassis_steer_communication_lost
{
public:
  explicit Init_VaSteerStaFb_vcu_chassis_steer_communication_lost(::pix_robobus_driver_msgs::msg::VaSteerStaFb & msg)
  : msg_(msg)
  {}
  Init_VaSteerStaFb_vcu_chassis_steer_angle_fb vcu_chassis_steer_communication_lost(::pix_robobus_driver_msgs::msg::VaSteerStaFb::_vcu_chassis_steer_communication_lost_type arg)
  {
    msg_.vcu_chassis_steer_communication_lost = std::move(arg);
    return Init_VaSteerStaFb_vcu_chassis_steer_angle_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaSteerStaFb msg_;
};

class Init_VaSteerStaFb_vcu_chassis_steer_mode_fb
{
public:
  explicit Init_VaSteerStaFb_vcu_chassis_steer_mode_fb(::pix_robobus_driver_msgs::msg::VaSteerStaFb & msg)
  : msg_(msg)
  {}
  Init_VaSteerStaFb_vcu_chassis_steer_communication_lost vcu_chassis_steer_mode_fb(::pix_robobus_driver_msgs::msg::VaSteerStaFb::_vcu_chassis_steer_mode_fb_type arg)
  {
    msg_.vcu_chassis_steer_mode_fb = std::move(arg);
    return Init_VaSteerStaFb_vcu_chassis_steer_communication_lost(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaSteerStaFb msg_;
};

class Init_VaSteerStaFb_vcu_chassis_steer_work_mode
{
public:
  explicit Init_VaSteerStaFb_vcu_chassis_steer_work_mode(::pix_robobus_driver_msgs::msg::VaSteerStaFb & msg)
  : msg_(msg)
  {}
  Init_VaSteerStaFb_vcu_chassis_steer_mode_fb vcu_chassis_steer_work_mode(::pix_robobus_driver_msgs::msg::VaSteerStaFb::_vcu_chassis_steer_work_mode_type arg)
  {
    msg_.vcu_chassis_steer_work_mode = std::move(arg);
    return Init_VaSteerStaFb_vcu_chassis_steer_mode_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaSteerStaFb msg_;
};

class Init_VaSteerStaFb_vcu_chassis_steer_slopover
{
public:
  explicit Init_VaSteerStaFb_vcu_chassis_steer_slopover(::pix_robobus_driver_msgs::msg::VaSteerStaFb & msg)
  : msg_(msg)
  {}
  Init_VaSteerStaFb_vcu_chassis_steer_work_mode vcu_chassis_steer_slopover(::pix_robobus_driver_msgs::msg::VaSteerStaFb::_vcu_chassis_steer_slopover_type arg)
  {
    msg_.vcu_chassis_steer_slopover = std::move(arg);
    return Init_VaSteerStaFb_vcu_chassis_steer_work_mode(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaSteerStaFb msg_;
};

class Init_VaSteerStaFb_vcu_chassis_steer_en_sta
{
public:
  explicit Init_VaSteerStaFb_vcu_chassis_steer_en_sta(::pix_robobus_driver_msgs::msg::VaSteerStaFb & msg)
  : msg_(msg)
  {}
  Init_VaSteerStaFb_vcu_chassis_steer_slopover vcu_chassis_steer_en_sta(::pix_robobus_driver_msgs::msg::VaSteerStaFb::_vcu_chassis_steer_en_sta_type arg)
  {
    msg_.vcu_chassis_steer_en_sta = std::move(arg);
    return Init_VaSteerStaFb_vcu_chassis_steer_slopover(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaSteerStaFb msg_;
};

class Init_VaSteerStaFb_header
{
public:
  Init_VaSteerStaFb_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VaSteerStaFb_vcu_chassis_steer_en_sta header(::pix_robobus_driver_msgs::msg::VaSteerStaFb::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VaSteerStaFb_vcu_chassis_steer_en_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaSteerStaFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::VaSteerStaFb>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_VaSteerStaFb_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_STEER_STA_FB__BUILDER_HPP_
