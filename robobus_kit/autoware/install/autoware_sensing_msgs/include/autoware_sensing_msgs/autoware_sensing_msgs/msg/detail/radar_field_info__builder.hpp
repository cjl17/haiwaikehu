// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_sensing_msgs:msg/RadarFieldInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_FIELD_INFO__BUILDER_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_FIELD_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_sensing_msgs/msg/detail/radar_field_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_sensing_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarFieldInfo_resolution
{
public:
  explicit Init_RadarFieldInfo_resolution(::autoware_sensing_msgs::msg::RadarFieldInfo & msg)
  : msg_(msg)
  {}
  ::autoware_sensing_msgs::msg::RadarFieldInfo resolution(::autoware_sensing_msgs::msg::RadarFieldInfo::_resolution_type arg)
  {
    msg_.resolution = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarFieldInfo msg_;
};

class Init_RadarFieldInfo_max_value
{
public:
  explicit Init_RadarFieldInfo_max_value(::autoware_sensing_msgs::msg::RadarFieldInfo & msg)
  : msg_(msg)
  {}
  Init_RadarFieldInfo_resolution max_value(::autoware_sensing_msgs::msg::RadarFieldInfo::_max_value_type arg)
  {
    msg_.max_value = std::move(arg);
    return Init_RadarFieldInfo_resolution(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarFieldInfo msg_;
};

class Init_RadarFieldInfo_min_value
{
public:
  explicit Init_RadarFieldInfo_min_value(::autoware_sensing_msgs::msg::RadarFieldInfo & msg)
  : msg_(msg)
  {}
  Init_RadarFieldInfo_max_value min_value(::autoware_sensing_msgs::msg::RadarFieldInfo::_min_value_type arg)
  {
    msg_.min_value = std::move(arg);
    return Init_RadarFieldInfo_max_value(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarFieldInfo msg_;
};

class Init_RadarFieldInfo_resolution_available
{
public:
  explicit Init_RadarFieldInfo_resolution_available(::autoware_sensing_msgs::msg::RadarFieldInfo & msg)
  : msg_(msg)
  {}
  Init_RadarFieldInfo_min_value resolution_available(::autoware_sensing_msgs::msg::RadarFieldInfo::_resolution_available_type arg)
  {
    msg_.resolution_available = std::move(arg);
    return Init_RadarFieldInfo_min_value(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarFieldInfo msg_;
};

class Init_RadarFieldInfo_max_value_available
{
public:
  explicit Init_RadarFieldInfo_max_value_available(::autoware_sensing_msgs::msg::RadarFieldInfo & msg)
  : msg_(msg)
  {}
  Init_RadarFieldInfo_resolution_available max_value_available(::autoware_sensing_msgs::msg::RadarFieldInfo::_max_value_available_type arg)
  {
    msg_.max_value_available = std::move(arg);
    return Init_RadarFieldInfo_resolution_available(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarFieldInfo msg_;
};

class Init_RadarFieldInfo_min_value_available
{
public:
  explicit Init_RadarFieldInfo_min_value_available(::autoware_sensing_msgs::msg::RadarFieldInfo & msg)
  : msg_(msg)
  {}
  Init_RadarFieldInfo_max_value_available min_value_available(::autoware_sensing_msgs::msg::RadarFieldInfo::_min_value_available_type arg)
  {
    msg_.min_value_available = std::move(arg);
    return Init_RadarFieldInfo_max_value_available(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarFieldInfo msg_;
};

class Init_RadarFieldInfo_field_name
{
public:
  Init_RadarFieldInfo_field_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarFieldInfo_min_value_available field_name(::autoware_sensing_msgs::msg::RadarFieldInfo::_field_name_type arg)
  {
    msg_.field_name = std::move(arg);
    return Init_RadarFieldInfo_min_value_available(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarFieldInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_sensing_msgs::msg::RadarFieldInfo>()
{
  return autoware_sensing_msgs::msg::builder::Init_RadarFieldInfo_field_name();
}

}  // namespace autoware_sensing_msgs

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_FIELD_INFO__BUILDER_HPP_
