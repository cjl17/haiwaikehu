// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/VaSteerStaFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_STEER_STA_FB__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_STEER_STA_FB__STRUCT_H_

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

/// Struct defined in msg/VaSteerStaFb in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__VaSteerStaFb
{
  std_msgs__msg__Header header;
  /// []
  bool vcu_chassis_steer_en_sta;
  /// []
  bool vcu_chassis_steer_slopover;
  /// []
  int32_t vcu_chassis_steer_work_mode;
  /// []
  int32_t vcu_chassis_steer_mode_fb;
  /// []
  bool vcu_chassis_steer_communication_lost;
  /// [deg] [-500|500]
  int32_t vcu_chassis_steer_angle_fb;
  /// [deg] [-500|500]
  int32_t vcu_chassis_steer_angle_rear_fb;
  /// [deg/s] [0|500]
  float vcu_chassis_steer_angle_speed_fb;
  /// []
  int32_t vcu_steer_life;
  /// []
  bool vcu_steer_check_sta;
} pix_robobus_driver_msgs__msg__VaSteerStaFb;

// Struct for a sequence of pix_robobus_driver_msgs__msg__VaSteerStaFb.
typedef struct pix_robobus_driver_msgs__msg__VaSteerStaFb__Sequence
{
  pix_robobus_driver_msgs__msg__VaSteerStaFb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__VaSteerStaFb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_STEER_STA_FB__STRUCT_H_
