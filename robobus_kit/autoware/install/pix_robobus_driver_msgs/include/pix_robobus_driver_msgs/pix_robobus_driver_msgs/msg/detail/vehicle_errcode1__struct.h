// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/VehicleErrcode1.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VEHICLE_ERRCODE1__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VEHICLE_ERRCODE1__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/VehicleErrcode1 in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__VehicleErrcode1
{
  std_msgs__msg__Header header;
  /// []
  bool flmc_hardware_fault;
  /// []
  bool flmc_tem_fault;
  /// []
  bool flm_tem_fault;
  /// []
  bool rlmc_hardware_fault;
  /// []
  bool rlmc_tem_fault;
  /// []
  bool rlm_tem_fault;
  /// []
  bool frmc_hardware_fault;
  /// []
  bool frmc_tem_fault;
  /// []
  bool frm_tem_fault;
  /// []
  bool rrmc_hardware_fault;
  /// []
  bool rrmc_tem_fault;
  /// []
  bool rrm_tem_fault;
  /// []
  bool flmc_network_fault;
  /// []
  bool frmc_network_fault;
  /// []
  bool rlmc_network_fault;
  /// []
  bool rrmc_network_fault;
  /// []
  bool fsteer_hardware_fault;
  /// []
  bool rsteer_hardware_fault;
  /// []
  bool fsteer_network_fault;
  /// []
  bool rsteer_network_fault;
  /// []
  bool brake_hardware_fault;
  /// []
  bool brake_high_tem_fault;
  /// []
  bool brake_luid_level_low;
  /// []
  bool brake_network_fault;
  /// []
  bool park_hardware_fault;
  /// []
  bool park_network_fault;
  /// []
  bool rcu_network_fault;
  /// []
  bool rcu_weak_signal;
  /// []
  bool rcu_elec_low_alarm;
  /// []
  bool reserve1;
  /// []
  bool reserve2;
  /// []
  bool bms_network_fault;
  /// []
  bool bms_insulationfault;
  /// []
  bool bms_ocv_cell;
  /// []
  bool bms_odv_cell;
  /// []
  bool bms_ocv_batt;
  /// []
  bool bms_odv_batt;
  /// []
  bool bms_cell_volt_diff;
  /// []
  bool bms_temph;
  /// []
  bool bms_temphl;
  /// []
  bool bms_temph_diff;
  /// []
  bool bms_warchg_overcurrent;
  /// []
  bool bms_soch;
  /// []
  bool bms_socl;
  /// []
  bool bms_time_of_heating_too_long;
  /// []
  bool bms_soc_break;
  /// []
  bool bms_dis_char_over_cur;
  /// []
  bool bms_char_over_cur_slow;
  /// []
  bool bmsfast_char_over_cur;
  /// []
  bool bms_alm_sense_cell;
  /// []
  bool bms_alm_sense_temp;
  /// []
  bool bms_alm_sense_curr;
  /// []
  bool bms_hvil;
  /// []
  bool bms_war_incan_fault;
  /// []
  bool bms_lst_com_withobc;
  /// []
  bool bms_lst_com_with_vcu;
  /// []
  bool bms_precharger_fault;
  /// []
  bool bmspos_relayconglutination;
  /// []
  bool bms_neg_relay_conglutination;
  /// []
  bool vcu_reserve3;
  /// []
  bool vcu_reserve4;
  /// []
  bool dcdc_high_tem_alarm;
  /// []
  bool dcdc_hardware_fault;
  /// []
  bool dcdc_network_fault;
} pix_robobus_driver_msgs__msg__VehicleErrcode1;

// Struct for a sequence of pix_robobus_driver_msgs__msg__VehicleErrcode1.
typedef struct pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence
{
  pix_robobus_driver_msgs__msg__VehicleErrcode1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VEHICLE_ERRCODE1__STRUCT_H_
