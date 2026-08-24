// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_sensing_msgs:msg/SourcePointCloudInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__SOURCE_POINT_CLOUD_INFO__TRAITS_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__SOURCE_POINT_CLOUD_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_sensing_msgs/msg/detail/source_point_cloud_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace autoware_sensing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SourcePointCloudInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: topic
  {
    out << "topic: ";
    rosidl_generator_traits::value_to_yaml(msg.topic, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: idx_begin
  {
    out << "idx_begin: ";
    rosidl_generator_traits::value_to_yaml(msg.idx_begin, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SourcePointCloudInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic: ";
    rosidl_generator_traits::value_to_yaml(msg.topic, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: idx_begin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "idx_begin: ";
    rosidl_generator_traits::value_to_yaml(msg.idx_begin, out);
    out << "\n";
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SourcePointCloudInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace autoware_sensing_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_sensing_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_sensing_msgs::msg::SourcePointCloudInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_sensing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_sensing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_sensing_msgs::msg::SourcePointCloudInfo & msg)
{
  return autoware_sensing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_sensing_msgs::msg::SourcePointCloudInfo>()
{
  return "autoware_sensing_msgs::msg::SourcePointCloudInfo";
}

template<>
inline const char * name<autoware_sensing_msgs::msg::SourcePointCloudInfo>()
{
  return "autoware_sensing_msgs/msg/SourcePointCloudInfo";
}

template<>
struct has_fixed_size<autoware_sensing_msgs::msg::SourcePointCloudInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_sensing_msgs::msg::SourcePointCloudInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_sensing_msgs::msg::SourcePointCloudInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__SOURCE_POINT_CLOUD_INFO__TRAITS_HPP_
