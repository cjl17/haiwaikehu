// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_sensing_msgs:msg/ConcatenatedPointCloudInfo.idl
// generated code does not contain a copyright notice
#include "autoware_sensing_msgs/msg/detail/concatenated_point_cloud_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `matching_strategy_config`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `source_info`
#include "autoware_sensing_msgs/msg/detail/source_point_cloud_info__functions.h"

bool
autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__init(autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__fini(msg);
    return false;
  }
  // concatenation_success
  // matching_strategy
  // matching_strategy_config
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->matching_strategy_config, 0)) {
    autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__fini(msg);
    return false;
  }
  // source_info
  if (!autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence__init(&msg->source_info, 0)) {
    autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__fini(msg);
    return false;
  }
  return true;
}

void
autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__fini(autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // concatenation_success
  // matching_strategy
  // matching_strategy_config
  rosidl_runtime_c__uint8__Sequence__fini(&msg->matching_strategy_config);
  // source_info
  autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence__fini(&msg->source_info);
}

bool
autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__are_equal(const autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo * lhs, const autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // concatenation_success
  if (lhs->concatenation_success != rhs->concatenation_success) {
    return false;
  }
  // matching_strategy
  if (lhs->matching_strategy != rhs->matching_strategy) {
    return false;
  }
  // matching_strategy_config
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->matching_strategy_config), &(rhs->matching_strategy_config)))
  {
    return false;
  }
  // source_info
  if (!autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence__are_equal(
      &(lhs->source_info), &(rhs->source_info)))
  {
    return false;
  }
  return true;
}

bool
autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__copy(
  const autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo * input,
  autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // concatenation_success
  output->concatenation_success = input->concatenation_success;
  // matching_strategy
  output->matching_strategy = input->matching_strategy;
  // matching_strategy_config
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->matching_strategy_config), &(output->matching_strategy_config)))
  {
    return false;
  }
  // source_info
  if (!autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence__copy(
      &(input->source_info), &(output->source_info)))
  {
    return false;
  }
  return true;
}

autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo *
autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo * msg = (autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo *)allocator.allocate(sizeof(autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo));
  bool success = autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__destroy(autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence__init(autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo * data = NULL;

  if (size) {
    data = (autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo *)allocator.zero_allocate(size, sizeof(autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence__fini(autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence *
autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence * array = (autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence *)allocator.allocate(sizeof(autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence__destroy(autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence__are_equal(const autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence * lhs, const autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence__copy(
  const autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence * input,
  autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo * data =
      (autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
