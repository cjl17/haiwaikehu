// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_sensing_msgs:msg/ConcatenatedPointCloudInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__CONCATENATED_POINT_CLOUD_INFO__TRAITS_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__CONCATENATED_POINT_CLOUD_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_sensing_msgs/msg/detail/concatenated_point_cloud_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'source_info'
#include "autoware_sensing_msgs/msg/detail/source_point_cloud_info__traits.hpp"

namespace autoware_sensing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConcatenatedPointCloudInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: concatenation_success
  {
    out << "concatenation_success: ";
    rosidl_generator_traits::value_to_yaml(msg.concatenation_success, out);
    out << ", ";
  }

  // member: matching_strategy
  {
    out << "matching_strategy: ";
    rosidl_generator_traits::value_to_yaml(msg.matching_strategy, out);
    out << ", ";
  }

  // member: matching_strategy_config
  {
    if (msg.matching_strategy_config.size() == 0) {
      out << "matching_strategy_config: []";
    } else {
      out << "matching_strategy_config: [";
      size_t pending_items = msg.matching_strategy_config.size();
      for (auto item : msg.matching_strategy_config) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: source_info
  {
    if (msg.source_info.size() == 0) {
      out << "source_info: []";
    } else {
      out << "source_info: [";
      size_t pending_items = msg.source_info.size();
      for (auto item : msg.source_info) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConcatenatedPointCloudInfo & msg,
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

  // member: concatenation_success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "concatenation_success: ";
    rosidl_generator_traits::value_to_yaml(msg.concatenation_success, out);
    out << "\n";
  }

  // member: matching_strategy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matching_strategy: ";
    rosidl_generator_traits::value_to_yaml(msg.matching_strategy, out);
    out << "\n";
  }

  // member: matching_strategy_config
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.matching_strategy_config.size() == 0) {
      out << "matching_strategy_config: []\n";
    } else {
      out << "matching_strategy_config:\n";
      for (auto item : msg.matching_strategy_config) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: source_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.source_info.size() == 0) {
      out << "source_info: []\n";
    } else {
      out << "source_info:\n";
      for (auto item : msg.source_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConcatenatedPointCloudInfo & msg, bool use_flow_style = false)
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
  const autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_sensing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_sensing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo & msg)
{
  return autoware_sensing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo>()
{
  return "autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo";
}

template<>
inline const char * name<autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo>()
{
  return "autoware_sensing_msgs/msg/ConcatenatedPointCloudInfo";
}

template<>
struct has_fixed_size<autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__CONCATENATED_POINT_CLOUD_INFO__TRAITS_HPP_
