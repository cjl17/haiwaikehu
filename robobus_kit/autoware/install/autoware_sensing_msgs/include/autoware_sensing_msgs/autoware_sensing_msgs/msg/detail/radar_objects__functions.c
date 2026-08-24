// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_sensing_msgs:msg/RadarObjects.idl
// generated code does not contain a copyright notice
#include "autoware_sensing_msgs/msg/detail/radar_objects__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `objects`
#include "autoware_sensing_msgs/msg/detail/radar_object__functions.h"

bool
autoware_sensing_msgs__msg__RadarObjects__init(autoware_sensing_msgs__msg__RadarObjects * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_sensing_msgs__msg__RadarObjects__fini(msg);
    return false;
  }
  // objects
  if (!autoware_sensing_msgs__msg__RadarObject__Sequence__init(&msg->objects, 0)) {
    autoware_sensing_msgs__msg__RadarObjects__fini(msg);
    return false;
  }
  return true;
}

void
autoware_sensing_msgs__msg__RadarObjects__fini(autoware_sensing_msgs__msg__RadarObjects * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // objects
  autoware_sensing_msgs__msg__RadarObject__Sequence__fini(&msg->objects);
}

bool
autoware_sensing_msgs__msg__RadarObjects__are_equal(const autoware_sensing_msgs__msg__RadarObjects * lhs, const autoware_sensing_msgs__msg__RadarObjects * rhs)
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
  // objects
  if (!autoware_sensing_msgs__msg__RadarObject__Sequence__are_equal(
      &(lhs->objects), &(rhs->objects)))
  {
    return false;
  }
  return true;
}

bool
autoware_sensing_msgs__msg__RadarObjects__copy(
  const autoware_sensing_msgs__msg__RadarObjects * input,
  autoware_sensing_msgs__msg__RadarObjects * output)
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
  // objects
  if (!autoware_sensing_msgs__msg__RadarObject__Sequence__copy(
      &(input->objects), &(output->objects)))
  {
    return false;
  }
  return true;
}

autoware_sensing_msgs__msg__RadarObjects *
autoware_sensing_msgs__msg__RadarObjects__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_sensing_msgs__msg__RadarObjects * msg = (autoware_sensing_msgs__msg__RadarObjects *)allocator.allocate(sizeof(autoware_sensing_msgs__msg__RadarObjects), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_sensing_msgs__msg__RadarObjects));
  bool success = autoware_sensing_msgs__msg__RadarObjects__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_sensing_msgs__msg__RadarObjects__destroy(autoware_sensing_msgs__msg__RadarObjects * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_sensing_msgs__msg__RadarObjects__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_sensing_msgs__msg__RadarObjects__Sequence__init(autoware_sensing_msgs__msg__RadarObjects__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_sensing_msgs__msg__RadarObjects * data = NULL;

  if (size) {
    data = (autoware_sensing_msgs__msg__RadarObjects *)allocator.zero_allocate(size, sizeof(autoware_sensing_msgs__msg__RadarObjects), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_sensing_msgs__msg__RadarObjects__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_sensing_msgs__msg__RadarObjects__fini(&data[i - 1]);
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
autoware_sensing_msgs__msg__RadarObjects__Sequence__fini(autoware_sensing_msgs__msg__RadarObjects__Sequence * array)
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
      autoware_sensing_msgs__msg__RadarObjects__fini(&array->data[i]);
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

autoware_sensing_msgs__msg__RadarObjects__Sequence *
autoware_sensing_msgs__msg__RadarObjects__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_sensing_msgs__msg__RadarObjects__Sequence * array = (autoware_sensing_msgs__msg__RadarObjects__Sequence *)allocator.allocate(sizeof(autoware_sensing_msgs__msg__RadarObjects__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_sensing_msgs__msg__RadarObjects__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_sensing_msgs__msg__RadarObjects__Sequence__destroy(autoware_sensing_msgs__msg__RadarObjects__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_sensing_msgs__msg__RadarObjects__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_sensing_msgs__msg__RadarObjects__Sequence__are_equal(const autoware_sensing_msgs__msg__RadarObjects__Sequence * lhs, const autoware_sensing_msgs__msg__RadarObjects__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_sensing_msgs__msg__RadarObjects__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_sensing_msgs__msg__RadarObjects__Sequence__copy(
  const autoware_sensing_msgs__msg__RadarObjects__Sequence * input,
  autoware_sensing_msgs__msg__RadarObjects__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_sensing_msgs__msg__RadarObjects);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_sensing_msgs__msg__RadarObjects * data =
      (autoware_sensing_msgs__msg__RadarObjects *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_sensing_msgs__msg__RadarObjects__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_sensing_msgs__msg__RadarObjects__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_sensing_msgs__msg__RadarObjects__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
