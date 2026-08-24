// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_sensing_msgs:msg/RadarObject.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_OBJECT__STRUCT_H_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INVALID_COV_VALUE'.
static const float autoware_sensing_msgs__msg__RadarObject__INVALID_COV_VALUE = -1.0f;

/// Constant 'MEASUREMENT_STATUS_INVALID'.
enum
{
  autoware_sensing_msgs__msg__RadarObject__MEASUREMENT_STATUS_INVALID = 0
};

/// Constant 'MEASUREMENT_STATUS_MEASURED'.
enum
{
  autoware_sensing_msgs__msg__RadarObject__MEASUREMENT_STATUS_MEASURED = 1
};

/// Constant 'MEASUREMENT_STATUS_PREDICTED'.
enum
{
  autoware_sensing_msgs__msg__RadarObject__MEASUREMENT_STATUS_PREDICTED = 2
};

/// Constant 'MEASUREMENT_STATUS_NEW'.
enum
{
  autoware_sensing_msgs__msg__RadarObject__MEASUREMENT_STATUS_NEW = 3
};

/// Constant 'MEASUREMENT_STATUS_UNKNOWN'.
enum
{
  autoware_sensing_msgs__msg__RadarObject__MEASUREMENT_STATUS_UNKNOWN = 4
};

/// Constant 'MOVEMENT_STATUS_INVALID'.
enum
{
  autoware_sensing_msgs__msg__RadarObject__MOVEMENT_STATUS_INVALID = 0
};

/// Constant 'MOVEMENT_STATUS_DYNAMIC'.
enum
{
  autoware_sensing_msgs__msg__RadarObject__MOVEMENT_STATUS_DYNAMIC = 1
};

/// Constant 'MOVEMENT_STATUS_STATIC'.
enum
{
  autoware_sensing_msgs__msg__RadarObject__MOVEMENT_STATUS_STATIC = 2
};

/// Constant 'MOVEMENT_STATUS_UNKNOWN'.
enum
{
  autoware_sensing_msgs__msg__RadarObject__MOVEMENT_STATUS_UNKNOWN = 3
};

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'velocity'
// Member 'acceleration'
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'classifications'
#include "autoware_sensing_msgs/msg/detail/radar_classification__struct.h"

/// Struct defined in msg/RadarObject in the package autoware_sensing_msgs.
typedef struct autoware_sensing_msgs__msg__RadarObject
{
  uint32_t object_id;
  uint16_t age;
  uint8_t measurement_status;
  uint8_t movement_status;
  geometry_msgs__msg__Point position;
  geometry_msgs__msg__Vector3 velocity;
  geometry_msgs__msg__Vector3 acceleration;
  geometry_msgs__msg__Vector3 size;
  float position_covariance[6];
  float velocity_covariance[6];
  float acceleration_covariance[6];
  float size_covariance[6];
  float orientation;
  float orientation_std;
  float orientation_rate;
  float orientation_rate_std;
  float existence_probability;
  autoware_sensing_msgs__msg__RadarClassification__Sequence classifications;
} autoware_sensing_msgs__msg__RadarObject;

// Struct for a sequence of autoware_sensing_msgs__msg__RadarObject.
typedef struct autoware_sensing_msgs__msg__RadarObject__Sequence
{
  autoware_sensing_msgs__msg__RadarObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_sensing_msgs__msg__RadarObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_OBJECT__STRUCT_H_
