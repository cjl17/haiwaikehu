// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pix_robobus_driver_msgs:msg/AvVehicleCtrl.idl
// generated code does not contain a copyright notice
#include "pix_robobus_driver_msgs/msg/detail/av_vehicle_ctrl__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
pix_robobus_driver_msgs__msg__AvVehicleCtrl__init(pix_robobus_driver_msgs__msg__AvVehicleCtrl * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pix_robobus_driver_msgs__msg__AvVehicleCtrl__fini(msg);
    return false;
  }
  // acu_vehicle_pos_lamp_ctrl
  // acu_vehicle_head_lamp_ctrl
  // acu_vehicle_left_lamp_ctrl
  // acu_vehicle_right_lamp_ctrl
  // acu_vehicle_high_beam_ctrl
  // acu_vehicle_fog_lamp_ctrl
  // acu_vehicle_body_light_ctrl
  // acu_vehicle_read_light_ctrl
  // acu_vehicle_voice
  // acu_vehicle_wipers_ctrl
  // acu_vehicle_door_ctrl
  // acu_vehicle_window_ctrl
  // acu_chassis_speed_limite_mode
  // acu_vehicle_horn_ctrl
  // acu_vehicle_spray_ctrl
  // acu_chassis_speed_limite_val
  // acu_check_sum_en
  return true;
}

void
pix_robobus_driver_msgs__msg__AvVehicleCtrl__fini(pix_robobus_driver_msgs__msg__AvVehicleCtrl * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // acu_vehicle_pos_lamp_ctrl
  // acu_vehicle_head_lamp_ctrl
  // acu_vehicle_left_lamp_ctrl
  // acu_vehicle_right_lamp_ctrl
  // acu_vehicle_high_beam_ctrl
  // acu_vehicle_fog_lamp_ctrl
  // acu_vehicle_body_light_ctrl
  // acu_vehicle_read_light_ctrl
  // acu_vehicle_voice
  // acu_vehicle_wipers_ctrl
  // acu_vehicle_door_ctrl
  // acu_vehicle_window_ctrl
  // acu_chassis_speed_limite_mode
  // acu_vehicle_horn_ctrl
  // acu_vehicle_spray_ctrl
  // acu_chassis_speed_limite_val
  // acu_check_sum_en
}

bool
pix_robobus_driver_msgs__msg__AvVehicleCtrl__are_equal(const pix_robobus_driver_msgs__msg__AvVehicleCtrl * lhs, const pix_robobus_driver_msgs__msg__AvVehicleCtrl * rhs)
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
  // acu_vehicle_pos_lamp_ctrl
  if (lhs->acu_vehicle_pos_lamp_ctrl != rhs->acu_vehicle_pos_lamp_ctrl) {
    return false;
  }
  // acu_vehicle_head_lamp_ctrl
  if (lhs->acu_vehicle_head_lamp_ctrl != rhs->acu_vehicle_head_lamp_ctrl) {
    return false;
  }
  // acu_vehicle_left_lamp_ctrl
  if (lhs->acu_vehicle_left_lamp_ctrl != rhs->acu_vehicle_left_lamp_ctrl) {
    return false;
  }
  // acu_vehicle_right_lamp_ctrl
  if (lhs->acu_vehicle_right_lamp_ctrl != rhs->acu_vehicle_right_lamp_ctrl) {
    return false;
  }
  // acu_vehicle_high_beam_ctrl
  if (lhs->acu_vehicle_high_beam_ctrl != rhs->acu_vehicle_high_beam_ctrl) {
    return false;
  }
  // acu_vehicle_fog_lamp_ctrl
  if (lhs->acu_vehicle_fog_lamp_ctrl != rhs->acu_vehicle_fog_lamp_ctrl) {
    return false;
  }
  // acu_vehicle_body_light_ctrl
  if (lhs->acu_vehicle_body_light_ctrl != rhs->acu_vehicle_body_light_ctrl) {
    return false;
  }
  // acu_vehicle_read_light_ctrl
  if (lhs->acu_vehicle_read_light_ctrl != rhs->acu_vehicle_read_light_ctrl) {
    return false;
  }
  // acu_vehicle_voice
  if (lhs->acu_vehicle_voice != rhs->acu_vehicle_voice) {
    return false;
  }
  // acu_vehicle_wipers_ctrl
  if (lhs->acu_vehicle_wipers_ctrl != rhs->acu_vehicle_wipers_ctrl) {
    return false;
  }
  // acu_vehicle_door_ctrl
  if (lhs->acu_vehicle_door_ctrl != rhs->acu_vehicle_door_ctrl) {
    return false;
  }
  // acu_vehicle_window_ctrl
  if (lhs->acu_vehicle_window_ctrl != rhs->acu_vehicle_window_ctrl) {
    return false;
  }
  // acu_chassis_speed_limite_mode
  if (lhs->acu_chassis_speed_limite_mode != rhs->acu_chassis_speed_limite_mode) {
    return false;
  }
  // acu_vehicle_horn_ctrl
  if (lhs->acu_vehicle_horn_ctrl != rhs->acu_vehicle_horn_ctrl) {
    return false;
  }
  // acu_vehicle_spray_ctrl
  if (lhs->acu_vehicle_spray_ctrl != rhs->acu_vehicle_spray_ctrl) {
    return false;
  }
  // acu_chassis_speed_limite_val
  if (lhs->acu_chassis_speed_limite_val != rhs->acu_chassis_speed_limite_val) {
    return false;
  }
  // acu_check_sum_en
  if (lhs->acu_check_sum_en != rhs->acu_check_sum_en) {
    return false;
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__AvVehicleCtrl__copy(
  const pix_robobus_driver_msgs__msg__AvVehicleCtrl * input,
  pix_robobus_driver_msgs__msg__AvVehicleCtrl * output)
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
  // acu_vehicle_pos_lamp_ctrl
  output->acu_vehicle_pos_lamp_ctrl = input->acu_vehicle_pos_lamp_ctrl;
  // acu_vehicle_head_lamp_ctrl
  output->acu_vehicle_head_lamp_ctrl = input->acu_vehicle_head_lamp_ctrl;
  // acu_vehicle_left_lamp_ctrl
  output->acu_vehicle_left_lamp_ctrl = input->acu_vehicle_left_lamp_ctrl;
  // acu_vehicle_right_lamp_ctrl
  output->acu_vehicle_right_lamp_ctrl = input->acu_vehicle_right_lamp_ctrl;
  // acu_vehicle_high_beam_ctrl
  output->acu_vehicle_high_beam_ctrl = input->acu_vehicle_high_beam_ctrl;
  // acu_vehicle_fog_lamp_ctrl
  output->acu_vehicle_fog_lamp_ctrl = input->acu_vehicle_fog_lamp_ctrl;
  // acu_vehicle_body_light_ctrl
  output->acu_vehicle_body_light_ctrl = input->acu_vehicle_body_light_ctrl;
  // acu_vehicle_read_light_ctrl
  output->acu_vehicle_read_light_ctrl = input->acu_vehicle_read_light_ctrl;
  // acu_vehicle_voice
  output->acu_vehicle_voice = input->acu_vehicle_voice;
  // acu_vehicle_wipers_ctrl
  output->acu_vehicle_wipers_ctrl = input->acu_vehicle_wipers_ctrl;
  // acu_vehicle_door_ctrl
  output->acu_vehicle_door_ctrl = input->acu_vehicle_door_ctrl;
  // acu_vehicle_window_ctrl
  output->acu_vehicle_window_ctrl = input->acu_vehicle_window_ctrl;
  // acu_chassis_speed_limite_mode
  output->acu_chassis_speed_limite_mode = input->acu_chassis_speed_limite_mode;
  // acu_vehicle_horn_ctrl
  output->acu_vehicle_horn_ctrl = input->acu_vehicle_horn_ctrl;
  // acu_vehicle_spray_ctrl
  output->acu_vehicle_spray_ctrl = input->acu_vehicle_spray_ctrl;
  // acu_chassis_speed_limite_val
  output->acu_chassis_speed_limite_val = input->acu_chassis_speed_limite_val;
  // acu_check_sum_en
  output->acu_check_sum_en = input->acu_check_sum_en;
  return true;
}

pix_robobus_driver_msgs__msg__AvVehicleCtrl *
pix_robobus_driver_msgs__msg__AvVehicleCtrl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__AvVehicleCtrl * msg = (pix_robobus_driver_msgs__msg__AvVehicleCtrl *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__AvVehicleCtrl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pix_robobus_driver_msgs__msg__AvVehicleCtrl));
  bool success = pix_robobus_driver_msgs__msg__AvVehicleCtrl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pix_robobus_driver_msgs__msg__AvVehicleCtrl__destroy(pix_robobus_driver_msgs__msg__AvVehicleCtrl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pix_robobus_driver_msgs__msg__AvVehicleCtrl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence__init(pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__AvVehicleCtrl * data = NULL;

  if (size) {
    data = (pix_robobus_driver_msgs__msg__AvVehicleCtrl *)allocator.zero_allocate(size, sizeof(pix_robobus_driver_msgs__msg__AvVehicleCtrl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pix_robobus_driver_msgs__msg__AvVehicleCtrl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pix_robobus_driver_msgs__msg__AvVehicleCtrl__fini(&data[i - 1]);
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
pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence__fini(pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence * array)
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
      pix_robobus_driver_msgs__msg__AvVehicleCtrl__fini(&array->data[i]);
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

pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence *
pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence * array = (pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence__destroy(pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence__are_equal(const pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence * lhs, const pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__AvVehicleCtrl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence__copy(
  const pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence * input,
  pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pix_robobus_driver_msgs__msg__AvVehicleCtrl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pix_robobus_driver_msgs__msg__AvVehicleCtrl * data =
      (pix_robobus_driver_msgs__msg__AvVehicleCtrl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pix_robobus_driver_msgs__msg__AvVehicleCtrl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pix_robobus_driver_msgs__msg__AvVehicleCtrl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__AvVehicleCtrl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
