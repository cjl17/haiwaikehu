// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaVehicleStaFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_STA_FB__TRAITS_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_STA_FB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pix_robobus_driver_msgs/msg/detail/va_vehicle_sta_fb__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pix_robobus_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VaVehicleStaFb & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: vcu_vehicle_pos_lamp_fb
  {
    out << "vcu_vehicle_pos_lamp_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_pos_lamp_fb, out);
    out << ", ";
  }

  // member: vcu_vehicle_head_lamp_fb
  {
    out << "vcu_vehicle_head_lamp_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_head_lamp_fb, out);
    out << ", ";
  }

  // member: vcu_vehicle_left_lamp_fb
  {
    out << "vcu_vehicle_left_lamp_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_left_lamp_fb, out);
    out << ", ";
  }

  // member: vcu_vehicle_right_lamp_fb
  {
    out << "vcu_vehicle_right_lamp_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_right_lamp_fb, out);
    out << ", ";
  }

  // member: vcu_vehicle_high_beam_fb
  {
    out << "vcu_vehicle_high_beam_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_high_beam_fb, out);
    out << ", ";
  }

  // member: vcu_vehicle_fog_lamp_fb
  {
    out << "vcu_vehicle_fog_lamp_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_fog_lamp_fb, out);
    out << ", ";
  }

  // member: vcu_vehicle_hazard_war_lamp_fb
  {
    out << "vcu_vehicle_hazard_war_lamp_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_hazard_war_lamp_fb, out);
    out << ", ";
  }

  // member: vcu_vehicle_body_lamp_fb
  {
    out << "vcu_vehicle_body_lamp_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_body_lamp_fb, out);
    out << ", ";
  }

  // member: vcu_vehicle_read_lamp_fb
  {
    out << "vcu_vehicle_read_lamp_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_read_lamp_fb, out);
    out << ", ";
  }

  // member: acu_vehicle_window_fb
  {
    out << "acu_vehicle_window_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_window_fb, out);
    out << ", ";
  }

  // member: vcu_vehicle_door_sta_fb
  {
    out << "vcu_vehicle_door_sta_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_door_sta_fb, out);
    out << ", ";
  }

  // member: vcu_vehicle_wipers_sta_fb
  {
    out << "vcu_vehicle_wipers_sta_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_wipers_sta_fb, out);
    out << ", ";
  }

  // member: vcu_vehicle_safety_belt1
  {
    out << "vcu_vehicle_safety_belt1: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_safety_belt1, out);
    out << ", ";
  }

  // member: vcu_vehicle_safety_belt2
  {
    out << "vcu_vehicle_safety_belt2: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_safety_belt2, out);
    out << ", ";
  }

  // member: vcu_vehicle_safety_belt3
  {
    out << "vcu_vehicle_safety_belt3: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_safety_belt3, out);
    out << ", ";
  }

  // member: vcu_vehicle_safety_belt4
  {
    out << "vcu_vehicle_safety_belt4: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_safety_belt4, out);
    out << ", ";
  }

  // member: vcu_vehicle_safety_belt5
  {
    out << "vcu_vehicle_safety_belt5: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_safety_belt5, out);
    out << ", ";
  }

  // member: vcu_vehicle_safety_belt6
  {
    out << "vcu_vehicle_safety_belt6: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_safety_belt6, out);
    out << ", ";
  }

  // member: vcu_vehicle_reserve_warning
  {
    out << "vcu_vehicle_reserve_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_reserve_warning, out);
    out << ", ";
  }

  // member: vcu_vehicle_display_speed
  {
    out << "vcu_vehicle_display_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_display_speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VaVehicleStaFb & msg,
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

  // member: vcu_vehicle_pos_lamp_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_vehicle_pos_lamp_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_pos_lamp_fb, out);
    out << "\n";
  }

  // member: vcu_vehicle_head_lamp_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_vehicle_head_lamp_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_head_lamp_fb, out);
    out << "\n";
  }

  // member: vcu_vehicle_left_lamp_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_vehicle_left_lamp_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_left_lamp_fb, out);
    out << "\n";
  }

  // member: vcu_vehicle_right_lamp_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_vehicle_right_lamp_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_right_lamp_fb, out);
    out << "\n";
  }

  // member: vcu_vehicle_high_beam_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_vehicle_high_beam_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_high_beam_fb, out);
    out << "\n";
  }

  // member: vcu_vehicle_fog_lamp_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_vehicle_fog_lamp_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_fog_lamp_fb, out);
    out << "\n";
  }

  // member: vcu_vehicle_hazard_war_lamp_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_vehicle_hazard_war_lamp_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_hazard_war_lamp_fb, out);
    out << "\n";
  }

  // member: vcu_vehicle_body_lamp_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_vehicle_body_lamp_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_body_lamp_fb, out);
    out << "\n";
  }

  // member: vcu_vehicle_read_lamp_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_vehicle_read_lamp_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_read_lamp_fb, out);
    out << "\n";
  }

  // member: acu_vehicle_window_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_vehicle_window_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_window_fb, out);
    out << "\n";
  }

  // member: vcu_vehicle_door_sta_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_vehicle_door_sta_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_door_sta_fb, out);
    out << "\n";
  }

  // member: vcu_vehicle_wipers_sta_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_vehicle_wipers_sta_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_wipers_sta_fb, out);
    out << "\n";
  }

  // member: vcu_vehicle_safety_belt1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_vehicle_safety_belt1: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_safety_belt1, out);
    out << "\n";
  }

  // member: vcu_vehicle_safety_belt2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_vehicle_safety_belt2: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_safety_belt2, out);
    out << "\n";
  }

  // member: vcu_vehicle_safety_belt3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_vehicle_safety_belt3: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_safety_belt3, out);
    out << "\n";
  }

  // member: vcu_vehicle_safety_belt4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_vehicle_safety_belt4: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_safety_belt4, out);
    out << "\n";
  }

  // member: vcu_vehicle_safety_belt5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_vehicle_safety_belt5: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_safety_belt5, out);
    out << "\n";
  }

  // member: vcu_vehicle_safety_belt6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_vehicle_safety_belt6: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_safety_belt6, out);
    out << "\n";
  }

  // member: vcu_vehicle_reserve_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_vehicle_reserve_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_reserve_warning, out);
    out << "\n";
  }

  // member: vcu_vehicle_display_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_vehicle_display_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_display_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VaVehicleStaFb & msg, bool use_flow_style = false)
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
  const pix_robobus_driver_msgs::msg::VaVehicleStaFb & msg,
  std::ostream & out, size_t indentation = 0)
{
  pix_robobus_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pix_robobus_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pix_robobus_driver_msgs::msg::VaVehicleStaFb & msg)
{
  return pix_robobus_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pix_robobus_driver_msgs::msg::VaVehicleStaFb>()
{
  return "pix_robobus_driver_msgs::msg::VaVehicleStaFb";
}

template<>
inline const char * name<pix_robobus_driver_msgs::msg::VaVehicleStaFb>()
{
  return "pix_robobus_driver_msgs/msg/VaVehicleStaFb";
}

template<>
struct has_fixed_size<pix_robobus_driver_msgs::msg::VaVehicleStaFb>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pix_robobus_driver_msgs::msg::VaVehicleStaFb>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pix_robobus_driver_msgs::msg::VaVehicleStaFb>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_STA_FB__TRAITS_HPP_
