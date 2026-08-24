// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_sensing_msgs:msg/SourcePointCloudInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__SOURCE_POINT_CLOUD_INFO__BUILDER_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__SOURCE_POINT_CLOUD_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_sensing_msgs/msg/detail/source_point_cloud_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_sensing_msgs
{

namespace msg
{

namespace builder
{

class Init_SourcePointCloudInfo_length
{
public:
  explicit Init_SourcePointCloudInfo_length(::autoware_sensing_msgs::msg::SourcePointCloudInfo & msg)
  : msg_(msg)
  {}
  ::autoware_sensing_msgs::msg::SourcePointCloudInfo length(::autoware_sensing_msgs::msg::SourcePointCloudInfo::_length_type arg)
  {
    msg_.length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::SourcePointCloudInfo msg_;
};

class Init_SourcePointCloudInfo_idx_begin
{
public:
  explicit Init_SourcePointCloudInfo_idx_begin(::autoware_sensing_msgs::msg::SourcePointCloudInfo & msg)
  : msg_(msg)
  {}
  Init_SourcePointCloudInfo_length idx_begin(::autoware_sensing_msgs::msg::SourcePointCloudInfo::_idx_begin_type arg)
  {
    msg_.idx_begin = std::move(arg);
    return Init_SourcePointCloudInfo_length(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::SourcePointCloudInfo msg_;
};

class Init_SourcePointCloudInfo_status
{
public:
  explicit Init_SourcePointCloudInfo_status(::autoware_sensing_msgs::msg::SourcePointCloudInfo & msg)
  : msg_(msg)
  {}
  Init_SourcePointCloudInfo_idx_begin status(::autoware_sensing_msgs::msg::SourcePointCloudInfo::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SourcePointCloudInfo_idx_begin(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::SourcePointCloudInfo msg_;
};

class Init_SourcePointCloudInfo_topic
{
public:
  explicit Init_SourcePointCloudInfo_topic(::autoware_sensing_msgs::msg::SourcePointCloudInfo & msg)
  : msg_(msg)
  {}
  Init_SourcePointCloudInfo_status topic(::autoware_sensing_msgs::msg::SourcePointCloudInfo::_topic_type arg)
  {
    msg_.topic = std::move(arg);
    return Init_SourcePointCloudInfo_status(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::SourcePointCloudInfo msg_;
};

class Init_SourcePointCloudInfo_header
{
public:
  Init_SourcePointCloudInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SourcePointCloudInfo_topic header(::autoware_sensing_msgs::msg::SourcePointCloudInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SourcePointCloudInfo_topic(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::SourcePointCloudInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_sensing_msgs::msg::SourcePointCloudInfo>()
{
  return autoware_sensing_msgs::msg::builder::Init_SourcePointCloudInfo_header();
}

}  // namespace autoware_sensing_msgs

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__SOURCE_POINT_CLOUD_INFO__BUILDER_HPP_
