// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/AvVehicleCtrl.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_VEHICLE_CTRL__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_VEHICLE_CTRL__STRUCT_H_

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

/// Struct defined in msg/AvVehicleCtrl in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__AvVehicleCtrl
{
  std_msgs__msg__Header header;
  /// []
  bool acu_vehicle_pos_lamp_ctrl;
  /// []
  bool acu_vehicle_head_lamp_ctrl;
  /// []
  bool acu_vehicle_left_lamp_ctrl;
  /// []
  bool acu_vehicle_right_lamp_ctrl;
  /// []
  bool acu_vehicle_high_beam_ctrl;
  /// []
  bool acu_vehicle_fog_lamp_ctrl;
  /// []
  bool acu_vehicle_body_light_ctrl;
  /// []
  bool acu_vehicle_read_light_ctrl;
  /// []
  int32_t acu_vehicle_voice;
  /// []
  int32_t acu_vehicle_wipers_ctrl;
  /// []
  int32_t acu_vehicle_door_ctrl;
  /// []
  int32_t acu_vehicle_window_ctrl;
  /// []
  bool acu_chassis_speed_limite_mode;
  /// []
  bool acu_vehicle_horn_ctrl;
  /// []
  bool acu_vehicle_spray_ctrl;
  /// [m/s] [1|20]
  float acu_chassis_speed_limite_val;
  /// []
  bool acu_check_sum_en;
} pix_robobus_driver_msgs__msg__AvVehicleCtrl;

// Struct for a sequence of pix_robobus_driver_msgs__msg__AvVehicleCtrl.
typedef struct pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence
{
  pix_robobus_driver_msgs__msg__AvVehicleCtrl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_VEHICLE_CTRL__STRUCT_H_
