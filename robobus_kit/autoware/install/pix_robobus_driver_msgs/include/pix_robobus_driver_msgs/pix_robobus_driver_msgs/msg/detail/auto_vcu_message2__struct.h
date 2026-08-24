// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/AutoVcuMessage2.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AUTO_VCU_MESSAGE2__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AUTO_VCU_MESSAGE2__STRUCT_H_

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

/// Struct defined in msg/AutoVcuMessage2 in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__AutoVcuMessage2
{
  std_msgs__msg__Header header;
  /// []
  int32_t pwm_red_ctrl;
  /// []
  int32_t pwm_green_ctrl;
  /// []
  int32_t pwm_blue_ctrl;
  /// [%] [0|100]
  int32_t atmospherelightbrightness;
} pix_robobus_driver_msgs__msg__AutoVcuMessage2;

// Struct for a sequence of pix_robobus_driver_msgs__msg__AutoVcuMessage2.
typedef struct pix_robobus_driver_msgs__msg__AutoVcuMessage2__Sequence
{
  pix_robobus_driver_msgs__msg__AutoVcuMessage2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__AutoVcuMessage2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AUTO_VCU_MESSAGE2__STRUCT_H_
