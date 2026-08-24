// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaVehicleWorkStaFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_WORK_STA_FB__TRAITS_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_WORK_STA_FB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pix_robobus_driver_msgs/msg/detail/va_vehicle_work_sta_fb__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pix_robobus_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VaVehicleWorkStaFb & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: vcu_driving_mode_fb
  {
    out << "vcu_driving_mode_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_driving_mode_fb, out);
    out << ", ";
  }

  // member: vcu_chassis_power_sta_fb
  {
    out << "vcu_chassis_power_sta_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_power_sta_fb, out);
    out << ", ";
  }

  // member: vcu_chassis_power_dc_sta
  {
    out << "vcu_chassis_power_dc_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_power_dc_sta, out);
    out << ", ";
  }

  // member: vcu_remote_connecte_sta
  {
    out << "vcu_remote_connecte_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_remote_connecte_sta, out);
    out << ", ";
  }

  // member: vcu_acu_connect_sta
  {
    out << "vcu_acu_connect_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_acu_connect_sta, out);
    out << ", ";
  }

  // member: vcu_chassis_speed_limited_mode_fb
  {
    out << "vcu_chassis_speed_limited_mode_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_speed_limited_mode_fb, out);
    out << ", ";
  }

  // member: vcu_chassis_power_limite_sta
  {
    out << "vcu_chassis_power_limite_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_power_limite_sta, out);
    out << ", ";
  }

  // member: vcu_sys_eco_mode
  {
    out << "vcu_sys_eco_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_eco_mode, out);
    out << ", ";
  }

  // member: vcu_chassis_speed_limited_val_fb
  {
    out << "vcu_chassis_speed_limited_val_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_speed_limited_val_fb, out);
    out << ", ";
  }

  // member: vcu_chassis_low_power_volt_sta
  {
    out << "vcu_chassis_low_power_volt_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_low_power_volt_sta, out);
    out << ", ";
  }

  // member: vcu_chassis_e_stop_sta_fb
  {
    out << "vcu_chassis_e_stop_sta_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_e_stop_sta_fb, out);
    out << ", ";
  }

  // member: vcu_crash_front_sta
  {
    out << "vcu_crash_front_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_crash_front_sta, out);
    out << ", ";
  }

  // member: vcu_crash_rear_sta
  {
    out << "vcu_crash_rear_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_crash_rear_sta, out);
    out << ", ";
  }

  // member: vcu_crash_left_sta
  {
    out << "vcu_crash_left_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_crash_left_sta, out);
    out << ", ";
  }

  // member: vcu_crash_right_sta
  {
    out << "vcu_crash_right_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_crash_right_sta, out);
    out << ", ";
  }

  // member: vcu_life
  {
    out << "vcu_life: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_life, out);
    out << ", ";
  }

  // member: vcu_check_sum
  {
    out << "vcu_check_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_check_sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VaVehicleWorkStaFb & msg,
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

  // member: vcu_driving_mode_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_driving_mode_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_driving_mode_fb, out);
    out << "\n";
  }

  // member: vcu_chassis_power_sta_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_chassis_power_sta_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_power_sta_fb, out);
    out << "\n";
  }

  // member: vcu_chassis_power_dc_sta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_chassis_power_dc_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_power_dc_sta, out);
    out << "\n";
  }

  // member: vcu_remote_connecte_sta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_remote_connecte_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_remote_connecte_sta, out);
    out << "\n";
  }

  // member: vcu_acu_connect_sta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_acu_connect_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_acu_connect_sta, out);
    out << "\n";
  }

  // member: vcu_chassis_speed_limited_mode_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_chassis_speed_limited_mode_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_speed_limited_mode_fb, out);
    out << "\n";
  }

  // member: vcu_chassis_power_limite_sta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_chassis_power_limite_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_power_limite_sta, out);
    out << "\n";
  }

  // member: vcu_sys_eco_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_sys_eco_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_eco_mode, out);
    out << "\n";
  }

  // member: vcu_chassis_speed_limited_val_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_chassis_speed_limited_val_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_speed_limited_val_fb, out);
    out << "\n";
  }

  // member: vcu_chassis_low_power_volt_sta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_chassis_low_power_volt_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_low_power_volt_sta, out);
    out << "\n";
  }

  // member: vcu_chassis_e_stop_sta_fb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_chassis_e_stop_sta_fb: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_chassis_e_stop_sta_fb, out);
    out << "\n";
  }

  // member: vcu_crash_front_sta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_crash_front_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_crash_front_sta, out);
    out << "\n";
  }

  // member: vcu_crash_rear_sta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_crash_rear_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_crash_rear_sta, out);
    out << "\n";
  }

  // member: vcu_crash_left_sta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_crash_left_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_crash_left_sta, out);
    out << "\n";
  }

  // member: vcu_crash_right_sta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_crash_right_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_crash_right_sta, out);
    out << "\n";
  }

  // member: vcu_life
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_life: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_life, out);
    out << "\n";
  }

  // member: vcu_check_sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_check_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_check_sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VaVehicleWorkStaFb & msg, bool use_flow_style = false)
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
  const pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb & msg,
  std::ostream & out, size_t indentation = 0)
{
  pix_robobus_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pix_robobus_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb & msg)
{
  return pix_robobus_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb>()
{
  return "pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb";
}

template<>
inline const char * name<pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb>()
{
  return "pix_robobus_driver_msgs/msg/VaVehicleWorkStaFb";
}

template<>
struct has_fixed_size<pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_WORK_STA_FB__TRAITS_HPP_
