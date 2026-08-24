// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pix_robobus_driver_msgs:msg/VaDriveStaFb.idl
// generated code does not contain a copyright notice
#include "pix_robobus_driver_msgs/msg/detail/va_drive_sta_fb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
pix_robobus_driver_msgs__msg__VaDriveStaFb__init(pix_robobus_driver_msgs__msg__VaDriveStaFb * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pix_robobus_driver_msgs__msg__VaDriveStaFb__fini(msg);
    return false;
  }
  // vcu_chassis_driver_en_sta
  // vcu_chassis_diver_slopover
  // vcu_chassis_driver_mode_sta
  // vcu_chassis_gear_fb
  // vcu_chassis4_wd_mode_fb
  // vcu_chassis_speed_fb
  // vcu_chassis_throttle_pald_fb
  // vcu_chassis_throttle_pedal_req_fb
  // vcu_chassis_acceleration_fb
  // vcu_drive_life
  // vcu_drive_check_sta
  return true;
}

void
pix_robobus_driver_msgs__msg__VaDriveStaFb__fini(pix_robobus_driver_msgs__msg__VaDriveStaFb * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // vcu_chassis_driver_en_sta
  // vcu_chassis_diver_slopover
  // vcu_chassis_driver_mode_sta
  // vcu_chassis_gear_fb
  // vcu_chassis4_wd_mode_fb
  // vcu_chassis_speed_fb
  // vcu_chassis_throttle_pald_fb
  // vcu_chassis_throttle_pedal_req_fb
  // vcu_chassis_acceleration_fb
  // vcu_drive_life
  // vcu_drive_check_sta
}

bool
pix_robobus_driver_msgs__msg__VaDriveStaFb__are_equal(const pix_robobus_driver_msgs__msg__VaDriveStaFb * lhs, const pix_robobus_driver_msgs__msg__VaDriveStaFb * rhs)
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
  // vcu_chassis_driver_en_sta
  if (lhs->vcu_chassis_driver_en_sta != rhs->vcu_chassis_driver_en_sta) {
    return false;
  }
  // vcu_chassis_diver_slopover
  if (lhs->vcu_chassis_diver_slopover != rhs->vcu_chassis_diver_slopover) {
    return false;
  }
  // vcu_chassis_driver_mode_sta
  if (lhs->vcu_chassis_driver_mode_sta != rhs->vcu_chassis_driver_mode_sta) {
    return false;
  }
  // vcu_chassis_gear_fb
  if (lhs->vcu_chassis_gear_fb != rhs->vcu_chassis_gear_fb) {
    return false;
  }
  // vcu_chassis4_wd_mode_fb
  if (lhs->vcu_chassis4_wd_mode_fb != rhs->vcu_chassis4_wd_mode_fb) {
    return false;
  }
  // vcu_chassis_speed_fb
  if (lhs->vcu_chassis_speed_fb != rhs->vcu_chassis_speed_fb) {
    return false;
  }
  // vcu_chassis_throttle_pald_fb
  if (lhs->vcu_chassis_throttle_pald_fb != rhs->vcu_chassis_throttle_pald_fb) {
    return false;
  }
  // vcu_chassis_throttle_pedal_req_fb
  if (lhs->vcu_chassis_throttle_pedal_req_fb != rhs->vcu_chassis_throttle_pedal_req_fb) {
    return false;
  }
  // vcu_chassis_acceleration_fb
  if (lhs->vcu_chassis_acceleration_fb != rhs->vcu_chassis_acceleration_fb) {
    return false;
  }
  // vcu_drive_life
  if (lhs->vcu_drive_life != rhs->vcu_drive_life) {
    return false;
  }
  // vcu_drive_check_sta
  if (lhs->vcu_drive_check_sta != rhs->vcu_drive_check_sta) {
    return false;
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__VaDriveStaFb__copy(
  const pix_robobus_driver_msgs__msg__VaDriveStaFb * input,
  pix_robobus_driver_msgs__msg__VaDriveStaFb * output)
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
  // vcu_chassis_driver_en_sta
  output->vcu_chassis_driver_en_sta = input->vcu_chassis_driver_en_sta;
  // vcu_chassis_diver_slopover
  output->vcu_chassis_diver_slopover = input->vcu_chassis_diver_slopover;
  // vcu_chassis_driver_mode_sta
  output->vcu_chassis_driver_mode_sta = input->vcu_chassis_driver_mode_sta;
  // vcu_chassis_gear_fb
  output->vcu_chassis_gear_fb = input->vcu_chassis_gear_fb;
  // vcu_chassis4_wd_mode_fb
  output->vcu_chassis4_wd_mode_fb = input->vcu_chassis4_wd_mode_fb;
  // vcu_chassis_speed_fb
  output->vcu_chassis_speed_fb = input->vcu_chassis_speed_fb;
  // vcu_chassis_throttle_pald_fb
  output->vcu_chassis_throttle_pald_fb = input->vcu_chassis_throttle_pald_fb;
  // vcu_chassis_throttle_pedal_req_fb
  output->vcu_chassis_throttle_pedal_req_fb = input->vcu_chassis_throttle_pedal_req_fb;
  // vcu_chassis_acceleration_fb
  output->vcu_chassis_acceleration_fb = input->vcu_chassis_acceleration_fb;
  // vcu_drive_life
  output->vcu_drive_life = input->vcu_drive_life;
  // vcu_drive_check_sta
  output->vcu_drive_check_sta = input->vcu_drive_check_sta;
  return true;
}

pix_robobus_driver_msgs__msg__VaDriveStaFb *
pix_robobus_driver_msgs__msg__VaDriveStaFb__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__VaDriveStaFb * msg = (pix_robobus_driver_msgs__msg__VaDriveStaFb *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__VaDriveStaFb), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pix_robobus_driver_msgs__msg__VaDriveStaFb));
  bool success = pix_robobus_driver_msgs__msg__VaDriveStaFb__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pix_robobus_driver_msgs__msg__VaDriveStaFb__destroy(pix_robobus_driver_msgs__msg__VaDriveStaFb * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pix_robobus_driver_msgs__msg__VaDriveStaFb__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence__init(pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__VaDriveStaFb * data = NULL;

  if (size) {
    data = (pix_robobus_driver_msgs__msg__VaDriveStaFb *)allocator.zero_allocate(size, sizeof(pix_robobus_driver_msgs__msg__VaDriveStaFb), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pix_robobus_driver_msgs__msg__VaDriveStaFb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pix_robobus_driver_msgs__msg__VaDriveStaFb__fini(&data[i - 1]);
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
pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence__fini(pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence * array)
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
      pix_robobus_driver_msgs__msg__VaDriveStaFb__fini(&array->data[i]);
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

pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence *
pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence * array = (pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence__destroy(pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence__are_equal(const pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence * lhs, const pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__VaDriveStaFb__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence__copy(
  const pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence * input,
  pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pix_robobus_driver_msgs__msg__VaDriveStaFb);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pix_robobus_driver_msgs__msg__VaDriveStaFb * data =
      (pix_robobus_driver_msgs__msg__VaDriveStaFb *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pix_robobus_driver_msgs__msg__VaDriveStaFb__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pix_robobus_driver_msgs__msg__VaDriveStaFb__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__VaDriveStaFb__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
