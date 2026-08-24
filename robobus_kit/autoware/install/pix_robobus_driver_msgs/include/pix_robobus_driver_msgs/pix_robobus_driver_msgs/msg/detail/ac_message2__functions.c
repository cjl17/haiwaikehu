// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pix_robobus_driver_msgs:msg/AcMessage2.idl
// generated code does not contain a copyright notice
#include "pix_robobus_driver_msgs/msg/detail/ac_message2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
pix_robobus_driver_msgs__msg__AcMessage2__init(pix_robobus_driver_msgs__msg__AcMessage2 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pix_robobus_driver_msgs__msg__AcMessage2__fini(msg);
    return false;
  }
  // fan_temp
  // ac_out_temp
  // ac_in_temp
  // ac_hardware
  // ac_software
  return true;
}

void
pix_robobus_driver_msgs__msg__AcMessage2__fini(pix_robobus_driver_msgs__msg__AcMessage2 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // fan_temp
  // ac_out_temp
  // ac_in_temp
  // ac_hardware
  // ac_software
}

bool
pix_robobus_driver_msgs__msg__AcMessage2__are_equal(const pix_robobus_driver_msgs__msg__AcMessage2 * lhs, const pix_robobus_driver_msgs__msg__AcMessage2 * rhs)
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
  // fan_temp
  if (lhs->fan_temp != rhs->fan_temp) {
    return false;
  }
  // ac_out_temp
  if (lhs->ac_out_temp != rhs->ac_out_temp) {
    return false;
  }
  // ac_in_temp
  if (lhs->ac_in_temp != rhs->ac_in_temp) {
    return false;
  }
  // ac_hardware
  if (lhs->ac_hardware != rhs->ac_hardware) {
    return false;
  }
  // ac_software
  if (lhs->ac_software != rhs->ac_software) {
    return false;
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__AcMessage2__copy(
  const pix_robobus_driver_msgs__msg__AcMessage2 * input,
  pix_robobus_driver_msgs__msg__AcMessage2 * output)
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
  // fan_temp
  output->fan_temp = input->fan_temp;
  // ac_out_temp
  output->ac_out_temp = input->ac_out_temp;
  // ac_in_temp
  output->ac_in_temp = input->ac_in_temp;
  // ac_hardware
  output->ac_hardware = input->ac_hardware;
  // ac_software
  output->ac_software = input->ac_software;
  return true;
}

pix_robobus_driver_msgs__msg__AcMessage2 *
pix_robobus_driver_msgs__msg__AcMessage2__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__AcMessage2 * msg = (pix_robobus_driver_msgs__msg__AcMessage2 *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__AcMessage2), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pix_robobus_driver_msgs__msg__AcMessage2));
  bool success = pix_robobus_driver_msgs__msg__AcMessage2__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pix_robobus_driver_msgs__msg__AcMessage2__destroy(pix_robobus_driver_msgs__msg__AcMessage2 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pix_robobus_driver_msgs__msg__AcMessage2__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pix_robobus_driver_msgs__msg__AcMessage2__Sequence__init(pix_robobus_driver_msgs__msg__AcMessage2__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__AcMessage2 * data = NULL;

  if (size) {
    data = (pix_robobus_driver_msgs__msg__AcMessage2 *)allocator.zero_allocate(size, sizeof(pix_robobus_driver_msgs__msg__AcMessage2), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pix_robobus_driver_msgs__msg__AcMessage2__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pix_robobus_driver_msgs__msg__AcMessage2__fini(&data[i - 1]);
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
pix_robobus_driver_msgs__msg__AcMessage2__Sequence__fini(pix_robobus_driver_msgs__msg__AcMessage2__Sequence * array)
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
      pix_robobus_driver_msgs__msg__AcMessage2__fini(&array->data[i]);
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

pix_robobus_driver_msgs__msg__AcMessage2__Sequence *
pix_robobus_driver_msgs__msg__AcMessage2__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__AcMessage2__Sequence * array = (pix_robobus_driver_msgs__msg__AcMessage2__Sequence *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__AcMessage2__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pix_robobus_driver_msgs__msg__AcMessage2__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pix_robobus_driver_msgs__msg__AcMessage2__Sequence__destroy(pix_robobus_driver_msgs__msg__AcMessage2__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pix_robobus_driver_msgs__msg__AcMessage2__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pix_robobus_driver_msgs__msg__AcMessage2__Sequence__are_equal(const pix_robobus_driver_msgs__msg__AcMessage2__Sequence * lhs, const pix_robobus_driver_msgs__msg__AcMessage2__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__AcMessage2__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__AcMessage2__Sequence__copy(
  const pix_robobus_driver_msgs__msg__AcMessage2__Sequence * input,
  pix_robobus_driver_msgs__msg__AcMessage2__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pix_robobus_driver_msgs__msg__AcMessage2);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pix_robobus_driver_msgs__msg__AcMessage2 * data =
      (pix_robobus_driver_msgs__msg__AcMessage2 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pix_robobus_driver_msgs__msg__AcMessage2__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pix_robobus_driver_msgs__msg__AcMessage2__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__AcMessage2__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
