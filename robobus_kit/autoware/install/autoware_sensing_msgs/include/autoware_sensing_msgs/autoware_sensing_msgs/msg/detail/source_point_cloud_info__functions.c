// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_sensing_msgs:msg/SourcePointCloudInfo.idl
// generated code does not contain a copyright notice
#include "autoware_sensing_msgs/msg/detail/source_point_cloud_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `topic`
#include "rosidl_runtime_c/string_functions.h"

bool
autoware_sensing_msgs__msg__SourcePointCloudInfo__init(autoware_sensing_msgs__msg__SourcePointCloudInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_sensing_msgs__msg__SourcePointCloudInfo__fini(msg);
    return false;
  }
  // topic
  if (!rosidl_runtime_c__String__init(&msg->topic)) {
    autoware_sensing_msgs__msg__SourcePointCloudInfo__fini(msg);
    return false;
  }
  // status
  // idx_begin
  // length
  return true;
}

void
autoware_sensing_msgs__msg__SourcePointCloudInfo__fini(autoware_sensing_msgs__msg__SourcePointCloudInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // topic
  rosidl_runtime_c__String__fini(&msg->topic);
  // status
  // idx_begin
  // length
}

bool
autoware_sensing_msgs__msg__SourcePointCloudInfo__are_equal(const autoware_sensing_msgs__msg__SourcePointCloudInfo * lhs, const autoware_sensing_msgs__msg__SourcePointCloudInfo * rhs)
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
  // topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->topic), &(rhs->topic)))
  {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // idx_begin
  if (lhs->idx_begin != rhs->idx_begin) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  return true;
}

bool
autoware_sensing_msgs__msg__SourcePointCloudInfo__copy(
  const autoware_sensing_msgs__msg__SourcePointCloudInfo * input,
  autoware_sensing_msgs__msg__SourcePointCloudInfo * output)
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
  // topic
  if (!rosidl_runtime_c__String__copy(
      &(input->topic), &(output->topic)))
  {
    return false;
  }
  // status
  output->status = input->status;
  // idx_begin
  output->idx_begin = input->idx_begin;
  // length
  output->length = input->length;
  return true;
}

autoware_sensing_msgs__msg__SourcePointCloudInfo *
autoware_sensing_msgs__msg__SourcePointCloudInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_sensing_msgs__msg__SourcePointCloudInfo * msg = (autoware_sensing_msgs__msg__SourcePointCloudInfo *)allocator.allocate(sizeof(autoware_sensing_msgs__msg__SourcePointCloudInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_sensing_msgs__msg__SourcePointCloudInfo));
  bool success = autoware_sensing_msgs__msg__SourcePointCloudInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_sensing_msgs__msg__SourcePointCloudInfo__destroy(autoware_sensing_msgs__msg__SourcePointCloudInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_sensing_msgs__msg__SourcePointCloudInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence__init(autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_sensing_msgs__msg__SourcePointCloudInfo * data = NULL;

  if (size) {
    data = (autoware_sensing_msgs__msg__SourcePointCloudInfo *)allocator.zero_allocate(size, sizeof(autoware_sensing_msgs__msg__SourcePointCloudInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_sensing_msgs__msg__SourcePointCloudInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_sensing_msgs__msg__SourcePointCloudInfo__fini(&data[i - 1]);
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
autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence__fini(autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence * array)
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
      autoware_sensing_msgs__msg__SourcePointCloudInfo__fini(&array->data[i]);
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

autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence *
autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence * array = (autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence *)allocator.allocate(sizeof(autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence__destroy(autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence__are_equal(const autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence * lhs, const autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_sensing_msgs__msg__SourcePointCloudInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence__copy(
  const autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence * input,
  autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_sensing_msgs__msg__SourcePointCloudInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_sensing_msgs__msg__SourcePointCloudInfo * data =
      (autoware_sensing_msgs__msg__SourcePointCloudInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_sensing_msgs__msg__SourcePointCloudInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_sensing_msgs__msg__SourcePointCloudInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_sensing_msgs__msg__SourcePointCloudInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
