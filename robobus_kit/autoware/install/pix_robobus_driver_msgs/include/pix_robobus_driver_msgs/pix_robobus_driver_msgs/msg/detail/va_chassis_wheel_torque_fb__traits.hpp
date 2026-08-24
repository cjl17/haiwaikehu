// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaChassisWheelTorqueFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_TORQUE_FB__TRAITS_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_TORQUE_FB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pix_robobus_driver_msgs/msg/detail/va_chassis_wheel_torque_fb__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pix_robobus_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VaChassisWheelTorqueFb & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: vcu_chassis_torque_lf
  {
    out << "vcu_chassis_torque_lf: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_torque_lf, out);
    out << ", ";
  }

  // member: vcu_chassis_torque_rf
  {
    out << "vcu_chassis_torque_rf: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_torque_rf, out);
    out << ", ";
  }

  // member: vcu_chassis_torque_lr
  {
    out << "vcu_chassis_torque_lr: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_torque_lr, out);
    out << ", ";
  }

  // member: vcu_chassis_torque_rr
  {
    out << "vcu_chassis_torque_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_torque_rr, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VaChassisWheelTorqueFb & msg,
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

  // member: vcu_chassis_torque_lf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_chassis_torque_lf: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_torque_lf, out);
    out << "\n";
  }

  // member: vcu_chassis_torque_rf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_chassis_torque_rf: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_torque_rf, out);
    out << "\n";
  }

  // member: vcu_chassis_torque_lr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_chassis_torque_lr: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_torque_lr, out);
    out << "\n";
  }

  // member: vcu_chassis_torque_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_chassis_torque_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_torque_rr, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VaChassisWheelTorqueFb & msg, bool use_flow_style = false)
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
  const pix_robobus_driver_msgs::msg::VaChassisWheelTorqueFb & msg,
  std::ostream & out, size_t indentation = 0)
{
  pix_robobus_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pix_robobus_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pix_robobus_driver_msgs::msg::VaChassisWheelTorqueFb & msg)
{
  return pix_robobus_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pix_robobus_driver_msgs::msg::VaChassisWheelTorqueFb>()
{
  return "pix_robobus_driver_msgs::msg::VaChassisWheelTorqueFb";
}

template<>
inline const char * name<pix_robobus_driver_msgs::msg::VaChassisWheelTorqueFb>()
{
  return "pix_robobus_driver_msgs/msg/VaChassisWheelTorqueFb";
}

template<>
struct has_fixed_size<pix_robobus_driver_msgs::msg::VaChassisWheelTorqueFb>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pix_robobus_driver_msgs::msg::VaChassisWheelTorqueFb>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pix_robobus_driver_msgs::msg::VaChassisWheelTorqueFb>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_TORQUE_FB__TRAITS_HPP_
