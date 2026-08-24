// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/AutoMessage.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AUTO_MESSAGE__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AUTO_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/auto_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_AutoMessage_auto_heartbeat
{
public:
  explicit Init_AutoMessage_auto_heartbeat(::pix_robobus_driver_msgs::msg::AutoMessage & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::AutoMessage auto_heartbeat(::pix_robobus_driver_msgs::msg::AutoMessage::_auto_heartbeat_type arg)
  {
    msg_.auto_heartbeat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AutoMessage msg_;
};

class Init_AutoMessage_auto_drive_mode
{
public:
  explicit Init_AutoMessage_auto_drive_mode(::pix_robobus_driver_msgs::msg::AutoMessage & msg)
  : msg_(msg)
  {}
  Init_AutoMessage_auto_heartbeat auto_drive_mode(::pix_robobus_driver_msgs::msg::AutoMessage::_auto_drive_mode_type arg)
  {
    msg_.auto_drive_mode = std::move(arg);
    return Init_AutoMessage_auto_heartbeat(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AutoMessage msg_;
};

class Init_AutoMessage_header
{
public:
  Init_AutoMessage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutoMessage_auto_drive_mode header(::pix_robobus_driver_msgs::msg::AutoMessage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AutoMessage_auto_drive_mode(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AutoMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::AutoMessage>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_AutoMessage_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AUTO_MESSAGE__BUILDER_HPP_
