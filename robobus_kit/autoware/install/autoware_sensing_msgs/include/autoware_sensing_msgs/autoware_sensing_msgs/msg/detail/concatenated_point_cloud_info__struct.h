// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_sensing_msgs:msg/ConcatenatedPointCloudInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__CONCATENATED_POINT_CLOUD_INFO__STRUCT_H_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__CONCATENATED_POINT_CLOUD_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STRATEGY_NAIVE'.
/**
  * Available matching strategies for source point clouds concatenation
  * Assigns the oldest stamp of the sensor that was concatenated
 */
enum
{
  autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__STRATEGY_NAIVE = 0
};

/// Constant 'STRATEGY_ADVANCED'.
/**
  * Assigns the oldest stamp of the sensor that was concatenated
 */
enum
{
  autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__STRATEGY_ADVANCED = 1
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'matching_strategy_config'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'source_info'
#include "autoware_sensing_msgs/msg/detail/source_point_cloud_info__struct.h"

/// Struct defined in msg/ConcatenatedPointCloudInfo in the package autoware_sensing_msgs.
/**
  * This message holds information about a concatenated point cloud that combines multiple source
  * point clouds, including the overall point cloud structure and metadata for each source segment.
 */
typedef struct autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo
{
  /// The concatenated point cloud header, where timestamp assignment depends on matching strategy
  std_msgs__msg__Header header;
  /// Whether concatenation was successful
  bool concatenation_success;
  /// Strategy used for concatenation
  uint8_t matching_strategy;
  /// Raw data of concatenation config, relevant to matching_strategy field.
  rosidl_runtime_c__uint8__Sequence matching_strategy_config;
  /// Meta information of input point clouds
  autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence source_info;
} autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo;

// Struct for a sequence of autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo.
typedef struct autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence
{
  autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__CONCATENATED_POINT_CLOUD_INFO__STRUCT_H_
