// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pix_robobus_driver_msgs:msg/VehicleErrcode1.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VEHICLE_ERRCODE1__TRAITS_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VEHICLE_ERRCODE1__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pix_robobus_driver_msgs/msg/detail/vehicle_errcode1__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pix_robobus_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleErrcode1 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: flmc_hardware_fault
  {
    out << "flmc_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.flmc_hardware_fault, out);
    out << ", ";
  }

  // member: flmc_tem_fault
  {
    out << "flmc_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.flmc_tem_fault, out);
    out << ", ";
  }

  // member: flm_tem_fault
  {
    out << "flm_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.flm_tem_fault, out);
    out << ", ";
  }

  // member: rlmc_hardware_fault
  {
    out << "rlmc_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rlmc_hardware_fault, out);
    out << ", ";
  }

  // member: rlmc_tem_fault
  {
    out << "rlmc_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rlmc_tem_fault, out);
    out << ", ";
  }

  // member: rlm_tem_fault
  {
    out << "rlm_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rlm_tem_fault, out);
    out << ", ";
  }

  // member: frmc_hardware_fault
  {
    out << "frmc_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.frmc_hardware_fault, out);
    out << ", ";
  }

  // member: frmc_tem_fault
  {
    out << "frmc_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.frmc_tem_fault, out);
    out << ", ";
  }

  // member: frm_tem_fault
  {
    out << "frm_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.frm_tem_fault, out);
    out << ", ";
  }

  // member: rrmc_hardware_fault
  {
    out << "rrmc_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rrmc_hardware_fault, out);
    out << ", ";
  }

  // member: rrmc_tem_fault
  {
    out << "rrmc_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rrmc_tem_fault, out);
    out << ", ";
  }

  // member: rrm_tem_fault
  {
    out << "rrm_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rrm_tem_fault, out);
    out << ", ";
  }

  // member: flmc_network_fault
  {
    out << "flmc_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.flmc_network_fault, out);
    out << ", ";
  }

  // member: frmc_network_fault
  {
    out << "frmc_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.frmc_network_fault, out);
    out << ", ";
  }

  // member: rlmc_network_fault
  {
    out << "rlmc_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rlmc_network_fault, out);
    out << ", ";
  }

  // member: rrmc_network_fault
  {
    out << "rrmc_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rrmc_network_fault, out);
    out << ", ";
  }

  // member: fsteer_hardware_fault
  {
    out << "fsteer_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.fsteer_hardware_fault, out);
    out << ", ";
  }

  // member: rsteer_hardware_fault
  {
    out << "rsteer_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rsteer_hardware_fault, out);
    out << ", ";
  }

  // member: fsteer_network_fault
  {
    out << "fsteer_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.fsteer_network_fault, out);
    out << ", ";
  }

  // member: rsteer_network_fault
  {
    out << "rsteer_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rsteer_network_fault, out);
    out << ", ";
  }

  // member: brake_hardware_fault
  {
    out << "brake_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_hardware_fault, out);
    out << ", ";
  }

  // member: brake_high_tem_fault
  {
    out << "brake_high_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_high_tem_fault, out);
    out << ", ";
  }

  // member: brake_luid_level_low
  {
    out << "brake_luid_level_low: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_luid_level_low, out);
    out << ", ";
  }

  // member: brake_network_fault
  {
    out << "brake_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_network_fault, out);
    out << ", ";
  }

  // member: park_hardware_fault
  {
    out << "park_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.park_hardware_fault, out);
    out << ", ";
  }

  // member: park_network_fault
  {
    out << "park_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.park_network_fault, out);
    out << ", ";
  }

  // member: rcu_network_fault
  {
    out << "rcu_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rcu_network_fault, out);
    out << ", ";
  }

  // member: rcu_weak_signal
  {
    out << "rcu_weak_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.rcu_weak_signal, out);
    out << ", ";
  }

  // member: rcu_elec_low_alarm
  {
    out << "rcu_elec_low_alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.rcu_elec_low_alarm, out);
    out << ", ";
  }

  // member: reserve1
  {
    out << "reserve1: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve1, out);
    out << ", ";
  }

  // member: reserve2
  {
    out << "reserve2: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve2, out);
    out << ", ";
  }

  // member: bms_network_fault
  {
    out << "bms_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_network_fault, out);
    out << ", ";
  }

  // member: bms_insulationfault
  {
    out << "bms_insulationfault: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_insulationfault, out);
    out << ", ";
  }

  // member: bms_ocv_cell
  {
    out << "bms_ocv_cell: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_ocv_cell, out);
    out << ", ";
  }

  // member: bms_odv_cell
  {
    out << "bms_odv_cell: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_odv_cell, out);
    out << ", ";
  }

  // member: bms_ocv_batt
  {
    out << "bms_ocv_batt: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_ocv_batt, out);
    out << ", ";
  }

  // member: bms_odv_batt
  {
    out << "bms_odv_batt: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_odv_batt, out);
    out << ", ";
  }

  // member: bms_cell_volt_diff
  {
    out << "bms_cell_volt_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_cell_volt_diff, out);
    out << ", ";
  }

  // member: bms_temph
  {
    out << "bms_temph: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_temph, out);
    out << ", ";
  }

  // member: bms_temphl
  {
    out << "bms_temphl: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_temphl, out);
    out << ", ";
  }

  // member: bms_temph_diff
  {
    out << "bms_temph_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_temph_diff, out);
    out << ", ";
  }

  // member: bms_warchg_overcurrent
  {
    out << "bms_warchg_overcurrent: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_warchg_overcurrent, out);
    out << ", ";
  }

  // member: bms_soch
  {
    out << "bms_soch: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_soch, out);
    out << ", ";
  }

  // member: bms_socl
  {
    out << "bms_socl: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_socl, out);
    out << ", ";
  }

  // member: bms_time_of_heating_too_long
  {
    out << "bms_time_of_heating_too_long: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_time_of_heating_too_long, out);
    out << ", ";
  }

  // member: bms_soc_break
  {
    out << "bms_soc_break: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_soc_break, out);
    out << ", ";
  }

  // member: bms_dis_char_over_cur
  {
    out << "bms_dis_char_over_cur: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_dis_char_over_cur, out);
    out << ", ";
  }

  // member: bms_char_over_cur_slow
  {
    out << "bms_char_over_cur_slow: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_char_over_cur_slow, out);
    out << ", ";
  }

  // member: bmsfast_char_over_cur
  {
    out << "bmsfast_char_over_cur: ";
    rosidl_generator_traits::value_to_yaml(msg.bmsfast_char_over_cur, out);
    out << ", ";
  }

  // member: bms_alm_sense_cell
  {
    out << "bms_alm_sense_cell: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_alm_sense_cell, out);
    out << ", ";
  }

  // member: bms_alm_sense_temp
  {
    out << "bms_alm_sense_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_alm_sense_temp, out);
    out << ", ";
  }

  // member: bms_alm_sense_curr
  {
    out << "bms_alm_sense_curr: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_alm_sense_curr, out);
    out << ", ";
  }

  // member: bms_hvil
  {
    out << "bms_hvil: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_hvil, out);
    out << ", ";
  }

  // member: bms_war_incan_fault
  {
    out << "bms_war_incan_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_war_incan_fault, out);
    out << ", ";
  }

  // member: bms_lst_com_withobc
  {
    out << "bms_lst_com_withobc: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_lst_com_withobc, out);
    out << ", ";
  }

  // member: bms_lst_com_with_vcu
  {
    out << "bms_lst_com_with_vcu: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_lst_com_with_vcu, out);
    out << ", ";
  }

  // member: bms_precharger_fault
  {
    out << "bms_precharger_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_precharger_fault, out);
    out << ", ";
  }

  // member: bmspos_relayconglutination
  {
    out << "bmspos_relayconglutination: ";
    rosidl_generator_traits::value_to_yaml(msg.bmspos_relayconglutination, out);
    out << ", ";
  }

  // member: bms_neg_relay_conglutination
  {
    out << "bms_neg_relay_conglutination: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_neg_relay_conglutination, out);
    out << ", ";
  }

  // member: vcu_reserve3
  {
    out << "vcu_reserve3: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve3, out);
    out << ", ";
  }

  // member: vcu_reserve4
  {
    out << "vcu_reserve4: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve4, out);
    out << ", ";
  }

  // member: dcdc_high_tem_alarm
  {
    out << "dcdc_high_tem_alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.dcdc_high_tem_alarm, out);
    out << ", ";
  }

  // member: dcdc_hardware_fault
  {
    out << "dcdc_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.dcdc_hardware_fault, out);
    out << ", ";
  }

  // member: dcdc_network_fault
  {
    out << "dcdc_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.dcdc_network_fault, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleErrcode1 & msg,
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

  // member: flmc_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flmc_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.flmc_hardware_fault, out);
    out << "\n";
  }

  // member: flmc_tem_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flmc_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.flmc_tem_fault, out);
    out << "\n";
  }

  // member: flm_tem_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flm_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.flm_tem_fault, out);
    out << "\n";
  }

  // member: rlmc_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rlmc_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rlmc_hardware_fault, out);
    out << "\n";
  }

  // member: rlmc_tem_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rlmc_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rlmc_tem_fault, out);
    out << "\n";
  }

  // member: rlm_tem_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rlm_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rlm_tem_fault, out);
    out << "\n";
  }

  // member: frmc_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frmc_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.frmc_hardware_fault, out);
    out << "\n";
  }

  // member: frmc_tem_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frmc_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.frmc_tem_fault, out);
    out << "\n";
  }

  // member: frm_tem_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frm_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.frm_tem_fault, out);
    out << "\n";
  }

  // member: rrmc_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rrmc_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rrmc_hardware_fault, out);
    out << "\n";
  }

  // member: rrmc_tem_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rrmc_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rrmc_tem_fault, out);
    out << "\n";
  }

  // member: rrm_tem_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rrm_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rrm_tem_fault, out);
    out << "\n";
  }

  // member: flmc_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flmc_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.flmc_network_fault, out);
    out << "\n";
  }

  // member: frmc_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frmc_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.frmc_network_fault, out);
    out << "\n";
  }

  // member: rlmc_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rlmc_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rlmc_network_fault, out);
    out << "\n";
  }

  // member: rrmc_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rrmc_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rrmc_network_fault, out);
    out << "\n";
  }

  // member: fsteer_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fsteer_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.fsteer_hardware_fault, out);
    out << "\n";
  }

  // member: rsteer_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rsteer_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rsteer_hardware_fault, out);
    out << "\n";
  }

  // member: fsteer_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fsteer_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.fsteer_network_fault, out);
    out << "\n";
  }

  // member: rsteer_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rsteer_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rsteer_network_fault, out);
    out << "\n";
  }

  // member: brake_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_hardware_fault, out);
    out << "\n";
  }

  // member: brake_high_tem_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_high_tem_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_high_tem_fault, out);
    out << "\n";
  }

  // member: brake_luid_level_low
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_luid_level_low: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_luid_level_low, out);
    out << "\n";
  }

  // member: brake_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_network_fault, out);
    out << "\n";
  }

  // member: park_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "park_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.park_hardware_fault, out);
    out << "\n";
  }

  // member: park_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "park_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.park_network_fault, out);
    out << "\n";
  }

  // member: rcu_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rcu_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rcu_network_fault, out);
    out << "\n";
  }

  // member: rcu_weak_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rcu_weak_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.rcu_weak_signal, out);
    out << "\n";
  }

  // member: rcu_elec_low_alarm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rcu_elec_low_alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.rcu_elec_low_alarm, out);
    out << "\n";
  }

  // member: reserve1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserve1: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve1, out);
    out << "\n";
  }

  // member: reserve2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserve2: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve2, out);
    out << "\n";
  }

  // member: bms_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_network_fault, out);
    out << "\n";
  }

  // member: bms_insulationfault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_insulationfault: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_insulationfault, out);
    out << "\n";
  }

  // member: bms_ocv_cell
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_ocv_cell: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_ocv_cell, out);
    out << "\n";
  }

  // member: bms_odv_cell
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_odv_cell: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_odv_cell, out);
    out << "\n";
  }

  // member: bms_ocv_batt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_ocv_batt: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_ocv_batt, out);
    out << "\n";
  }

  // member: bms_odv_batt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_odv_batt: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_odv_batt, out);
    out << "\n";
  }

  // member: bms_cell_volt_diff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_cell_volt_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_cell_volt_diff, out);
    out << "\n";
  }

  // member: bms_temph
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_temph: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_temph, out);
    out << "\n";
  }

  // member: bms_temphl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_temphl: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_temphl, out);
    out << "\n";
  }

  // member: bms_temph_diff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_temph_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_temph_diff, out);
    out << "\n";
  }

  // member: bms_warchg_overcurrent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_warchg_overcurrent: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_warchg_overcurrent, out);
    out << "\n";
  }

  // member: bms_soch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_soch: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_soch, out);
    out << "\n";
  }

  // member: bms_socl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_socl: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_socl, out);
    out << "\n";
  }

  // member: bms_time_of_heating_too_long
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_time_of_heating_too_long: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_time_of_heating_too_long, out);
    out << "\n";
  }

  // member: bms_soc_break
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_soc_break: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_soc_break, out);
    out << "\n";
  }

  // member: bms_dis_char_over_cur
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_dis_char_over_cur: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_dis_char_over_cur, out);
    out << "\n";
  }

  // member: bms_char_over_cur_slow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_char_over_cur_slow: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_char_over_cur_slow, out);
    out << "\n";
  }

  // member: bmsfast_char_over_cur
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bmsfast_char_over_cur: ";
    rosidl_generator_traits::value_to_yaml(msg.bmsfast_char_over_cur, out);
    out << "\n";
  }

  // member: bms_alm_sense_cell
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_alm_sense_cell: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_alm_sense_cell, out);
    out << "\n";
  }

  // member: bms_alm_sense_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_alm_sense_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_alm_sense_temp, out);
    out << "\n";
  }

  // member: bms_alm_sense_curr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_alm_sense_curr: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_alm_sense_curr, out);
    out << "\n";
  }

  // member: bms_hvil
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_hvil: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_hvil, out);
    out << "\n";
  }

  // member: bms_war_incan_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_war_incan_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_war_incan_fault, out);
    out << "\n";
  }

  // member: bms_lst_com_withobc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_lst_com_withobc: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_lst_com_withobc, out);
    out << "\n";
  }

  // member: bms_lst_com_with_vcu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_lst_com_with_vcu: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_lst_com_with_vcu, out);
    out << "\n";
  }

  // member: bms_precharger_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_precharger_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_precharger_fault, out);
    out << "\n";
  }

  // member: bmspos_relayconglutination
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bmspos_relayconglutination: ";
    rosidl_generator_traits::value_to_yaml(msg.bmspos_relayconglutination, out);
    out << "\n";
  }

  // member: bms_neg_relay_conglutination
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_neg_relay_conglutination: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_neg_relay_conglutination, out);
    out << "\n";
  }

  // member: vcu_reserve3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_reserve3: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve3, out);
    out << "\n";
  }

  // member: vcu_reserve4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_reserve4: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_reserve4, out);
    out << "\n";
  }

  // member: dcdc_high_tem_alarm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dcdc_high_tem_alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.dcdc_high_tem_alarm, out);
    out << "\n";
  }

  // member: dcdc_hardware_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dcdc_hardware_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.dcdc_hardware_fault, out);
    out << "\n";
  }

  // member: dcdc_network_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dcdc_network_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.dcdc_network_fault, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleErrcode1 & msg, bool use_flow_style = false)
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
  const pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg,
  std::ostream & out, size_t indentation = 0)
{
  pix_robobus_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pix_robobus_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
{
  return pix_robobus_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pix_robobus_driver_msgs::msg::VehicleErrcode1>()
{
  return "pix_robobus_driver_msgs::msg::VehicleErrcode1";
}

template<>
inline const char * name<pix_robobus_driver_msgs::msg::VehicleErrcode1>()
{
  return "pix_robobus_driver_msgs/msg/VehicleErrcode1";
}

template<>
struct has_fixed_size<pix_robobus_driver_msgs::msg::VehicleErrcode1>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pix_robobus_driver_msgs::msg::VehicleErrcode1>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pix_robobus_driver_msgs::msg::VehicleErrcode1>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VEHICLE_ERRCODE1__TRAITS_HPP_
