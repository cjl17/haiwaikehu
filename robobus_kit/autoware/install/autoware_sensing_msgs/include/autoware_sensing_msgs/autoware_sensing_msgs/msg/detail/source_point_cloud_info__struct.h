// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_sensing_msgs:msg/SourcePointCloudInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__SOURCE_POINT_CLOUD_INFO__STRUCT_H_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__SOURCE_POINT_CLOUD_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_OK'.
/**
  * Available status codes for source point cloud
  * Cloud received (may have 0 or more points)
 */
enum
{
  autoware_sensing_msgs__msg__SourcePointCloudInfo__STATUS_OK = 0
};

/// Constant 'STATUS_TIMEOUT'.
/**
  * Cloud not received due to timeout
 */
enum
{
  autoware_sensing_msgs__msg__SourcePointCloudInfo__STATUS_TIMEOUT = 1
};

/// Constant 'STATUS_INVALID'.
/**
  * Cloud arrived but was malformed/corrupt
 */
enum
{
  autoware_sensing_msgs__msg__SourcePointCloudInfo__STATUS_INVALID = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'topic'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SourcePointCloudInfo in the package autoware_sensing_msgs.
/**
  * This message holds metadata information about a source point cloud segment
  * within a concatenated point cloud, including its spatial boundaries and structural properties.
 */
typedef struct autoware_sensing_msgs__msg__SourcePointCloudInfo
{
  /// Time of sensor data acquisition, and the coordinate frame ID (for 3d points).
  std_msgs__msg__Header header;
  /// Source topic
  rosidl_runtime_c__String topic;
  /// Status of the source point cloud
  uint8_t status;
  /// The starting index (inclusive) of the point cloud segment within the concatenated point cloud
  uint32_t idx_begin;
  /// The length of the point cloud segment in the concatenated point cloud
  uint32_t length;
} autoware_sensing_msgs__msg__SourcePointCloudInfo;

// Struct for a sequence of autoware_sensing_msgs__msg__SourcePointCloudInfo.
typedef struct autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence
{
  autoware_sensing_msgs__msg__SourcePointCloudInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__SOURCE_POINT_CLOUD_INFO__STRUCT_H_
