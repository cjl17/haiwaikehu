// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pix_robobus_driver_msgs:msg/AvVehicleCtrl.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_VEHICLE_CTRL__TRAITS_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_VEHICLE_CTRL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pix_robobus_driver_msgs/msg/detail/av_vehicle_ctrl__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pix_robobus_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AvVehicleCtrl & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: acu_vehicle_pos_lamp_ctrl
  {
    out << "acu_vehicle_pos_lamp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_pos_lamp_ctrl, out);
    out << ", ";
  }

  // member: acu_vehicle_head_lamp_ctrl
  {
    out << "acu_vehicle_head_lamp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_head_lamp_ctrl, out);
    out << ", ";
  }

  // member: acu_vehicle_left_lamp_ctrl
  {
    out << "acu_vehicle_left_lamp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_left_lamp_ctrl, out);
    out << ", ";
  }

  // member: acu_vehicle_right_lamp_ctrl
  {
    out << "acu_vehicle_right_lamp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_right_lamp_ctrl, out);
    out << ", ";
  }

  // member: acu_vehicle_high_beam_ctrl
  {
    out << "acu_vehicle_high_beam_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_high_beam_ctrl, out);
    out << ", ";
  }

  // member: acu_vehicle_fog_lamp_ctrl
  {
    out << "acu_vehicle_fog_lamp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_fog_lamp_ctrl, out);
    out << ", ";
  }

  // member: acu_vehicle_body_light_ctrl
  {
    out << "acu_vehicle_body_light_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_body_light_ctrl, out);
    out << ", ";
  }

  // member: acu_vehicle_read_light_ctrl
  {
    out << "acu_vehicle_read_light_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_read_light_ctrl, out);
    out << ", ";
  }

  // member: acu_vehicle_voice
  {
    out << "acu_vehicle_voice: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_voice, out);
    out << ", ";
  }

  // member: acu_vehicle_wipers_ctrl
  {
    out << "acu_vehicle_wipers_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_wipers_ctrl, out);
    out << ", ";
  }

  // member: acu_vehicle_door_ctrl
  {
    out << "acu_vehicle_door_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_door_ctrl, out);
    out << ", ";
  }

  // member: acu_vehicle_window_ctrl
  {
    out << "acu_vehicle_window_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_window_ctrl, out);
    out << ", ";
  }

  // member: acu_chassis_speed_limite_mode
  {
    out << "acu_chassis_speed_limite_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_chassis_speed_limite_mode, out);
    out << ", ";
  }

  // member: acu_vehicle_horn_ctrl
  {
    out << "acu_vehicle_horn_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_horn_ctrl, out);
    out << ", ";
  }

  // member: acu_vehicle_spray_ctrl
  {
    out << "acu_vehicle_spray_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_spray_ctrl, out);
    out << ", ";
  }

  // member: acu_chassis_speed_limite_val
  {
    out << "acu_chassis_speed_limite_val: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_chassis_speed_limite_val, out);
    out << ", ";
  }

  // member: acu_check_sum_en
  {
    out << "acu_check_sum_en: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_check_sum_en, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AvVehicleCtrl & msg,
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

  // member: acu_vehicle_pos_lamp_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_vehicle_pos_lamp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_pos_lamp_ctrl, out);
    out << "\n";
  }

  // member: acu_vehicle_head_lamp_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_vehicle_head_lamp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_head_lamp_ctrl, out);
    out << "\n";
  }

  // member: acu_vehicle_left_lamp_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_vehicle_left_lamp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_left_lamp_ctrl, out);
    out << "\n";
  }

  // member: acu_vehicle_right_lamp_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_vehicle_right_lamp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_right_lamp_ctrl, out);
    out << "\n";
  }

  // member: acu_vehicle_high_beam_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_vehicle_high_beam_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_high_beam_ctrl, out);
    out << "\n";
  }

  // member: acu_vehicle_fog_lamp_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_vehicle_fog_lamp_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_fog_lamp_ctrl, out);
    out << "\n";
  }

  // member: acu_vehicle_body_light_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_vehicle_body_light_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_body_light_ctrl, out);
    out << "\n";
  }

  // member: acu_vehicle_read_light_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_vehicle_read_light_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_read_light_ctrl, out);
    out << "\n";
  }

  // member: acu_vehicle_voice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_vehicle_voice: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_voice, out);
    out << "\n";
  }

  // member: acu_vehicle_wipers_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_vehicle_wipers_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_wipers_ctrl, out);
    out << "\n";
  }

  // member: acu_vehicle_door_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_vehicle_door_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_door_ctrl, out);
    out << "\n";
  }

  // member: acu_vehicle_window_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_vehicle_window_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_window_ctrl, out);
    out << "\n";
  }

  // member: acu_chassis_speed_limite_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_chassis_speed_limite_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_chassis_speed_limite_mode, out);
    out << "\n";
  }

  // member: acu_vehicle_horn_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_vehicle_horn_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_horn_ctrl, out);
    out << "\n";
  }

  // member: acu_vehicle_spray_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_vehicle_spray_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_vehicle_spray_ctrl, out);
    out << "\n";
  }

  // member: acu_chassis_speed_limite_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_chassis_speed_limite_val: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_chassis_speed_limite_val, out);
    out << "\n";
  }

  // member: acu_check_sum_en
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acu_check_sum_en: ";
    rosidl_generator_traits::value_to_yaml(msg.acu_check_sum_en, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AvVehicleCtrl & msg, bool use_flow_style = false)
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
  const pix_robobus_driver_msgs::msg::AvVehicleCtrl & msg,
  std::ostream & out, size_t indentation = 0)
{
  pix_robobus_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pix_robobus_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pix_robobus_driver_msgs::msg::AvVehicleCtrl & msg)
{
  return pix_robobus_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pix_robobus_driver_msgs::msg::AvVehicleCtrl>()
{
  return "pix_robobus_driver_msgs::msg::AvVehicleCtrl";
}

template<>
inline const char * name<pix_robobus_driver_msgs::msg::AvVehicleCtrl>()
{
  return "pix_robobus_driver_msgs/msg/AvVehicleCtrl";
}

template<>
struct has_fixed_size<pix_robobus_driver_msgs::msg::AvVehicleCtrl>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pix_robobus_driver_msgs::msg::AvVehicleCtrl>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pix_robobus_driver_msgs::msg::AvVehicleCtrl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_VEHICLE_CTRL__TRAITS_HPP_
