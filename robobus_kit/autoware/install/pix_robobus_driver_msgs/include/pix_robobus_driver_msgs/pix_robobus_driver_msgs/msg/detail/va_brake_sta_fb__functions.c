// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pix_robobus_driver_msgs:msg/VaBrakeStaFb.idl
// generated code does not contain a copyright notice
#include "pix_robobus_driver_msgs/msg/detail/va_brake_sta_fb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
pix_robobus_driver_msgs__msg__VaBrakeStaFb__init(pix_robobus_driver_msgs__msg__VaBrakeStaFb * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pix_robobus_driver_msgs__msg__VaBrakeStaFb__fini(msg);
    return false;
  }
  // vcu_chassis_brake_en_sta
  // vcu_vehicle_brake_lamp_fb
  // vcu_chassis_epb_fb
  // vcu_chassis_brake_communication_lost
  // vcu_chassis_brake_padl_fb
  // vcu_brake_pedal_req_fb
  // vcu_aeb_en_sta_fb
  // vcu_aeb_trigger_sta_fb
  // vcu_chassis_brake_pressure_fb
  // vcu_brake_life
  // vcu_brake_check_sta
  return true;
}

void
pix_robobus_driver_msgs__msg__VaBrakeStaFb__fini(pix_robobus_driver_msgs__msg__VaBrakeStaFb * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // vcu_chassis_brake_en_sta
  // vcu_vehicle_brake_lamp_fb
  // vcu_chassis_epb_fb
  // vcu_chassis_brake_communication_lost
  // vcu_chassis_brake_padl_fb
  // vcu_brake_pedal_req_fb
  // vcu_aeb_en_sta_fb
  // vcu_aeb_trigger_sta_fb
  // vcu_chassis_brake_pressure_fb
  // vcu_brake_life
  // vcu_brake_check_sta
}

bool
pix_robobus_driver_msgs__msg__VaBrakeStaFb__are_equal(const pix_robobus_driver_msgs__msg__VaBrakeStaFb * lhs, const pix_robobus_driver_msgs__msg__VaBrakeStaFb * rhs)
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
  // vcu_chassis_brake_en_sta
  if (lhs->vcu_chassis_brake_en_sta != rhs->vcu_chassis_brake_en_sta) {
    return false;
  }
  // vcu_vehicle_brake_lamp_fb
  if (lhs->vcu_vehicle_brake_lamp_fb != rhs->vcu_vehicle_brake_lamp_fb) {
    return false;
  }
  // vcu_chassis_epb_fb
  if (lhs->vcu_chassis_epb_fb != rhs->vcu_chassis_epb_fb) {
    return false;
  }
  // vcu_chassis_brake_communication_lost
  if (lhs->vcu_chassis_brake_communication_lost != rhs->vcu_chassis_brake_communication_lost) {
    return false;
  }
  // vcu_chassis_brake_padl_fb
  if (lhs->vcu_chassis_brake_padl_fb != rhs->vcu_chassis_brake_padl_fb) {
    return false;
  }
  // vcu_brake_pedal_req_fb
  if (lhs->vcu_brake_pedal_req_fb != rhs->vcu_brake_pedal_req_fb) {
    return false;
  }
  // vcu_aeb_en_sta_fb
  if (lhs->vcu_aeb_en_sta_fb != rhs->vcu_aeb_en_sta_fb) {
    return false;
  }
  // vcu_aeb_trigger_sta_fb
  if (lhs->vcu_aeb_trigger_sta_fb != rhs->vcu_aeb_trigger_sta_fb) {
    return false;
  }
  // vcu_chassis_brake_pressure_fb
  if (lhs->vcu_chassis_brake_pressure_fb != rhs->vcu_chassis_brake_pressure_fb) {
    return false;
  }
  // vcu_brake_life
  if (lhs->vcu_brake_life != rhs->vcu_brake_life) {
    return false;
  }
  // vcu_brake_check_sta
  if (lhs->vcu_brake_check_sta != rhs->vcu_brake_check_sta) {
    return false;
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__VaBrakeStaFb__copy(
  const pix_robobus_driver_msgs__msg__VaBrakeStaFb * input,
  pix_robobus_driver_msgs__msg__VaBrakeStaFb * output)
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
  // vcu_chassis_brake_en_sta
  output->vcu_chassis_brake_en_sta = input->vcu_chassis_brake_en_sta;
  // vcu_vehicle_brake_lamp_fb
  output->vcu_vehicle_brake_lamp_fb = input->vcu_vehicle_brake_lamp_fb;
  // vcu_chassis_epb_fb
  output->vcu_chassis_epb_fb = input->vcu_chassis_epb_fb;
  // vcu_chassis_brake_communication_lost
  output->vcu_chassis_brake_communication_lost = input->vcu_chassis_brake_communication_lost;
  // vcu_chassis_brake_padl_fb
  output->vcu_chassis_brake_padl_fb = input->vcu_chassis_brake_padl_fb;
  // vcu_brake_pedal_req_fb
  output->vcu_brake_pedal_req_fb = input->vcu_brake_pedal_req_fb;
  // vcu_aeb_en_sta_fb
  output->vcu_aeb_en_sta_fb = input->vcu_aeb_en_sta_fb;
  // vcu_aeb_trigger_sta_fb
  output->vcu_aeb_trigger_sta_fb = input->vcu_aeb_trigger_sta_fb;
  // vcu_chassis_brake_pressure_fb
  output->vcu_chassis_brake_pressure_fb = input->vcu_chassis_brake_pressure_fb;
  // vcu_brake_life
  output->vcu_brake_life = input->vcu_brake_life;
  // vcu_brake_check_sta
  output->vcu_brake_check_sta = input->vcu_brake_check_sta;
  return true;
}

pix_robobus_driver_msgs__msg__VaBrakeStaFb *
pix_robobus_driver_msgs__msg__VaBrakeStaFb__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__VaBrakeStaFb * msg = (pix_robobus_driver_msgs__msg__VaBrakeStaFb *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__VaBrakeStaFb), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pix_robobus_driver_msgs__msg__VaBrakeStaFb));
  bool success = pix_robobus_driver_msgs__msg__VaBrakeStaFb__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pix_robobus_driver_msgs__msg__VaBrakeStaFb__destroy(pix_robobus_driver_msgs__msg__VaBrakeStaFb * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pix_robobus_driver_msgs__msg__VaBrakeStaFb__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence__init(pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__VaBrakeStaFb * data = NULL;

  if (size) {
    data = (pix_robobus_driver_msgs__msg__VaBrakeStaFb *)allocator.zero_allocate(size, sizeof(pix_robobus_driver_msgs__msg__VaBrakeStaFb), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pix_robobus_driver_msgs__msg__VaBrakeStaFb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pix_robobus_driver_msgs__msg__VaBrakeStaFb__fini(&data[i - 1]);
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
pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence__fini(pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence * array)
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
      pix_robobus_driver_msgs__msg__VaBrakeStaFb__fini(&array->data[i]);
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

pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence *
pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence * array = (pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence__destroy(pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence__are_equal(const pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence * lhs, const pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__VaBrakeStaFb__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence__copy(
  const pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence * input,
  pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pix_robobus_driver_msgs__msg__VaBrakeStaFb);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pix_robobus_driver_msgs__msg__VaBrakeStaFb * data =
      (pix_robobus_driver_msgs__msg__VaBrakeStaFb *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pix_robobus_driver_msgs__msg__VaBrakeStaFb__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pix_robobus_driver_msgs__msg__VaBrakeStaFb__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__VaBrakeStaFb__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
