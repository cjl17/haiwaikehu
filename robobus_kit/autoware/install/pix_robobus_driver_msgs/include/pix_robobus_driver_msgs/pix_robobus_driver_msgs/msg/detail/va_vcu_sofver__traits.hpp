// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaVcuSofver.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VCU_SOFVER__TRAITS_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VCU_SOFVER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pix_robobus_driver_msgs/msg/detail/va_vcu_sofver__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pix_robobus_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VaVcuSofver & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: version_year
  {
    out << "version_year: ";
    rosidl_generator_traits::value_to_yaml(msg.version_year, out);
    out << ", ";
  }

  // member: version_month
  {
    out << "version_month: ";
    rosidl_generator_traits::value_to_yaml(msg.version_month, out);
    out << ", ";
  }

  // member: version_day
  {
    out << "version_day: ";
    rosidl_generator_traits::value_to_yaml(msg.version_day, out);
    out << ", ";
  }

  // member: version_main
  {
    out << "version_main: ";
    rosidl_generator_traits::value_to_yaml(msg.version_main, out);
    out << ", ";
  }

  // member: version_sub
  {
    out << "version_sub: ";
    rosidl_generator_traits::value_to_yaml(msg.version_sub, out);
    out << ", ";
  }

  // member: version_patch
  {
    out << "version_patch: ";
    rosidl_generator_traits::value_to_yaml(msg.version_patch, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VaVcuSofver & msg,
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

  // member: version_year
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_year: ";
    rosidl_generator_traits::value_to_yaml(msg.version_year, out);
    out << "\n";
  }

  // member: version_month
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_month: ";
    rosidl_generator_traits::value_to_yaml(msg.version_month, out);
    out << "\n";
  }

  // member: version_day
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_day: ";
    rosidl_generator_traits::value_to_yaml(msg.version_day, out);
    out << "\n";
  }

  // member: version_main
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_main: ";
    rosidl_generator_traits::value_to_yaml(msg.version_main, out);
    out << "\n";
  }

  // member: version_sub
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_sub: ";
    rosidl_generator_traits::value_to_yaml(msg.version_sub, out);
    out << "\n";
  }

  // member: version_patch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_patch: ";
    rosidl_generator_traits::value_to_yaml(msg.version_patch, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VaVcuSofver & msg, bool use_flow_style = false)
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
  const pix_robobus_driver_msgs::msg::VaVcuSofver & msg,
  std::ostream & out, size_t indentation = 0)
{
  pix_robobus_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pix_robobus_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pix_robobus_driver_msgs::msg::VaVcuSofver & msg)
{
  return pix_robobus_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pix_robobus_driver_msgs::msg::VaVcuSofver>()
{
  return "pix_robobus_driver_msgs::msg::VaVcuSofver";
}

template<>
inline const char * name<pix_robobus_driver_msgs::msg::VaVcuSofver>()
{
  return "pix_robobus_driver_msgs/msg/VaVcuSofver";
}

template<>
struct has_fixed_size<pix_robobus_driver_msgs::msg::VaVcuSofver>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pix_robobus_driver_msgs::msg::VaVcuSofver>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pix_robobus_driver_msgs::msg::VaVcuSofver>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VCU_SOFVER__TRAITS_HPP_
