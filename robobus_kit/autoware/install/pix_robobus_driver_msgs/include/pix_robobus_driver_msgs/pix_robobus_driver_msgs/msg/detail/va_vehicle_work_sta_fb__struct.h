// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/VaVehicleWorkStaFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_WORK_STA_FB__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_WORK_STA_FB__STRUCT_H_

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

/// Struct defined in msg/VaVehicleWorkStaFb in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb
{
  std_msgs__msg__Header header;
  /// []
  int32_t vcu_driving_mode_fb;
  /// []
  int32_t vcu_chassis_power_sta_fb;
  /// []
  int32_t vcu_chassis_power_dc_sta;
  /// []
  bool vcu_remote_connecte_sta;
  /// []
  bool vcu_acu_connect_sta;
  /// []
  bool vcu_chassis_speed_limited_mode_fb;
  /// []
  bool vcu_chassis_power_limite_sta;
  /// []
  int32_t vcu_sys_eco_mode;
  /// [m/s] [0|50]
  float vcu_chassis_speed_limited_val_fb;
  /// [V] [0|25]
  float vcu_chassis_low_power_volt_sta;
  /// []
  int32_t vcu_chassis_e_stop_sta_fb;
  /// []
  bool vcu_crash_front_sta;
  /// []
  bool vcu_crash_rear_sta;
  /// []
  bool vcu_crash_left_sta;
  /// []
  bool vcu_crash_right_sta;
  /// []
  int32_t vcu_life;
  /// []
  int32_t vcu_check_sum;
} pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb;

// Struct for a sequence of pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb.
typedef struct pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence
{
  pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_WORK_STA_FB__STRUCT_H_
