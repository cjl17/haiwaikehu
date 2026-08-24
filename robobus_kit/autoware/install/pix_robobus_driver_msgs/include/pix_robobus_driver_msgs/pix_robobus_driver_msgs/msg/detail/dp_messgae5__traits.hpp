// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pix_robobus_driver_msgs:msg/DpMessgae5.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__DP_MESSGAE5__TRAITS_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__DP_MESSGAE5__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pix_robobus_driver_msgs/msg/detail/dp_messgae5__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pix_robobus_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DpMessgae5 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pwn_red_sta
  {
    out << "pwn_red_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.pwn_red_sta, out);
    out << ", ";
  }

  // member: pwn_green_sta
  {
    out << "pwn_green_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.pwn_green_sta, out);
    out << ", ";
  }

  // member: pwn_blue_sta
  {
    out << "pwn_blue_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.pwn_blue_sta, out);
    out << ", ";
  }

  // member: atmospherelightbrightness
  {
    out << "atmospherelightbrightness: ";
    rosidl_generator_traits::value_to_yaml(msg.atmospherelightbrightness, out);
    out << ", ";
  }

  // member: vcu_reserve33
  {
    out << "vcu_reserve33: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve33, out);
    out << ", ";
  }

  // member: vcu_reserve41
  {
    out << "vcu_reserve41: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve41, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DpMessgae5 & msg,
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

  // member: pwn_red_sta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwn_red_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.pwn_red_sta, out);
    out << "\n";
  }

  // member: pwn_green_sta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwn_green_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.pwn_green_sta, out);
    out << "\n";
  }

  // member: pwn_blue_sta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwn_blue_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.pwn_blue_sta, out);
    out << "\n";
  }

  // member: atmospherelightbrightness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "atmospherelightbrightness: ";
    rosidl_generator_traits::value_to_yaml(msg.atmospherelightbrightness, out);
    out << "\n";
  }

  // member: vcu_reserve33
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_reserve33: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve33, out);
    out << "\n";
  }

  // member: vcu_reserve41
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_reserve41: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve41, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DpMessgae5 & msg, bool use_flow_style = false)
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
  const pix_robobus_driver_msgs::msg::DpMessgae5 & msg,
  std::ostream & out, size_t indentation = 0)
{
  pix_robobus_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pix_robobus_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pix_robobus_driver_msgs::msg::DpMessgae5 & msg)
{
  return pix_robobus_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pix_robobus_driver_msgs::msg::DpMessgae5>()
{
  return "pix_robobus_driver_msgs::msg::DpMessgae5";
}

template<>
inline const char * name<pix_robobus_driver_msgs::msg::DpMessgae5>()
{
  return "pix_robobus_driver_msgs/msg/DpMessgae5";
}

template<>
struct has_fixed_size<pix_robobus_driver_msgs::msg::DpMessgae5>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pix_robobus_driver_msgs::msg::DpMessgae5>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pix_robobus_driver_msgs::msg::DpMessgae5>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__DP_MESSGAE5__TRAITS_HPP_
