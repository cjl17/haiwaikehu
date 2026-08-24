// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/HistoricalVehiclefailures2.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__HISTORICAL_VEHICLEFAILURES2__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__HISTORICAL_VEHICLEFAILURES2__STRUCT_H_

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

/// Struct defined in msg/HistoricalVehiclefailures2 in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2
{
  std_msgs__msg__Header header;
  /// []
  bool hobc_network_fault;
  /// []
  bool hobc_hardware_fault;
  /// []
  bool hdp_hardware_fault;
  /// []
  bool hdp_network_fault;
  /// []
  bool hbcm_hardware_fault;
  /// []
  bool hbcm_network_fault;
  /// []
  bool hdcu_network_fault;
  /// []
  bool hdcu_hardware_fault;
  /// []
  bool havas_network_fault;
  /// []
  bool havas_hardware_fault;
  /// []
  bool hlis_hardware_fault;
  /// []
  bool h_iis_network_fault;
  /// []
  bool hac_hardware_fault;
  /// []
  bool hac_network_fault;
  /// []
  bool h_iv_battery_low_voltage_fault;
  /// []
  bool h_iv_battery_high_voltage_fault;
} pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2;

// Struct for a sequence of pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2.
typedef struct pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence
{
  pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__HISTORICAL_VEHICLEFAILURES2__STRUCT_H_
