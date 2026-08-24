// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pix_robobus_driver_msgs:msg/VaVehicleStaFb.idl
// generated code does not contain a copyright notice
#include "pix_robobus_driver_msgs/msg/detail/va_vehicle_sta_fb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
pix_robobus_driver_msgs__msg__VaVehicleStaFb__init(pix_robobus_driver_msgs__msg__VaVehicleStaFb * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pix_robobus_driver_msgs__msg__VaVehicleStaFb__fini(msg);
    return false;
  }
  // vcu_vehicle_pos_lamp_fb
  // vcu_vehicle_head_lamp_fb
  // vcu_vehicle_left_lamp_fb
  // vcu_vehicle_right_lamp_fb
  // vcu_vehicle_high_beam_fb
  // vcu_vehicle_fog_lamp_fb
  // vcu_vehicle_hazard_war_lamp_fb
  // vcu_vehicle_body_lamp_fb
  // vcu_vehicle_read_lamp_fb
  // acu_vehicle_window_fb
  // vcu_vehicle_door_sta_fb
  // vcu_vehicle_wipers_sta_fb
  // vcu_vehicle_safety_belt1
  // vcu_vehicle_safety_belt2
  // vcu_vehicle_safety_belt3
  // vcu_vehicle_safety_belt4
  // vcu_vehicle_safety_belt5
  // vcu_vehicle_safety_belt6
  // vcu_vehicle_reserve_warning
  // vcu_vehicle_display_speed
  return true;
}

void
pix_robobus_driver_msgs__msg__VaVehicleStaFb__fini(pix_robobus_driver_msgs__msg__VaVehicleStaFb * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // vcu_vehicle_pos_lamp_fb
  // vcu_vehicle_head_lamp_fb
  // vcu_vehicle_left_lamp_fb
  // vcu_vehicle_right_lamp_fb
  // vcu_vehicle_high_beam_fb
  // vcu_vehicle_fog_lamp_fb
  // vcu_vehicle_hazard_war_lamp_fb
  // vcu_vehicle_body_lamp_fb
  // vcu_vehicle_read_lamp_fb
  // acu_vehicle_window_fb
  // vcu_vehicle_door_sta_fb
  // vcu_vehicle_wipers_sta_fb
  // vcu_vehicle_safety_belt1
  // vcu_vehicle_safety_belt2
  // vcu_vehicle_safety_belt3
  // vcu_vehicle_safety_belt4
  // vcu_vehicle_safety_belt5
  // vcu_vehicle_safety_belt6
  // vcu_vehicle_reserve_warning
  // vcu_vehicle_display_speed
}

bool
pix_robobus_driver_msgs__msg__VaVehicleStaFb__are_equal(const pix_robobus_driver_msgs__msg__VaVehicleStaFb * lhs, const pix_robobus_driver_msgs__msg__VaVehicleStaFb * rhs)
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
  // vcu_vehicle_pos_lamp_fb
  if (lhs->vcu_vehicle_pos_lamp_fb != rhs->vcu_vehicle_pos_lamp_fb) {
    return false;
  }
  // vcu_vehicle_head_lamp_fb
  if (lhs->vcu_vehicle_head_lamp_fb != rhs->vcu_vehicle_head_lamp_fb) {
    return false;
  }
  // vcu_vehicle_left_lamp_fb
  if (lhs->vcu_vehicle_left_lamp_fb != rhs->vcu_vehicle_left_lamp_fb) {
    return false;
  }
  // vcu_vehicle_right_lamp_fb
  if (lhs->vcu_vehicle_right_lamp_fb != rhs->vcu_vehicle_right_lamp_fb) {
    return false;
  }
  // vcu_vehicle_high_beam_fb
  if (lhs->vcu_vehicle_high_beam_fb != rhs->vcu_vehicle_high_beam_fb) {
    return false;
  }
  // vcu_vehicle_fog_lamp_fb
  if (lhs->vcu_vehicle_fog_lamp_fb != rhs->vcu_vehicle_fog_lamp_fb) {
    return false;
  }
  // vcu_vehicle_hazard_war_lamp_fb
  if (lhs->vcu_vehicle_hazard_war_lamp_fb != rhs->vcu_vehicle_hazard_war_lamp_fb) {
    return false;
  }
  // vcu_vehicle_body_lamp_fb
  if (lhs->vcu_vehicle_body_lamp_fb != rhs->vcu_vehicle_body_lamp_fb) {
    return false;
  }
  // vcu_vehicle_read_lamp_fb
  if (lhs->vcu_vehicle_read_lamp_fb != rhs->vcu_vehicle_read_lamp_fb) {
    return false;
  }
  // acu_vehicle_window_fb
  if (lhs->acu_vehicle_window_fb != rhs->acu_vehicle_window_fb) {
    return false;
  }
  // vcu_vehicle_door_sta_fb
  if (lhs->vcu_vehicle_door_sta_fb != rhs->vcu_vehicle_door_sta_fb) {
    return false;
  }
  // vcu_vehicle_wipers_sta_fb
  if (lhs->vcu_vehicle_wipers_sta_fb != rhs->vcu_vehicle_wipers_sta_fb) {
    return false;
  }
  // vcu_vehicle_safety_belt1
  if (lhs->vcu_vehicle_safety_belt1 != rhs->vcu_vehicle_safety_belt1) {
    return false;
  }
  // vcu_vehicle_safety_belt2
  if (lhs->vcu_vehicle_safety_belt2 != rhs->vcu_vehicle_safety_belt2) {
    return false;
  }
  // vcu_vehicle_safety_belt3
  if (lhs->vcu_vehicle_safety_belt3 != rhs->vcu_vehicle_safety_belt3) {
    return false;
  }
  // vcu_vehicle_safety_belt4
  if (lhs->vcu_vehicle_safety_belt4 != rhs->vcu_vehicle_safety_belt4) {
    return false;
  }
  // vcu_vehicle_safety_belt5
  if (lhs->vcu_vehicle_safety_belt5 != rhs->vcu_vehicle_safety_belt5) {
    return false;
  }
  // vcu_vehicle_safety_belt6
  if (lhs->vcu_vehicle_safety_belt6 != rhs->vcu_vehicle_safety_belt6) {
    return false;
  }
  // vcu_vehicle_reserve_warning
  if (lhs->vcu_vehicle_reserve_warning != rhs->vcu_vehicle_reserve_warning) {
    return false;
  }
  // vcu_vehicle_display_speed
  if (lhs->vcu_vehicle_display_speed != rhs->vcu_vehicle_display_speed) {
    return false;
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__VaVehicleStaFb__copy(
  const pix_robobus_driver_msgs__msg__VaVehicleStaFb * input,
  pix_robobus_driver_msgs__msg__VaVehicleStaFb * output)
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
  // vcu_vehicle_pos_lamp_fb
  output->vcu_vehicle_pos_lamp_fb = input->vcu_vehicle_pos_lamp_fb;
  // vcu_vehicle_head_lamp_fb
  output->vcu_vehicle_head_lamp_fb = input->vcu_vehicle_head_lamp_fb;
  // vcu_vehicle_left_lamp_fb
  output->vcu_vehicle_left_lamp_fb = input->vcu_vehicle_left_lamp_fb;
  // vcu_vehicle_right_lamp_fb
  output->vcu_vehicle_right_lamp_fb = input->vcu_vehicle_right_lamp_fb;
  // vcu_vehicle_high_beam_fb
  output->vcu_vehicle_high_beam_fb = input->vcu_vehicle_high_beam_fb;
  // vcu_vehicle_fog_lamp_fb
  output->vcu_vehicle_fog_lamp_fb = input->vcu_vehicle_fog_lamp_fb;
  // vcu_vehicle_hazard_war_lamp_fb
  output->vcu_vehicle_hazard_war_lamp_fb = input->vcu_vehicle_hazard_war_lamp_fb;
  // vcu_vehicle_body_lamp_fb
  output->vcu_vehicle_body_lamp_fb = input->vcu_vehicle_body_lamp_fb;
  // vcu_vehicle_read_lamp_fb
  output->vcu_vehicle_read_lamp_fb = input->vcu_vehicle_read_lamp_fb;
  // acu_vehicle_window_fb
  output->acu_vehicle_window_fb = input->acu_vehicle_window_fb;
  // vcu_vehicle_door_sta_fb
  output->vcu_vehicle_door_sta_fb = input->vcu_vehicle_door_sta_fb;
  // vcu_vehicle_wipers_sta_fb
  output->vcu_vehicle_wipers_sta_fb = input->vcu_vehicle_wipers_sta_fb;
  // vcu_vehicle_safety_belt1
  output->vcu_vehicle_safety_belt1 = input->vcu_vehicle_safety_belt1;
  // vcu_vehicle_safety_belt2
  output->vcu_vehicle_safety_belt2 = input->vcu_vehicle_safety_belt2;
  // vcu_vehicle_safety_belt3
  output->vcu_vehicle_safety_belt3 = input->vcu_vehicle_safety_belt3;
  // vcu_vehicle_safety_belt4
  output->vcu_vehicle_safety_belt4 = input->vcu_vehicle_safety_belt4;
  // vcu_vehicle_safety_belt5
  output->vcu_vehicle_safety_belt5 = input->vcu_vehicle_safety_belt5;
  // vcu_vehicle_safety_belt6
  output->vcu_vehicle_safety_belt6 = input->vcu_vehicle_safety_belt6;
  // vcu_vehicle_reserve_warning
  output->vcu_vehicle_reserve_warning = input->vcu_vehicle_reserve_warning;
  // vcu_vehicle_display_speed
  output->vcu_vehicle_display_speed = input->vcu_vehicle_display_speed;
  return true;
}

pix_robobus_driver_msgs__msg__VaVehicleStaFb *
pix_robobus_driver_msgs__msg__VaVehicleStaFb__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__VaVehicleStaFb * msg = (pix_robobus_driver_msgs__msg__VaVehicleStaFb *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__VaVehicleStaFb), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pix_robobus_driver_msgs__msg__VaVehicleStaFb));
  bool success = pix_robobus_driver_msgs__msg__VaVehicleStaFb__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pix_robobus_driver_msgs__msg__VaVehicleStaFb__destroy(pix_robobus_driver_msgs__msg__VaVehicleStaFb * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pix_robobus_driver_msgs__msg__VaVehicleStaFb__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence__init(pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__VaVehicleStaFb * data = NULL;

  if (size) {
    data = (pix_robobus_driver_msgs__msg__VaVehicleStaFb *)allocator.zero_allocate(size, sizeof(pix_robobus_driver_msgs__msg__VaVehicleStaFb), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pix_robobus_driver_msgs__msg__VaVehicleStaFb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pix_robobus_driver_msgs__msg__VaVehicleStaFb__fini(&data[i - 1]);
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
pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence__fini(pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence * array)
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
      pix_robobus_driver_msgs__msg__VaVehicleStaFb__fini(&array->data[i]);
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

pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence *
pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence * array = (pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence__destroy(pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence__are_equal(const pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence * lhs, const pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__VaVehicleStaFb__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence__copy(
  const pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence * input,
  pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pix_robobus_driver_msgs__msg__VaVehicleStaFb);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pix_robobus_driver_msgs__msg__VaVehicleStaFb * data =
      (pix_robobus_driver_msgs__msg__VaVehicleStaFb *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pix_robobus_driver_msgs__msg__VaVehicleStaFb__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pix_robobus_driver_msgs__msg__VaVehicleStaFb__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__VaVehicleStaFb__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
