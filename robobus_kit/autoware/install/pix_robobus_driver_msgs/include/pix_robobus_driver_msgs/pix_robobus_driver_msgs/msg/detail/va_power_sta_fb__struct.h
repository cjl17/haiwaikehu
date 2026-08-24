// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/VaPowerStaFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_POWER_STA_FB__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_POWER_STA_FB__STRUCT_H_

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

/// Struct defined in msg/VaPowerStaFb in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__VaPowerStaFb
{
  std_msgs__msg__Header header;
  /// []
  int32_t vcu_chassis_bms_reserved1;
  /// []
  int32_t vcu_chassis_power_charge_sta;
  /// []
  bool vcu_chassis_power_charge_sock_sta;
  /// [%] [0|100]
  int32_t vcu_chassis_power_soc_fb;
  /// [V] [0|1000]
  float vcu_chassis_power_volt_fb;
  /// [A] [-1000|1000]
  float vcu_chassis_power_curr_fb;
  /// [℃] [-40|80]
  int32_t vcu_chassis_bms_max_temp;
  /// []
  int32_t vcu_chassis_bms_reserved2;
} pix_robobus_driver_msgs__msg__VaPowerStaFb;

// Struct for a sequence of pix_robobus_driver_msgs__msg__VaPowerStaFb.
typedef struct pix_robobus_driver_msgs__msg__VaPowerStaFb__Sequence
{
  pix_robobus_driver_msgs__msg__VaPowerStaFb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__VaPowerStaFb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_POWER_STA_FB__STRUCT_H_
