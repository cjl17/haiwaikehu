// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_sensing_msgs:msg/RadarClassification.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_CLASSIFICATION__TRAITS_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_CLASSIFICATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_sensing_msgs/msg/detail/radar_classification__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autoware_sensing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarClassification & msg,
  std::ostream & out)
{
  out << "{";
  // member: label
  {
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << ", ";
  }

  // member: probability
  {
    out << "probability: ";
    rosidl_generator_traits::value_to_yaml(msg.probability, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarClassification & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << "\n";
  }

  // member: probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "probability: ";
    rosidl_generator_traits::value_to_yaml(msg.probability, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarClassification & msg, bool use_flow_style = false)
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
  const autoware_sensing_msgs::msg::RadarClassification & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_sensing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_sensing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_sensing_msgs::msg::RadarClassification & msg)
{
  return autoware_sensing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_sensing_msgs::msg::RadarClassification>()
{
  return "autoware_sensing_msgs::msg::RadarClassification";
}

template<>
inline const char * name<autoware_sensing_msgs::msg::RadarClassification>()
{
  return "autoware_sensing_msgs/msg/RadarClassification";
}

template<>
struct has_fixed_size<autoware_sensing_msgs::msg::RadarClassification>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_sensing_msgs::msg::RadarClassification>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_sensing_msgs::msg::RadarClassification>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_CLASSIFICATION__TRAITS_HPP_
