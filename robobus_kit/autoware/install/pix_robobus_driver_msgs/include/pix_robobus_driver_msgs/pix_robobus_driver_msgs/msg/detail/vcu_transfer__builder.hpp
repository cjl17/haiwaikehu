// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/VcuTransfer.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VCU_TRANSFER__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VCU_TRANSFER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/vcu_transfer__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_VcuTransfer_ac_in_temp
{
public:
  explicit Init_VcuTransfer_ac_in_temp(::pix_robobus_driver_msgs::msg::VcuTransfer & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::VcuTransfer ac_in_temp(::pix_robobus_driver_msgs::msg::VcuTransfer::_ac_in_temp_type arg)
  {
    msg_.ac_in_temp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VcuTransfer msg_;
};

class Init_VcuTransfer_ac_out_temp
{
public:
  explicit Init_VcuTransfer_ac_out_temp(::pix_robobus_driver_msgs::msg::VcuTransfer & msg)
  : msg_(msg)
  {}
  Init_VcuTransfer_ac_in_temp ac_out_temp(::pix_robobus_driver_msgs::msg::VcuTransfer::_ac_out_temp_type arg)
  {
    msg_.ac_out_temp = std::move(arg);
    return Init_VcuTransfer_ac_in_temp(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VcuTransfer msg_;
};

class Init_VcuTransfer_spare
{
public:
  explicit Init_VcuTransfer_spare(::pix_robobus_driver_msgs::msg::VcuTransfer & msg)
  : msg_(msg)
  {}
  Init_VcuTransfer_ac_out_temp spare(::pix_robobus_driver_msgs::msg::VcuTransfer::_spare_type arg)
  {
    msg_.spare = std::move(arg);
    return Init_VcuTransfer_ac_out_temp(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VcuTransfer msg_;
};

class Init_VcuTransfer_header
{
public:
  Init_VcuTransfer_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VcuTransfer_spare header(::pix_robobus_driver_msgs::msg::VcuTransfer::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VcuTransfer_spare(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VcuTransfer msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::VcuTransfer>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_VcuTransfer_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VCU_TRANSFER__BUILDER_HPP_
