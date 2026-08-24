// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_sensing_msgs:msg/RadarInfo.idl
// generated code does not contain a copyright notice
#include "autoware_sensing_msgs/msg/detail/radar_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `object_fields_info`
// Member `detection_fields_info`
#include "autoware_sensing_msgs/msg/detail/radar_field_info__functions.h"
// Member `available_classes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
autoware_sensing_msgs__msg__RadarInfo__init(autoware_sensing_msgs__msg__RadarInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_sensing_msgs__msg__RadarInfo__fini(msg);
    return false;
  }
  // object_fields_info
  if (!autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__init(&msg->object_fields_info, 0)) {
    autoware_sensing_msgs__msg__RadarInfo__fini(msg);
    return false;
  }
  // detection_fields_info
  if (!autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__init(&msg->detection_fields_info, 0)) {
    autoware_sensing_msgs__msg__RadarInfo__fini(msg);
    return false;
  }
  // available_classes
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->available_classes, 0)) {
    autoware_sensing_msgs__msg__RadarInfo__fini(msg);
    return false;
  }
  // absolute_dynamics
  return true;
}

void
autoware_sensing_msgs__msg__RadarInfo__fini(autoware_sensing_msgs__msg__RadarInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // object_fields_info
  autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__fini(&msg->object_fields_info);
  // detection_fields_info
  autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__fini(&msg->detection_fields_info);
  // available_classes
  rosidl_runtime_c__uint32__Sequence__fini(&msg->available_classes);
  // absolute_dynamics
}

bool
autoware_sensing_msgs__msg__RadarInfo__are_equal(const autoware_sensing_msgs__msg__RadarInfo * lhs, const autoware_sensing_msgs__msg__RadarInfo * rhs)
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
  // object_fields_info
  if (!autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__are_equal(
      &(lhs->object_fields_info), &(rhs->object_fields_info)))
  {
    return false;
  }
  // detection_fields_info
  if (!autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__are_equal(
      &(lhs->detection_fields_info), &(rhs->detection_fields_info)))
  {
    return false;
  }
  // available_classes
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->available_classes), &(rhs->available_classes)))
  {
    return false;
  }
  // absolute_dynamics
  if (lhs->absolute_dynamics != rhs->absolute_dynamics) {
    return false;
  }
  return true;
}

bool
autoware_sensing_msgs__msg__RadarInfo__copy(
  const autoware_sensing_msgs__msg__RadarInfo * input,
  autoware_sensing_msgs__msg__RadarInfo * output)
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
  // object_fields_info
  if (!autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__copy(
      &(input->object_fields_info), &(output->object_fields_info)))
  {
    return false;
  }
  // detection_fields_info
  if (!autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__copy(
      &(input->detection_fields_info), &(output->detection_fields_info)))
  {
    return false;
  }
  // available_classes
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->available_classes), &(output->available_classes)))
  {
    return false;
  }
  // absolute_dynamics
  output->absolute_dynamics = input->absolute_dynamics;
  return true;
}

autoware_sensing_msgs__msg__RadarInfo *
autoware_sensing_msgs__msg__RadarInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_sensing_msgs__msg__RadarInfo * msg = (autoware_sensing_msgs__msg__RadarInfo *)allocator.allocate(sizeof(autoware_sensing_msgs__msg__RadarInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_sensing_msgs__msg__RadarInfo));
  bool success = autoware_sensing_msgs__msg__RadarInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_sensing_msgs__msg__RadarInfo__destroy(autoware_sensing_msgs__msg__RadarInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_sensing_msgs__msg__RadarInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_sensing_msgs__msg__RadarInfo__Sequence__init(autoware_sensing_msgs__msg__RadarInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_sensing_msgs__msg__RadarInfo * data = NULL;

  if (size) {
    data = (autoware_sensing_msgs__msg__RadarInfo *)allocator.zero_allocate(size, sizeof(autoware_sensing_msgs__msg__RadarInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_sensing_msgs__msg__RadarInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_sensing_msgs__msg__RadarInfo__fini(&data[i - 1]);
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
autoware_sensing_msgs__msg__RadarInfo__Sequence__fini(autoware_sensing_msgs__msg__RadarInfo__Sequence * array)
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
      autoware_sensing_msgs__msg__RadarInfo__fini(&array->data[i]);
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

autoware_sensing_msgs__msg__RadarInfo__Sequence *
autoware_sensing_msgs__msg__RadarInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_sensing_msgs__msg__RadarInfo__Sequence * array = (autoware_sensing_msgs__msg__RadarInfo__Sequence *)allocator.allocate(sizeof(autoware_sensing_msgs__msg__RadarInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_sensing_msgs__msg__RadarInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_sensing_msgs__msg__RadarInfo__Sequence__destroy(autoware_sensing_msgs__msg__RadarInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_sensing_msgs__msg__RadarInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_sensing_msgs__msg__RadarInfo__Sequence__are_equal(const autoware_sensing_msgs__msg__RadarInfo__Sequence * lhs, const autoware_sensing_msgs__msg__RadarInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_sensing_msgs__msg__RadarInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_sensing_msgs__msg__RadarInfo__Sequence__copy(
  const autoware_sensing_msgs__msg__RadarInfo__Sequence * input,
  autoware_sensing_msgs__msg__RadarInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_sensing_msgs__msg__RadarInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_sensing_msgs__msg__RadarInfo * data =
      (autoware_sensing_msgs__msg__RadarInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_sensing_msgs__msg__RadarInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_sensing_msgs__msg__RadarInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_sensing_msgs__msg__RadarInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
