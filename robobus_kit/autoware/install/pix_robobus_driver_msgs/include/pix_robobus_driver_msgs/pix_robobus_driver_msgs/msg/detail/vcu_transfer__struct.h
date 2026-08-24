// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/VcuTransfer.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VCU_TRANSFER__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VCU_TRANSFER__STRUCT_H_

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

/// Struct defined in msg/VcuTransfer in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__VcuTransfer
{
  std_msgs__msg__Header header;
  /// []
  bool spare;
  /// [℃] [-40|215]
  int32_t ac_out_temp;
  /// [℃] [-40|215]
  int32_t ac_in_temp;
} pix_robobus_driver_msgs__msg__VcuTransfer;

// Struct for a sequence of pix_robobus_driver_msgs__msg__VcuTransfer.
typedef struct pix_robobus_driver_msgs__msg__VcuTransfer__Sequence
{
  pix_robobus_driver_msgs__msg__VcuTransfer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__VcuTransfer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VCU_TRANSFER__STRUCT_H_
