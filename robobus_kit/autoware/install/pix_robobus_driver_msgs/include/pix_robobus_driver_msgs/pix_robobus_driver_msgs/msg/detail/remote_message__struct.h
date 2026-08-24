// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pix_robobus_driver_msgs:msg/RemoteMessage.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__REMOTE_MESSAGE__STRUCT_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__REMOTE_MESSAGE__STRUCT_H_

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

/// Struct defined in msg/RemoteMessage in the package pix_robobus_driver_msgs.
typedef struct pix_robobus_driver_msgs__msg__RemoteMessage
{
  std_msgs__msg__Header header;
  /// []
  int32_t remote_drive_mode;
  /// []
  int32_t remote_heartbeat;
} pix_robobus_driver_msgs__msg__RemoteMessage;

// Struct for a sequence of pix_robobus_driver_msgs__msg__RemoteMessage.
typedef struct pix_robobus_driver_msgs__msg__RemoteMessage__Sequence
{
  pix_robobus_driver_msgs__msg__RemoteMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pix_robobus_driver_msgs__msg__RemoteMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__REMOTE_MESSAGE__STRUCT_H_
