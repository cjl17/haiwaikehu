// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/VaChassisOdoFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_ODO_FB__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_ODO_FB__STRUCT_H_

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

/// Struct defined in msg/VaChassisOdoFb in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__VaChassisOdoFb
{
  std_msgs__msg__Header header;
  /// [km] [0|16777215]
  int32_t vcu_vehicle_odo;
  /// [km] [0|167772.15]
  float vcu_vehicle_trip;
  /// [km] [0|1000]
  int32_t vcu_vehicle_remaining_range;
} pix_robobus_driver_msgs__msg__VaChassisOdoFb;

// Struct for a sequence of pix_robobus_driver_msgs__msg__VaChassisOdoFb.
typedef struct pix_robobus_driver_msgs__msg__VaChassisOdoFb__Sequence
{
  pix_robobus_driver_msgs__msg__VaChassisOdoFb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__VaChassisOdoFb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_ODO_FB__STRUCT_H_
