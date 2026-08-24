// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaBrakeStaFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_BRAKE_STA_FB__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_BRAKE_STA_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/va_brake_sta_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_VaBrakeStaFb_vcu_brake_check_sta
{
public:
  explicit Init_VaBrakeStaFb_vcu_brake_check_sta(::pix_robobus_driver_msgs::msg::VaBrakeStaFb & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::VaBrakeStaFb vcu_brake_check_sta(::pix_robobus_driver_msgs::msg::VaBrakeStaFb::_vcu_brake_check_sta_type arg)
  {
    msg_.vcu_brake_check_sta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaBrakeStaFb msg_;
};

class Init_VaBrakeStaFb_vcu_brake_life
{
public:
  explicit Init_VaBrakeStaFb_vcu_brake_life(::pix_robobus_driver_msgs::msg::VaBrakeStaFb & msg)
  : msg_(msg)
  {}
  Init_VaBrakeStaFb_vcu_brake_check_sta vcu_brake_life(::pix_robobus_driver_msgs::msg::VaBrakeStaFb::_vcu_brake_life_type arg)
  {
    msg_.vcu_brake_life = std::move(arg);
    return Init_VaBrakeStaFb_vcu_brake_check_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaBrakeStaFb msg_;
};

class Init_VaBrakeStaFb_vcu_chassis_brake_pressure_fb
{
public:
  explicit Init_VaBrakeStaFb_vcu_chassis_brake_pressure_fb(::pix_robobus_driver_msgs::msg::VaBrakeStaFb & msg)
  : msg_(msg)
  {}
  Init_VaBrakeStaFb_vcu_brake_life vcu_chassis_brake_pressure_fb(::pix_robobus_driver_msgs::msg::VaBrakeStaFb::_vcu_chassis_brake_pressure_fb_type arg)
  {
    msg_.vcu_chassis_brake_pressure_fb = std::move(arg);
    return Init_VaBrakeStaFb_vcu_brake_life(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaBrakeStaFb msg_;
};

class Init_VaBrakeStaFb_vcu_aeb_trigger_sta_fb
{
public:
  explicit Init_VaBrakeStaFb_vcu_aeb_trigger_sta_fb(::pix_robobus_driver_msgs::msg::VaBrakeStaFb & msg)
  : msg_(msg)
  {}
  Init_VaBrakeStaFb_vcu_chassis_brake_pressure_fb vcu_aeb_trigger_sta_fb(::pix_robobus_driver_msgs::msg::VaBrakeStaFb::_vcu_aeb_trigger_sta_fb_type arg)
  {
    msg_.vcu_aeb_trigger_sta_fb = std::move(arg);
    return Init_VaBrakeStaFb_vcu_chassis_brake_pressure_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaBrakeStaFb msg_;
};

class Init_VaBrakeStaFb_vcu_aeb_en_sta_fb
{
public:
  explicit Init_VaBrakeStaFb_vcu_aeb_en_sta_fb(::pix_robobus_driver_msgs::msg::VaBrakeStaFb & msg)
  : msg_(msg)
  {}
  Init_VaBrakeStaFb_vcu_aeb_trigger_sta_fb vcu_aeb_en_sta_fb(::pix_robobus_driver_msgs::msg::VaBrakeStaFb::_vcu_aeb_en_sta_fb_type arg)
  {
    msg_.vcu_aeb_en_sta_fb = std::move(arg);
    return Init_VaBrakeStaFb_vcu_aeb_trigger_sta_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaBrakeStaFb msg_;
};

class Init_VaBrakeStaFb_vcu_brake_pedal_req_fb
{
public:
  explicit Init_VaBrakeStaFb_vcu_brake_pedal_req_fb(::pix_robobus_driver_msgs::msg::VaBrakeStaFb & msg)
  : msg_(msg)
  {}
  Init_VaBrakeStaFb_vcu_aeb_en_sta_fb vcu_brake_pedal_req_fb(::pix_robobus_driver_msgs::msg::VaBrakeStaFb::_vcu_brake_pedal_req_fb_type arg)
  {
    msg_.vcu_brake_pedal_req_fb = std::move(arg);
    return Init_VaBrakeStaFb_vcu_aeb_en_sta_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaBrakeStaFb msg_;
};

class Init_VaBrakeStaFb_vcu_chassis_brake_padl_fb
{
public:
  explicit Init_VaBrakeStaFb_vcu_chassis_brake_padl_fb(::pix_robobus_driver_msgs::msg::VaBrakeStaFb & msg)
  : msg_(msg)
  {}
  Init_VaBrakeStaFb_vcu_brake_pedal_req_fb vcu_chassis_brake_padl_fb(::pix_robobus_driver_msgs::msg::VaBrakeStaFb::_vcu_chassis_brake_padl_fb_type arg)
  {
    msg_.vcu_chassis_brake_padl_fb = std::move(arg);
    return Init_VaBrakeStaFb_vcu_brake_pedal_req_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaBrakeStaFb msg_;
};

class Init_VaBrakeStaFb_vcu_chassis_brake_communication_lost
{
public:
  explicit Init_VaBrakeStaFb_vcu_chassis_brake_communication_lost(::pix_robobus_driver_msgs::msg::VaBrakeStaFb & msg)
  : msg_(msg)
  {}
  Init_VaBrakeStaFb_vcu_chassis_brake_padl_fb vcu_chassis_brake_communication_lost(::pix_robobus_driver_msgs::msg::VaBrakeStaFb::_vcu_chassis_brake_communication_lost_type arg)
  {
    msg_.vcu_chassis_brake_communication_lost = std::move(arg);
    return Init_VaBrakeStaFb_vcu_chassis_brake_padl_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaBrakeStaFb msg_;
};

class Init_VaBrakeStaFb_vcu_chassis_epb_fb
{
public:
  explicit Init_VaBrakeStaFb_vcu_chassis_epb_fb(::pix_robobus_driver_msgs::msg::VaBrakeStaFb & msg)
  : msg_(msg)
  {}
  Init_VaBrakeStaFb_vcu_chassis_brake_communication_lost vcu_chassis_epb_fb(::pix_robobus_driver_msgs::msg::VaBrakeStaFb::_vcu_chassis_epb_fb_type arg)
  {
    msg_.vcu_chassis_epb_fb = std::move(arg);
    return Init_VaBrakeStaFb_vcu_chassis_brake_communication_lost(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaBrakeStaFb msg_;
};

class Init_VaBrakeStaFb_vcu_vehicle_brake_lamp_fb
{
public:
  explicit Init_VaBrakeStaFb_vcu_vehicle_brake_lamp_fb(::pix_robobus_driver_msgs::msg::VaBrakeStaFb & msg)
  : msg_(msg)
  {}
  Init_VaBrakeStaFb_vcu_chassis_epb_fb vcu_vehicle_brake_lamp_fb(::pix_robobus_driver_msgs::msg::VaBrakeStaFb::_vcu_vehicle_brake_lamp_fb_type arg)
  {
    msg_.vcu_vehicle_brake_lamp_fb = std::move(arg);
    return Init_VaBrakeStaFb_vcu_chassis_epb_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaBrakeStaFb msg_;
};

class Init_VaBrakeStaFb_vcu_chassis_brake_en_sta
{
public:
  explicit Init_VaBrakeStaFb_vcu_chassis_brake_en_sta(::pix_robobus_driver_msgs::msg::VaBrakeStaFb & msg)
  : msg_(msg)
  {}
  Init_VaBrakeStaFb_vcu_vehicle_brake_lamp_fb vcu_chassis_brake_en_sta(::pix_robobus_driver_msgs::msg::VaBrakeStaFb::_vcu_chassis_brake_en_sta_type arg)
  {
    msg_.vcu_chassis_brake_en_sta = std::move(arg);
    return Init_VaBrakeStaFb_vcu_vehicle_brake_lamp_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaBrakeStaFb msg_;
};

class Init_VaBrakeStaFb_header
{
public:
  Init_VaBrakeStaFb_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VaBrakeStaFb_vcu_chassis_brake_en_sta header(::pix_robobus_driver_msgs::msg::VaBrakeStaFb::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VaBrakeStaFb_vcu_chassis_brake_en_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaBrakeStaFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::VaBrakeStaFb>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_VaBrakeStaFb_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_BRAKE_STA_FB__BUILDER_HPP_
