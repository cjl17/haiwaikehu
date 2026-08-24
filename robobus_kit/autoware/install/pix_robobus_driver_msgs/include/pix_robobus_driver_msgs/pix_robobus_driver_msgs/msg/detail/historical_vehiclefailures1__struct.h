// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/HistoricalVehiclefailures1.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__HISTORICAL_VEHICLEFAILURES1__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__HISTORICAL_VEHICLEFAILURES1__STRUCT_H_

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

/// Struct defined in msg/HistoricalVehiclefailures1 in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1
{
  std_msgs__msg__Header header;
  /// []
  bool hflmc_hardware_fault;
  /// []
  bool hflmc_tem_fault;
  /// []
  bool hflm_tem_fault;
  /// []
  bool hrlmc_hardware_fault;
  /// []
  bool hrlmc_tem_fault;
  /// []
  bool hrlm_tem_fault;
  /// []
  bool hfrmc_hardware_fault;
  /// []
  bool hfrmc_tem_fault;
  /// []
  bool hfrm_tem_fault;
  /// []
  bool hrrmc_hardware_fault;
  /// []
  bool hrrmc_tem_fault;
  /// []
  bool hrrm_tem_fault;
  /// []
  bool hflmc_network_fault;
  /// []
  bool hfrmc_network_fault;
  /// []
  bool hrlmc_network_fault;
  /// []
  bool hrrmc_network_fault;
  /// []
  bool hfsteer_hardware_fault;
  /// []
  bool hrsteer_hardware_fault;
  /// []
  bool hfsteer_network_fault;
  /// []
  bool hrsteer_network_fault;
  /// []
  bool hbrake_hardware_fault;
  /// []
  bool hbrake_high_tem_fault;
  /// []
  bool hbrake_luid_level_low;
  /// []
  bool hbrake_network_fault;
  /// []
  bool hpark_hardware_fault;
  /// []
  bool hpark_network_fault;
  /// []
  bool hrcu_network_fault;
  /// []
  bool hrcu_weak_signal;
  /// []
  bool hrcu_elec_low_alarm;
  /// []
  bool hbms_network_fault;
  /// []
  bool hbms_insulationfault;
  /// []
  bool hbms_ocv_cell;
  /// []
  bool hbms_odv_cell;
  /// []
  bool hbms_ocv_batt;
  /// []
  bool hbms_odv_batt;
  /// []
  bool hbms_cell_volt_diff;
  /// []
  bool hbms_temph;
  /// []
  bool hbms_temphl;
  /// []
  bool hbms_temph_diff;
  /// []
  bool hbms_warchg_overcurrent;
  /// []
  bool hbms_soch;
  /// []
  bool hbms_socl;
  /// []
  bool hbms_time_of_heating_too_long;
  /// []
  bool hbms_soc_break;
  /// []
  bool hbms_dis_char_over_cur;
  /// []
  bool hbms_char_over_cur_slow;
  /// []
  bool hbmsfast_char_over_cur;
  /// []
  bool hbms_alm_sense_cell;
  /// []
  bool hbms_alm_sense_temp;
  /// []
  bool hbms_alm_sense_curr;
  /// []
  bool hbms_hvil;
  /// []
  bool hbms_war_incan_fault;
  /// []
  bool hbms_lst_com_withobc;
  /// []
  bool hbms_lst_com_with_vcu;
  /// []
  bool hbms_precharger_fault;
  /// []
  bool hbmspos_relayconglutination;
  /// []
  bool hbms_neg_relay_conglutination;
  /// []
  bool hdcdc_high_tem_alarm;
  /// []
  bool hdcdc_hardware_fault;
  /// []
  bool hdcdc_network_fault;
} pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1;

// Struct for a sequence of pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1.
typedef struct pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence
{
  pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__HISTORICAL_VEHICLEFAILURES1__STRUCT_H_
