// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_sensing_msgs:msg/RadarClassification.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_CLASSIFICATION__STRUCT_H_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_CLASSIFICATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  autoware_sensing_msgs__msg__RadarClassification__UNKNOWN = 0
};

/// Constant 'CAR'.
enum
{
  autoware_sensing_msgs__msg__RadarClassification__CAR = 1
};

/// Constant 'TRUCK'.
enum
{
  autoware_sensing_msgs__msg__RadarClassification__TRUCK = 2
};

/// Constant 'BUS'.
enum
{
  autoware_sensing_msgs__msg__RadarClassification__BUS = 3
};

/// Constant 'TRAILER'.
enum
{
  autoware_sensing_msgs__msg__RadarClassification__TRAILER = 4
};

/// Constant 'MOTORCYCLE'.
enum
{
  autoware_sensing_msgs__msg__RadarClassification__MOTORCYCLE = 5
};

/// Constant 'BICYCLE'.
enum
{
  autoware_sensing_msgs__msg__RadarClassification__BICYCLE = 6
};

/// Constant 'PEDESTRIAN'.
enum
{
  autoware_sensing_msgs__msg__RadarClassification__PEDESTRIAN = 7
};

/// Constant 'ANIMAL'.
enum
{
  autoware_sensing_msgs__msg__RadarClassification__ANIMAL = 8
};

/// Constant 'HAZARD'.
/**
  * Radar specific classes
  * Defined as an object that can cause danger to autonomous driving
 */
enum
{
  autoware_sensing_msgs__msg__RadarClassification__HAZARD = 9
};

/// Constant 'OVER_DRIVABLE'.
/**
  * Defined as an object that can be safely driven over (e.g., leaf)
 */
enum
{
  autoware_sensing_msgs__msg__RadarClassification__OVER_DRIVABLE = 10
};

/// Constant 'UNDER_DRIVABLE'.
/**
  * Defined as an object that can be safely driven under (e.g., overpass)
 */
enum
{
  autoware_sensing_msgs__msg__RadarClassification__UNDER_DRIVABLE = 11
};

/// Struct defined in msg/RadarClassification in the package autoware_sensing_msgs.
/**
  * Common autoware classes
 */
typedef struct autoware_sensing_msgs__msg__RadarClassification
{
  uint8_t label;
  float probability;
} autoware_sensing_msgs__msg__RadarClassification;

// Struct for a sequence of autoware_sensing_msgs__msg__RadarClassification.
typedef struct autoware_sensing_msgs__msg__RadarClassification__Sequence
{
  autoware_sensing_msgs__msg__RadarClassification * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_sensing_msgs__msg__RadarClassification__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_CLASSIFICATION__STRUCT_H_
