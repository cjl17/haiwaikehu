// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/VaDriveStaFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_DRIVE_STA_FB__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_DRIVE_STA_FB__STRUCT_H_

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

/// Struct defined in msg/VaDriveStaFb in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__VaDriveStaFb
{
  std_msgs__msg__Header header;
  /// []
  bool vcu_chassis_driver_en_sta;
  /// []
  bool vcu_chassis_diver_slopover;
  /// []
  int32_t vcu_chassis_driver_mode_sta;
  /// []
  int32_t vcu_chassis_gear_fb;
  /// []
  int32_t vcu_chassis4_wd_mode_fb;
  /// [m/s] [-50|50]
  float vcu_chassis_speed_fb;
  /// [%] [0|100]
  float vcu_chassis_throttle_pald_fb;
  /// []
  bool vcu_chassis_throttle_pedal_req_fb;
  /// [m/s2] [-20|20]
  float vcu_chassis_acceleration_fb;
  /// []
  int32_t vcu_drive_life;
  /// []
  bool vcu_drive_check_sta;
} pix_robobus_driver_msgs__msg__VaDriveStaFb;

// Struct for a sequence of pix_robobus_driver_msgs__msg__VaDriveStaFb.
typedef struct pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence
{
  pix_robobus_driver_msgs__msg__VaDriveStaFb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_DRIVE_STA_FB__STRUCT_H_
