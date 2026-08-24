// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pix_robobus_driver_msgs:msg/AvDriveCtrl.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_DRIVE_CTRL__TRAITS_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_DRIVE_CTRL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pix_robobus_driver_msgs/msg/detail/av_drive_ctrl__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pix_robobus_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AvDriveCtrl & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: acu_chassis_driver_en_ctrl
  {
    out << "acu_chassis_driver_en_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_chassis_driver_en_ctrl, out);
    out << ", ";
  }

  // member: acu_chassis_driver_mode_ctrl
  {
    out << "acu_chassis_driver_mode_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_chassis_driver_mode_ctrl, out);
    out << ", ";
  }

  // member: acu_chassis_gear_ctrl
  {
    out << "acu_chassis_gear_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_chassis_gear_ctrl, out);
    out << ", ";
  }

  // member: acu_chassis4_wd_mode_ctrl
  {
    out << "acu_chassis4_wd_mode_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_chassis4_wd_mode_ctrl, out);
    out << ", ";
  }

  // member: acu_chassis_speed_ctrl
  {
    out << "acu_chassis_speed_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_chassis_speed_ctrl, out);
    out << ", ";
  }

  // member: acu_chassis_throttle_pdl_target
  {
    out << "acu_chassis_throttle_pdl_target: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_chassis_throttle_pdl_target, out);
    out << ", ";
  }

  // member: acu_drive_life_sig
  {
    out << "acu_drive_life_sig: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_drive_life_sig, out);
    out << ", ";
  }

  // member: acu_check_sum130
  {
    out << "acu_check_sum130: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_check_sum130, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AvDriveCtrl & msg,
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

  // member: acu_chassis_driver_en_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_chassis_driver_en_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_chassis_driver_en_ctrl, out);
    out << "\n";
  }

  // member: acu_chassis_driver_mode_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_chassis_driver_mode_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_chassis_driver_mode_ctrl, out);
    out << "\n";
  }

  // member: acu_chassis_gear_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_chassis_gear_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_chassis_gear_ctrl, out);
    out << "\n";
  }

  // member: acu_chassis4_wd_mode_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_chassis4_wd_mode_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_chassis4_wd_mode_ctrl, out);
    out << "\n";
  }

  // member: acu_chassis_speed_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_chassis_speed_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_chassis_speed_ctrl, out);
    out << "\n";
  }

  // member: acu_chassis_throttle_pdl_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_chassis_throttle_pdl_target: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_chassis_throttle_pdl_target, out);
    out << "\n";
  }

  // member: acu_drive_life_sig
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_drive_life_sig: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_drive_life_sig, out);
    out << "\n";
  }

  // member: acu_check_sum130
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_check_sum130: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_check_sum130, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AvDriveCtrl & msg, bool use_flow_style = false)
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
  const pix_robobus_driver_msgs::msg::AvDriveCtrl & msg,
  std::ostream & out, size_t indentation = 0)
{
  pix_robobus_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pix_robobus_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pix_robobus_driver_msgs::msg::AvDriveCtrl & msg)
{
  return pix_robobus_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pix_robobus_driver_msgs::msg::AvDriveCtrl>()
{
  return "pix_robobus_driver_msgs::msg::AvDriveCtrl";
}

template<>
inline const char * name<pix_robobus_driver_msgs::msg::AvDriveCtrl>()
{
  return "pix_robobus_driver_msgs/msg/AvDriveCtrl";
}

template<>
struct has_fixed_size<pix_robobus_driver_msgs::msg::AvDriveCtrl>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pix_robobus_driver_msgs::msg::AvDriveCtrl>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pix_robobus_driver_msgs::msg::AvDriveCtrl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_DRIVE_CTRL__TRAITS_HPP_
