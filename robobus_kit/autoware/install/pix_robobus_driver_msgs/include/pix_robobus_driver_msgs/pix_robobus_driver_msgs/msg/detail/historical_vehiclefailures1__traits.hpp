// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pix_robobus_driver_msgs:msg/HistoricalVehiclefailures1.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__HISTORICAL_VEHICLEFAILURES1__TRAITS_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__HISTORICAL_VEHICLEFAILURES1__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pix_robobus_driver_msgs/msg/detail/historical_vehiclefailures1__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pix_robobus_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HistoricalVehiclefailures1 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: hflmc_hardware_fault
  {
    out << "hflmc_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hflmc_hardware_fault, out);
    out << ", ";
  }

  // member: hflmc_tem_fault
  {
    out << "hflmc_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hflmc_tem_fault, out);
    out << ", ";
  }

  // member: hflm_tem_fault
  {
    out << "hflm_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hflm_tem_fault, out);
    out << ", ";
  }

  // member: hrlmc_hardware_fault
  {
    out << "hrlmc_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hrlmc_hardware_fault, out);
    out << ", ";
  }

  // member: hrlmc_tem_fault
  {
    out << "hrlmc_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hrlmc_tem_fault, out);
    out << ", ";
  }

  // member: hrlm_tem_fault
  {
    out << "hrlm_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hrlm_tem_fault, out);
    out << ", ";
  }

  // member: hfrmc_hardware_fault
  {
    out << "hfrmc_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hfrmc_hardware_fault, out);
    out << ", ";
  }

  // member: hfrmc_tem_fault
  {
    out << "hfrmc_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hfrmc_tem_fault, out);
    out << ", ";
  }

  // member: hfrm_tem_fault
  {
    out << "hfrm_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hfrm_tem_fault, out);
    out << ", ";
  }

  // member: hrrmc_hardware_fault
  {
    out << "hrrmc_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hrrmc_hardware_fault, out);
    out << ", ";
  }

  // member: hrrmc_tem_fault
  {
    out << "hrrmc_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hrrmc_tem_fault, out);
    out << ", ";
  }

  // member: hrrm_tem_fault
  {
    out << "hrrm_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hrrm_tem_fault, out);
    out << ", ";
  }

  // member: hflmc_network_fault
  {
    out << "hflmc_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hflmc_network_fault, out);
    out << ", ";
  }

  // member: hfrmc_network_fault
  {
    out << "hfrmc_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hfrmc_network_fault, out);
    out << ", ";
  }

  // member: hrlmc_network_fault
  {
    out << "hrlmc_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hrlmc_network_fault, out);
    out << ", ";
  }

  // member: hrrmc_network_fault
  {
    out << "hrrmc_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hrrmc_network_fault, out);
    out << ", ";
  }

  // member: hfsteer_hardware_fault
  {
    out << "hfsteer_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hfsteer_hardware_fault, out);
    out << ", ";
  }

  // member: hrsteer_hardware_fault
  {
    out << "hrsteer_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hrsteer_hardware_fault, out);
    out << ", ";
  }

  // member: hfsteer_network_fault
  {
    out << "hfsteer_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hfsteer_network_fault, out);
    out << ", ";
  }

  // member: hrsteer_network_fault
  {
    out << "hrsteer_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hrsteer_network_fault, out);
    out << ", ";
  }

  // member: hbrake_hardware_fault
  {
    out << "hbrake_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hbrake_hardware_fault, out);
    out << ", ";
  }

  // member: hbrake_high_tem_fault
  {
    out << "hbrake_high_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hbrake_high_tem_fault, out);
    out << ", ";
  }

  // member: hbrake_luid_level_low
  {
    out << "hbrake_luid_level_low: ";
    rosidl_generator_traits::value_to_yaml(msg.hbrake_luid_level_low, out);
    out << ", ";
  }

  // member: hbrake_network_fault
  {
    out << "hbrake_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hbrake_network_fault, out);
    out << ", ";
  }

  // member: hpark_hardware_fault
  {
    out << "hpark_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hpark_hardware_fault, out);
    out << ", ";
  }

  // member: hpark_network_fault
  {
    out << "hpark_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hpark_network_fault, out);
    out << ", ";
  }

  // member: hrcu_network_fault
  {
    out << "hrcu_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hrcu_network_fault, out);
    out << ", ";
  }

  // member: hrcu_weak_signal
  {
    out << "hrcu_weak_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.hrcu_weak_signal, out);
    out << ", ";
  }

  // member: hrcu_elec_low_alarm
  {
    out << "hrcu_elec_low_alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.hrcu_elec_low_alarm, out);
    out << ", ";
  }

  // member: hbms_network_fault
  {
    out << "hbms_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_network_fault, out);
    out << ", ";
  }

  // member: hbms_insulationfault
  {
    out << "hbms_insulationfault: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_insulationfault, out);
    out << ", ";
  }

  // member: hbms_ocv_cell
  {
    out << "hbms_ocv_cell: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_ocv_cell, out);
    out << ", ";
  }

  // member: hbms_odv_cell
  {
    out << "hbms_odv_cell: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_odv_cell, out);
    out << ", ";
  }

  // member: hbms_ocv_batt
  {
    out << "hbms_ocv_batt: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_ocv_batt, out);
    out << ", ";
  }

  // member: hbms_odv_batt
  {
    out << "hbms_odv_batt: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_odv_batt, out);
    out << ", ";
  }

  // member: hbms_cell_volt_diff
  {
    out << "hbms_cell_volt_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_cell_volt_diff, out);
    out << ", ";
  }

  // member: hbms_temph
  {
    out << "hbms_temph: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_temph, out);
    out << ", ";
  }

  // member: hbms_temphl
  {
    out << "hbms_temphl: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_temphl, out);
    out << ", ";
  }

  // member: hbms_temph_diff
  {
    out << "hbms_temph_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_temph_diff, out);
    out << ", ";
  }

  // member: hbms_warchg_overcurrent
  {
    out << "hbms_warchg_overcurrent: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_warchg_overcurrent, out);
    out << ", ";
  }

  // member: hbms_soch
  {
    out << "hbms_soch: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_soch, out);
    out << ", ";
  }

  // member: hbms_socl
  {
    out << "hbms_socl: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_socl, out);
    out << ", ";
  }

  // member: hbms_time_of_heating_too_long
  {
    out << "hbms_time_of_heating_too_long: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_time_of_heating_too_long, out);
    out << ", ";
  }

  // member: hbms_soc_break
  {
    out << "hbms_soc_break: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_soc_break, out);
    out << ", ";
  }

  // member: hbms_dis_char_over_cur
  {
    out << "hbms_dis_char_over_cur: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_dis_char_over_cur, out);
    out << ", ";
  }

  // member: hbms_char_over_cur_slow
  {
    out << "hbms_char_over_cur_slow: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_char_over_cur_slow, out);
    out << ", ";
  }

  // member: hbmsfast_char_over_cur
  {
    out << "hbmsfast_char_over_cur: ";
    rosidl_generator_traits::value_to_yaml(msg.hbmsfast_char_over_cur, out);
    out << ", ";
  }

  // member: hbms_alm_sense_cell
  {
    out << "hbms_alm_sense_cell: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_alm_sense_cell, out);
    out << ", ";
  }

  // member: hbms_alm_sense_temp
  {
    out << "hbms_alm_sense_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_alm_sense_temp, out);
    out << ", ";
  }

  // member: hbms_alm_sense_curr
  {
    out << "hbms_alm_sense_curr: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_alm_sense_curr, out);
    out << ", ";
  }

  // member: hbms_hvil
  {
    out << "hbms_hvil: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_hvil, out);
    out << ", ";
  }

  // member: hbms_war_incan_fault
  {
    out << "hbms_war_incan_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_war_incan_fault, out);
    out << ", ";
  }

  // member: hbms_lst_com_withobc
  {
    out << "hbms_lst_com_withobc: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_lst_com_withobc, out);
    out << ", ";
  }

  // member: hbms_lst_com_with_vcu
  {
    out << "hbms_lst_com_with_vcu: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_lst_com_with_vcu, out);
    out << ", ";
  }

  // member: hbms_precharger_fault
  {
    out << "hbms_precharger_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_precharger_fault, out);
    out << ", ";
  }

  // member: hbmspos_relayconglutination
  {
    out << "hbmspos_relayconglutination: ";
    rosidl_generator_traits::value_to_yaml(msg.hbmspos_relayconglutination, out);
    out << ", ";
  }

  // member: hbms_neg_relay_conglutination
  {
    out << "hbms_neg_relay_conglutination: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_neg_relay_conglutination, out);
    out << ", ";
  }

  // member: hdcdc_high_tem_alarm
  {
    out << "hdcdc_high_tem_alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.hdcdc_high_tem_alarm, out);
    out << ", ";
  }

  // member: hdcdc_hardware_fault
  {
    out << "hdcdc_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hdcdc_hardware_fault, out);
    out << ", ";
  }

  // member: hdcdc_network_fault
  {
    out << "hdcdc_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hdcdc_network_fault, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HistoricalVehiclefailures1 & msg,
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

  // member: hflmc_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hflmc_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hflmc_hardware_fault, out);
    out << "\n";
  }

  // member: hflmc_tem_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hflmc_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hflmc_tem_fault, out);
    out << "\n";
  }

  // member: hflm_tem_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hflm_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hflm_tem_fault, out);
    out << "\n";
  }

  // member: hrlmc_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hrlmc_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hrlmc_hardware_fault, out);
    out << "\n";
  }

  // member: hrlmc_tem_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hrlmc_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hrlmc_tem_fault, out);
    out << "\n";
  }

  // member: hrlm_tem_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hrlm_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hrlm_tem_fault, out);
    out << "\n";
  }

  // member: hfrmc_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hfrmc_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hfrmc_hardware_fault, out);
    out << "\n";
  }

  // member: hfrmc_tem_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hfrmc_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hfrmc_tem_fault, out);
    out << "\n";
  }

  // member: hfrm_tem_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hfrm_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hfrm_tem_fault, out);
    out << "\n";
  }

  // member: hrrmc_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hrrmc_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hrrmc_hardware_fault, out);
    out << "\n";
  }

  // member: hrrmc_tem_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hrrmc_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hrrmc_tem_fault, out);
    out << "\n";
  }

  // member: hrrm_tem_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hrrm_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hrrm_tem_fault, out);
    out << "\n";
  }

  // member: hflmc_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hflmc_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hflmc_network_fault, out);
    out << "\n";
  }

  // member: hfrmc_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hfrmc_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hfrmc_network_fault, out);
    out << "\n";
  }

  // member: hrlmc_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hrlmc_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hrlmc_network_fault, out);
    out << "\n";
  }

  // member: hrrmc_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hrrmc_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hrrmc_network_fault, out);
    out << "\n";
  }

  // member: hfsteer_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hfsteer_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hfsteer_hardware_fault, out);
    out << "\n";
  }

  // member: hrsteer_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hrsteer_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hrsteer_hardware_fault, out);
    out << "\n";
  }

  // member: hfsteer_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hfsteer_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hfsteer_network_fault, out);
    out << "\n";
  }

  // member: hrsteer_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hrsteer_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hrsteer_network_fault, out);
    out << "\n";
  }

  // member: hbrake_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbrake_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hbrake_hardware_fault, out);
    out << "\n";
  }

  // member: hbrake_high_tem_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbrake_high_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hbrake_high_tem_fault, out);
    out << "\n";
  }

  // member: hbrake_luid_level_low
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbrake_luid_level_low: ";
    rosidl_generator_traits::value_to_yaml(msg.hbrake_luid_level_low, out);
    out << "\n";
  }

  // member: hbrake_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbrake_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hbrake_network_fault, out);
    out << "\n";
  }

  // member: hpark_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hpark_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hpark_hardware_fault, out);
    out << "\n";
  }

  // member: hpark_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hpark_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hpark_network_fault, out);
    out << "\n";
  }

  // member: hrcu_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hrcu_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hrcu_network_fault, out);
    out << "\n";
  }

  // member: hrcu_weak_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hrcu_weak_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.hrcu_weak_signal, out);
    out << "\n";
  }

  // member: hrcu_elec_low_alarm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hrcu_elec_low_alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.hrcu_elec_low_alarm, out);
    out << "\n";
  }

  // member: hbms_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_network_fault, out);
    out << "\n";
  }

  // member: hbms_insulationfault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_insulationfault: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_insulationfault, out);
    out << "\n";
  }

  // member: hbms_ocv_cell
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_ocv_cell: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_ocv_cell, out);
    out << "\n";
  }

  // member: hbms_odv_cell
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_odv_cell: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_odv_cell, out);
    out << "\n";
  }

  // member: hbms_ocv_batt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_ocv_batt: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_ocv_batt, out);
    out << "\n";
  }

  // member: hbms_odv_batt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_odv_batt: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_odv_batt, out);
    out << "\n";
  }

  // member: hbms_cell_volt_diff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_cell_volt_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_cell_volt_diff, out);
    out << "\n";
  }

  // member: hbms_temph
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_temph: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_temph, out);
    out << "\n";
  }

  // member: hbms_temphl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_temphl: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_temphl, out);
    out << "\n";
  }

  // member: hbms_temph_diff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_temph_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_temph_diff, out);
    out << "\n";
  }

  // member: hbms_warchg_overcurrent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_warchg_overcurrent: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_warchg_overcurrent, out);
    out << "\n";
  }

  // member: hbms_soch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_soch: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_soch, out);
    out << "\n";
  }

  // member: hbms_socl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_socl: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_socl, out);
    out << "\n";
  }

  // member: hbms_time_of_heating_too_long
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_time_of_heating_too_long: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_time_of_heating_too_long, out);
    out << "\n";
  }

  // member: hbms_soc_break
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_soc_break: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_soc_break, out);
    out << "\n";
  }

  // member: hbms_dis_char_over_cur
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_dis_char_over_cur: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_dis_char_over_cur, out);
    out << "\n";
  }

  // member: hbms_char_over_cur_slow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_char_over_cur_slow: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_char_over_cur_slow, out);
    out << "\n";
  }

  // member: hbmsfast_char_over_cur
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbmsfast_char_over_cur: ";
    rosidl_generator_traits::value_to_yaml(msg.hbmsfast_char_over_cur, out);
    out << "\n";
  }

  // member: hbms_alm_sense_cell
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_alm_sense_cell: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_alm_sense_cell, out);
    out << "\n";
  }

  // member: hbms_alm_sense_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_alm_sense_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_alm_sense_temp, out);
    out << "\n";
  }

  // member: hbms_alm_sense_curr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_alm_sense_curr: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_alm_sense_curr, out);
    out << "\n";
  }

  // member: hbms_hvil
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_hvil: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_hvil, out);
    out << "\n";
  }

  // member: hbms_war_incan_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_war_incan_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_war_incan_fault, out);
    out << "\n";
  }

  // member: hbms_lst_com_withobc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_lst_com_withobc: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_lst_com_withobc, out);
    out << "\n";
  }

  // member: hbms_lst_com_with_vcu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_lst_com_with_vcu: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_lst_com_with_vcu, out);
    out << "\n";
  }

  // member: hbms_precharger_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_precharger_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_precharger_fault, out);
    out << "\n";
  }

  // member: hbmspos_relayconglutination
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbmspos_relayconglutination: ";
    rosidl_generator_traits::value_to_yaml(msg.hbmspos_relayconglutination, out);
    out << "\n";
  }

  // member: hbms_neg_relay_conglutination
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hbms_neg_relay_conglutination: ";
    rosidl_generator_traits::value_to_yaml(msg.hbms_neg_relay_conglutination, out);
    out << "\n";
  }

  // member: hdcdc_high_tem_alarm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hdcdc_high_tem_alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.hdcdc_high_tem_alarm, out);
    out << "\n";
  }

  // member: hdcdc_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hdcdc_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hdcdc_hardware_fault, out);
    out << "\n";
  }

  // member: hdcdc_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hdcdc_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.hdcdc_network_fault, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HistoricalVehiclefailures1 & msg, bool use_flow_style = false)
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
  const pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg,
  std::ostream & out, size_t indentation = 0)
{
  pix_robobus_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pix_robobus_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
{
  return pix_robobus_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1>()
{
  return "pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1";
}

template<>
inline const char * name<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1>()
{
  return "pix_robobus_driver_msgs/msg/HistoricalVehiclefailures1";
}

template<>
struct has_fixed_size<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__HISTORICAL_VEHICLEFAILURES1__TRAITS_HPP_
