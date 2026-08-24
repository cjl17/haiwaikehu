// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pix_robobus_driver_msgs:msg/BcmMessage5.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__BCM_MESSAGE5__TRAITS_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__BCM_MESSAGE5__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pix_robobus_driver_msgs/msg/detail/bcm_message5__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pix_robobus_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BcmMessage5 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: ad_v_vin1
  {
    out << "ad_v_vin1: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_v_vin1, out);
    out << ", ";
  }

  // member: ad_v_vin2
  {
    out << "ad_v_vin2: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_v_vin2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BcmMessage5 & msg,
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

  // member: ad_v_vin1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad_v_vin1: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_v_vin1, out);
    out << "\n";
  }

  // member: ad_v_vin2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad_v_vin2: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_v_vin2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BcmMessage5 & msg, bool use_flow_style = false)
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
  const pix_robobus_driver_msgs::msg::BcmMessage5 & msg,
  std::ostream & out, size_t indentation = 0)
{
  pix_robobus_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pix_robobus_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pix_robobus_driver_msgs::msg::BcmMessage5 & msg)
{
  return pix_robobus_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pix_robobus_driver_msgs::msg::BcmMessage5>()
{
  return "pix_robobus_driver_msgs::msg::BcmMessage5";
}

template<>
inline const char * name<pix_robobus_driver_msgs::msg::BcmMessage5>()
{
  return "pix_robobus_driver_msgs/msg/BcmMessage5";
}

template<>
struct has_fixed_size<pix_robobus_driver_msgs::msg::BcmMessage5>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pix_robobus_driver_msgs::msg::BcmMessage5>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pix_robobus_driver_msgs::msg::BcmMessage5>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__BCM_MESSAGE5__TRAITS_HPP_
