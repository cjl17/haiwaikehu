// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/VaVehicleFltSta.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_FLT_STA__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_FLT_STA__STRUCT_H_

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

/// Struct defined in msg/VaVehicleFltSta in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__VaVehicleFltSta
{
  std_msgs__msg__Header header;
  /// []
  bool vcu_sys_motor_over_temp_sta;
  /// []
  bool vcu_sys_bms_over_temp_sta;
  /// []
  bool vcu_sys_brake_over_temp_sta;
  /// []
  bool vcu_sys_steer_over_temp_sta;
  /// []
  bool vcu_sys_under_volt;
  /// []
  int32_t vcu_sys_flt;
  /// []
  int32_t vcu_sys_brake_flt;
  /// []
  int32_t vcu_sys_parking_flt;
  /// []
  int32_t vcu_sys_steer_front_flt;
  /// []
  int32_t vcu_sys_steer_back_flt;
  /// []
  int32_t vcu_sys_motor_lf_flt;
  /// []
  int32_t vcu_sys_motor_rf_flt;
  /// []
  int32_t vcu_sys_motor_lr_flt;
  /// []
  int32_t vcu_sys_motor_rr_flt;
  /// []
  int32_t vcu_sys_bms_flt;
  /// []
  int32_t vcu_sys_dc_flt;
  /// []
  int32_t vcu_sys_door_flt;
  /// []
  int32_t vcu_sys_dpm_flt;
  /// []
  int32_t vcu_sys_bcm_flt;
  /// []
  int32_t vcu_vehicle_flt_level;
  /// []
  int32_t vcu_sys_flt_reserve1;
} pix_robobus_driver_msgs__msg__VaVehicleFltSta;

// Struct for a sequence of pix_robobus_driver_msgs__msg__VaVehicleFltSta.
typedef struct pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence
{
  pix_robobus_driver_msgs__msg__VaVehicleFltSta * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_FLT_STA__STRUCT_H_
