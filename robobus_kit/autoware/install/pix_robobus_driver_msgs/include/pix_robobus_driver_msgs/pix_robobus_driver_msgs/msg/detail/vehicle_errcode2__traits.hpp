// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pix_robobus_driver_msgs:msg/VehicleErrcode2.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VEHICLE_ERRCODE2__TRAITS_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VEHICLE_ERRCODE2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pix_robobus_driver_msgs/msg/detail/vehicle_errcode2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pix_robobus_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleErrcode2 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: obc_network_fault
  {
    out << "obc_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.obc_network_fault, out);
    out << ", ";
  }

  // member: obc_hardware_fault
  {
    out << "obc_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.obc_hardware_fault, out);
    out << ", ";
  }

  // member: vcu_reserve1
  {
    out << "vcu_reserve1: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve1, out);
    out << ", ";
  }

  // member: dp_hardware_fault
  {
    out << "dp_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.dp_hardware_fault, out);
    out << ", ";
  }

  // member: dp_network_fault
  {
    out << "dp_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.dp_network_fault, out);
    out << ", ";
  }

  // member: vcu_reserve5
  {
    out << "vcu_reserve5: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve5, out);
    out << ", ";
  }

  // member: bcm_hardware_fault
  {
    out << "bcm_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.bcm_hardware_fault, out);
    out << ", ";
  }

  // member: bcm_network_fault
  {
    out << "bcm_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.bcm_network_fault, out);
    out << ", ";
  }

  // member: vcu_reserve11
  {
    out << "vcu_reserve11: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve11, out);
    out << ", ";
  }

  // member: dcu_network_fault
  {
    out << "dcu_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.dcu_network_fault, out);
    out << ", ";
  }

  // member: dcu_hardware_fault
  {
    out << "dcu_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.dcu_hardware_fault, out);
    out << ", ";
  }

  // member: vcu_reserve17
  {
    out << "vcu_reserve17: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve17, out);
    out << ", ";
  }

  // member: avas_network_fault
  {
    out << "avas_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.avas_network_fault, out);
    out << ", ";
  }

  // member: avas_hardware_fault
  {
    out << "avas_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.avas_hardware_fault, out);
    out << ", ";
  }

  // member: vcu_reserve18
  {
    out << "vcu_reserve18: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve18, out);
    out << ", ";
  }

  // member: vcu_reserve19
  {
    out << "vcu_reserve19: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve19, out);
    out << ", ";
  }

  // member: iis_hardware_fault
  {
    out << "iis_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.iis_hardware_fault, out);
    out << ", ";
  }

  // member: iis_network_fault
  {
    out << "iis_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.iis_network_fault, out);
    out << ", ";
  }

  // member: vcu_reserve20
  {
    out << "vcu_reserve20: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve20, out);
    out << ", ";
  }

  // member: vcu_reserve26
  {
    out << "vcu_reserve26: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve26, out);
    out << ", ";
  }

  // member: ac_hardware_fault
  {
    out << "ac_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.ac_hardware_fault, out);
    out << ", ";
  }

  // member: ac_network_fault
  {
    out << "ac_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.ac_network_fault, out);
    out << ", ";
  }

  // member: vcu_reserve32
  {
    out << "vcu_reserve32: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve32, out);
    out << ", ";
  }

  // member: lv_battery_low_voltage_fault
  {
    out << "lv_battery_low_voltage_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.lv_battery_low_voltage_fault, out);
    out << ", ";
  }

  // member: lv_battery_high_voltage_fault
  {
    out << "lv_battery_high_voltage_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.lv_battery_high_voltage_fault, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleErrcode2 & msg,
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

  // member: obc_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obc_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.obc_network_fault, out);
    out << "\n";
  }

  // member: obc_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obc_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.obc_hardware_fault, out);
    out << "\n";
  }

  // member: vcu_reserve1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_reserve1: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve1, out);
    out << "\n";
  }

  // member: dp_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dp_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.dp_hardware_fault, out);
    out << "\n";
  }

  // member: dp_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dp_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.dp_network_fault, out);
    out << "\n";
  }

  // member: vcu_reserve5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_reserve5: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve5, out);
    out << "\n";
  }

  // member: bcm_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bcm_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.bcm_hardware_fault, out);
    out << "\n";
  }

  // member: bcm_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bcm_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.bcm_network_fault, out);
    out << "\n";
  }

  // member: vcu_reserve11
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_reserve11: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve11, out);
    out << "\n";
  }

  // member: dcu_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dcu_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.dcu_network_fault, out);
    out << "\n";
  }

  // member: dcu_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dcu_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.dcu_hardware_fault, out);
    out << "\n";
  }

  // member: vcu_reserve17
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_reserve17: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve17, out);
    out << "\n";
  }

  // member: avas_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avas_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.avas_network_fault, out);
    out << "\n";
  }

  // member: avas_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avas_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.avas_hardware_fault, out);
    out << "\n";
  }

  // member: vcu_reserve18
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_reserve18: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve18, out);
    out << "\n";
  }

  // member: vcu_reserve19
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_reserve19: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve19, out);
    out << "\n";
  }

  // member: iis_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iis_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.iis_hardware_fault, out);
    out << "\n";
  }

  // member: iis_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iis_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.iis_network_fault, out);
    out << "\n";
  }

  // member: vcu_reserve20
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_reserve20: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve20, out);
    out << "\n";
  }

  // member: vcu_reserve26
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_reserve26: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve26, out);
    out << "\n";
  }

  // member: ac_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ac_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.ac_hardware_fault, out);
    out << "\n";
  }

  // member: ac_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ac_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.ac_network_fault, out);
    out << "\n";
  }

  // member: vcu_reserve32
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_reserve32: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve32, out);
    out << "\n";
  }

  // member: lv_battery_low_voltage_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lv_battery_low_voltage_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.lv_battery_low_voltage_fault, out);
    out << "\n";
  }

  // member: lv_battery_high_voltage_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lv_battery_high_voltage_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.lv_battery_high_voltage_fault, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleErrcode2 & msg, bool use_flow_style = false)
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
  const pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  pix_robobus_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pix_robobus_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
{
  return pix_robobus_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pix_robobus_driver_msgs::msg::VehicleErrcode2>()
{
  return "pix_robobus_driver_msgs::msg::VehicleErrcode2";
}

template<>
inline const char * name<pix_robobus_driver_msgs::msg::VehicleErrcode2>()
{
  return "pix_robobus_driver_msgs/msg/VehicleErrcode2";
}

template<>
struct has_fixed_size<pix_robobus_driver_msgs::msg::VehicleErrcode2>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pix_robobus_driver_msgs::msg::VehicleErrcode2>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pix_robobus_driver_msgs::msg::VehicleErrcode2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VEHICLE_ERRCODE2__TRAITS_HPP_
