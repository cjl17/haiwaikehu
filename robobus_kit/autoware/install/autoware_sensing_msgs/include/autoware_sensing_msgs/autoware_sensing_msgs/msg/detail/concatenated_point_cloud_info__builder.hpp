// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_sensing_msgs:msg/ConcatenatedPointCloudInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__CONCATENATED_POINT_CLOUD_INFO__BUILDER_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__CONCATENATED_POINT_CLOUD_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_sensing_msgs/msg/detail/concatenated_point_cloud_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_sensing_msgs
{

namespace msg
{

namespace builder
{

class Init_ConcatenatedPointCloudInfo_source_info
{
public:
  explicit Init_ConcatenatedPointCloudInfo_source_info(::autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo & msg)
  : msg_(msg)
  {}
  ::autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo source_info(::autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo::_source_info_type arg)
  {
    msg_.source_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo msg_;
};

class Init_ConcatenatedPointCloudInfo_matching_strategy_config
{
public:
  explicit Init_ConcatenatedPointCloudInfo_matching_strategy_config(::autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo & msg)
  : msg_(msg)
  {}
  Init_ConcatenatedPointCloudInfo_source_info matching_strategy_config(::autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo::_matching_strategy_config_type arg)
  {
    msg_.matching_strategy_config = std::move(arg);
    return Init_ConcatenatedPointCloudInfo_source_info(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo msg_;
};

class Init_ConcatenatedPointCloudInfo_matching_strategy
{
public:
  explicit Init_ConcatenatedPointCloudInfo_matching_strategy(::autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo & msg)
  : msg_(msg)
  {}
  Init_ConcatenatedPointCloudInfo_matching_strategy_config matching_strategy(::autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo::_matching_strategy_type arg)
  {
    msg_.matching_strategy = std::move(arg);
    return Init_ConcatenatedPointCloudInfo_matching_strategy_config(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo msg_;
};

class Init_ConcatenatedPointCloudInfo_concatenation_success
{
public:
  explicit Init_ConcatenatedPointCloudInfo_concatenation_success(::autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo & msg)
  : msg_(msg)
  {}
  Init_ConcatenatedPointCloudInfo_matching_strategy concatenation_success(::autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo::_concatenation_success_type arg)
  {
    msg_.concatenation_success = std::move(arg);
    return Init_ConcatenatedPointCloudInfo_matching_strategy(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo msg_;
};

class Init_ConcatenatedPointCloudInfo_header
{
public:
  Init_ConcatenatedPointCloudInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConcatenatedPointCloudInfo_concatenation_success header(::autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ConcatenatedPointCloudInfo_concatenation_success(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo>()
{
  return autoware_sensing_msgs::msg::builder::Init_ConcatenatedPointCloudInfo_header();
}

}  // namespace autoware_sensing_msgs

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__CONCATENATED_POINT_CLOUD_INFO__BUILDER_HPP_
