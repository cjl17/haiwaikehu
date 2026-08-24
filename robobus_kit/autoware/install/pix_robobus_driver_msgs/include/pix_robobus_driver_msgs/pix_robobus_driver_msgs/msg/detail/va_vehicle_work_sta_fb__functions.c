// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pix_robobus_driver_msgs:msg/VaVehicleWorkStaFb.idl
// generated code does not contain a copyright notice
#include "pix_robobus_driver_msgs/msg/detail/va_vehicle_work_sta_fb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__init(pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__fini(msg);
    return false;
  }
  // vcu_driving_mode_fb
  // vcu_chassis_power_sta_fb
  // vcu_chassis_power_dc_sta
  // vcu_remote_connecte_sta
  // vcu_acu_connect_sta
  // vcu_chassis_speed_limited_mode_fb
  // vcu_chassis_power_limite_sta
  // vcu_sys_eco_mode
  // vcu_chassis_speed_limited_val_fb
  // vcu_chassis_low_power_volt_sta
  // vcu_chassis_e_stop_sta_fb
  // vcu_crash_front_sta
  // vcu_crash_rear_sta
  // vcu_crash_left_sta
  // vcu_crash_right_sta
  // vcu_life
  // vcu_check_sum
  return true;
}

void
pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__fini(pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // vcu_driving_mode_fb
  // vcu_chassis_power_sta_fb
  // vcu_chassis_power_dc_sta
  // vcu_remote_connecte_sta
  // vcu_acu_connect_sta
  // vcu_chassis_speed_limited_mode_fb
  // vcu_chassis_power_limite_sta
  // vcu_sys_eco_mode
  // vcu_chassis_speed_limited_val_fb
  // vcu_chassis_low_power_volt_sta
  // vcu_chassis_e_stop_sta_fb
  // vcu_crash_front_sta
  // vcu_crash_rear_sta
  // vcu_crash_left_sta
  // vcu_crash_right_sta
  // vcu_life
  // vcu_check_sum
}

bool
pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__are_equal(const pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb * lhs, const pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb * rhs)
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
  // vcu_driving_mode_fb
  if (lhs->vcu_driving_mode_fb != rhs->vcu_driving_mode_fb) {
    return false;
  }
  // vcu_chassis_power_sta_fb
  if (lhs->vcu_chassis_power_sta_fb != rhs->vcu_chassis_power_sta_fb) {
    return false;
  }
  // vcu_chassis_power_dc_sta
  if (lhs->vcu_chassis_power_dc_sta != rhs->vcu_chassis_power_dc_sta) {
    return false;
  }
  // vcu_remote_connecte_sta
  if (lhs->vcu_remote_connecte_sta != rhs->vcu_remote_connecte_sta) {
    return false;
  }
  // vcu_acu_connect_sta
  if (lhs->vcu_acu_connect_sta != rhs->vcu_acu_connect_sta) {
    return false;
  }
  // vcu_chassis_speed_limited_mode_fb
  if (lhs->vcu_chassis_speed_limited_mode_fb != rhs->vcu_chassis_speed_limited_mode_fb) {
    return false;
  }
  // vcu_chassis_power_limite_sta
  if (lhs->vcu_chassis_power_limite_sta != rhs->vcu_chassis_power_limite_sta) {
    return false;
  }
  // vcu_sys_eco_mode
  if (lhs->vcu_sys_eco_mode != rhs->vcu_sys_eco_mode) {
    return false;
  }
  // vcu_chassis_speed_limited_val_fb
  if (lhs->vcu_chassis_speed_limited_val_fb != rhs->vcu_chassis_speed_limited_val_fb) {
    return false;
  }
  // vcu_chassis_low_power_volt_sta
  if (lhs->vcu_chassis_low_power_volt_sta != rhs->vcu_chassis_low_power_volt_sta) {
    return false;
  }
  // vcu_chassis_e_stop_sta_fb
  if (lhs->vcu_chassis_e_stop_sta_fb != rhs->vcu_chassis_e_stop_sta_fb) {
    return false;
  }
  // vcu_crash_front_sta
  if (lhs->vcu_crash_front_sta != rhs->vcu_crash_front_sta) {
    return false;
  }
  // vcu_crash_rear_sta
  if (lhs->vcu_crash_rear_sta != rhs->vcu_crash_rear_sta) {
    return false;
  }
  // vcu_crash_left_sta
  if (lhs->vcu_crash_left_sta != rhs->vcu_crash_left_sta) {
    return false;
  }
  // vcu_crash_right_sta
  if (lhs->vcu_crash_right_sta != rhs->vcu_crash_right_sta) {
    return false;
  }
  // vcu_life
  if (lhs->vcu_life != rhs->vcu_life) {
    return false;
  }
  // vcu_check_sum
  if (lhs->vcu_check_sum != rhs->vcu_check_sum) {
    return false;
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__copy(
  const pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb * input,
  pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb * output)
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
  // vcu_driving_mode_fb
  output->vcu_driving_mode_fb = input->vcu_driving_mode_fb;
  // vcu_chassis_power_sta_fb
  output->vcu_chassis_power_sta_fb = input->vcu_chassis_power_sta_fb;
  // vcu_chassis_power_dc_sta
  output->vcu_chassis_power_dc_sta = input->vcu_chassis_power_dc_sta;
  // vcu_remote_connecte_sta
  output->vcu_remote_connecte_sta = input->vcu_remote_connecte_sta;
  // vcu_acu_connect_sta
  output->vcu_acu_connect_sta = input->vcu_acu_connect_sta;
  // vcu_chassis_speed_limited_mode_fb
  output->vcu_chassis_speed_limited_mode_fb = input->vcu_chassis_speed_limited_mode_fb;
  // vcu_chassis_power_limite_sta
  output->vcu_chassis_power_limite_sta = input->vcu_chassis_power_limite_sta;
  // vcu_sys_eco_mode
  output->vcu_sys_eco_mode = input->vcu_sys_eco_mode;
  // vcu_chassis_speed_limited_val_fb
  output->vcu_chassis_speed_limited_val_fb = input->vcu_chassis_speed_limited_val_fb;
  // vcu_chassis_low_power_volt_sta
  output->vcu_chassis_low_power_volt_sta = input->vcu_chassis_low_power_volt_sta;
  // vcu_chassis_e_stop_sta_fb
  output->vcu_chassis_e_stop_sta_fb = input->vcu_chassis_e_stop_sta_fb;
  // vcu_crash_front_sta
  output->vcu_crash_front_sta = input->vcu_crash_front_sta;
  // vcu_crash_rear_sta
  output->vcu_crash_rear_sta = input->vcu_crash_rear_sta;
  // vcu_crash_left_sta
  output->vcu_crash_left_sta = input->vcu_crash_left_sta;
  // vcu_crash_right_sta
  output->vcu_crash_right_sta = input->vcu_crash_right_sta;
  // vcu_life
  output->vcu_life = input->vcu_life;
  // vcu_check_sum
  output->vcu_check_sum = input->vcu_check_sum;
  return true;
}

pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb *
pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb * msg = (pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb));
  bool success = pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__destroy(pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence__init(pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb * data = NULL;

  if (size) {
    data = (pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb *)allocator.zero_allocate(size, sizeof(pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__fini(&data[i - 1]);
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
pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence__fini(pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence * array)
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
      pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__fini(&array->data[i]);
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

pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence *
pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence * array = (pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence__destroy(pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence__are_equal(const pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence * lhs, const pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence__copy(
  const pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence * input,
  pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb * data =
      (pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
