// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/AcuSysTime.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__ACU_SYS_TIME__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__ACU_SYS_TIME__STRUCT_H_

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

/// Struct defined in msg/AcuSysTime in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__AcuSysTime
{
  std_msgs__msg__Header header;
  /// [Y] [0|153]
  int32_t sys_time_year;
  /// [M] [0|18]
  int32_t sys_time_month;
  /// [D] [0|49]
  int32_t sys_time_day;
  /// [h] [0|36]
  int32_t sys_time_hour;
  /// [m] [0|96]
  int32_t sys_time_minute;
  /// [s] [0|96]
  int32_t sys_time_second;
} pix_robobus_driver_msgs__msg__AcuSysTime;

// Struct for a sequence of pix_robobus_driver_msgs__msg__AcuSysTime.
typedef struct pix_robobus_driver_msgs__msg__AcuSysTime__Sequence
{
  pix_robobus_driver_msgs__msg__AcuSysTime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__AcuSysTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__ACU_SYS_TIME__STRUCT_H_
