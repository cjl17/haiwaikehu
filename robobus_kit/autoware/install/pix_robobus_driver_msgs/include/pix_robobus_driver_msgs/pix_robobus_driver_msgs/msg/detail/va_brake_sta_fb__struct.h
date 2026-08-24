// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/VaBrakeStaFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_BRAKE_STA_FB__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_BRAKE_STA_FB__STRUCT_H_

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

/// Struct defined in msg/VaBrakeStaFb in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__VaBrakeStaFb
{
  std_msgs__msg__Header header;
  /// []
  bool vcu_chassis_brake_en_sta;
  /// []
  bool vcu_vehicle_brake_lamp_fb;
  /// []
  int32_t vcu_chassis_epb_fb;
  /// []
  bool vcu_chassis_brake_communication_lost;
  /// [%] [0|100]
  float vcu_chassis_brake_padl_fb;
  /// []
  bool vcu_brake_pedal_req_fb;
  /// []
  bool vcu_aeb_en_sta_fb;
  /// []
  bool vcu_aeb_trigger_sta_fb;
  /// [bar] [0|100]
  int32_t vcu_chassis_brake_pressure_fb;
  /// []
  int32_t vcu_brake_life;
  /// []
  bool vcu_brake_check_sta;
} pix_robobus_driver_msgs__msg__VaBrakeStaFb;

// Struct for a sequence of pix_robobus_driver_msgs__msg__VaBrakeStaFb.
typedef struct pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence
{
  pix_robobus_driver_msgs__msg__VaBrakeStaFb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_BRAKE_STA_FB__STRUCT_H_
