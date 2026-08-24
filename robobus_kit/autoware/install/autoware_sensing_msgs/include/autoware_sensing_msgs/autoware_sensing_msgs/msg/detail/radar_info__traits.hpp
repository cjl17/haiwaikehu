// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_sensing_msgs:msg/RadarInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_INFO__TRAITS_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_sensing_msgs/msg/detail/radar_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'object_fields_info'
// Member 'detection_fields_info'
#include "autoware_sensing_msgs/msg/detail/radar_field_info__traits.hpp"

namespace autoware_sensing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: object_fields_info
  {
    if (msg.object_fields_info.size() == 0) {
      out << "object_fields_info: []";
    } else {
      out << "object_fields_info: [";
      size_t pending_items = msg.object_fields_info.size();
      for (auto item : msg.object_fields_info) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: detection_fields_info
  {
    if (msg.detection_fields_info.size() == 0) {
      out << "detection_fields_info: []";
    } else {
      out << "detection_fields_info: [";
      size_t pending_items = msg.detection_fields_info.size();
      for (auto item : msg.detection_fields_info) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: available_classes
  {
    if (msg.available_classes.size() == 0) {
      out << "available_classes: []";
    } else {
      out << "available_classes: [";
      size_t pending_items = msg.available_classes.size();
      for (auto item : msg.available_classes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: absolute_dynamics
  {
    out << "absolute_dynamics: ";
    rosidl_generator_traits::value_to_yaml(msg.absolute_dynamics, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarInfo & msg,
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

  // member: object_fields_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_fields_info.size() == 0) {
      out << "object_fields_info: []\n";
    } else {
      out << "object_fields_info:\n";
      for (auto item : msg.object_fields_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: detection_fields_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.detection_fields_info.size() == 0) {
      out << "detection_fields_info: []\n";
    } else {
      out << "detection_fields_info:\n";
      for (auto item : msg.detection_fields_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: available_classes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.available_classes.size() == 0) {
      out << "available_classes: []\n";
    } else {
      out << "available_classes:\n";
      for (auto item : msg.available_classes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: absolute_dynamics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "absolute_dynamics: ";
    rosidl_generator_traits::value_to_yaml(msg.absolute_dynamics, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarInfo & msg, bool use_flow_style = false)
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
  const autoware_sensing_msgs::msg::RadarInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_sensing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_sensing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_sensing_msgs::msg::RadarInfo & msg)
{
  return autoware_sensing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_sensing_msgs::msg::RadarInfo>()
{
  return "autoware_sensing_msgs::msg::RadarInfo";
}

template<>
inline const char * name<autoware_sensing_msgs::msg::RadarInfo>()
{
  return "autoware_sensing_msgs/msg/RadarInfo";
}

template<>
struct has_fixed_size<autoware_sensing_msgs::msg::RadarInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_sensing_msgs::msg::RadarInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_sensing_msgs::msg::RadarInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_INFO__TRAITS_HPP_
