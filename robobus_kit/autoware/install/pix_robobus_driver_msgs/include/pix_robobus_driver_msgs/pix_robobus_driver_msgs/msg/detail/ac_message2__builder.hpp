// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/AcMessage2.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AC_MESSAGE2__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AC_MESSAGE2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/ac_message2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_AcMessage2_ac_software
{
public:
  explicit Init_AcMessage2_ac_software(::pix_robobus_driver_msgs::msg::AcMessage2 & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::AcMessage2 ac_software(::pix_robobus_driver_msgs::msg::AcMessage2::_ac_software_type arg)
  {
    msg_.ac_software = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AcMessage2 msg_;
};

class Init_AcMessage2_ac_hardware
{
public:
  explicit Init_AcMessage2_ac_hardware(::pix_robobus_driver_msgs::msg::AcMessage2 & msg)
  : msg_(msg)
  {}
  Init_AcMessage2_ac_software ac_hardware(::pix_robobus_driver_msgs::msg::AcMessage2::_ac_hardware_type arg)
  {
    msg_.ac_hardware = std::move(arg);
    return Init_AcMessage2_ac_software(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AcMessage2 msg_;
};

class Init_AcMessage2_ac_in_temp
{
public:
  explicit Init_AcMessage2_ac_in_temp(::pix_robobus_driver_msgs::msg::AcMessage2 & msg)
  : msg_(msg)
  {}
  Init_AcMessage2_ac_hardware ac_in_temp(::pix_robobus_driver_msgs::msg::AcMessage2::_ac_in_temp_type arg)
  {
    msg_.ac_in_temp = std::move(arg);
    return Init_AcMessage2_ac_hardware(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AcMessage2 msg_;
};

class Init_AcMessage2_ac_out_temp
{
public:
  explicit Init_AcMessage2_ac_out_temp(::pix_robobus_driver_msgs::msg::AcMessage2 & msg)
  : msg_(msg)
  {}
  Init_AcMessage2_ac_in_temp ac_out_temp(::pix_robobus_driver_msgs::msg::AcMessage2::_ac_out_temp_type arg)
  {
    msg_.ac_out_temp = std::move(arg);
    return Init_AcMessage2_ac_in_temp(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AcMessage2 msg_;
};

class Init_AcMessage2_fan_temp
{
public:
  explicit Init_AcMessage2_fan_temp(::pix_robobus_driver_msgs::msg::AcMessage2 & msg)
  : msg_(msg)
  {}
  Init_AcMessage2_ac_out_temp fan_temp(::pix_robobus_driver_msgs::msg::AcMessage2::_fan_temp_type arg)
  {
    msg_.fan_temp = std::move(arg);
    return Init_AcMessage2_ac_out_temp(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AcMessage2 msg_;
};

class Init_AcMessage2_header
{
public:
  Init_AcMessage2_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcMessage2_fan_temp header(::pix_robobus_driver_msgs::msg::AcMessage2::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AcMessage2_fan_temp(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AcMessage2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::AcMessage2>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_AcMessage2_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AC_MESSAGE2__BUILDER_HPP_
