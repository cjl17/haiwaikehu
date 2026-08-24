// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/VaChassisWheelTirePressFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_TIRE_PRESS_FB__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_TIRE_PRESS_FB__STRUCT_H_

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

/// Struct defined in msg/VaChassisWheelTirePressFb in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb
{
  std_msgs__msg__Header header;
  /// [bar] [0|20]
  float vcu_chassis_wheel_tire_press_lf;
  /// [bar] [0|20]
  float vcu_chassis_wheel_tire_press_rf;
  /// [bar] [0|20]
  float vcu_chassis_wheel_tire_press_lr;
  /// [bar] [0|20]
  float vcu_chassis_wheel_tire_press_rr;
} pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb;

// Struct for a sequence of pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb.
typedef struct pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__Sequence
{
  pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_TIRE_PRESS_FB__STRUCT_H_
