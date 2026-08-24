// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/VinResp1.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP1__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP1__STRUCT_H_

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

/// Struct defined in msg/VinResp1 in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__VinResp1
{
  std_msgs__msg__Header header;
  /// []
  int32_t vin00;
  /// []
  int32_t vin01;
  /// []
  int32_t vin02;
  /// []
  int32_t vin03;
  /// []
  int32_t vin04;
  /// []
  int32_t vin05;
  /// []
  int32_t vin06;
  /// []
  int32_t vin07;
} pix_robobus_driver_msgs__msg__VinResp1;

// Struct for a sequence of pix_robobus_driver_msgs__msg__VinResp1.
typedef struct pix_robobus_driver_msgs__msg__VinResp1__Sequence
{
  pix_robobus_driver_msgs__msg__VinResp1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__VinResp1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP1__STRUCT_H_
