// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_sensing_msgs:msg/RadarInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_INFO__STRUCT_H_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_INFO__STRUCT_H_

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
// Member 'object_fields_info'
// Member 'detection_fields_info'
#include "autoware_sensing_msgs/msg/detail/radar_field_info__struct.h"
// Member 'available_classes'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RadarInfo in the package autoware_sensing_msgs.
typedef struct autoware_sensing_msgs__msg__RadarInfo
{
  std_msgs__msg__Header header;
  autoware_sensing_msgs__msg__RadarFieldInfo__Sequence object_fields_info;
  autoware_sensing_msgs__msg__RadarFieldInfo__Sequence detection_fields_info;
  rosidl_runtime_c__uint32__Sequence available_classes;
  /// absolute or relative dynamics
  bool absolute_dynamics;
} autoware_sensing_msgs__msg__RadarInfo;

// Struct for a sequence of autoware_sensing_msgs__msg__RadarInfo.
typedef struct autoware_sensing_msgs__msg__RadarInfo__Sequence
{
  autoware_sensing_msgs__msg__RadarInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_sensing_msgs__msg__RadarInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_INFO__STRUCT_H_
