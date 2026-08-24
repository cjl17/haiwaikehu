// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/DpMessgae4.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__DP_MESSGAE4__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__DP_MESSGAE4__STRUCT_H_

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

/// Struct defined in msg/DpMessgae4 in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__DpMessgae4
{
  std_msgs__msg__Header header;
  /// [A] [0|255]
  int32_t pdu_total_cur;
  /// [V] [0|127.5]
  float dp_lowbat_vol;
  /// [℃] [-40|215]
  int32_t pd_temp;
  /// [A] [0|255]
  int32_t auto_current1;
  /// []
  int32_t dp_errorcode;
  /// []
  int32_t on_sta;
  /// [A] [0|255]
  int32_t auto_current2;
} pix_robobus_driver_msgs__msg__DpMessgae4;

// Struct for a sequence of pix_robobus_driver_msgs__msg__DpMessgae4.
typedef struct pix_robobus_driver_msgs__msg__DpMessgae4__Sequence
{
  pix_robobus_driver_msgs__msg__DpMessgae4 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__DpMessgae4__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__DP_MESSGAE4__STRUCT_H_
