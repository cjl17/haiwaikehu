// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pix_robobus_driver_msgs:msg/AcMessage2.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AC_MESSAGE2__TRAITS_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AC_MESSAGE2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pix_robobus_driver_msgs/msg/detail/ac_message2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pix_robobus_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AcMessage2 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: fan_temp
  {
    out << "fan_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.fan_temp, out);
    out << ", ";
  }

  // member: ac_out_temp
  {
    out << "ac_out_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.ac_out_temp, out);
    out << ", ";
  }

  // member: ac_in_temp
  {
    out << "ac_in_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.ac_in_temp, out);
    out << ", ";
  }

  // member: ac_hardware
  {
    out << "ac_hardware: ";
    rosidl_generator_traits::value_to_yaml(msg.ac_hardware, out);
    out << ", ";
  }

  // member: ac_software
  {
    out << "ac_software: ";
    rosidl_generator_traits::value_to_yaml(msg.ac_software, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AcMessage2 & msg,
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

  // member: fan_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fan_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.fan_temp, out);
    out << "\n";
  }

  // member: ac_out_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ac_out_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.ac_out_temp, out);
    out << "\n";
  }

  // member: ac_in_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ac_in_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.ac_in_temp, out);
    out << "\n";
  }

  // member: ac_hardware
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ac_hardware: ";
    rosidl_generator_traits::value_to_yaml(msg.ac_hardware, out);
    out << "\n";
  }

  // member: ac_software
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ac_software: ";
    rosidl_generator_traits::value_to_yaml(msg.ac_software, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AcMessage2 & msg, bool use_flow_style = false)
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

}  // namespace pix_robobus_driver_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pix_robobus_driver_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pix_robobus_driver_msgs::msg::AcMessage2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  pix_robobus_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pix_robobus_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pix_robobus_driver_msgs::msg::AcMessage2 & msg)
{
  return pix_robobus_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pix_robobus_driver_msgs::msg::AcMessage2>()
{
  return "pix_robobus_driver_msgs::msg::AcMessage2";
}

template<>
inline const char * name<pix_robobus_driver_msgs::msg::AcMessage2>()
{
  return "pix_robobus_driver_msgs/msg/AcMessage2";
}

template<>
struct has_fixed_size<pix_robobus_driver_msgs::msg::AcMessage2>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pix_robobus_driver_msgs::msg::AcMessage2>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pix_robobus_driver_msgs::msg::AcMessage2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AC_MESSAGE2__TRAITS_HPP_
