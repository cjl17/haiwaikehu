// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/AvBrakeCtrl.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_BRAKE_CTRL__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_BRAKE_CTRL__STRUCT_H_

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

/// Struct defined in msg/AvBrakeCtrl in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__AvBrakeCtrl
{
  std_msgs__msg__Header header;
  /// []
  bool acu_chassis_brake_en;
  /// []
  bool acu_chassis_brake_lamp_ctrl;
  /// []
  bool acu_chassis_aeb_ctrl;
  /// [%] [0|100]
  float acu_chassis_brake_pdl_target;
  /// []
  int32_t acu_chassis_epb_ctrl;
  /// []
  int32_t acu_brake_life_sig;
  /// []
  int32_t acu_check_sum131;
} pix_robobus_driver_msgs__msg__AvBrakeCtrl;

// Struct for a sequence of pix_robobus_driver_msgs__msg__AvBrakeCtrl.
typedef struct pix_robobus_driver_msgs__msg__AvBrakeCtrl__Sequence
{
  pix_robobus_driver_msgs__msg__AvBrakeCtrl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__AvBrakeCtrl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_BRAKE_CTRL__STRUCT_H_
