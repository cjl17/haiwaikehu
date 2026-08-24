// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pix_robobus_driver_msgs:msg/AcuSysTime.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__ACU_SYS_TIME__TRAITS_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__ACU_SYS_TIME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pix_robobus_driver_msgs/msg/detail/acu_sys_time__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pix_robobus_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AcuSysTime & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: sys_time_year
  {
    out << "sys_time_year: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_time_year, out);
    out << ", ";
  }

  // member: sys_time_month
  {
    out << "sys_time_month: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_time_month, out);
    out << ", ";
  }

  // member: sys_time_day
  {
    out << "sys_time_day: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_time_day, out);
    out << ", ";
  }

  // member: sys_time_hour
  {
    out << "sys_time_hour: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_time_hour, out);
    out << ", ";
  }

  // member: sys_time_minute
  {
    out << "sys_time_minute: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_time_minute, out);
    out << ", ";
  }

  // member: sys_time_second
  {
    out << "sys_time_second: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_time_second, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AcuSysTime & msg,
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

  // member: sys_time_year
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sys_time_year: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_time_year, out);
    out << "\n";
  }

  // member: sys_time_month
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sys_time_month: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_time_month, out);
    out << "\n";
  }

  // member: sys_time_day
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sys_time_day: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_time_day, out);
    out << "\n";
  }

  // member: sys_time_hour
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sys_time_hour: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_time_hour, out);
    out << "\n";
  }

  // member: sys_time_minute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sys_time_minute: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_time_minute, out);
    out << "\n";
  }

  // member: sys_time_second
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sys_time_second: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_time_second, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AcuSysTime & msg, bool use_flow_style = false)
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
  const pix_robobus_driver_msgs::msg::AcuSysTime & msg,
  std::ostream & out, size_t indentation = 0)
{
  pix_robobus_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pix_robobus_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pix_robobus_driver_msgs::msg::AcuSysTime & msg)
{
  return pix_robobus_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pix_robobus_driver_msgs::msg::AcuSysTime>()
{
  return "pix_robobus_driver_msgs::msg::AcuSysTime";
}

template<>
inline const char * name<pix_robobus_driver_msgs::msg::AcuSysTime>()
{
  return "pix_robobus_driver_msgs/msg/AcuSysTime";
}

template<>
struct has_fixed_size<pix_robobus_driver_msgs::msg::AcuSysTime>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pix_robobus_driver_msgs::msg::AcuSysTime>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pix_robobus_driver_msgs::msg::AcuSysTime>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__ACU_SYS_TIME__TRAITS_HPP_
