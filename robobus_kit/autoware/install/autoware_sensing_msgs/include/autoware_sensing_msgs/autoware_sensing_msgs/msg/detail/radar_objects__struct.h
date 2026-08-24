// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_sensing_msgs:msg/RadarObjects.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_OBJECTS__STRUCT_H_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_OBJECTS__STRUCT_H_

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
// Member 'objects'
#include "autoware_sensing_msgs/msg/detail/radar_object__struct.h"

/// Struct defined in msg/RadarObjects in the package autoware_sensing_msgs.
typedef struct autoware_sensing_msgs__msg__RadarObjects
{
  std_msgs__msg__Header header;
  autoware_sensing_msgs__msg__RadarObject__Sequence objects;
} autoware_sensing_msgs__msg__RadarObjects;

// Struct for a sequence of autoware_sensing_msgs__msg__RadarObjects.
typedef struct autoware_sensing_msgs__msg__RadarObjects__Sequence
{
  autoware_sensing_msgs__msg__RadarObjects * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_sensing_msgs__msg__RadarObjects__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_OBJECTS__STRUCT_H_
