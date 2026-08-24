// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/VinResp2.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP2__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP2__STRUCT_H_

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

/// Struct defined in msg/VinResp2 in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__VinResp2
{
  std_msgs__msg__Header header;
  /// []
  int32_t vin08;
  /// []
  int32_t vin09;
  /// []
  int32_t vin10;
  /// []
  int32_t vin11;
  /// []
  int32_t vin12;
  /// []
  int32_t vin13;
  /// []
  int32_t vin14;
  /// []
  int32_t vin15;
} pix_robobus_driver_msgs__msg__VinResp2;

// Struct for a sequence of pix_robobus_driver_msgs__msg__VinResp2.
typedef struct pix_robobus_driver_msgs__msg__VinResp2__Sequence
{
  pix_robobus_driver_msgs__msg__VinResp2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__VinResp2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP2__STRUCT_H_
