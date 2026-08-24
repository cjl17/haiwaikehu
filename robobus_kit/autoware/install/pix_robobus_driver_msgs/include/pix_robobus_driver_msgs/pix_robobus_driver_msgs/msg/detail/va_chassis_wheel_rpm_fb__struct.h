// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/VaChassisWheelRpmFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_RPM_FB__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_RPM_FB__STRUCT_H_

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

/// Struct defined in msg/VaChassisWheelRpmFb in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__VaChassisWheelRpmFb
{
  std_msgs__msg__Header header;
  /// [rpm] [-1000|1000]
  float vcu_chassis_wheel_rpm_lf;
  /// [rpm] [-1000|1000]
  float vcu_chassis_wheel_rpm_rf;
  /// [rpm] [-1000|1000]
  float vcu_chassis_wheel_rpm_lr;
  /// [rpm] [-1000|1000]
  float vcu_chassis_wheel_rpm_rr;
} pix_robobus_driver_msgs__msg__VaChassisWheelRpmFb;

// Struct for a sequence of pix_robobus_driver_msgs__msg__VaChassisWheelRpmFb.
typedef struct pix_robobus_driver_msgs__msg__VaChassisWheelRpmFb__Sequence
{
  pix_robobus_driver_msgs__msg__VaChassisWheelRpmFb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__VaChassisWheelRpmFb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_RPM_FB__STRUCT_H_
