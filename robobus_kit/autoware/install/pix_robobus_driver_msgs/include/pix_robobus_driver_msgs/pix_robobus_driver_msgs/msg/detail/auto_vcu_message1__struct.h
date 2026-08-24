// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/AutoVcuMessage1.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AUTO_VCU_MESSAGE1__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AUTO_VCU_MESSAGE1__STRUCT_H_

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

/// Struct defined in msg/AutoVcuMessage1 in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__AutoVcuMessage1
{
  std_msgs__msg__Header header;
  /// []
  int32_t defrost_ctrl;
  /// []
  int32_t air_cod_ctrl;
  /// []
  int32_t air_cod_gear_ctrl;
  /// []
  int32_t air_cod_mod_ctrl;
  /// [℃] [16|32]
  int32_t air_cod_temp_ctrl;
  /// []
  int32_t in_loop_mod_ctrl;
} pix_robobus_driver_msgs__msg__AutoVcuMessage1;

// Struct for a sequence of pix_robobus_driver_msgs__msg__AutoVcuMessage1.
typedef struct pix_robobus_driver_msgs__msg__AutoVcuMessage1__Sequence
{
  pix_robobus_driver_msgs__msg__AutoVcuMessage1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__AutoVcuMessage1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AUTO_VCU_MESSAGE1__STRUCT_H_
