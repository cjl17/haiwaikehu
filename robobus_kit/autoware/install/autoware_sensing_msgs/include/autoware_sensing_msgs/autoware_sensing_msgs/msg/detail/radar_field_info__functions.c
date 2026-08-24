// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_sensing_msgs:msg/RadarFieldInfo.idl
// generated code does not contain a copyright notice
#include "autoware_sensing_msgs/msg/detail/radar_field_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `field_name`
#include "std_msgs/msg/detail/string__functions.h"

bool
autoware_sensing_msgs__msg__RadarFieldInfo__init(autoware_sensing_msgs__msg__RadarFieldInfo * msg)
{
  if (!msg) {
    return false;
  }
  // field_name
  if (!std_msgs__msg__String__init(&msg->field_name)) {
    autoware_sensing_msgs__msg__RadarFieldInfo__fini(msg);
    return false;
  }
  // min_value_available
  // max_value_available
  // resolution_available
  // min_value
  // max_value
  // resolution
  return true;
}

void
autoware_sensing_msgs__msg__RadarFieldInfo__fini(autoware_sensing_msgs__msg__RadarFieldInfo * msg)
{
  if (!msg) {
    return;
  }
  // field_name
  std_msgs__msg__String__fini(&msg->field_name);
  // min_value_available
  // max_value_available
  // resolution_available
  // min_value
  // max_value
  // resolution
}

bool
autoware_sensing_msgs__msg__RadarFieldInfo__are_equal(const autoware_sensing_msgs__msg__RadarFieldInfo * lhs, const autoware_sensing_msgs__msg__RadarFieldInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // field_name
  if (!std_msgs__msg__String__are_equal(
      &(lhs->field_name), &(rhs->field_name)))
  {
    return false;
  }
  // min_value_available
  if (lhs->min_value_available != rhs->min_value_available) {
    return false;
  }
  // max_value_available
  if (lhs->max_value_available != rhs->max_value_available) {
    return false;
  }
  // resolution_available
  if (lhs->resolution_available != rhs->resolution_available) {
    return false;
  }
  // min_value
  if (lhs->min_value != rhs->min_value) {
    return false;
  }
  // max_value
  if (lhs->max_value != rhs->max_value) {
    return false;
  }
  // resolution
  if (lhs->resolution != rhs->resolution) {
    return false;
  }
  return true;
}

bool
autoware_sensing_msgs__msg__RadarFieldInfo__copy(
  const autoware_sensing_msgs__msg__RadarFieldInfo * input,
  autoware_sensing_msgs__msg__RadarFieldInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // field_name
  if (!std_msgs__msg__String__copy(
      &(input->field_name), &(output->field_name)))
  {
    return false;
  }
  // min_value_available
  output->min_value_available = input->min_value_available;
  // max_value_available
  output->max_value_available = input->max_value_available;
  // resolution_available
  output->resolution_available = input->resolution_available;
  // min_value
  output->min_value = input->min_value;
  // max_value
  output->max_value = input->max_value;
  // resolution
  output->resolution = input->resolution;
  return true;
}

autoware_sensing_msgs__msg__RadarFieldInfo *
autoware_sensing_msgs__msg__RadarFieldInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_sensing_msgs__msg__RadarFieldInfo * msg = (autoware_sensing_msgs__msg__RadarFieldInfo *)allocator.allocate(sizeof(autoware_sensing_msgs__msg__RadarFieldInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_sensing_msgs__msg__RadarFieldInfo));
  bool success = autoware_sensing_msgs__msg__RadarFieldInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_sensing_msgs__msg__RadarFieldInfo__destroy(autoware_sensing_msgs__msg__RadarFieldInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_sensing_msgs__msg__RadarFieldInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__init(autoware_sensing_msgs__msg__RadarFieldInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_sensing_msgs__msg__RadarFieldInfo * data = NULL;

  if (size) {
    data = (autoware_sensing_msgs__msg__RadarFieldInfo *)allocator.zero_allocate(size, sizeof(autoware_sensing_msgs__msg__RadarFieldInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_sensing_msgs__msg__RadarFieldInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_sensing_msgs__msg__RadarFieldInfo__fini(&data[i - 1]);
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
autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__fini(autoware_sensing_msgs__msg__RadarFieldInfo__Sequence * array)
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
      autoware_sensing_msgs__msg__RadarFieldInfo__fini(&array->data[i]);
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

autoware_sensing_msgs__msg__RadarFieldInfo__Sequence *
autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_sensing_msgs__msg__RadarFieldInfo__Sequence * array = (autoware_sensing_msgs__msg__RadarFieldInfo__Sequence *)allocator.allocate(sizeof(autoware_sensing_msgs__msg__RadarFieldInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__destroy(autoware_sensing_msgs__msg__RadarFieldInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__are_equal(const autoware_sensing_msgs__msg__RadarFieldInfo__Sequence * lhs, const autoware_sensing_msgs__msg__RadarFieldInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_sensing_msgs__msg__RadarFieldInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__copy(
  const autoware_sensing_msgs__msg__RadarFieldInfo__Sequence * input,
  autoware_sensing_msgs__msg__RadarFieldInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_sensing_msgs__msg__RadarFieldInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_sensing_msgs__msg__RadarFieldInfo * data =
      (autoware_sensing_msgs__msg__RadarFieldInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_sensing_msgs__msg__RadarFieldInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_sensing_msgs__msg__RadarFieldInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_sensing_msgs__msg__RadarFieldInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
