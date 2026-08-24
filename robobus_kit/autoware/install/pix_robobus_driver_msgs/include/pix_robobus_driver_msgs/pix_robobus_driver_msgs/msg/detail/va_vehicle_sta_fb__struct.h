// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/VaVehicleStaFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_STA_FB__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_STA_FB__STRUCT_H_

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

/// Struct defined in msg/VaVehicleStaFb in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__VaVehicleStaFb
{
  std_msgs__msg__Header header;
  /// []
  bool vcu_vehicle_pos_lamp_fb;
  /// []
  bool vcu_vehicle_head_lamp_fb;
  /// []
  bool vcu_vehicle_left_lamp_fb;
  /// []
  bool vcu_vehicle_right_lamp_fb;
  /// []
  bool vcu_vehicle_high_beam_fb;
  /// []
  bool vcu_vehicle_fog_lamp_fb;
  /// []
  bool vcu_vehicle_hazard_war_lamp_fb;
  /// []
  bool vcu_vehicle_body_lamp_fb;
  /// []
  bool vcu_vehicle_read_lamp_fb;
  /// []
  int32_t acu_vehicle_window_fb;
  /// []
  int32_t vcu_vehicle_door_sta_fb;
  /// []
  int32_t vcu_vehicle_wipers_sta_fb;
  /// []
  int32_t vcu_vehicle_safety_belt1;
  /// []
  int32_t vcu_vehicle_safety_belt2;
  /// []
  int32_t vcu_vehicle_safety_belt3;
  /// []
  int32_t vcu_vehicle_safety_belt4;
  /// []
  int32_t vcu_vehicle_safety_belt5;
  /// []
  int32_t vcu_vehicle_safety_belt6;
  /// []
  int32_t vcu_vehicle_reserve_warning;
  /// [Km/h] [0|240]
  int32_t vcu_vehicle_display_speed;
} pix_robobus_driver_msgs__msg__VaVehicleStaFb;

// Struct for a sequence of pix_robobus_driver_msgs__msg__VaVehicleStaFb.
typedef struct pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence
{
  pix_robobus_driver_msgs__msg__VaVehicleStaFb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_STA_FB__STRUCT_H_
