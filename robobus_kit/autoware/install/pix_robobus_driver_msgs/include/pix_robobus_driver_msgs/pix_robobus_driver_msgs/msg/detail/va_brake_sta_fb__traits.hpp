// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaBrakeStaFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_BRAKE_STA_FB__TRAITS_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_BRAKE_STA_FB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pix_robobus_driver_msgs/msg/detail/va_brake_sta_fb__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pix_robobus_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VaBrakeStaFb & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: vcu_chassis_brake_en_sta
  {
    out << "vcu_chassis_brake_en_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_brake_en_sta, out);
    out << ", ";
  }

  // member: vcu_vehicle_brake_lamp_fb
  {
    out << "vcu_vehicle_brake_lamp_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_brake_lamp_fb, out);
    out << ", ";
  }

  // member: vcu_chassis_epb_fb
  {
    out << "vcu_chassis_epb_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_epb_fb, out);
    out << ", ";
  }

  // member: vcu_chassis_brake_communication_lost
  {
    out << "vcu_chassis_brake_communication_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_brake_communication_lost, out);
    out << ", ";
  }

  // member: vcu_chassis_brake_padl_fb
  {
    out << "vcu_chassis_brake_padl_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_brake_padl_fb, out);
    out << ", ";
  }

  // member: vcu_brake_pedal_req_fb
  {
    out << "vcu_brake_pedal_req_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_brake_pedal_req_fb, out);
    out << ", ";
  }

  // member: vcu_aeb_en_sta_fb
  {
    out << "vcu_aeb_en_sta_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_aeb_en_sta_fb, out);
    out << ", ";
  }

  // member: vcu_aeb_trigger_sta_fb
  {
    out << "vcu_aeb_trigger_sta_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_aeb_trigger_sta_fb, out);
    out << ", ";
  }

  // member: vcu_chassis_brake_pressure_fb
  {
    out << "vcu_chassis_brake_pressure_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_brake_pressure_fb, out);
    out << ", ";
  }

  // member: vcu_brake_life
  {
    out << "vcu_brake_life: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_brake_life, out);
    out << ", ";
  }

  // member: vcu_brake_check_sta
  {
    out << "vcu_brake_check_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_brake_check_sta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VaBrakeStaFb & msg,
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

  // member: vcu_chassis_brake_en_sta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_chassis_brake_en_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_brake_en_sta, out);
    out << "\n";
  }

  // member: vcu_vehicle_brake_lamp_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_vehicle_brake_lamp_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_brake_lamp_fb, out);
    out << "\n";
  }

  // member: vcu_chassis_epb_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_chassis_epb_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_epb_fb, out);
    out << "\n";
  }

  // member: vcu_chassis_brake_communication_lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_chassis_brake_communication_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_brake_communication_lost, out);
    out << "\n";
  }

  // member: vcu_chassis_brake_padl_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_chassis_brake_padl_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_brake_padl_fb, out);
    out << "\n";
  }

  // member: vcu_brake_pedal_req_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_brake_pedal_req_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_brake_pedal_req_fb, out);
    out << "\n";
  }

  // member: vcu_aeb_en_sta_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_aeb_en_sta_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_aeb_en_sta_fb, out);
    out << "\n";
  }

  // member: vcu_aeb_trigger_sta_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_aeb_trigger_sta_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_aeb_trigger_sta_fb, out);
    out << "\n";
  }

  // member: vcu_chassis_brake_pressure_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_chassis_brake_pressure_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_brake_pressure_fb, out);
    out << "\n";
  }

  // member: vcu_brake_life
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_brake_life: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_brake_life, out);
    out << "\n";
  }

  // member: vcu_brake_check_sta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_brake_check_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_brake_check_sta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VaBrakeStaFb & msg, bool use_flow_style = false)
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
  const pix_robobus_driver_msgs::msg::VaBrakeStaFb & msg,
  std::ostream & out, size_t indentation = 0)
{
  pix_robobus_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pix_robobus_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pix_robobus_driver_msgs::msg::VaBrakeStaFb & msg)
{
  return pix_robobus_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pix_robobus_driver_msgs::msg::VaBrakeStaFb>()
{
  return "pix_robobus_driver_msgs::msg::VaBrakeStaFb";
}

template<>
inline const char * name<pix_robobus_driver_msgs::msg::VaBrakeStaFb>()
{
  return "pix_robobus_driver_msgs/msg/VaBrakeStaFb";
}

template<>
struct has_fixed_size<pix_robobus_driver_msgs::msg::VaBrakeStaFb>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pix_robobus_driver_msgs::msg::VaBrakeStaFb>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pix_robobus_driver_msgs::msg::VaBrakeStaFb>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_BRAKE_STA_FB__TRAITS_HPP_
