// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/DpMessgae5.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__DP_MESSGAE5__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__DP_MESSGAE5__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/dp_messgae5__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_DpMessgae5_vcu_reserve41
{
public:
  explicit Init_DpMessgae5_vcu_reserve41(::pix_robobus_driver_msgs::msg::DpMessgae5 & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::DpMessgae5 vcu_reserve41(::pix_robobus_driver_msgs::msg::DpMessgae5::_vcu_reserve41_type arg)
  {
    msg_.vcu_reserve41 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::DpMessgae5 msg_;
};

class Init_DpMessgae5_vcu_reserve33
{
public:
  explicit Init_DpMessgae5_vcu_reserve33(::pix_robobus_driver_msgs::msg::DpMessgae5 & msg)
  : msg_(msg)
  {}
  Init_DpMessgae5_vcu_reserve41 vcu_reserve33(::pix_robobus_driver_msgs::msg::DpMessgae5::_vcu_reserve33_type arg)
  {
    msg_.vcu_reserve33 = std::move(arg);
    return Init_DpMessgae5_vcu_reserve41(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::DpMessgae5 msg_;
};

class Init_DpMessgae5_atmospherelightbrightness
{
public:
  explicit Init_DpMessgae5_atmospherelightbrightness(::pix_robobus_driver_msgs::msg::DpMessgae5 & msg)
  : msg_(msg)
  {}
  Init_DpMessgae5_vcu_reserve33 atmospherelightbrightness(::pix_robobus_driver_msgs::msg::DpMessgae5::_atmospherelightbrightness_type arg)
  {
    msg_.atmospherelightbrightness = std::move(arg);
    return Init_DpMessgae5_vcu_reserve33(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::DpMessgae5 msg_;
};

class Init_DpMessgae5_pwn_blue_sta
{
public:
  explicit Init_DpMessgae5_pwn_blue_sta(::pix_robobus_driver_msgs::msg::DpMessgae5 & msg)
  : msg_(msg)
  {}
  Init_DpMessgae5_atmospherelightbrightness pwn_blue_sta(::pix_robobus_driver_msgs::msg::DpMessgae5::_pwn_blue_sta_type arg)
  {
    msg_.pwn_blue_sta = std::move(arg);
    return Init_DpMessgae5_atmospherelightbrightness(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::DpMessgae5 msg_;
};

class Init_DpMessgae5_pwn_green_sta
{
public:
  explicit Init_DpMessgae5_pwn_green_sta(::pix_robobus_driver_msgs::msg::DpMessgae5 & msg)
  : msg_(msg)
  {}
  Init_DpMessgae5_pwn_blue_sta pwn_green_sta(::pix_robobus_driver_msgs::msg::DpMessgae5::_pwn_green_sta_type arg)
  {
    msg_.pwn_green_sta = std::move(arg);
    return Init_DpMessgae5_pwn_blue_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::DpMessgae5 msg_;
};

class Init_DpMessgae5_pwn_red_sta
{
public:
  explicit Init_DpMessgae5_pwn_red_sta(::pix_robobus_driver_msgs::msg::DpMessgae5 & msg)
  : msg_(msg)
  {}
  Init_DpMessgae5_pwn_green_sta pwn_red_sta(::pix_robobus_driver_msgs::msg::DpMessgae5::_pwn_red_sta_type arg)
  {
    msg_.pwn_red_sta = std::move(arg);
    return Init_DpMessgae5_pwn_green_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::DpMessgae5 msg_;
};

class Init_DpMessgae5_header
{
public:
  Init_DpMessgae5_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DpMessgae5_pwn_red_sta header(::pix_robobus_driver_msgs::msg::DpMessgae5::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DpMessgae5_pwn_red_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::DpMessgae5 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::DpMessgae5>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_DpMessgae5_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__DP_MESSGAE5__BUILDER_HPP_
