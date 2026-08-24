// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_sensing_msgs:msg/RadarFieldInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_FIELD_INFO__TRAITS_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_FIELD_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_sensing_msgs/msg/detail/radar_field_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'field_name'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace autoware_sensing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarFieldInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: field_name
  {
    out << "field_name: ";
    to_flow_style_yaml(msg.field_name, out);
    out << ", ";
  }

  // member: min_value_available
  {
    out << "min_value_available: ";
    rosidl_generator_traits::value_to_yaml(msg.min_value_available, out);
    out << ", ";
  }

  // member: max_value_available
  {
    out << "max_value_available: ";
    rosidl_generator_traits::value_to_yaml(msg.max_value_available, out);
    out << ", ";
  }

  // member: resolution_available
  {
    out << "resolution_available: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution_available, out);
    out << ", ";
  }

  // member: min_value
  {
    out << "min_value: ";
    rosidl_generator_traits::value_to_yaml(msg.min_value, out);
    out << ", ";
  }

  // member: max_value
  {
    out << "max_value: ";
    rosidl_generator_traits::value_to_yaml(msg.max_value, out);
    out << ", ";
  }

  // member: resolution
  {
    out << "resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarFieldInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: field_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "field_name:\n";
    to_block_style_yaml(msg.field_name, out, indentation + 2);
  }

  // member: min_value_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_value_available: ";
    rosidl_generator_traits::value_to_yaml(msg.min_value_available, out);
    out << "\n";
  }

  // member: max_value_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_value_available: ";
    rosidl_generator_traits::value_to_yaml(msg.max_value_available, out);
    out << "\n";
  }

  // member: resolution_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resolution_available: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution_available, out);
    out << "\n";
  }

  // member: min_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_value: ";
    rosidl_generator_traits::value_to_yaml(msg.min_value, out);
    out << "\n";
  }

  // member: max_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_value: ";
    rosidl_generator_traits::value_to_yaml(msg.max_value, out);
    out << "\n";
  }

  // member: resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarFieldInfo & msg, bool use_flow_style = false)
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
  const autoware_sensing_msgs::msg::RadarFieldInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_sensing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_sensing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_sensing_msgs::msg::RadarFieldInfo & msg)
{
  return autoware_sensing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_sensing_msgs::msg::RadarFieldInfo>()
{
  return "autoware_sensing_msgs::msg::RadarFieldInfo";
}

template<>
inline const char * name<autoware_sensing_msgs::msg::RadarFieldInfo>()
{
  return "autoware_sensing_msgs/msg/RadarFieldInfo";
}

template<>
struct has_fixed_size<autoware_sensing_msgs::msg::RadarFieldInfo>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<autoware_sensing_msgs::msg::RadarFieldInfo>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<autoware_sensing_msgs::msg::RadarFieldInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_FIELD_INFO__TRAITS_HPP_
