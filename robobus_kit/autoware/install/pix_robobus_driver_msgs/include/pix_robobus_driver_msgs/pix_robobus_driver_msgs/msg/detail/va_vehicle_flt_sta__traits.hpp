// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaVehicleFltSta.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_FLT_STA__TRAITS_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_FLT_STA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pix_robobus_driver_msgs/msg/detail/va_vehicle_flt_sta__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pix_robobus_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VaVehicleFltSta & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: vcu_sys_motor_over_temp_sta
  {
    out << "vcu_sys_motor_over_temp_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_motor_over_temp_sta, out);
    out << ", ";
  }

  // member: vcu_sys_bms_over_temp_sta
  {
    out << "vcu_sys_bms_over_temp_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_bms_over_temp_sta, out);
    out << ", ";
  }

  // member: vcu_sys_brake_over_temp_sta
  {
    out << "vcu_sys_brake_over_temp_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_brake_over_temp_sta, out);
    out << ", ";
  }

  // member: vcu_sys_steer_over_temp_sta
  {
    out << "vcu_sys_steer_over_temp_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_steer_over_temp_sta, out);
    out << ", ";
  }

  // member: vcu_sys_under_volt
  {
    out << "vcu_sys_under_volt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_under_volt, out);
    out << ", ";
  }

  // member: vcu_sys_flt
  {
    out << "vcu_sys_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_flt, out);
    out << ", ";
  }

  // member: vcu_sys_brake_flt
  {
    out << "vcu_sys_brake_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_brake_flt, out);
    out << ", ";
  }

  // member: vcu_sys_parking_flt
  {
    out << "vcu_sys_parking_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_parking_flt, out);
    out << ", ";
  }

  // member: vcu_sys_steer_front_flt
  {
    out << "vcu_sys_steer_front_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_steer_front_flt, out);
    out << ", ";
  }

  // member: vcu_sys_steer_back_flt
  {
    out << "vcu_sys_steer_back_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_steer_back_flt, out);
    out << ", ";
  }

  // member: vcu_sys_motor_lf_flt
  {
    out << "vcu_sys_motor_lf_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_motor_lf_flt, out);
    out << ", ";
  }

  // member: vcu_sys_motor_rf_flt
  {
    out << "vcu_sys_motor_rf_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_motor_rf_flt, out);
    out << ", ";
  }

  // member: vcu_sys_motor_lr_flt
  {
    out << "vcu_sys_motor_lr_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_motor_lr_flt, out);
    out << ", ";
  }

  // member: vcu_sys_motor_rr_flt
  {
    out << "vcu_sys_motor_rr_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_motor_rr_flt, out);
    out << ", ";
  }

  // member: vcu_sys_bms_flt
  {
    out << "vcu_sys_bms_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_bms_flt, out);
    out << ", ";
  }

  // member: vcu_sys_dc_flt
  {
    out << "vcu_sys_dc_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_dc_flt, out);
    out << ", ";
  }

  // member: vcu_sys_door_flt
  {
    out << "vcu_sys_door_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_door_flt, out);
    out << ", ";
  }

  // member: vcu_sys_dpm_flt
  {
    out << "vcu_sys_dpm_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_dpm_flt, out);
    out << ", ";
  }

  // member: vcu_sys_bcm_flt
  {
    out << "vcu_sys_bcm_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_bcm_flt, out);
    out << ", ";
  }

  // member: vcu_vehicle_flt_level
  {
    out << "vcu_vehicle_flt_level: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_flt_level, out);
    out << ", ";
  }

  // member: vcu_sys_flt_reserve1
  {
    out << "vcu_sys_flt_reserve1: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_flt_reserve1, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VaVehicleFltSta & msg,
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

  // member: vcu_sys_motor_over_temp_sta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_sys_motor_over_temp_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_motor_over_temp_sta, out);
    out << "\n";
  }

  // member: vcu_sys_bms_over_temp_sta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_sys_bms_over_temp_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_bms_over_temp_sta, out);
    out << "\n";
  }

  // member: vcu_sys_brake_over_temp_sta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_sys_brake_over_temp_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_brake_over_temp_sta, out);
    out << "\n";
  }

  // member: vcu_sys_steer_over_temp_sta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_sys_steer_over_temp_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_steer_over_temp_sta, out);
    out << "\n";
  }

  // member: vcu_sys_under_volt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_sys_under_volt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_under_volt, out);
    out << "\n";
  }

  // member: vcu_sys_flt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_sys_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_flt, out);
    out << "\n";
  }

  // member: vcu_sys_brake_flt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_sys_brake_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_brake_flt, out);
    out << "\n";
  }

  // member: vcu_sys_parking_flt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_sys_parking_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_parking_flt, out);
    out << "\n";
  }

  // member: vcu_sys_steer_front_flt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_sys_steer_front_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_steer_front_flt, out);
    out << "\n";
  }

  // member: vcu_sys_steer_back_flt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_sys_steer_back_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_steer_back_flt, out);
    out << "\n";
  }

  // member: vcu_sys_motor_lf_flt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_sys_motor_lf_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_motor_lf_flt, out);
    out << "\n";
  }

  // member: vcu_sys_motor_rf_flt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_sys_motor_rf_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_motor_rf_flt, out);
    out << "\n";
  }

  // member: vcu_sys_motor_lr_flt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_sys_motor_lr_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_motor_lr_flt, out);
    out << "\n";
  }

  // member: vcu_sys_motor_rr_flt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_sys_motor_rr_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_motor_rr_flt, out);
    out << "\n";
  }

  // member: vcu_sys_bms_flt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_sys_bms_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_bms_flt, out);
    out << "\n";
  }

  // member: vcu_sys_dc_flt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_sys_dc_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_dc_flt, out);
    out << "\n";
  }

  // member: vcu_sys_door_flt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_sys_door_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_door_flt, out);
    out << "\n";
  }

  // member: vcu_sys_dpm_flt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_sys_dpm_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_dpm_flt, out);
    out << "\n";
  }

  // member: vcu_sys_bcm_flt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_sys_bcm_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_bcm_flt, out);
    out << "\n";
  }

  // member: vcu_vehicle_flt_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_vehicle_flt_level: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_vehicle_flt_level, out);
    out << "\n";
  }

  // member: vcu_sys_flt_reserve1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_sys_flt_reserve1: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_sys_flt_reserve1, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VaVehicleFltSta & msg, bool use_flow_style = false)
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
  const pix_robobus_driver_msgs::msg::VaVehicleFltSta & msg,
  std::ostream & out, size_t indentation = 0)
{
  pix_robobus_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pix_robobus_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pix_robobus_driver_msgs::msg::VaVehicleFltSta & msg)
{
  return pix_robobus_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pix_robobus_driver_msgs::msg::VaVehicleFltSta>()
{
  return "pix_robobus_driver_msgs::msg::VaVehicleFltSta";
}

template<>
inline const char * name<pix_robobus_driver_msgs::msg::VaVehicleFltSta>()
{
  return "pix_robobus_driver_msgs/msg/VaVehicleFltSta";
}

template<>
struct has_fixed_size<pix_robobus_driver_msgs::msg::VaVehicleFltSta>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pix_robobus_driver_msgs::msg::VaVehicleFltSta>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pix_robobus_driver_msgs::msg::VaVehicleFltSta>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_FLT_STA__TRAITS_HPP_
