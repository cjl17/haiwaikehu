// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_sensing_msgs:msg/RadarObjects.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_OBJECTS__BUILDER_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_OBJECTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_sensing_msgs/msg/detail/radar_objects__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_sensing_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarObjects_objects
{
public:
  explicit Init_RadarObjects_objects(::autoware_sensing_msgs::msg::RadarObjects & msg)
  : msg_(msg)
  {}
  ::autoware_sensing_msgs::msg::RadarObjects objects(::autoware_sensing_msgs::msg::RadarObjects::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarObjects msg_;
};

class Init_RadarObjects_header
{
public:
  Init_RadarObjects_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarObjects_objects header(::autoware_sensing_msgs::msg::RadarObjects::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RadarObjects_objects(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarObjects msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_sensing_msgs::msg::RadarObjects>()
{
  return autoware_sensing_msgs::msg::builder::Init_RadarObjects_header();
}

}  // namespace autoware_sensing_msgs

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_OBJECTS__BUILDER_HPP_
