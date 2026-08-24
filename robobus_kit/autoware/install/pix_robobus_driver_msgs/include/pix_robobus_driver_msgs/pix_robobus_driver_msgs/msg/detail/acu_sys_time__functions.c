// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pix_robobus_driver_msgs:msg/AcuSysTime.idl
// generated code does not contain a copyright notice
#include "pix_robobus_driver_msgs/msg/detail/acu_sys_time__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
pix_robobus_driver_msgs__msg__AcuSysTime__init(pix_robobus_driver_msgs__msg__AcuSysTime * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pix_robobus_driver_msgs__msg__AcuSysTime__fini(msg);
    return false;
  }
  // sys_time_year
  // sys_time_month
  // sys_time_day
  // sys_time_hour
  // sys_time_minute
  // sys_time_second
  return true;
}

void
pix_robobus_driver_msgs__msg__AcuSysTime__fini(pix_robobus_driver_msgs__msg__AcuSysTime * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // sys_time_year
  // sys_time_month
  // sys_time_day
  // sys_time_hour
  // sys_time_minute
  // sys_time_second
}

bool
pix_robobus_driver_msgs__msg__AcuSysTime__are_equal(const pix_robobus_driver_msgs__msg__AcuSysTime * lhs, const pix_robobus_driver_msgs__msg__AcuSysTime * rhs)
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
  // sys_time_year
  if (lhs->sys_time_year != rhs->sys_time_year) {
    return false;
  }
  // sys_time_month
  if (lhs->sys_time_month != rhs->sys_time_month) {
    return false;
  }
  // sys_time_day
  if (lhs->sys_time_day != rhs->sys_time_day) {
    return false;
  }
  // sys_time_hour
  if (lhs->sys_time_hour != rhs->sys_time_hour) {
    return false;
  }
  // sys_time_minute
  if (lhs->sys_time_minute != rhs->sys_time_minute) {
    return false;
  }
  // sys_time_second
  if (lhs->sys_time_second != rhs->sys_time_second) {
    return false;
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__AcuSysTime__copy(
  const pix_robobus_driver_msgs__msg__AcuSysTime * input,
  pix_robobus_driver_msgs__msg__AcuSysTime * output)
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
  // sys_time_year
  output->sys_time_year = input->sys_time_year;
  // sys_time_month
  output->sys_time_month = input->sys_time_month;
  // sys_time_day
  output->sys_time_day = input->sys_time_day;
  // sys_time_hour
  output->sys_time_hour = input->sys_time_hour;
  // sys_time_minute
  output->sys_time_minute = input->sys_time_minute;
  // sys_time_second
  output->sys_time_second = input->sys_time_second;
  return true;
}

pix_robobus_driver_msgs__msg__AcuSysTime *
pix_robobus_driver_msgs__msg__AcuSysTime__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__AcuSysTime * msg = (pix_robobus_driver_msgs__msg__AcuSysTime *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__AcuSysTime), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pix_robobus_driver_msgs__msg__AcuSysTime));
  bool success = pix_robobus_driver_msgs__msg__AcuSysTime__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pix_robobus_driver_msgs__msg__AcuSysTime__destroy(pix_robobus_driver_msgs__msg__AcuSysTime * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pix_robobus_driver_msgs__msg__AcuSysTime__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pix_robobus_driver_msgs__msg__AcuSysTime__Sequence__init(pix_robobus_driver_msgs__msg__AcuSysTime__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__AcuSysTime * data = NULL;

  if (size) {
    data = (pix_robobus_driver_msgs__msg__AcuSysTime *)allocator.zero_allocate(size, sizeof(pix_robobus_driver_msgs__msg__AcuSysTime), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pix_robobus_driver_msgs__msg__AcuSysTime__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pix_robobus_driver_msgs__msg__AcuSysTime__fini(&data[i - 1]);
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
pix_robobus_driver_msgs__msg__AcuSysTime__Sequence__fini(pix_robobus_driver_msgs__msg__AcuSysTime__Sequence * array)
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
      pix_robobus_driver_msgs__msg__AcuSysTime__fini(&array->data[i]);
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

pix_robobus_driver_msgs__msg__AcuSysTime__Sequence *
pix_robobus_driver_msgs__msg__AcuSysTime__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__AcuSysTime__Sequence * array = (pix_robobus_driver_msgs__msg__AcuSysTime__Sequence *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__AcuSysTime__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pix_robobus_driver_msgs__msg__AcuSysTime__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pix_robobus_driver_msgs__msg__AcuSysTime__Sequence__destroy(pix_robobus_driver_msgs__msg__AcuSysTime__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pix_robobus_driver_msgs__msg__AcuSysTime__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pix_robobus_driver_msgs__msg__AcuSysTime__Sequence__are_equal(const pix_robobus_driver_msgs__msg__AcuSysTime__Sequence * lhs, const pix_robobus_driver_msgs__msg__AcuSysTime__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__AcuSysTime__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__AcuSysTime__Sequence__copy(
  const pix_robobus_driver_msgs__msg__AcuSysTime__Sequence * input,
  pix_robobus_driver_msgs__msg__AcuSysTime__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pix_robobus_driver_msgs__msg__AcuSysTime);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pix_robobus_driver_msgs__msg__AcuSysTime * data =
      (pix_robobus_driver_msgs__msg__AcuSysTime *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pix_robobus_driver_msgs__msg__AcuSysTime__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pix_robobus_driver_msgs__msg__AcuSysTime__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__AcuSysTime__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
