// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pix_robobus_driver_msgs:msg/VehicleErrcode2.idl
// generated code does not contain a copyright notice
#include "pix_robobus_driver_msgs/msg/detail/vehicle_errcode2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
pix_robobus_driver_msgs__msg__VehicleErrcode2__init(pix_robobus_driver_msgs__msg__VehicleErrcode2 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pix_robobus_driver_msgs__msg__VehicleErrcode2__fini(msg);
    return false;
  }
  // obc_network_fault
  // obc_hardware_fault
  // vcu_reserve1
  // dp_hardware_fault
  // dp_network_fault
  // vcu_reserve5
  // bcm_hardware_fault
  // bcm_network_fault
  // vcu_reserve11
  // dcu_network_fault
  // dcu_hardware_fault
  // vcu_reserve17
  // avas_network_fault
  // avas_hardware_fault
  // vcu_reserve18
  // vcu_reserve19
  // iis_hardware_fault
  // iis_network_fault
  // vcu_reserve20
  // vcu_reserve26
  // ac_hardware_fault
  // ac_network_fault
  // vcu_reserve32
  // lv_battery_low_voltage_fault
  // lv_battery_high_voltage_fault
  return true;
}

void
pix_robobus_driver_msgs__msg__VehicleErrcode2__fini(pix_robobus_driver_msgs__msg__VehicleErrcode2 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // obc_network_fault
  // obc_hardware_fault
  // vcu_reserve1
  // dp_hardware_fault
  // dp_network_fault
  // vcu_reserve5
  // bcm_hardware_fault
  // bcm_network_fault
  // vcu_reserve11
  // dcu_network_fault
  // dcu_hardware_fault
  // vcu_reserve17
  // avas_network_fault
  // avas_hardware_fault
  // vcu_reserve18
  // vcu_reserve19
  // iis_hardware_fault
  // iis_network_fault
  // vcu_reserve20
  // vcu_reserve26
  // ac_hardware_fault
  // ac_network_fault
  // vcu_reserve32
  // lv_battery_low_voltage_fault
  // lv_battery_high_voltage_fault
}

bool
pix_robobus_driver_msgs__msg__VehicleErrcode2__are_equal(const pix_robobus_driver_msgs__msg__VehicleErrcode2 * lhs, const pix_robobus_driver_msgs__msg__VehicleErrcode2 * rhs)
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
  // obc_network_fault
  if (lhs->obc_network_fault != rhs->obc_network_fault) {
    return false;
  }
  // obc_hardware_fault
  if (lhs->obc_hardware_fault != rhs->obc_hardware_fault) {
    return false;
  }
  // vcu_reserve1
  if (lhs->vcu_reserve1 != rhs->vcu_reserve1) {
    return false;
  }
  // dp_hardware_fault
  if (lhs->dp_hardware_fault != rhs->dp_hardware_fault) {
    return false;
  }
  // dp_network_fault
  if (lhs->dp_network_fault != rhs->dp_network_fault) {
    return false;
  }
  // vcu_reserve5
  if (lhs->vcu_reserve5 != rhs->vcu_reserve5) {
    return false;
  }
  // bcm_hardware_fault
  if (lhs->bcm_hardware_fault != rhs->bcm_hardware_fault) {
    return false;
  }
  // bcm_network_fault
  if (lhs->bcm_network_fault != rhs->bcm_network_fault) {
    return false;
  }
  // vcu_reserve11
  if (lhs->vcu_reserve11 != rhs->vcu_reserve11) {
    return false;
  }
  // dcu_network_fault
  if (lhs->dcu_network_fault != rhs->dcu_network_fault) {
    return false;
  }
  // dcu_hardware_fault
  if (lhs->dcu_hardware_fault != rhs->dcu_hardware_fault) {
    return false;
  }
  // vcu_reserve17
  if (lhs->vcu_reserve17 != rhs->vcu_reserve17) {
    return false;
  }
  // avas_network_fault
  if (lhs->avas_network_fault != rhs->avas_network_fault) {
    return false;
  }
  // avas_hardware_fault
  if (lhs->avas_hardware_fault != rhs->avas_hardware_fault) {
    return false;
  }
  // vcu_reserve18
  if (lhs->vcu_reserve18 != rhs->vcu_reserve18) {
    return false;
  }
  // vcu_reserve19
  if (lhs->vcu_reserve19 != rhs->vcu_reserve19) {
    return false;
  }
  // iis_hardware_fault
  if (lhs->iis_hardware_fault != rhs->iis_hardware_fault) {
    return false;
  }
  // iis_network_fault
  if (lhs->iis_network_fault != rhs->iis_network_fault) {
    return false;
  }
  // vcu_reserve20
  if (lhs->vcu_reserve20 != rhs->vcu_reserve20) {
    return false;
  }
  // vcu_reserve26
  if (lhs->vcu_reserve26 != rhs->vcu_reserve26) {
    return false;
  }
  // ac_hardware_fault
  if (lhs->ac_hardware_fault != rhs->ac_hardware_fault) {
    return false;
  }
  // ac_network_fault
  if (lhs->ac_network_fault != rhs->ac_network_fault) {
    return false;
  }
  // vcu_reserve32
  if (lhs->vcu_reserve32 != rhs->vcu_reserve32) {
    return false;
  }
  // lv_battery_low_voltage_fault
  if (lhs->lv_battery_low_voltage_fault != rhs->lv_battery_low_voltage_fault) {
    return false;
  }
  // lv_battery_high_voltage_fault
  if (lhs->lv_battery_high_voltage_fault != rhs->lv_battery_high_voltage_fault) {
    return false;
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__VehicleErrcode2__copy(
  const pix_robobus_driver_msgs__msg__VehicleErrcode2 * input,
  pix_robobus_driver_msgs__msg__VehicleErrcode2 * output)
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
  // obc_network_fault
  output->obc_network_fault = input->obc_network_fault;
  // obc_hardware_fault
  output->obc_hardware_fault = input->obc_hardware_fault;
  // vcu_reserve1
  output->vcu_reserve1 = input->vcu_reserve1;
  // dp_hardware_fault
  output->dp_hardware_fault = input->dp_hardware_fault;
  // dp_network_fault
  output->dp_network_fault = input->dp_network_fault;
  // vcu_reserve5
  output->vcu_reserve5 = input->vcu_reserve5;
  // bcm_hardware_fault
  output->bcm_hardware_fault = input->bcm_hardware_fault;
  // bcm_network_fault
  output->bcm_network_fault = input->bcm_network_fault;
  // vcu_reserve11
  output->vcu_reserve11 = input->vcu_reserve11;
  // dcu_network_fault
  output->dcu_network_fault = input->dcu_network_fault;
  // dcu_hardware_fault
  output->dcu_hardware_fault = input->dcu_hardware_fault;
  // vcu_reserve17
  output->vcu_reserve17 = input->vcu_reserve17;
  // avas_network_fault
  output->avas_network_fault = input->avas_network_fault;
  // avas_hardware_fault
  output->avas_hardware_fault = input->avas_hardware_fault;
  // vcu_reserve18
  output->vcu_reserve18 = input->vcu_reserve18;
  // vcu_reserve19
  output->vcu_reserve19 = input->vcu_reserve19;
  // iis_hardware_fault
  output->iis_hardware_fault = input->iis_hardware_fault;
  // iis_network_fault
  output->iis_network_fault = input->iis_network_fault;
  // vcu_reserve20
  output->vcu_reserve20 = input->vcu_reserve20;
  // vcu_reserve26
  output->vcu_reserve26 = input->vcu_reserve26;
  // ac_hardware_fault
  output->ac_hardware_fault = input->ac_hardware_fault;
  // ac_network_fault
  output->ac_network_fault = input->ac_network_fault;
  // vcu_reserve32
  output->vcu_reserve32 = input->vcu_reserve32;
  // lv_battery_low_voltage_fault
  output->lv_battery_low_voltage_fault = input->lv_battery_low_voltage_fault;
  // lv_battery_high_voltage_fault
  output->lv_battery_high_voltage_fault = input->lv_battery_high_voltage_fault;
  return true;
}

pix_robobus_driver_msgs__msg__VehicleErrcode2 *
pix_robobus_driver_msgs__msg__VehicleErrcode2__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__VehicleErrcode2 * msg = (pix_robobus_driver_msgs__msg__VehicleErrcode2 *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__VehicleErrcode2), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pix_robobus_driver_msgs__msg__VehicleErrcode2));
  bool success = pix_robobus_driver_msgs__msg__VehicleErrcode2__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pix_robobus_driver_msgs__msg__VehicleErrcode2__destroy(pix_robobus_driver_msgs__msg__VehicleErrcode2 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pix_robobus_driver_msgs__msg__VehicleErrcode2__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence__init(pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__VehicleErrcode2 * data = NULL;

  if (size) {
    data = (pix_robobus_driver_msgs__msg__VehicleErrcode2 *)allocator.zero_allocate(size, sizeof(pix_robobus_driver_msgs__msg__VehicleErrcode2), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pix_robobus_driver_msgs__msg__VehicleErrcode2__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pix_robobus_driver_msgs__msg__VehicleErrcode2__fini(&data[i - 1]);
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
pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence__fini(pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence * array)
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
      pix_robobus_driver_msgs__msg__VehicleErrcode2__fini(&array->data[i]);
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

pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence *
pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence * array = (pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence__destroy(pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence__are_equal(const pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence * lhs, const pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__VehicleErrcode2__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence__copy(
  const pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence * input,
  pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pix_robobus_driver_msgs__msg__VehicleErrcode2);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pix_robobus_driver_msgs__msg__VehicleErrcode2 * data =
      (pix_robobus_driver_msgs__msg__VehicleErrcode2 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pix_robobus_driver_msgs__msg__VehicleErrcode2__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pix_robobus_driver_msgs__msg__VehicleErrcode2__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__VehicleErrcode2__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
