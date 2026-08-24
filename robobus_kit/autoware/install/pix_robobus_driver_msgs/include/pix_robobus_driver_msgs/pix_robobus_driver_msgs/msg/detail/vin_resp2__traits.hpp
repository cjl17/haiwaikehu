// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pix_robobus_driver_msgs:msg/VinResp2.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP2__TRAITS_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pix_robobus_driver_msgs/msg/detail/vin_resp2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pix_robobus_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VinResp2 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: vin08
  {
    out << "vin08: ";
    rosidl_generator_traits::value_to_yaml(msg.vin08, out);
    out << ", ";
  }

  // member: vin09
  {
    out << "vin09: ";
    rosidl_generator_traits::value_to_yaml(msg.vin09, out);
    out << ", ";
  }

  // member: vin10
  {
    out << "vin10: ";
    rosidl_generator_traits::value_to_yaml(msg.vin10, out);
    out << ", ";
  }

  // member: vin11
  {
    out << "vin11: ";
    rosidl_generator_traits::value_to_yaml(msg.vin11, out);
    out << ", ";
  }

  // member: vin12
  {
    out << "vin12: ";
    rosidl_generator_traits::value_to_yaml(msg.vin12, out);
    out << ", ";
  }

  // member: vin13
  {
    out << "vin13: ";
    rosidl_generator_traits::value_to_yaml(msg.vin13, out);
    out << ", ";
  }

  // member: vin14
  {
    out << "vin14: ";
    rosidl_generator_traits::value_to_yaml(msg.vin14, out);
    out << ", ";
  }

  // member: vin15
  {
    out << "vin15: ";
    rosidl_generator_traits::value_to_yaml(msg.vin15, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VinResp2 & msg,
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

  // member: vin08
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vin08: ";
    rosidl_generator_traits::value_to_yaml(msg.vin08, out);
    out << "\n";
  }

  // member: vin09
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vin09: ";
    rosidl_generator_traits::value_to_yaml(msg.vin09, out);
    out << "\n";
  }

  // member: vin10
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vin10: ";
    rosidl_generator_traits::value_to_yaml(msg.vin10, out);
    out << "\n";
  }

  // member: vin11
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vin11: ";
    rosidl_generator_traits::value_to_yaml(msg.vin11, out);
    out << "\n";
  }

  // member: vin12
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vin12: ";
    rosidl_generator_traits::value_to_yaml(msg.vin12, out);
    out << "\n";
  }

  // member: vin13
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vin13: ";
    rosidl_generator_traits::value_to_yaml(msg.vin13, out);
    out << "\n";
  }

  // member: vin14
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vin14: ";
    rosidl_generator_traits::value_to_yaml(msg.vin14, out);
    out << "\n";
  }

  // member: vin15
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vin15: ";
    rosidl_generator_traits::value_to_yaml(msg.vin15, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VinResp2 & msg, bool use_flow_style = false)
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
  const pix_robobus_driver_msgs::msg::VinResp2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  pix_robobus_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pix_robobus_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pix_robobus_driver_msgs::msg::VinResp2 & msg)
{
  return pix_robobus_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pix_robobus_driver_msgs::msg::VinResp2>()
{
  return "pix_robobus_driver_msgs::msg::VinResp2";
}

template<>
inline const char * name<pix_robobus_driver_msgs::msg::VinResp2>()
{
  return "pix_robobus_driver_msgs/msg/VinResp2";
}

template<>
struct has_fixed_size<pix_robobus_driver_msgs::msg::VinResp2>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pix_robobus_driver_msgs::msg::VinResp2>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pix_robobus_driver_msgs::msg::VinResp2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP2__TRAITS_HPP_
