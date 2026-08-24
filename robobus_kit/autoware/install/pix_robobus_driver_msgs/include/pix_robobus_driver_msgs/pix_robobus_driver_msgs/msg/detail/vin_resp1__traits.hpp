// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pix_robobus_driver_msgs:msg/VinResp1.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP1__TRAITS_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP1__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pix_robobus_driver_msgs/msg/detail/vin_resp1__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pix_robobus_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VinResp1 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: vin00
  {
    out << "vin00: ";
    rosidl_generator_traits::value_to_yaml(msg.vin00, out);
    out << ", ";
  }

  // member: vin01
  {
    out << "vin01: ";
    rosidl_generator_traits::value_to_yaml(msg.vin01, out);
    out << ", ";
  }

  // member: vin02
  {
    out << "vin02: ";
    rosidl_generator_traits::value_to_yaml(msg.vin02, out);
    out << ", ";
  }

  // member: vin03
  {
    out << "vin03: ";
    rosidl_generator_traits::value_to_yaml(msg.vin03, out);
    out << ", ";
  }

  // member: vin04
  {
    out << "vin04: ";
    rosidl_generator_traits::value_to_yaml(msg.vin04, out);
    out << ", ";
  }

  // member: vin05
  {
    out << "vin05: ";
    rosidl_generator_traits::value_to_yaml(msg.vin05, out);
    out << ", ";
  }

  // member: vin06
  {
    out << "vin06: ";
    rosidl_generator_traits::value_to_yaml(msg.vin06, out);
    out << ", ";
  }

  // member: vin07
  {
    out << "vin07: ";
    rosidl_generator_traits::value_to_yaml(msg.vin07, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VinResp1 & msg,
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

  // member: vin00
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vin00: ";
    rosidl_generator_traits::value_to_yaml(msg.vin00, out);
    out << "\n";
  }

  // member: vin01
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vin01: ";
    rosidl_generator_traits::value_to_yaml(msg.vin01, out);
    out << "\n";
  }

  // member: vin02
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vin02: ";
    rosidl_generator_traits::value_to_yaml(msg.vin02, out);
    out << "\n";
  }

  // member: vin03
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vin03: ";
    rosidl_generator_traits::value_to_yaml(msg.vin03, out);
    out << "\n";
  }

  // member: vin04
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vin04: ";
    rosidl_generator_traits::value_to_yaml(msg.vin04, out);
    out << "\n";
  }

  // member: vin05
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vin05: ";
    rosidl_generator_traits::value_to_yaml(msg.vin05, out);
    out << "\n";
  }

  // member: vin06
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vin06: ";
    rosidl_generator_traits::value_to_yaml(msg.vin06, out);
    out << "\n";
  }

  // member: vin07
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vin07: ";
    rosidl_generator_traits::value_to_yaml(msg.vin07, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VinResp1 & msg, bool use_flow_style = false)
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
  const pix_robobus_driver_msgs::msg::VinResp1 & msg,
  std::ostream & out, size_t indentation = 0)
{
  pix_robobus_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pix_robobus_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pix_robobus_driver_msgs::msg::VinResp1 & msg)
{
  return pix_robobus_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pix_robobus_driver_msgs::msg::VinResp1>()
{
  return "pix_robobus_driver_msgs::msg::VinResp1";
}

template<>
inline const char * name<pix_robobus_driver_msgs::msg::VinResp1>()
{
  return "pix_robobus_driver_msgs/msg/VinResp1";
}

template<>
struct has_fixed_size<pix_robobus_driver_msgs::msg::VinResp1>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pix_robobus_driver_msgs::msg::VinResp1>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pix_robobus_driver_msgs::msg::VinResp1>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP1__TRAITS_HPP_
