// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/AvAebCtrl.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_AEB_CTRL__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_AEB_CTRL__STRUCT_H_

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

/// Struct defined in msg/AvAebCtrl in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__AvAebCtrl
{
  std_msgs__msg__Header header;
  /// []
  int32_t acu_aeb_work_sta;
  /// []
  bool acu_aeb_active_request;
  /// []
  bool acu_fcw_active_request;
  /// []
  bool acu_aeb_brake_en;
  /// [%] [0|100]
  int32_t acu_aeb_brake_pedal_target;
  /// []
  int32_t acu_aeb_brake_life_sig;
  /// []
  int32_t acu_check_sum121;
} pix_robobus_driver_msgs__msg__AvAebCtrl;

// Struct for a sequence of pix_robobus_driver_msgs__msg__AvAebCtrl.
typedef struct pix_robobus_driver_msgs__msg__AvAebCtrl__Sequence
{
  pix_robobus_driver_msgs__msg__AvAebCtrl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__AvAebCtrl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_AEB_CTRL__STRUCT_H_
