// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/VehicleErrcode2.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VEHICLE_ERRCODE2__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VEHICLE_ERRCODE2__STRUCT_H_

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

/// Struct defined in msg/VehicleErrcode2 in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__VehicleErrcode2
{
  std_msgs__msg__Header header;
  /// []
  bool obc_network_fault;
  /// []
  bool obc_hardware_fault;
  /// []
  bool vcu_reserve1;
  /// []
  bool dp_hardware_fault;
  /// []
  bool dp_network_fault;
  /// []
  bool vcu_reserve5;
  /// []
  bool bcm_hardware_fault;
  /// []
  bool bcm_network_fault;
  /// []
  bool vcu_reserve11;
  /// []
  bool dcu_network_fault;
  /// []
  bool dcu_hardware_fault;
  /// []
  bool vcu_reserve17;
  /// []
  bool avas_network_fault;
  /// []
  bool avas_hardware_fault;
  /// []
  bool vcu_reserve18;
  /// []
  bool vcu_reserve19;
  /// []
  bool iis_hardware_fault;
  /// []
  bool iis_network_fault;
  /// []
  bool vcu_reserve20;
  /// []
  bool vcu_reserve26;
  /// []
  bool ac_hardware_fault;
  /// []
  bool ac_network_fault;
  /// []
  bool vcu_reserve32;
  /// []
  bool lv_battery_low_voltage_fault;
  /// []
  bool lv_battery_high_voltage_fault;
} pix_robobus_driver_msgs__msg__VehicleErrcode2;

// Struct for a sequence of pix_robobus_driver_msgs__msg__VehicleErrcode2.
typedef struct pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence
{
  pix_robobus_driver_msgs__msg__VehicleErrcode2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VEHICLE_ERRCODE2__STRUCT_H_
