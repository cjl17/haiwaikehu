// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_sensing_msgs:msg/RadarInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_INFO__BUILDER_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_sensing_msgs/msg/detail/radar_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_sensing_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarInfo_absolute_dynamics
{
public:
  explicit Init_RadarInfo_absolute_dynamics(::autoware_sensing_msgs::msg::RadarInfo & msg)
  : msg_(msg)
  {}
  ::autoware_sensing_msgs::msg::RadarInfo absolute_dynamics(::autoware_sensing_msgs::msg::RadarInfo::_absolute_dynamics_type arg)
  {
    msg_.absolute_dynamics = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarInfo msg_;
};

class Init_RadarInfo_available_classes
{
public:
  explicit Init_RadarInfo_available_classes(::autoware_sensing_msgs::msg::RadarInfo & msg)
  : msg_(msg)
  {}
  Init_RadarInfo_absolute_dynamics available_classes(::autoware_sensing_msgs::msg::RadarInfo::_available_classes_type arg)
  {
    msg_.available_classes = std::move(arg);
    return Init_RadarInfo_absolute_dynamics(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarInfo msg_;
};

class Init_RadarInfo_detection_fields_info
{
public:
  explicit Init_RadarInfo_detection_fields_info(::autoware_sensing_msgs::msg::RadarInfo & msg)
  : msg_(msg)
  {}
  Init_RadarInfo_available_classes detection_fields_info(::autoware_sensing_msgs::msg::RadarInfo::_detection_fields_info_type arg)
  {
    msg_.detection_fields_info = std::move(arg);
    return Init_RadarInfo_available_classes(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarInfo msg_;
};

class Init_RadarInfo_object_fields_info
{
public:
  explicit Init_RadarInfo_object_fields_info(::autoware_sensing_msgs::msg::RadarInfo & msg)
  : msg_(msg)
  {}
  Init_RadarInfo_detection_fields_info object_fields_info(::autoware_sensing_msgs::msg::RadarInfo::_object_fields_info_type arg)
  {
    msg_.object_fields_info = std::move(arg);
    return Init_RadarInfo_detection_fields_info(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarInfo msg_;
};

class Init_RadarInfo_header
{
public:
  Init_RadarInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarInfo_object_fields_info header(::autoware_sensing_msgs::msg::RadarInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RadarInfo_object_fields_info(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_sensing_msgs::msg::RadarInfo>()
{
  return autoware_sensing_msgs::msg::builder::Init_RadarInfo_header();
}

}  // namespace autoware_sensing_msgs

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_INFO__BUILDER_HPP_
