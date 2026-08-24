// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/VinResp3.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP3__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP3__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/vin_resp3__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_VinResp3_vin16
{
public:
  explicit Init_VinResp3_vin16(::pix_robobus_driver_msgs::msg::VinResp3 & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::VinResp3 vin16(::pix_robobus_driver_msgs::msg::VinResp3::_vin16_type arg)
  {
    msg_.vin16 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VinResp3 msg_;
};

class Init_VinResp3_header
{
public:
  Init_VinResp3_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VinResp3_vin16 header(::pix_robobus_driver_msgs::msg::VinResp3::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VinResp3_vin16(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VinResp3 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::VinResp3>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_VinResp3_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP3__BUILDER_HPP_
