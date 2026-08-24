// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_sensing_msgs:msg/RadarObject.idl
// generated code does not contain a copyright notice
#include "autoware_sensing_msgs/msg/detail/radar_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `velocity`
// Member `acceleration`
// Member `size`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `classifications`
#include "autoware_sensing_msgs/msg/detail/radar_classification__functions.h"

bool
autoware_sensing_msgs__msg__RadarObject__init(autoware_sensing_msgs__msg__RadarObject * msg)
{
  if (!msg) {
    return false;
  }
  // object_id
  // age
  // measurement_status
  // movement_status
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    autoware_sensing_msgs__msg__RadarObject__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity)) {
    autoware_sensing_msgs__msg__RadarObject__fini(msg);
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__init(&msg->acceleration)) {
    autoware_sensing_msgs__msg__RadarObject__fini(msg);
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__init(&msg->size)) {
    autoware_sensing_msgs__msg__RadarObject__fini(msg);
    return false;
  }
  // position_covariance
  // velocity_covariance
  // acceleration_covariance
  // size_covariance
  // orientation
  // orientation_std
  // orientation_rate
  // orientation_rate_std
  // existence_probability
  // classifications
  if (!autoware_sensing_msgs__msg__RadarClassification__Sequence__init(&msg->classifications, 0)) {
    autoware_sensing_msgs__msg__RadarObject__fini(msg);
    return false;
  }
  return true;
}

void
autoware_sensing_msgs__msg__RadarObject__fini(autoware_sensing_msgs__msg__RadarObject * msg)
{
  if (!msg) {
    return;
  }
  // object_id
  // age
  // measurement_status
  // movement_status
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // velocity
  geometry_msgs__msg__Vector3__fini(&msg->velocity);
  // acceleration
  geometry_msgs__msg__Vector3__fini(&msg->acceleration);
  // size
  geometry_msgs__msg__Vector3__fini(&msg->size);
  // position_covariance
  // velocity_covariance
  // acceleration_covariance
  // size_covariance
  // orientation
  // orientation_std
  // orientation_rate
  // orientation_rate_std
  // existence_probability
  // classifications
  autoware_sensing_msgs__msg__RadarClassification__Sequence__fini(&msg->classifications);
}

bool
autoware_sensing_msgs__msg__RadarObject__are_equal(const autoware_sensing_msgs__msg__RadarObject * lhs, const autoware_sensing_msgs__msg__RadarObject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object_id
  if (lhs->object_id != rhs->object_id) {
    return false;
  }
  // age
  if (lhs->age != rhs->age) {
    return false;
  }
  // measurement_status
  if (lhs->measurement_status != rhs->measurement_status) {
    return false;
  }
  // movement_status
  if (lhs->movement_status != rhs->movement_status) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->size), &(rhs->size)))
  {
    return false;
  }
  // position_covariance
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->position_covariance[i] != rhs->position_covariance[i]) {
      return false;
    }
  }
  // velocity_covariance
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->velocity_covariance[i] != rhs->velocity_covariance[i]) {
      return false;
    }
  }
  // acceleration_covariance
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->acceleration_covariance[i] != rhs->acceleration_covariance[i]) {
      return false;
    }
  }
  // size_covariance
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->size_covariance[i] != rhs->size_covariance[i]) {
      return false;
    }
  }
  // orientation
  if (lhs->orientation != rhs->orientation) {
    return false;
  }
  // orientation_std
  if (lhs->orientation_std != rhs->orientation_std) {
    return false;
  }
  // orientation_rate
  if (lhs->orientation_rate != rhs->orientation_rate) {
    return false;
  }
  // orientation_rate_std
  if (lhs->orientation_rate_std != rhs->orientation_rate_std) {
    return false;
  }
  // existence_probability
  if (lhs->existence_probability != rhs->existence_probability) {
    return false;
  }
  // classifications
  if (!autoware_sensing_msgs__msg__RadarClassification__Sequence__are_equal(
      &(lhs->classifications), &(rhs->classifications)))
  {
    return false;
  }
  return true;
}

bool
autoware_sensing_msgs__msg__RadarObject__copy(
  const autoware_sensing_msgs__msg__RadarObject * input,
  autoware_sensing_msgs__msg__RadarObject * output)
{
  if (!input || !output) {
    return false;
  }
  // object_id
  output->object_id = input->object_id;
  // age
  output->age = input->age;
  // measurement_status
  output->measurement_status = input->measurement_status;
  // movement_status
  output->movement_status = input->movement_status;
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->size), &(output->size)))
  {
    return false;
  }
  // position_covariance
  for (size_t i = 0; i < 6; ++i) {
    output->position_covariance[i] = input->position_covariance[i];
  }
  // velocity_covariance
  for (size_t i = 0; i < 6; ++i) {
    output->velocity_covariance[i] = input->velocity_covariance[i];
  }
  // acceleration_covariance
  for (size_t i = 0; i < 6; ++i) {
    output->acceleration_covariance[i] = input->acceleration_covariance[i];
  }
  // size_covariance
  for (size_t i = 0; i < 6; ++i) {
    output->size_covariance[i] = input->size_covariance[i];
  }
  // orientation
  output->orientation = input->orientation;
  // orientation_std
  output->orientation_std = input->orientation_std;
  // orientation_rate
  output->orientation_rate = input->orientation_rate;
  // orientation_rate_std
  output->orientation_rate_std = input->orientation_rate_std;
  // existence_probability
  output->existence_probability = input->existence_probability;
  // classifications
  if (!autoware_sensing_msgs__msg__RadarClassification__Sequence__copy(
      &(input->classifications), &(output->classifications)))
  {
    return false;
  }
  return true;
}

autoware_sensing_msgs__msg__RadarObject *
autoware_sensing_msgs__msg__RadarObject__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_sensing_msgs__msg__RadarObject * msg = (autoware_sensing_msgs__msg__RadarObject *)allocator.allocate(sizeof(autoware_sensing_msgs__msg__RadarObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_sensing_msgs__msg__RadarObject));
  bool success = autoware_sensing_msgs__msg__RadarObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_sensing_msgs__msg__RadarObject__destroy(autoware_sensing_msgs__msg__RadarObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_sensing_msgs__msg__RadarObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_sensing_msgs__msg__RadarObject__Sequence__init(autoware_sensing_msgs__msg__RadarObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_sensing_msgs__msg__RadarObject * data = NULL;

  if (size) {
    data = (autoware_sensing_msgs__msg__RadarObject *)allocator.zero_allocate(size, sizeof(autoware_sensing_msgs__msg__RadarObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_sensing_msgs__msg__RadarObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_sensing_msgs__msg__RadarObject__fini(&data[i - 1]);
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
autoware_sensing_msgs__msg__RadarObject__Sequence__fini(autoware_sensing_msgs__msg__RadarObject__Sequence * array)
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
      autoware_sensing_msgs__msg__RadarObject__fini(&array->data[i]);
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

autoware_sensing_msgs__msg__RadarObject__Sequence *
autoware_sensing_msgs__msg__RadarObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_sensing_msgs__msg__RadarObject__Sequence * array = (autoware_sensing_msgs__msg__RadarObject__Sequence *)allocator.allocate(sizeof(autoware_sensing_msgs__msg__RadarObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_sensing_msgs__msg__RadarObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_sensing_msgs__msg__RadarObject__Sequence__destroy(autoware_sensing_msgs__msg__RadarObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_sensing_msgs__msg__RadarObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_sensing_msgs__msg__RadarObject__Sequence__are_equal(const autoware_sensing_msgs__msg__RadarObject__Sequence * lhs, const autoware_sensing_msgs__msg__RadarObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_sensing_msgs__msg__RadarObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_sensing_msgs__msg__RadarObject__Sequence__copy(
  const autoware_sensing_msgs__msg__RadarObject__Sequence * input,
  autoware_sensing_msgs__msg__RadarObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_sensing_msgs__msg__RadarObject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_sensing_msgs__msg__RadarObject * data =
      (autoware_sensing_msgs__msg__RadarObject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_sensing_msgs__msg__RadarObject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_sensing_msgs__msg__RadarObject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_sensing_msgs__msg__RadarObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
