// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pix_robobus_driver_msgs:msg/BcmMessage4.idl
// generated code does not contain a copyright notice
#include "pix_robobus_driver_msgs/msg/detail/bcm_message4__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
pix_robobus_driver_msgs__msg__BcmMessage4__init(pix_robobus_driver_msgs__msg__BcmMessage4 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pix_robobus_driver_msgs__msg__BcmMessage4__fini(msg);
    return false;
  }
  // ltemp
  // ntemp
  // safe_belt_sta1
  // safe_belt_sta2
  // safe_belt_sta3
  // safe_belt_sta4
  // safe_belt_sta5
  // safe_belt_sta6
  // seat_sta1
  // seat_sta2
  // seat_sta3
  // seat_sta4
  // seat_sta5
  // seat_sta6
  return true;
}

void
pix_robobus_driver_msgs__msg__BcmMessage4__fini(pix_robobus_driver_msgs__msg__BcmMessage4 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ltemp
  // ntemp
  // safe_belt_sta1
  // safe_belt_sta2
  // safe_belt_sta3
  // safe_belt_sta4
  // safe_belt_sta5
  // safe_belt_sta6
  // seat_sta1
  // seat_sta2
  // seat_sta3
  // seat_sta4
  // seat_sta5
  // seat_sta6
}

bool
pix_robobus_driver_msgs__msg__BcmMessage4__are_equal(const pix_robobus_driver_msgs__msg__BcmMessage4 * lhs, const pix_robobus_driver_msgs__msg__BcmMessage4 * rhs)
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
  // ltemp
  if (lhs->ltemp != rhs->ltemp) {
    return false;
  }
  // ntemp
  if (lhs->ntemp != rhs->ntemp) {
    return false;
  }
  // safe_belt_sta1
  if (lhs->safe_belt_sta1 != rhs->safe_belt_sta1) {
    return false;
  }
  // safe_belt_sta2
  if (lhs->safe_belt_sta2 != rhs->safe_belt_sta2) {
    return false;
  }
  // safe_belt_sta3
  if (lhs->safe_belt_sta3 != rhs->safe_belt_sta3) {
    return false;
  }
  // safe_belt_sta4
  if (lhs->safe_belt_sta4 != rhs->safe_belt_sta4) {
    return false;
  }
  // safe_belt_sta5
  if (lhs->safe_belt_sta5 != rhs->safe_belt_sta5) {
    return false;
  }
  // safe_belt_sta6
  if (lhs->safe_belt_sta6 != rhs->safe_belt_sta6) {
    return false;
  }
  // seat_sta1
  if (lhs->seat_sta1 != rhs->seat_sta1) {
    return false;
  }
  // seat_sta2
  if (lhs->seat_sta2 != rhs->seat_sta2) {
    return false;
  }
  // seat_sta3
  if (lhs->seat_sta3 != rhs->seat_sta3) {
    return false;
  }
  // seat_sta4
  if (lhs->seat_sta4 != rhs->seat_sta4) {
    return false;
  }
  // seat_sta5
  if (lhs->seat_sta5 != rhs->seat_sta5) {
    return false;
  }
  // seat_sta6
  if (lhs->seat_sta6 != rhs->seat_sta6) {
    return false;
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__BcmMessage4__copy(
  const pix_robobus_driver_msgs__msg__BcmMessage4 * input,
  pix_robobus_driver_msgs__msg__BcmMessage4 * output)
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
  // ltemp
  output->ltemp = input->ltemp;
  // ntemp
  output->ntemp = input->ntemp;
  // safe_belt_sta1
  output->safe_belt_sta1 = input->safe_belt_sta1;
  // safe_belt_sta2
  output->safe_belt_sta2 = input->safe_belt_sta2;
  // safe_belt_sta3
  output->safe_belt_sta3 = input->safe_belt_sta3;
  // safe_belt_sta4
  output->safe_belt_sta4 = input->safe_belt_sta4;
  // safe_belt_sta5
  output->safe_belt_sta5 = input->safe_belt_sta5;
  // safe_belt_sta6
  output->safe_belt_sta6 = input->safe_belt_sta6;
  // seat_sta1
  output->seat_sta1 = input->seat_sta1;
  // seat_sta2
  output->seat_sta2 = input->seat_sta2;
  // seat_sta3
  output->seat_sta3 = input->seat_sta3;
  // seat_sta4
  output->seat_sta4 = input->seat_sta4;
  // seat_sta5
  output->seat_sta5 = input->seat_sta5;
  // seat_sta6
  output->seat_sta6 = input->seat_sta6;
  return true;
}

pix_robobus_driver_msgs__msg__BcmMessage4 *
pix_robobus_driver_msgs__msg__BcmMessage4__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__BcmMessage4 * msg = (pix_robobus_driver_msgs__msg__BcmMessage4 *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__BcmMessage4), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pix_robobus_driver_msgs__msg__BcmMessage4));
  bool success = pix_robobus_driver_msgs__msg__BcmMessage4__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pix_robobus_driver_msgs__msg__BcmMessage4__destroy(pix_robobus_driver_msgs__msg__BcmMessage4 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pix_robobus_driver_msgs__msg__BcmMessage4__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pix_robobus_driver_msgs__msg__BcmMessage4__Sequence__init(pix_robobus_driver_msgs__msg__BcmMessage4__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__BcmMessage4 * data = NULL;

  if (size) {
    data = (pix_robobus_driver_msgs__msg__BcmMessage4 *)allocator.zero_allocate(size, sizeof(pix_robobus_driver_msgs__msg__BcmMessage4), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pix_robobus_driver_msgs__msg__BcmMessage4__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pix_robobus_driver_msgs__msg__BcmMessage4__fini(&data[i - 1]);
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
pix_robobus_driver_msgs__msg__BcmMessage4__Sequence__fini(pix_robobus_driver_msgs__msg__BcmMessage4__Sequence * array)
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
      pix_robobus_driver_msgs__msg__BcmMessage4__fini(&array->data[i]);
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

pix_robobus_driver_msgs__msg__BcmMessage4__Sequence *
pix_robobus_driver_msgs__msg__BcmMessage4__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__BcmMessage4__Sequence * array = (pix_robobus_driver_msgs__msg__BcmMessage4__Sequence *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__BcmMessage4__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pix_robobus_driver_msgs__msg__BcmMessage4__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pix_robobus_driver_msgs__msg__BcmMessage4__Sequence__destroy(pix_robobus_driver_msgs__msg__BcmMessage4__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pix_robobus_driver_msgs__msg__BcmMessage4__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pix_robobus_driver_msgs__msg__BcmMessage4__Sequence__are_equal(const pix_robobus_driver_msgs__msg__BcmMessage4__Sequence * lhs, const pix_robobus_driver_msgs__msg__BcmMessage4__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__BcmMessage4__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__BcmMessage4__Sequence__copy(
  const pix_robobus_driver_msgs__msg__BcmMessage4__Sequence * input,
  pix_robobus_driver_msgs__msg__BcmMessage4__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pix_robobus_driver_msgs__msg__BcmMessage4);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pix_robobus_driver_msgs__msg__BcmMessage4 * data =
      (pix_robobus_driver_msgs__msg__BcmMessage4 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pix_robobus_driver_msgs__msg__BcmMessage4__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pix_robobus_driver_msgs__msg__BcmMessage4__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__BcmMessage4__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
