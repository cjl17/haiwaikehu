// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/VinResp2.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP2__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/vin_resp2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_VinResp2_vin15
{
public:
  explicit Init_VinResp2_vin15(::pix_robobus_driver_msgs::msg::VinResp2 & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::VinResp2 vin15(::pix_robobus_driver_msgs::msg::VinResp2::_vin15_type arg)
  {
    msg_.vin15 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VinResp2 msg_;
};

class Init_VinResp2_vin14
{
public:
  explicit Init_VinResp2_vin14(::pix_robobus_driver_msgs::msg::VinResp2 & msg)
  : msg_(msg)
  {}
  Init_VinResp2_vin15 vin14(::pix_robobus_driver_msgs::msg::VinResp2::_vin14_type arg)
  {
    msg_.vin14 = std::move(arg);
    return Init_VinResp2_vin15(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VinResp2 msg_;
};

class Init_VinResp2_vin13
{
public:
  explicit Init_VinResp2_vin13(::pix_robobus_driver_msgs::msg::VinResp2 & msg)
  : msg_(msg)
  {}
  Init_VinResp2_vin14 vin13(::pix_robobus_driver_msgs::msg::VinResp2::_vin13_type arg)
  {
    msg_.vin13 = std::move(arg);
    return Init_VinResp2_vin14(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VinResp2 msg_;
};

class Init_VinResp2_vin12
{
public:
  explicit Init_VinResp2_vin12(::pix_robobus_driver_msgs::msg::VinResp2 & msg)
  : msg_(msg)
  {}
  Init_VinResp2_vin13 vin12(::pix_robobus_driver_msgs::msg::VinResp2::_vin12_type arg)
  {
    msg_.vin12 = std::move(arg);
    return Init_VinResp2_vin13(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VinResp2 msg_;
};

class Init_VinResp2_vin11
{
public:
  explicit Init_VinResp2_vin11(::pix_robobus_driver_msgs::msg::VinResp2 & msg)
  : msg_(msg)
  {}
  Init_VinResp2_vin12 vin11(::pix_robobus_driver_msgs::msg::VinResp2::_vin11_type arg)
  {
    msg_.vin11 = std::move(arg);
    return Init_VinResp2_vin12(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VinResp2 msg_;
};

class Init_VinResp2_vin10
{
public:
  explicit Init_VinResp2_vin10(::pix_robobus_driver_msgs::msg::VinResp2 & msg)
  : msg_(msg)
  {}
  Init_VinResp2_vin11 vin10(::pix_robobus_driver_msgs::msg::VinResp2::_vin10_type arg)
  {
    msg_.vin10 = std::move(arg);
    return Init_VinResp2_vin11(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VinResp2 msg_;
};

class Init_VinResp2_vin09
{
public:
  explicit Init_VinResp2_vin09(::pix_robobus_driver_msgs::msg::VinResp2 & msg)
  : msg_(msg)
  {}
  Init_VinResp2_vin10 vin09(::pix_robobus_driver_msgs::msg::VinResp2::_vin09_type arg)
  {
    msg_.vin09 = std::move(arg);
    return Init_VinResp2_vin10(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VinResp2 msg_;
};

class Init_VinResp2_vin08
{
public:
  explicit Init_VinResp2_vin08(::pix_robobus_driver_msgs::msg::VinResp2 & msg)
  : msg_(msg)
  {}
  Init_VinResp2_vin09 vin08(::pix_robobus_driver_msgs::msg::VinResp2::_vin08_type arg)
  {
    msg_.vin08 = std::move(arg);
    return Init_VinResp2_vin09(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VinResp2 msg_;
};

class Init_VinResp2_header
{
public:
  Init_VinResp2_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VinResp2_vin08 header(::pix_robobus_driver_msgs::msg::VinResp2::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VinResp2_vin08(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VinResp2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::VinResp2>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_VinResp2_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP2__BUILDER_HPP_
