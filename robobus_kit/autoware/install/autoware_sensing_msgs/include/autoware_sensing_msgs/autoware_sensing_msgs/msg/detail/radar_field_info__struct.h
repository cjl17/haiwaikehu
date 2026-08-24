// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_sensing_msgs:msg/RadarFieldInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_FIELD_INFO__STRUCT_H_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_FIELD_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'field_name'
#include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in msg/RadarFieldInfo in the package autoware_sensing_msgs.
typedef struct autoware_sensing_msgs__msg__RadarFieldInfo
{
  std_msgs__msg__String field_name;
  bool min_value_available;
  bool max_value_available;
  bool resolution_available;
  float min_value;
  float max_value;
  float resolution;
} autoware_sensing_msgs__msg__RadarFieldInfo;

// Struct for a sequence of autoware_sensing_msgs__msg__RadarFieldInfo.
typedef struct autoware_sensing_msgs__msg__RadarFieldInfo__Sequence
{
  autoware_sensing_msgs__msg__RadarFieldInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_sensing_msgs__msg__RadarFieldInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_FIELD_INFO__STRUCT_H_
