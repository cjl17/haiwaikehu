// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/BcmMessage4.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__BCM_MESSAGE4__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__BCM_MESSAGE4__STRUCT_H_

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

/// Struct defined in msg/BcmMessage4 in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__BcmMessage4
{
  std_msgs__msg__Header header;
  /// [℃] [-40|215]
  int32_t ltemp;
  /// [℃] [-40|215]
  int32_t ntemp;
  /// []
  bool safe_belt_sta1;
  /// []
  bool safe_belt_sta2;
  /// []
  bool safe_belt_sta3;
  /// []
  bool safe_belt_sta4;
  /// []
  bool safe_belt_sta5;
  /// []
  bool safe_belt_sta6;
  /// []
  bool seat_sta1;
  /// []
  bool seat_sta2;
  /// []
  bool seat_sta3;
  /// []
  bool seat_sta4;
  /// []
  bool seat_sta5;
  /// []
  bool seat_sta6;
} pix_robobus_driver_msgs__msg__BcmMessage4;

// Struct for a sequence of pix_robobus_driver_msgs__msg__BcmMessage4.
typedef struct pix_robobus_driver_msgs__msg__BcmMessage4__Sequence
{
  pix_robobus_driver_msgs__msg__BcmMessage4 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__BcmMessage4__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__BCM_MESSAGE4__STRUCT_H_
