// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/VinResp1.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP1__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP1__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/vin_resp1__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_VinResp1_vin07
{
public:
  explicit Init_VinResp1_vin07(::pix_robobus_driver_msgs::msg::VinResp1 & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::VinResp1 vin07(::pix_robobus_driver_msgs::msg::VinResp1::_vin07_type arg)
  {
    msg_.vin07 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VinResp1 msg_;
};

class Init_VinResp1_vin06
{
public:
  explicit Init_VinResp1_vin06(::pix_robobus_driver_msgs::msg::VinResp1 & msg)
  : msg_(msg)
  {}
  Init_VinResp1_vin07 vin06(::pix_robobus_driver_msgs::msg::VinResp1::_vin06_type arg)
  {
    msg_.vin06 = std::move(arg);
    return Init_VinResp1_vin07(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VinResp1 msg_;
};

class Init_VinResp1_vin05
{
public:
  explicit Init_VinResp1_vin05(::pix_robobus_driver_msgs::msg::VinResp1 & msg)
  : msg_(msg)
  {}
  Init_VinResp1_vin06 vin05(::pix_robobus_driver_msgs::msg::VinResp1::_vin05_type arg)
  {
    msg_.vin05 = std::move(arg);
    return Init_VinResp1_vin06(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VinResp1 msg_;
};

class Init_VinResp1_vin04
{
public:
  explicit Init_VinResp1_vin04(::pix_robobus_driver_msgs::msg::VinResp1 & msg)
  : msg_(msg)
  {}
  Init_VinResp1_vin05 vin04(::pix_robobus_driver_msgs::msg::VinResp1::_vin04_type arg)
  {
    msg_.vin04 = std::move(arg);
    return Init_VinResp1_vin05(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VinResp1 msg_;
};

class Init_VinResp1_vin03
{
public:
  explicit Init_VinResp1_vin03(::pix_robobus_driver_msgs::msg::VinResp1 & msg)
  : msg_(msg)
  {}
  Init_VinResp1_vin04 vin03(::pix_robobus_driver_msgs::msg::VinResp1::_vin03_type arg)
  {
    msg_.vin03 = std::move(arg);
    return Init_VinResp1_vin04(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VinResp1 msg_;
};

class Init_VinResp1_vin02
{
public:
  explicit Init_VinResp1_vin02(::pix_robobus_driver_msgs::msg::VinResp1 & msg)
  : msg_(msg)
  {}
  Init_VinResp1_vin03 vin02(::pix_robobus_driver_msgs::msg::VinResp1::_vin02_type arg)
  {
    msg_.vin02 = std::move(arg);
    return Init_VinResp1_vin03(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VinResp1 msg_;
};

class Init_VinResp1_vin01
{
public:
  explicit Init_VinResp1_vin01(::pix_robobus_driver_msgs::msg::VinResp1 & msg)
  : msg_(msg)
  {}
  Init_VinResp1_vin02 vin01(::pix_robobus_driver_msgs::msg::VinResp1::_vin01_type arg)
  {
    msg_.vin01 = std::move(arg);
    return Init_VinResp1_vin02(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VinResp1 msg_;
};

class Init_VinResp1_vin00
{
public:
  explicit Init_VinResp1_vin00(::pix_robobus_driver_msgs::msg::VinResp1 & msg)
  : msg_(msg)
  {}
  Init_VinResp1_vin01 vin00(::pix_robobus_driver_msgs::msg::VinResp1::_vin00_type arg)
  {
    msg_.vin00 = std::move(arg);
    return Init_VinResp1_vin01(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VinResp1 msg_;
};

class Init_VinResp1_header
{
public:
  Init_VinResp1_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VinResp1_vin00 header(::pix_robobus_driver_msgs::msg::VinResp1::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VinResp1_vin00(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VinResp1 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::VinResp1>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_VinResp1_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP1__BUILDER_HPP_
