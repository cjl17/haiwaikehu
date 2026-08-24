// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_sensing_msgs:msg/RadarClassification.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_CLASSIFICATION__BUILDER_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_CLASSIFICATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_sensing_msgs/msg/detail/radar_classification__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_sensing_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarClassification_probability
{
public:
  explicit Init_RadarClassification_probability(::autoware_sensing_msgs::msg::RadarClassification & msg)
  : msg_(msg)
  {}
  ::autoware_sensing_msgs::msg::RadarClassification probability(::autoware_sensing_msgs::msg::RadarClassification::_probability_type arg)
  {
    msg_.probability = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarClassification msg_;
};

class Init_RadarClassification_label
{
public:
  Init_RadarClassification_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarClassification_probability label(::autoware_sensing_msgs::msg::RadarClassification::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_RadarClassification_probability(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarClassification msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_sensing_msgs::msg::RadarClassification>()
{
  return autoware_sensing_msgs::msg::builder::Init_RadarClassification_label();
}

}  // namespace autoware_sensing_msgs

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_CLASSIFICATION__BUILDER_HPP_
