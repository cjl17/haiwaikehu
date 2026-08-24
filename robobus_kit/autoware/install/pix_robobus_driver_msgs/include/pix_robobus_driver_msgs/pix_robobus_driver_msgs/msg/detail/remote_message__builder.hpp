// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/RemoteMessage.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__REMOTE_MESSAGE__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__REMOTE_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/remote_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_RemoteMessage_remote_heartbeat
{
public:
  explicit Init_RemoteMessage_remote_heartbeat(::pix_robobus_driver_msgs::msg::RemoteMessage & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::RemoteMessage remote_heartbeat(::pix_robobus_driver_msgs::msg::RemoteMessage::_remote_heartbeat_type arg)
  {
    msg_.remote_heartbeat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::RemoteMessage msg_;
};

class Init_RemoteMessage_remote_drive_mode
{
public:
  explicit Init_RemoteMessage_remote_drive_mode(::pix_robobus_driver_msgs::msg::RemoteMessage & msg)
  : msg_(msg)
  {}
  Init_RemoteMessage_remote_heartbeat remote_drive_mode(::pix_robobus_driver_msgs::msg::RemoteMessage::_remote_drive_mode_type arg)
  {
    msg_.remote_drive_mode = std::move(arg);
    return Init_RemoteMessage_remote_heartbeat(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::RemoteMessage msg_;
};

class Init_RemoteMessage_header
{
public:
  Init_RemoteMessage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RemoteMessage_remote_drive_mode header(::pix_robobus_driver_msgs::msg::RemoteMessage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RemoteMessage_remote_drive_mode(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::RemoteMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::RemoteMessage>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_RemoteMessage_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__REMOTE_MESSAGE__BUILDER_HPP_
