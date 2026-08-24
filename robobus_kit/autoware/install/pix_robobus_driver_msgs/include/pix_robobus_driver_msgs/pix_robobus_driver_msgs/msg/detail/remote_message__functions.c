// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pix_robobus_driver_msgs:msg/RemoteMessage.idl
// generated code does not contain a copyright notice
#include "pix_robobus_driver_msgs/msg/detail/remote_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
pix_robobus_driver_msgs__msg__RemoteMessage__init(pix_robobus_driver_msgs__msg__RemoteMessage * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pix_robobus_driver_msgs__msg__RemoteMessage__fini(msg);
    return false;
  }
  // remote_drive_mode
  // remote_heartbeat
  return true;
}

void
pix_robobus_driver_msgs__msg__RemoteMessage__fini(pix_robobus_driver_msgs__msg__RemoteMessage * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // remote_drive_mode
  // remote_heartbeat
}

bool
pix_robobus_driver_msgs__msg__RemoteMessage__are_equal(const pix_robobus_driver_msgs__msg__RemoteMessage * lhs, const pix_robobus_driver_msgs__msg__RemoteMessage * rhs)
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
  // remote_drive_mode
  if (lhs->remote_drive_mode != rhs->remote_drive_mode) {
    return false;
  }
  // remote_heartbeat
  if (lhs->remote_heartbeat != rhs->remote_heartbeat) {
    return false;
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__RemoteMessage__copy(
  const pix_robobus_driver_msgs__msg__RemoteMessage * input,
  pix_robobus_driver_msgs__msg__RemoteMessage * output)
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
  // remote_drive_mode
  output->remote_drive_mode = input->remote_drive_mode;
  // remote_heartbeat
  output->remote_heartbeat = input->remote_heartbeat;
  return true;
}

pix_robobus_driver_msgs__msg__RemoteMessage *
pix_robobus_driver_msgs__msg__RemoteMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__RemoteMessage * msg = (pix_robobus_driver_msgs__msg__RemoteMessage *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__RemoteMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pix_robobus_driver_msgs__msg__RemoteMessage));
  bool success = pix_robobus_driver_msgs__msg__RemoteMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pix_robobus_driver_msgs__msg__RemoteMessage__destroy(pix_robobus_driver_msgs__msg__RemoteMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pix_robobus_driver_msgs__msg__RemoteMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pix_robobus_driver_msgs__msg__RemoteMessage__Sequence__init(pix_robobus_driver_msgs__msg__RemoteMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__RemoteMessage * data = NULL;

  if (size) {
    data = (pix_robobus_driver_msgs__msg__RemoteMessage *)allocator.zero_allocate(size, sizeof(pix_robobus_driver_msgs__msg__RemoteMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pix_robobus_driver_msgs__msg__RemoteMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pix_robobus_driver_msgs__msg__RemoteMessage__fini(&data[i - 1]);
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
pix_robobus_driver_msgs__msg__RemoteMessage__Sequence__fini(pix_robobus_driver_msgs__msg__RemoteMessage__Sequence * array)
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
      pix_robobus_driver_msgs__msg__RemoteMessage__fini(&array->data[i]);
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

pix_robobus_driver_msgs__msg__RemoteMessage__Sequence *
pix_robobus_driver_msgs__msg__RemoteMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__RemoteMessage__Sequence * array = (pix_robobus_driver_msgs__msg__RemoteMessage__Sequence *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__RemoteMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pix_robobus_driver_msgs__msg__RemoteMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pix_robobus_driver_msgs__msg__RemoteMessage__Sequence__destroy(pix_robobus_driver_msgs__msg__RemoteMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pix_robobus_driver_msgs__msg__RemoteMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pix_robobus_driver_msgs__msg__RemoteMessage__Sequence__are_equal(const pix_robobus_driver_msgs__msg__RemoteMessage__Sequence * lhs, const pix_robobus_driver_msgs__msg__RemoteMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__RemoteMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__RemoteMessage__Sequence__copy(
  const pix_robobus_driver_msgs__msg__RemoteMessage__Sequence * input,
  pix_robobus_driver_msgs__msg__RemoteMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pix_robobus_driver_msgs__msg__RemoteMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pix_robobus_driver_msgs__msg__RemoteMessage * data =
      (pix_robobus_driver_msgs__msg__RemoteMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pix_robobus_driver_msgs__msg__RemoteMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pix_robobus_driver_msgs__msg__RemoteMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__RemoteMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
