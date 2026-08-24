// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_sensing_msgs:msg/RadarClassification.idl
// generated code does not contain a copyright notice
#include "autoware_sensing_msgs/msg/detail/radar_classification__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
autoware_sensing_msgs__msg__RadarClassification__init(autoware_sensing_msgs__msg__RadarClassification * msg)
{
  if (!msg) {
    return false;
  }
  // label
  // probability
  return true;
}

void
autoware_sensing_msgs__msg__RadarClassification__fini(autoware_sensing_msgs__msg__RadarClassification * msg)
{
  if (!msg) {
    return;
  }
  // label
  // probability
}

bool
autoware_sensing_msgs__msg__RadarClassification__are_equal(const autoware_sensing_msgs__msg__RadarClassification * lhs, const autoware_sensing_msgs__msg__RadarClassification * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // label
  if (lhs->label != rhs->label) {
    return false;
  }
  // probability
  if (lhs->probability != rhs->probability) {
    return false;
  }
  return true;
}

bool
autoware_sensing_msgs__msg__RadarClassification__copy(
  const autoware_sensing_msgs__msg__RadarClassification * input,
  autoware_sensing_msgs__msg__RadarClassification * output)
{
  if (!input || !output) {
    return false;
  }
  // label
  output->label = input->label;
  // probability
  output->probability = input->probability;
  return true;
}

autoware_sensing_msgs__msg__RadarClassification *
autoware_sensing_msgs__msg__RadarClassification__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_sensing_msgs__msg__RadarClassification * msg = (autoware_sensing_msgs__msg__RadarClassification *)allocator.allocate(sizeof(autoware_sensing_msgs__msg__RadarClassification), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_sensing_msgs__msg__RadarClassification));
  bool success = autoware_sensing_msgs__msg__RadarClassification__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_sensing_msgs__msg__RadarClassification__destroy(autoware_sensing_msgs__msg__RadarClassification * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_sensing_msgs__msg__RadarClassification__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_sensing_msgs__msg__RadarClassification__Sequence__init(autoware_sensing_msgs__msg__RadarClassification__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_sensing_msgs__msg__RadarClassification * data = NULL;

  if (size) {
    data = (autoware_sensing_msgs__msg__RadarClassification *)allocator.zero_allocate(size, sizeof(autoware_sensing_msgs__msg__RadarClassification), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_sensing_msgs__msg__RadarClassification__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_sensing_msgs__msg__RadarClassification__fini(&data[i - 1]);
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
autoware_sensing_msgs__msg__RadarClassification__Sequence__fini(autoware_sensing_msgs__msg__RadarClassification__Sequence * array)
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
      autoware_sensing_msgs__msg__RadarClassification__fini(&array->data[i]);
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

autoware_sensing_msgs__msg__RadarClassification__Sequence *
autoware_sensing_msgs__msg__RadarClassification__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_sensing_msgs__msg__RadarClassification__Sequence * array = (autoware_sensing_msgs__msg__RadarClassification__Sequence *)allocator.allocate(sizeof(autoware_sensing_msgs__msg__RadarClassification__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_sensing_msgs__msg__RadarClassification__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_sensing_msgs__msg__RadarClassification__Sequence__destroy(autoware_sensing_msgs__msg__RadarClassification__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_sensing_msgs__msg__RadarClassification__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_sensing_msgs__msg__RadarClassification__Sequence__are_equal(const autoware_sensing_msgs__msg__RadarClassification__Sequence * lhs, const autoware_sensing_msgs__msg__RadarClassification__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_sensing_msgs__msg__RadarClassification__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_sensing_msgs__msg__RadarClassification__Sequence__copy(
  const autoware_sensing_msgs__msg__RadarClassification__Sequence * input,
  autoware_sensing_msgs__msg__RadarClassification__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_sensing_msgs__msg__RadarClassification);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_sensing_msgs__msg__RadarClassification * data =
      (autoware_sensing_msgs__msg__RadarClassification *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_sensing_msgs__msg__RadarClassification__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_sensing_msgs__msg__RadarClassification__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_sensing_msgs__msg__RadarClassification__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
