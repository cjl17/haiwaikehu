// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pix_robobus_driver_msgs:msg/AutoVcuMessage1.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AUTO_VCU_MESSAGE1__TRAITS_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AUTO_VCU_MESSAGE1__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pix_robobus_driver_msgs/msg/detail/auto_vcu_message1__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pix_robobus_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AutoVcuMessage1 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: defrost_ctrl
  {
    out << "defrost_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.defrost_ctrl, out);
    out << ", ";
  }

  // member: air_cod_ctrl
  {
    out << "air_cod_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.air_cod_ctrl, out);
    out << ", ";
  }

  // member: air_cod_gear_ctrl
  {
    out << "air_cod_gear_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.air_cod_gear_ctrl, out);
    out << ", ";
  }

  // member: air_cod_mod_ctrl
  {
    out << "air_cod_mod_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.air_cod_mod_ctrl, out);
    out << ", ";
  }

  // member: air_cod_temp_ctrl
  {
    out << "air_cod_temp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.air_cod_temp_ctrl, out);
    out << ", ";
  }

  // member: in_loop_mod_ctrl
  {
    out << "in_loop_mod_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.in_loop_mod_ctrl, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AutoVcuMessage1 & msg,
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

  // member: defrost_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "defrost_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.defrost_ctrl, out);
    out << "\n";
  }

  // member: air_cod_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "air_cod_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.air_cod_ctrl, out);
    out << "\n";
  }

  // member: air_cod_gear_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "air_cod_gear_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.air_cod_gear_ctrl, out);
    out << "\n";
  }

  // member: air_cod_mod_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "air_cod_mod_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.air_cod_mod_ctrl, out);
    out << "\n";
  }

  // member: air_cod_temp_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "air_cod_temp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.air_cod_temp_ctrl, out);
    out << "\n";
  }

  // member: in_loop_mod_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_loop_mod_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.in_loop_mod_ctrl, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AutoVcuMessage1 & msg, bool use_flow_style = false)
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
  const pix_robobus_driver_msgs::msg::AutoVcuMessage1 & msg,
  std::ostream & out, size_t indentation = 0)
{
  pix_robobus_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pix_robobus_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pix_robobus_driver_msgs::msg::AutoVcuMessage1 & msg)
{
  return pix_robobus_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pix_robobus_driver_msgs::msg::AutoVcuMessage1>()
{
  return "pix_robobus_driver_msgs::msg::AutoVcuMessage1";
}

template<>
inline const char * name<pix_robobus_driver_msgs::msg::AutoVcuMessage1>()
{
  return "pix_robobus_driver_msgs/msg/AutoVcuMessage1";
}

template<>
struct has_fixed_size<pix_robobus_driver_msgs::msg::AutoVcuMessage1>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pix_robobus_driver_msgs::msg::AutoVcuMessage1>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pix_robobus_driver_msgs::msg::AutoVcuMessage1>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AUTO_VCU_MESSAGE1__TRAITS_HPP_
