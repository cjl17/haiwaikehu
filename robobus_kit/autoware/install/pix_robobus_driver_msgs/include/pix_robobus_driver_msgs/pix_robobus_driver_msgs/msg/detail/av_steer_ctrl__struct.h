// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/AvSteerCtrl.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_STEER_CTRL__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_STEER_CTRL__STRUCT_H_

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

/// Struct defined in msg/AvSteerCtrl in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__AvSteerCtrl
{
  std_msgs__msg__Header header;
  /// []
  bool acu_chassis_steer_en_ctrl;
  /// []
  int32_t acu_chassis_steer_mode_ctrl;
  /// [deg] [-500|500]
  int32_t acu_chassis_steer_angle_target;
  /// [deg] [-500|500]
  int32_t acu_chassis_steer_angle_rear_target;
  /// [deg/s] [0|500]
  float acu_chassis_steer_angle_speed_ctrl;
  /// []
  int32_t acu_steer_life_sig;
  /// []
  int32_t acu_check_sum132;
} pix_robobus_driver_msgs__msg__AvSteerCtrl;

// Struct for a sequence of pix_robobus_driver_msgs__msg__AvSteerCtrl.
typedef struct pix_robobus_driver_msgs__msg__AvSteerCtrl__Sequence
{
  pix_robobus_driver_msgs__msg__AvSteerCtrl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__AvSteerCtrl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_STEER_CTRL__STRUCT_H_
