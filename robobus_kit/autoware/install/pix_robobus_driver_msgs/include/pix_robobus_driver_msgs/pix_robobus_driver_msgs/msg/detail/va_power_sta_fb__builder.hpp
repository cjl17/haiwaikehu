// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaPowerStaFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_POWER_STA_FB__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_POWER_STA_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/va_power_sta_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_VaPowerStaFb_vcu_chassis_bms_reserved2
{
public:
  explicit Init_VaPowerStaFb_vcu_chassis_bms_reserved2(::pix_robobus_driver_msgs::msg::VaPowerStaFb & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::VaPowerStaFb vcu_chassis_bms_reserved2(::pix_robobus_driver_msgs::msg::VaPowerStaFb::_vcu_chassis_bms_reserved2_type arg)
  {
    msg_.vcu_chassis_bms_reserved2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaPowerStaFb msg_;
};

class Init_VaPowerStaFb_vcu_chassis_bms_max_temp
{
public:
  explicit Init_VaPowerStaFb_vcu_chassis_bms_max_temp(::pix_robobus_driver_msgs::msg::VaPowerStaFb & msg)
  : msg_(msg)
  {}
  Init_VaPowerStaFb_vcu_chassis_bms_reserved2 vcu_chassis_bms_max_temp(::pix_robobus_driver_msgs::msg::VaPowerStaFb::_vcu_chassis_bms_max_temp_type arg)
  {
    msg_.vcu_chassis_bms_max_temp = std::move(arg);
    return Init_VaPowerStaFb_vcu_chassis_bms_reserved2(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaPowerStaFb msg_;
};

class Init_VaPowerStaFb_vcu_chassis_power_curr_fb
{
public:
  explicit Init_VaPowerStaFb_vcu_chassis_power_curr_fb(::pix_robobus_driver_msgs::msg::VaPowerStaFb & msg)
  : msg_(msg)
  {}
  Init_VaPowerStaFb_vcu_chassis_bms_max_temp vcu_chassis_power_curr_fb(::pix_robobus_driver_msgs::msg::VaPowerStaFb::_vcu_chassis_power_curr_fb_type arg)
  {
    msg_.vcu_chassis_power_curr_fb = std::move(arg);
    return Init_VaPowerStaFb_vcu_chassis_bms_max_temp(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaPowerStaFb msg_;
};

class Init_VaPowerStaFb_vcu_chassis_power_volt_fb
{
public:
  explicit Init_VaPowerStaFb_vcu_chassis_power_volt_fb(::pix_robobus_driver_msgs::msg::VaPowerStaFb & msg)
  : msg_(msg)
  {}
  Init_VaPowerStaFb_vcu_chassis_power_curr_fb vcu_chassis_power_volt_fb(::pix_robobus_driver_msgs::msg::VaPowerStaFb::_vcu_chassis_power_volt_fb_type arg)
  {
    msg_.vcu_chassis_power_volt_fb = std::move(arg);
    return Init_VaPowerStaFb_vcu_chassis_power_curr_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaPowerStaFb msg_;
};

class Init_VaPowerStaFb_vcu_chassis_power_soc_fb
{
public:
  explicit Init_VaPowerStaFb_vcu_chassis_power_soc_fb(::pix_robobus_driver_msgs::msg::VaPowerStaFb & msg)
  : msg_(msg)
  {}
  Init_VaPowerStaFb_vcu_chassis_power_volt_fb vcu_chassis_power_soc_fb(::pix_robobus_driver_msgs::msg::VaPowerStaFb::_vcu_chassis_power_soc_fb_type arg)
  {
    msg_.vcu_chassis_power_soc_fb = std::move(arg);
    return Init_VaPowerStaFb_vcu_chassis_power_volt_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaPowerStaFb msg_;
};

class Init_VaPowerStaFb_vcu_chassis_power_charge_sock_sta
{
public:
  explicit Init_VaPowerStaFb_vcu_chassis_power_charge_sock_sta(::pix_robobus_driver_msgs::msg::VaPowerStaFb & msg)
  : msg_(msg)
  {}
  Init_VaPowerStaFb_vcu_chassis_power_soc_fb vcu_chassis_power_charge_sock_sta(::pix_robobus_driver_msgs::msg::VaPowerStaFb::_vcu_chassis_power_charge_sock_sta_type arg)
  {
    msg_.vcu_chassis_power_charge_sock_sta = std::move(arg);
    return Init_VaPowerStaFb_vcu_chassis_power_soc_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaPowerStaFb msg_;
};

class Init_VaPowerStaFb_vcu_chassis_power_charge_sta
{
public:
  explicit Init_VaPowerStaFb_vcu_chassis_power_charge_sta(::pix_robobus_driver_msgs::msg::VaPowerStaFb & msg)
  : msg_(msg)
  {}
  Init_VaPowerStaFb_vcu_chassis_power_charge_sock_sta vcu_chassis_power_charge_sta(::pix_robobus_driver_msgs::msg::VaPowerStaFb::_vcu_chassis_power_charge_sta_type arg)
  {
    msg_.vcu_chassis_power_charge_sta = std::move(arg);
    return Init_VaPowerStaFb_vcu_chassis_power_charge_sock_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaPowerStaFb msg_;
};

class Init_VaPowerStaFb_vcu_chassis_bms_reserved1
{
public:
  explicit Init_VaPowerStaFb_vcu_chassis_bms_reserved1(::pix_robobus_driver_msgs::msg::VaPowerStaFb & msg)
  : msg_(msg)
  {}
  Init_VaPowerStaFb_vcu_chassis_power_charge_sta vcu_chassis_bms_reserved1(::pix_robobus_driver_msgs::msg::VaPowerStaFb::_vcu_chassis_bms_reserved1_type arg)
  {
    msg_.vcu_chassis_bms_reserved1 = std::move(arg);
    return Init_VaPowerStaFb_vcu_chassis_power_charge_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaPowerStaFb msg_;
};

class Init_VaPowerStaFb_header
{
public:
  Init_VaPowerStaFb_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VaPowerStaFb_vcu_chassis_bms_reserved1 header(::pix_robobus_driver_msgs::msg::VaPowerStaFb::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VaPowerStaFb_vcu_chassis_bms_reserved1(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaPowerStaFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::VaPowerStaFb>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_VaPowerStaFb_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_POWER_STA_FB__BUILDER_HPP_
