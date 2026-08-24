// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pix_robobus_driver_msgs:msg/HistoricalVehiclefailures2.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__HISTORICAL_VEHICLEFAILURES2__TRAITS_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__HISTORICAL_VEHICLEFAILURES2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pix_robobus_driver_msgs/msg/detail/historical_vehiclefailures2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pix_robobus_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HistoricalVehiclefailures2 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: hobc_network_fault
  {
    out << "hobc_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hobc_network_fault, out);
    out << ", ";
  }

  // member: hobc_hardware_fault
  {
    out << "hobc_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hobc_hardware_fault, out);
    out << ", ";
  }

  // member: hdp_hardware_fault
  {
    out << "hdp_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hdp_hardware_fault, out);
    out << ", ";
  }

  // member: hdp_network_fault
  {
    out << "hdp_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hdp_network_fault, out);
    out << ", ";
  }

  // member: hbcm_hardware_fault
  {
    out << "hbcm_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hbcm_hardware_fault, out);
    out << ", ";
  }

  // member: hbcm_network_fault
  {
    out << "hbcm_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hbcm_network_fault, out);
    out << ", ";
  }

  // member: hdcu_network_fault
  {
    out << "hdcu_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hdcu_network_fault, out);
    out << ", ";
  }

  // member: hdcu_hardware_fault
  {
    out << "hdcu_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hdcu_hardware_fault, out);
    out << ", ";
  }

  // member: havas_network_fault
  {
    out << "havas_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.havas_network_fault, out);
    out << ", ";
  }

  // member: havas_hardware_fault
  {
    out << "havas_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.havas_hardware_fault, out);
    out << ", ";
  }

  // member: hlis_hardware_fault
  {
    out << "hlis_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hlis_hardware_fault, out);
    out << ", ";
  }

  // member: h_iis_network_fault
  {
    out << "h_iis_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.h_iis_network_fault, out);
    out << ", ";
  }

  // member: hac_hardware_fault
  {
    out << "hac_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hac_hardware_fault, out);
    out << ", ";
  }

  // member: hac_network_fault
  {
    out << "hac_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hac_network_fault, out);
    out << ", ";
  }

  // member: h_iv_battery_low_voltage_fault
  {
    out << "h_iv_battery_low_voltage_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.h_iv_battery_low_voltage_fault, out);
    out << ", ";
  }

  // member: h_iv_battery_high_voltage_fault
  {
    out << "h_iv_battery_high_voltage_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.h_iv_battery_high_voltage_fault, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HistoricalVehiclefailures2 & msg,
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

  // member: hobc_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hobc_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hobc_network_fault, out);
    out << "\n";
  }

  // member: hobc_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hobc_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hobc_hardware_fault, out);
    out << "\n";
  }

  // member: hdp_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hdp_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hdp_hardware_fault, out);
    out << "\n";
  }

  // member: hdp_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hdp_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hdp_network_fault, out);
    out << "\n";
  }

  // member: hbcm_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbcm_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hbcm_hardware_fault, out);
    out << "\n";
  }

  // member: hbcm_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbcm_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hbcm_network_fault, out);
    out << "\n";
  }

  // member: hdcu_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hdcu_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hdcu_network_fault, out);
    out << "\n";
  }

  // member: hdcu_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hdcu_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hdcu_hardware_fault, out);
    out << "\n";
  }

  // member: havas_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "havas_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.havas_network_fault, out);
    out << "\n";
  }

  // member: havas_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "havas_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.havas_hardware_fault, out);
    out << "\n";
  }

  // member: hlis_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hlis_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hlis_hardware_fault, out);
    out << "\n";
  }

  // member: h_iis_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h_iis_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.h_iis_network_fault, out);
    out << "\n";
  }

  // member: hac_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hac_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hac_hardware_fault, out);
    out << "\n";
  }

  // member: hac_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hac_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hac_network_fault, out);
    out << "\n";
  }

  // member: h_iv_battery_low_voltage_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h_iv_battery_low_voltage_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.h_iv_battery_low_voltage_fault, out);
    out << "\n";
  }

  // member: h_iv_battery_high_voltage_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h_iv_battery_high_voltage_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.h_iv_battery_high_voltage_fault, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HistoricalVehiclefailures2 & msg, bool use_flow_style = false)
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
  const pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  pix_robobus_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pix_robobus_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 & msg)
{
  return pix_robobus_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2>()
{
  return "pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2";
}

template<>
inline const char * name<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2>()
{
  return "pix_robobus_driver_msgs/msg/HistoricalVehiclefailures2";
}

template<>
struct has_fixed_size<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__HISTORICAL_VEHICLEFAILURES2__TRAITS_HPP_
