// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/AvDriveCtrl.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_DRIVE_CTRL__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_DRIVE_CTRL__STRUCT_H_

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

/// Struct defined in msg/AvDriveCtrl in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__AvDriveCtrl
{
  std_msgs__msg__Header header;
  /// []
  bool acu_chassis_driver_en_ctrl;
  /// []
  int32_t acu_chassis_driver_mode_ctrl;
  /// []
  int32_t acu_chassis_gear_ctrl;
  /// []
  int32_t acu_chassis4_wd_mode_ctrl;
  /// [m/s] [0|50]
  float acu_chassis_speed_ctrl;
  /// [%] [0|100]
  float acu_chassis_throttle_pdl_target;
  /// []
  int32_t acu_drive_life_sig;
  /// []
  int32_t acu_check_sum130;
} pix_robobus_driver_msgs__msg__AvDriveCtrl;

// Struct for a sequence of pix_robobus_driver_msgs__msg__AvDriveCtrl.
typedef struct pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence
{
  pix_robobus_driver_msgs__msg__AvDriveCtrl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_DRIVE_CTRL__STRUCT_H_
