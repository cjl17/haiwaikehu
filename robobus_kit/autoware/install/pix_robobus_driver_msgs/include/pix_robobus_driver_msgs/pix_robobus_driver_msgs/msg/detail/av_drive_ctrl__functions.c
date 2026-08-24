// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pix_robobus_driver_msgs:msg/AvDriveCtrl.idl
// generated code does not contain a copyright notice
#include "pix_robobus_driver_msgs/msg/detail/av_drive_ctrl__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
pix_robobus_driver_msgs__msg__AvDriveCtrl__init(pix_robobus_driver_msgs__msg__AvDriveCtrl * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pix_robobus_driver_msgs__msg__AvDriveCtrl__fini(msg);
    return false;
  }
  // acu_chassis_driver_en_ctrl
  // acu_chassis_driver_mode_ctrl
  // acu_chassis_gear_ctrl
  // acu_chassis4_wd_mode_ctrl
  // acu_chassis_speed_ctrl
  // acu_chassis_throttle_pdl_target
  // acu_drive_life_sig
  // acu_check_sum130
  return true;
}

void
pix_robobus_driver_msgs__msg__AvDriveCtrl__fini(pix_robobus_driver_msgs__msg__AvDriveCtrl * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // acu_chassis_driver_en_ctrl
  // acu_chassis_driver_mode_ctrl
  // acu_chassis_gear_ctrl
  // acu_chassis4_wd_mode_ctrl
  // acu_chassis_speed_ctrl
  // acu_chassis_throttle_pdl_target
  // acu_drive_life_sig
  // acu_check_sum130
}

bool
pix_robobus_driver_msgs__msg__AvDriveCtrl__are_equal(const pix_robobus_driver_msgs__msg__AvDriveCtrl * lhs, const pix_robobus_driver_msgs__msg__AvDriveCtrl * rhs)
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
  // acu_chassis_driver_en_ctrl
  if (lhs->acu_chassis_driver_en_ctrl != rhs->acu_chassis_driver_en_ctrl) {
    return false;
  }
  // acu_chassis_driver_mode_ctrl
  if (lhs->acu_chassis_driver_mode_ctrl != rhs->acu_chassis_driver_mode_ctrl) {
    return false;
  }
  // acu_chassis_gear_ctrl
  if (lhs->acu_chassis_gear_ctrl != rhs->acu_chassis_gear_ctrl) {
    return false;
  }
  // acu_chassis4_wd_mode_ctrl
  if (lhs->acu_chassis4_wd_mode_ctrl != rhs->acu_chassis4_wd_mode_ctrl) {
    return false;
  }
  // acu_chassis_speed_ctrl
  if (lhs->acu_chassis_speed_ctrl != rhs->acu_chassis_speed_ctrl) {
    return false;
  }
  // acu_chassis_throttle_pdl_target
  if (lhs->acu_chassis_throttle_pdl_target != rhs->acu_chassis_throttle_pdl_target) {
    return false;
  }
  // acu_drive_life_sig
  if (lhs->acu_drive_life_sig != rhs->acu_drive_life_sig) {
    return false;
  }
  // acu_check_sum130
  if (lhs->acu_check_sum130 != rhs->acu_check_sum130) {
    return false;
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__AvDriveCtrl__copy(
  const pix_robobus_driver_msgs__msg__AvDriveCtrl * input,
  pix_robobus_driver_msgs__msg__AvDriveCtrl * output)
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
  // acu_chassis_driver_en_ctrl
  output->acu_chassis_driver_en_ctrl = input->acu_chassis_driver_en_ctrl;
  // acu_chassis_driver_mode_ctrl
  output->acu_chassis_driver_mode_ctrl = input->acu_chassis_driver_mode_ctrl;
  // acu_chassis_gear_ctrl
  output->acu_chassis_gear_ctrl = input->acu_chassis_gear_ctrl;
  // acu_chassis4_wd_mode_ctrl
  output->acu_chassis4_wd_mode_ctrl = input->acu_chassis4_wd_mode_ctrl;
  // acu_chassis_speed_ctrl
  output->acu_chassis_speed_ctrl = input->acu_chassis_speed_ctrl;
  // acu_chassis_throttle_pdl_target
  output->acu_chassis_throttle_pdl_target = input->acu_chassis_throttle_pdl_target;
  // acu_drive_life_sig
  output->acu_drive_life_sig = input->acu_drive_life_sig;
  // acu_check_sum130
  output->acu_check_sum130 = input->acu_check_sum130;
  return true;
}

pix_robobus_driver_msgs__msg__AvDriveCtrl *
pix_robobus_driver_msgs__msg__AvDriveCtrl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__AvDriveCtrl * msg = (pix_robobus_driver_msgs__msg__AvDriveCtrl *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__AvDriveCtrl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pix_robobus_driver_msgs__msg__AvDriveCtrl));
  bool success = pix_robobus_driver_msgs__msg__AvDriveCtrl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pix_robobus_driver_msgs__msg__AvDriveCtrl__destroy(pix_robobus_driver_msgs__msg__AvDriveCtrl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pix_robobus_driver_msgs__msg__AvDriveCtrl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence__init(pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__AvDriveCtrl * data = NULL;

  if (size) {
    data = (pix_robobus_driver_msgs__msg__AvDriveCtrl *)allocator.zero_allocate(size, sizeof(pix_robobus_driver_msgs__msg__AvDriveCtrl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pix_robobus_driver_msgs__msg__AvDriveCtrl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pix_robobus_driver_msgs__msg__AvDriveCtrl__fini(&data[i - 1]);
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
pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence__fini(pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence * array)
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
      pix_robobus_driver_msgs__msg__AvDriveCtrl__fini(&array->data[i]);
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

pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence *
pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence * array = (pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence__destroy(pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence__are_equal(const pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence * lhs, const pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__AvDriveCtrl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence__copy(
  const pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence * input,
  pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pix_robobus_driver_msgs__msg__AvDriveCtrl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pix_robobus_driver_msgs__msg__AvDriveCtrl * data =
      (pix_robobus_driver_msgs__msg__AvDriveCtrl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pix_robobus_driver_msgs__msg__AvDriveCtrl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pix_robobus_driver_msgs__msg__AvDriveCtrl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__AvDriveCtrl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
