// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pix_robobus_driver_msgs:msg/VehicleErrcode1.idl
// generated code does not contain a copyright notice
#include "pix_robobus_driver_msgs/msg/detail/vehicle_errcode1__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
pix_robobus_driver_msgs__msg__VehicleErrcode1__init(pix_robobus_driver_msgs__msg__VehicleErrcode1 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pix_robobus_driver_msgs__msg__VehicleErrcode1__fini(msg);
    return false;
  }
  // flmc_hardware_fault
  // flmc_tem_fault
  // flm_tem_fault
  // rlmc_hardware_fault
  // rlmc_tem_fault
  // rlm_tem_fault
  // frmc_hardware_fault
  // frmc_tem_fault
  // frm_tem_fault
  // rrmc_hardware_fault
  // rrmc_tem_fault
  // rrm_tem_fault
  // flmc_network_fault
  // frmc_network_fault
  // rlmc_network_fault
  // rrmc_network_fault
  // fsteer_hardware_fault
  // rsteer_hardware_fault
  // fsteer_network_fault
  // rsteer_network_fault
  // brake_hardware_fault
  // brake_high_tem_fault
  // brake_luid_level_low
  // brake_network_fault
  // park_hardware_fault
  // park_network_fault
  // rcu_network_fault
  // rcu_weak_signal
  // rcu_elec_low_alarm
  // reserve1
  // reserve2
  // bms_network_fault
  // bms_insulationfault
  // bms_ocv_cell
  // bms_odv_cell
  // bms_ocv_batt
  // bms_odv_batt
  // bms_cell_volt_diff
  // bms_temph
  // bms_temphl
  // bms_temph_diff
  // bms_warchg_overcurrent
  // bms_soch
  // bms_socl
  // bms_time_of_heating_too_long
  // bms_soc_break
  // bms_dis_char_over_cur
  // bms_char_over_cur_slow
  // bmsfast_char_over_cur
  // bms_alm_sense_cell
  // bms_alm_sense_temp
  // bms_alm_sense_curr
  // bms_hvil
  // bms_war_incan_fault
  // bms_lst_com_withobc
  // bms_lst_com_with_vcu
  // bms_precharger_fault
  // bmspos_relayconglutination
  // bms_neg_relay_conglutination
  // vcu_reserve3
  // vcu_reserve4
  // dcdc_high_tem_alarm
  // dcdc_hardware_fault
  // dcdc_network_fault
  return true;
}

void
pix_robobus_driver_msgs__msg__VehicleErrcode1__fini(pix_robobus_driver_msgs__msg__VehicleErrcode1 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // flmc_hardware_fault
  // flmc_tem_fault
  // flm_tem_fault
  // rlmc_hardware_fault
  // rlmc_tem_fault
  // rlm_tem_fault
  // frmc_hardware_fault
  // frmc_tem_fault
  // frm_tem_fault
  // rrmc_hardware_fault
  // rrmc_tem_fault
  // rrm_tem_fault
  // flmc_network_fault
  // frmc_network_fault
  // rlmc_network_fault
  // rrmc_network_fault
  // fsteer_hardware_fault
  // rsteer_hardware_fault
  // fsteer_network_fault
  // rsteer_network_fault
  // brake_hardware_fault
  // brake_high_tem_fault
  // brake_luid_level_low
  // brake_network_fault
  // park_hardware_fault
  // park_network_fault
  // rcu_network_fault
  // rcu_weak_signal
  // rcu_elec_low_alarm
  // reserve1
  // reserve2
  // bms_network_fault
  // bms_insulationfault
  // bms_ocv_cell
  // bms_odv_cell
  // bms_ocv_batt
  // bms_odv_batt
  // bms_cell_volt_diff
  // bms_temph
  // bms_temphl
  // bms_temph_diff
  // bms_warchg_overcurrent
  // bms_soch
  // bms_socl
  // bms_time_of_heating_too_long
  // bms_soc_break
  // bms_dis_char_over_cur
  // bms_char_over_cur_slow
  // bmsfast_char_over_cur
  // bms_alm_sense_cell
  // bms_alm_sense_temp
  // bms_alm_sense_curr
  // bms_hvil
  // bms_war_incan_fault
  // bms_lst_com_withobc
  // bms_lst_com_with_vcu
  // bms_precharger_fault
  // bmspos_relayconglutination
  // bms_neg_relay_conglutination
  // vcu_reserve3
  // vcu_reserve4
  // dcdc_high_tem_alarm
  // dcdc_hardware_fault
  // dcdc_network_fault
}

bool
pix_robobus_driver_msgs__msg__VehicleErrcode1__are_equal(const pix_robobus_driver_msgs__msg__VehicleErrcode1 * lhs, const pix_robobus_driver_msgs__msg__VehicleErrcode1 * rhs)
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
  // flmc_hardware_fault
  if (lhs->flmc_hardware_fault != rhs->flmc_hardware_fault) {
    return false;
  }
  // flmc_tem_fault
  if (lhs->flmc_tem_fault != rhs->flmc_tem_fault) {
    return false;
  }
  // flm_tem_fault
  if (lhs->flm_tem_fault != rhs->flm_tem_fault) {
    return false;
  }
  // rlmc_hardware_fault
  if (lhs->rlmc_hardware_fault != rhs->rlmc_hardware_fault) {
    return false;
  }
  // rlmc_tem_fault
  if (lhs->rlmc_tem_fault != rhs->rlmc_tem_fault) {
    return false;
  }
  // rlm_tem_fault
  if (lhs->rlm_tem_fault != rhs->rlm_tem_fault) {
    return false;
  }
  // frmc_hardware_fault
  if (lhs->frmc_hardware_fault != rhs->frmc_hardware_fault) {
    return false;
  }
  // frmc_tem_fault
  if (lhs->frmc_tem_fault != rhs->frmc_tem_fault) {
    return false;
  }
  // frm_tem_fault
  if (lhs->frm_tem_fault != rhs->frm_tem_fault) {
    return false;
  }
  // rrmc_hardware_fault
  if (lhs->rrmc_hardware_fault != rhs->rrmc_hardware_fault) {
    return false;
  }
  // rrmc_tem_fault
  if (lhs->rrmc_tem_fault != rhs->rrmc_tem_fault) {
    return false;
  }
  // rrm_tem_fault
  if (lhs->rrm_tem_fault != rhs->rrm_tem_fault) {
    return false;
  }
  // flmc_network_fault
  if (lhs->flmc_network_fault != rhs->flmc_network_fault) {
    return false;
  }
  // frmc_network_fault
  if (lhs->frmc_network_fault != rhs->frmc_network_fault) {
    return false;
  }
  // rlmc_network_fault
  if (lhs->rlmc_network_fault != rhs->rlmc_network_fault) {
    return false;
  }
  // rrmc_network_fault
  if (lhs->rrmc_network_fault != rhs->rrmc_network_fault) {
    return false;
  }
  // fsteer_hardware_fault
  if (lhs->fsteer_hardware_fault != rhs->fsteer_hardware_fault) {
    return false;
  }
  // rsteer_hardware_fault
  if (lhs->rsteer_hardware_fault != rhs->rsteer_hardware_fault) {
    return false;
  }
  // fsteer_network_fault
  if (lhs->fsteer_network_fault != rhs->fsteer_network_fault) {
    return false;
  }
  // rsteer_network_fault
  if (lhs->rsteer_network_fault != rhs->rsteer_network_fault) {
    return false;
  }
  // brake_hardware_fault
  if (lhs->brake_hardware_fault != rhs->brake_hardware_fault) {
    return false;
  }
  // brake_high_tem_fault
  if (lhs->brake_high_tem_fault != rhs->brake_high_tem_fault) {
    return false;
  }
  // brake_luid_level_low
  if (lhs->brake_luid_level_low != rhs->brake_luid_level_low) {
    return false;
  }
  // brake_network_fault
  if (lhs->brake_network_fault != rhs->brake_network_fault) {
    return false;
  }
  // park_hardware_fault
  if (lhs->park_hardware_fault != rhs->park_hardware_fault) {
    return false;
  }
  // park_network_fault
  if (lhs->park_network_fault != rhs->park_network_fault) {
    return false;
  }
  // rcu_network_fault
  if (lhs->rcu_network_fault != rhs->rcu_network_fault) {
    return false;
  }
  // rcu_weak_signal
  if (lhs->rcu_weak_signal != rhs->rcu_weak_signal) {
    return false;
  }
  // rcu_elec_low_alarm
  if (lhs->rcu_elec_low_alarm != rhs->rcu_elec_low_alarm) {
    return false;
  }
  // reserve1
  if (lhs->reserve1 != rhs->reserve1) {
    return false;
  }
  // reserve2
  if (lhs->reserve2 != rhs->reserve2) {
    return false;
  }
  // bms_network_fault
  if (lhs->bms_network_fault != rhs->bms_network_fault) {
    return false;
  }
  // bms_insulationfault
  if (lhs->bms_insulationfault != rhs->bms_insulationfault) {
    return false;
  }
  // bms_ocv_cell
  if (lhs->bms_ocv_cell != rhs->bms_ocv_cell) {
    return false;
  }
  // bms_odv_cell
  if (lhs->bms_odv_cell != rhs->bms_odv_cell) {
    return false;
  }
  // bms_ocv_batt
  if (lhs->bms_ocv_batt != rhs->bms_ocv_batt) {
    return false;
  }
  // bms_odv_batt
  if (lhs->bms_odv_batt != rhs->bms_odv_batt) {
    return false;
  }
  // bms_cell_volt_diff
  if (lhs->bms_cell_volt_diff != rhs->bms_cell_volt_diff) {
    return false;
  }
  // bms_temph
  if (lhs->bms_temph != rhs->bms_temph) {
    return false;
  }
  // bms_temphl
  if (lhs->bms_temphl != rhs->bms_temphl) {
    return false;
  }
  // bms_temph_diff
  if (lhs->bms_temph_diff != rhs->bms_temph_diff) {
    return false;
  }
  // bms_warchg_overcurrent
  if (lhs->bms_warchg_overcurrent != rhs->bms_warchg_overcurrent) {
    return false;
  }
  // bms_soch
  if (lhs->bms_soch != rhs->bms_soch) {
    return false;
  }
  // bms_socl
  if (lhs->bms_socl != rhs->bms_socl) {
    return false;
  }
  // bms_time_of_heating_too_long
  if (lhs->bms_time_of_heating_too_long != rhs->bms_time_of_heating_too_long) {
    return false;
  }
  // bms_soc_break
  if (lhs->bms_soc_break != rhs->bms_soc_break) {
    return false;
  }
  // bms_dis_char_over_cur
  if (lhs->bms_dis_char_over_cur != rhs->bms_dis_char_over_cur) {
    return false;
  }
  // bms_char_over_cur_slow
  if (lhs->bms_char_over_cur_slow != rhs->bms_char_over_cur_slow) {
    return false;
  }
  // bmsfast_char_over_cur
  if (lhs->bmsfast_char_over_cur != rhs->bmsfast_char_over_cur) {
    return false;
  }
  // bms_alm_sense_cell
  if (lhs->bms_alm_sense_cell != rhs->bms_alm_sense_cell) {
    return false;
  }
  // bms_alm_sense_temp
  if (lhs->bms_alm_sense_temp != rhs->bms_alm_sense_temp) {
    return false;
  }
  // bms_alm_sense_curr
  if (lhs->bms_alm_sense_curr != rhs->bms_alm_sense_curr) {
    return false;
  }
  // bms_hvil
  if (lhs->bms_hvil != rhs->bms_hvil) {
    return false;
  }
  // bms_war_incan_fault
  if (lhs->bms_war_incan_fault != rhs->bms_war_incan_fault) {
    return false;
  }
  // bms_lst_com_withobc
  if (lhs->bms_lst_com_withobc != rhs->bms_lst_com_withobc) {
    return false;
  }
  // bms_lst_com_with_vcu
  if (lhs->bms_lst_com_with_vcu != rhs->bms_lst_com_with_vcu) {
    return false;
  }
  // bms_precharger_fault
  if (lhs->bms_precharger_fault != rhs->bms_precharger_fault) {
    return false;
  }
  // bmspos_relayconglutination
  if (lhs->bmspos_relayconglutination != rhs->bmspos_relayconglutination) {
    return false;
  }
  // bms_neg_relay_conglutination
  if (lhs->bms_neg_relay_conglutination != rhs->bms_neg_relay_conglutination) {
    return false;
  }
  // vcu_reserve3
  if (lhs->vcu_reserve3 != rhs->vcu_reserve3) {
    return false;
  }
  // vcu_reserve4
  if (lhs->vcu_reserve4 != rhs->vcu_reserve4) {
    return false;
  }
  // dcdc_high_tem_alarm
  if (lhs->dcdc_high_tem_alarm != rhs->dcdc_high_tem_alarm) {
    return false;
  }
  // dcdc_hardware_fault
  if (lhs->dcdc_hardware_fault != rhs->dcdc_hardware_fault) {
    return false;
  }
  // dcdc_network_fault
  if (lhs->dcdc_network_fault != rhs->dcdc_network_fault) {
    return false;
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__VehicleErrcode1__copy(
  const pix_robobus_driver_msgs__msg__VehicleErrcode1 * input,
  pix_robobus_driver_msgs__msg__VehicleErrcode1 * output)
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
  // flmc_hardware_fault
  output->flmc_hardware_fault = input->flmc_hardware_fault;
  // flmc_tem_fault
  output->flmc_tem_fault = input->flmc_tem_fault;
  // flm_tem_fault
  output->flm_tem_fault = input->flm_tem_fault;
  // rlmc_hardware_fault
  output->rlmc_hardware_fault = input->rlmc_hardware_fault;
  // rlmc_tem_fault
  output->rlmc_tem_fault = input->rlmc_tem_fault;
  // rlm_tem_fault
  output->rlm_tem_fault = input->rlm_tem_fault;
  // frmc_hardware_fault
  output->frmc_hardware_fault = input->frmc_hardware_fault;
  // frmc_tem_fault
  output->frmc_tem_fault = input->frmc_tem_fault;
  // frm_tem_fault
  output->frm_tem_fault = input->frm_tem_fault;
  // rrmc_hardware_fault
  output->rrmc_hardware_fault = input->rrmc_hardware_fault;
  // rrmc_tem_fault
  output->rrmc_tem_fault = input->rrmc_tem_fault;
  // rrm_tem_fault
  output->rrm_tem_fault = input->rrm_tem_fault;
  // flmc_network_fault
  output->flmc_network_fault = input->flmc_network_fault;
  // frmc_network_fault
  output->frmc_network_fault = input->frmc_network_fault;
  // rlmc_network_fault
  output->rlmc_network_fault = input->rlmc_network_fault;
  // rrmc_network_fault
  output->rrmc_network_fault = input->rrmc_network_fault;
  // fsteer_hardware_fault
  output->fsteer_hardware_fault = input->fsteer_hardware_fault;
  // rsteer_hardware_fault
  output->rsteer_hardware_fault = input->rsteer_hardware_fault;
  // fsteer_network_fault
  output->fsteer_network_fault = input->fsteer_network_fault;
  // rsteer_network_fault
  output->rsteer_network_fault = input->rsteer_network_fault;
  // brake_hardware_fault
  output->brake_hardware_fault = input->brake_hardware_fault;
  // brake_high_tem_fault
  output->brake_high_tem_fault = input->brake_high_tem_fault;
  // brake_luid_level_low
  output->brake_luid_level_low = input->brake_luid_level_low;
  // brake_network_fault
  output->brake_network_fault = input->brake_network_fault;
  // park_hardware_fault
  output->park_hardware_fault = input->park_hardware_fault;
  // park_network_fault
  output->park_network_fault = input->park_network_fault;
  // rcu_network_fault
  output->rcu_network_fault = input->rcu_network_fault;
  // rcu_weak_signal
  output->rcu_weak_signal = input->rcu_weak_signal;
  // rcu_elec_low_alarm
  output->rcu_elec_low_alarm = input->rcu_elec_low_alarm;
  // reserve1
  output->reserve1 = input->reserve1;
  // reserve2
  output->reserve2 = input->reserve2;
  // bms_network_fault
  output->bms_network_fault = input->bms_network_fault;
  // bms_insulationfault
  output->bms_insulationfault = input->bms_insulationfault;
  // bms_ocv_cell
  output->bms_ocv_cell = input->bms_ocv_cell;
  // bms_odv_cell
  output->bms_odv_cell = input->bms_odv_cell;
  // bms_ocv_batt
  output->bms_ocv_batt = input->bms_ocv_batt;
  // bms_odv_batt
  output->bms_odv_batt = input->bms_odv_batt;
  // bms_cell_volt_diff
  output->bms_cell_volt_diff = input->bms_cell_volt_diff;
  // bms_temph
  output->bms_temph = input->bms_temph;
  // bms_temphl
  output->bms_temphl = input->bms_temphl;
  // bms_temph_diff
  output->bms_temph_diff = input->bms_temph_diff;
  // bms_warchg_overcurrent
  output->bms_warchg_overcurrent = input->bms_warchg_overcurrent;
  // bms_soch
  output->bms_soch = input->bms_soch;
  // bms_socl
  output->bms_socl = input->bms_socl;
  // bms_time_of_heating_too_long
  output->bms_time_of_heating_too_long = input->bms_time_of_heating_too_long;
  // bms_soc_break
  output->bms_soc_break = input->bms_soc_break;
  // bms_dis_char_over_cur
  output->bms_dis_char_over_cur = input->bms_dis_char_over_cur;
  // bms_char_over_cur_slow
  output->bms_char_over_cur_slow = input->bms_char_over_cur_slow;
  // bmsfast_char_over_cur
  output->bmsfast_char_over_cur = input->bmsfast_char_over_cur;
  // bms_alm_sense_cell
  output->bms_alm_sense_cell = input->bms_alm_sense_cell;
  // bms_alm_sense_temp
  output->bms_alm_sense_temp = input->bms_alm_sense_temp;
  // bms_alm_sense_curr
  output->bms_alm_sense_curr = input->bms_alm_sense_curr;
  // bms_hvil
  output->bms_hvil = input->bms_hvil;
  // bms_war_incan_fault
  output->bms_war_incan_fault = input->bms_war_incan_fault;
  // bms_lst_com_withobc
  output->bms_lst_com_withobc = input->bms_lst_com_withobc;
  // bms_lst_com_with_vcu
  output->bms_lst_com_with_vcu = input->bms_lst_com_with_vcu;
  // bms_precharger_fault
  output->bms_precharger_fault = input->bms_precharger_fault;
  // bmspos_relayconglutination
  output->bmspos_relayconglutination = input->bmspos_relayconglutination;
  // bms_neg_relay_conglutination
  output->bms_neg_relay_conglutination = input->bms_neg_relay_conglutination;
  // vcu_reserve3
  output->vcu_reserve3 = input->vcu_reserve3;
  // vcu_reserve4
  output->vcu_reserve4 = input->vcu_reserve4;
  // dcdc_high_tem_alarm
  output->dcdc_high_tem_alarm = input->dcdc_high_tem_alarm;
  // dcdc_hardware_fault
  output->dcdc_hardware_fault = input->dcdc_hardware_fault;
  // dcdc_network_fault
  output->dcdc_network_fault = input->dcdc_network_fault;
  return true;
}

pix_robobus_driver_msgs__msg__VehicleErrcode1 *
pix_robobus_driver_msgs__msg__VehicleErrcode1__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__VehicleErrcode1 * msg = (pix_robobus_driver_msgs__msg__VehicleErrcode1 *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__VehicleErrcode1), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pix_robobus_driver_msgs__msg__VehicleErrcode1));
  bool success = pix_robobus_driver_msgs__msg__VehicleErrcode1__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pix_robobus_driver_msgs__msg__VehicleErrcode1__destroy(pix_robobus_driver_msgs__msg__VehicleErrcode1 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pix_robobus_driver_msgs__msg__VehicleErrcode1__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence__init(pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__VehicleErrcode1 * data = NULL;

  if (size) {
    data = (pix_robobus_driver_msgs__msg__VehicleErrcode1 *)allocator.zero_allocate(size, sizeof(pix_robobus_driver_msgs__msg__VehicleErrcode1), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pix_robobus_driver_msgs__msg__VehicleErrcode1__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pix_robobus_driver_msgs__msg__VehicleErrcode1__fini(&data[i - 1]);
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
pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence__fini(pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence * array)
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
      pix_robobus_driver_msgs__msg__VehicleErrcode1__fini(&array->data[i]);
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

pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence *
pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence * array = (pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence__destroy(pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence__are_equal(const pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence * lhs, const pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__VehicleErrcode1__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence__copy(
  const pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence * input,
  pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pix_robobus_driver_msgs__msg__VehicleErrcode1);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pix_robobus_driver_msgs__msg__VehicleErrcode1 * data =
      (pix_robobus_driver_msgs__msg__VehicleErrcode1 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pix_robobus_driver_msgs__msg__VehicleErrcode1__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pix_robobus_driver_msgs__msg__VehicleErrcode1__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__VehicleErrcode1__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
