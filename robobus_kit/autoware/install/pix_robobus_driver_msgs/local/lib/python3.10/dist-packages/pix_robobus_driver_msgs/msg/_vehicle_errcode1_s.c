// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pix_robobus_driver_msgs:msg/VehicleErrcode1.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "pix_robobus_driver_msgs/msg/detail/vehicle_errcode1__struct.h"
#include "pix_robobus_driver_msgs/msg/detail/vehicle_errcode1__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool pix_robobus_driver_msgs__msg__vehicle_errcode1__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("pix_robobus_driver_msgs.msg._vehicle_errcode1.VehicleErrcode1", full_classname_dest, 61) == 0);
  }
  pix_robobus_driver_msgs__msg__VehicleErrcode1 * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // flmc_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "flmc_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flmc_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // flmc_tem_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "flmc_tem_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flmc_tem_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // flm_tem_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "flm_tem_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flm_tem_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rlmc_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "rlmc_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rlmc_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rlmc_tem_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "rlmc_tem_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rlmc_tem_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rlm_tem_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "rlm_tem_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rlm_tem_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // frmc_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "frmc_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->frmc_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // frmc_tem_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "frmc_tem_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->frmc_tem_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // frm_tem_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "frm_tem_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->frm_tem_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rrmc_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "rrmc_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rrmc_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rrmc_tem_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "rrmc_tem_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rrmc_tem_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rrm_tem_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "rrm_tem_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rrm_tem_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // flmc_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "flmc_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flmc_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // frmc_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "frmc_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->frmc_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rlmc_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "rlmc_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rlmc_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rrmc_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "rrmc_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rrmc_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fsteer_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "fsteer_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fsteer_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rsteer_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "rsteer_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rsteer_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fsteer_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "fsteer_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fsteer_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rsteer_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "rsteer_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rsteer_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // brake_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->brake_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // brake_high_tem_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_high_tem_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->brake_high_tem_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // brake_luid_level_low
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_luid_level_low");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->brake_luid_level_low = (Py_True == field);
    Py_DECREF(field);
  }
  {  // brake_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->brake_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // park_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "park_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->park_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // park_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "park_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->park_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rcu_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "rcu_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rcu_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rcu_weak_signal
    PyObject * field = PyObject_GetAttrString(_pymsg, "rcu_weak_signal");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rcu_weak_signal = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rcu_elec_low_alarm
    PyObject * field = PyObject_GetAttrString(_pymsg, "rcu_elec_low_alarm");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rcu_elec_low_alarm = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reserve1
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserve1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reserve1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reserve2
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserve2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reserve2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_insulationfault
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_insulationfault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_insulationfault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_ocv_cell
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_ocv_cell");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_ocv_cell = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_odv_cell
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_odv_cell");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_odv_cell = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_ocv_batt
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_ocv_batt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_ocv_batt = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_odv_batt
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_odv_batt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_odv_batt = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_cell_volt_diff
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_cell_volt_diff");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_cell_volt_diff = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_temph
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_temph");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_temph = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_temphl
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_temphl");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_temphl = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_temph_diff
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_temph_diff");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_temph_diff = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_warchg_overcurrent
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_warchg_overcurrent");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_warchg_overcurrent = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_soch
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_soch");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_soch = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_socl
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_socl");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_socl = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_time_of_heating_too_long
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_time_of_heating_too_long");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_time_of_heating_too_long = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_soc_break
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_soc_break");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_soc_break = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_dis_char_over_cur
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_dis_char_over_cur");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_dis_char_over_cur = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_char_over_cur_slow
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_char_over_cur_slow");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_char_over_cur_slow = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bmsfast_char_over_cur
    PyObject * field = PyObject_GetAttrString(_pymsg, "bmsfast_char_over_cur");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bmsfast_char_over_cur = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_alm_sense_cell
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_alm_sense_cell");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_alm_sense_cell = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_alm_sense_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_alm_sense_temp");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_alm_sense_temp = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_alm_sense_curr
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_alm_sense_curr");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_alm_sense_curr = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_hvil
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_hvil");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_hvil = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_war_incan_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_war_incan_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_war_incan_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_lst_com_withobc
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_lst_com_withobc");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_lst_com_withobc = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_lst_com_with_vcu
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_lst_com_with_vcu");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_lst_com_with_vcu = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_precharger_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_precharger_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_precharger_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bmspos_relayconglutination
    PyObject * field = PyObject_GetAttrString(_pymsg, "bmspos_relayconglutination");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bmspos_relayconglutination = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_neg_relay_conglutination
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_neg_relay_conglutination");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_neg_relay_conglutination = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_reserve3
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_reserve3");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_reserve3 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_reserve4
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_reserve4");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_reserve4 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dcdc_high_tem_alarm
    PyObject * field = PyObject_GetAttrString(_pymsg, "dcdc_high_tem_alarm");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dcdc_high_tem_alarm = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dcdc_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "dcdc_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dcdc_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dcdc_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "dcdc_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dcdc_network_fault = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pix_robobus_driver_msgs__msg__vehicle_errcode1__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleErrcode1 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pix_robobus_driver_msgs.msg._vehicle_errcode1");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleErrcode1");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pix_robobus_driver_msgs__msg__VehicleErrcode1 * ros_message = (pix_robobus_driver_msgs__msg__VehicleErrcode1 *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flmc_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flmc_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flmc_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flmc_tem_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flmc_tem_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flmc_tem_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flm_tem_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flm_tem_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flm_tem_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rlmc_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rlmc_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rlmc_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rlmc_tem_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rlmc_tem_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rlmc_tem_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rlm_tem_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rlm_tem_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rlm_tem_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frmc_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->frmc_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frmc_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frmc_tem_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->frmc_tem_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frmc_tem_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frm_tem_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->frm_tem_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frm_tem_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rrmc_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rrmc_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rrmc_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rrmc_tem_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rrmc_tem_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rrmc_tem_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rrm_tem_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rrm_tem_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rrm_tem_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flmc_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flmc_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flmc_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frmc_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->frmc_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frmc_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rlmc_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rlmc_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rlmc_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rrmc_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rrmc_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rrmc_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fsteer_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fsteer_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fsteer_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rsteer_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rsteer_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rsteer_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fsteer_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fsteer_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fsteer_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rsteer_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rsteer_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rsteer_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->brake_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_high_tem_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->brake_high_tem_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_high_tem_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_luid_level_low
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->brake_luid_level_low ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_luid_level_low", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->brake_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // park_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->park_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "park_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // park_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->park_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "park_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rcu_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rcu_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rcu_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rcu_weak_signal
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rcu_weak_signal ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rcu_weak_signal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rcu_elec_low_alarm
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rcu_elec_low_alarm ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rcu_elec_low_alarm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserve1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reserve1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserve1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserve2
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reserve2 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserve2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_insulationfault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_insulationfault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_insulationfault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_ocv_cell
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_ocv_cell ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_ocv_cell", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_odv_cell
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_odv_cell ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_odv_cell", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_ocv_batt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_ocv_batt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_ocv_batt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_odv_batt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_odv_batt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_odv_batt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_cell_volt_diff
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_cell_volt_diff ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_cell_volt_diff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_temph
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_temph ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_temph", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_temphl
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_temphl ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_temphl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_temph_diff
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_temph_diff ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_temph_diff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_warchg_overcurrent
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_warchg_overcurrent ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_warchg_overcurrent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_soch
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_soch ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_soch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_socl
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_socl ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_socl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_time_of_heating_too_long
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_time_of_heating_too_long ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_time_of_heating_too_long", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_soc_break
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_soc_break ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_soc_break", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_dis_char_over_cur
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_dis_char_over_cur ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_dis_char_over_cur", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_char_over_cur_slow
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_char_over_cur_slow ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_char_over_cur_slow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bmsfast_char_over_cur
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bmsfast_char_over_cur ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bmsfast_char_over_cur", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_alm_sense_cell
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_alm_sense_cell ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_alm_sense_cell", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_alm_sense_temp
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_alm_sense_temp ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_alm_sense_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_alm_sense_curr
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_alm_sense_curr ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_alm_sense_curr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_hvil
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_hvil ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_hvil", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_war_incan_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_war_incan_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_war_incan_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_lst_com_withobc
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_lst_com_withobc ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_lst_com_withobc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_lst_com_with_vcu
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_lst_com_with_vcu ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_lst_com_with_vcu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_precharger_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_precharger_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_precharger_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bmspos_relayconglutination
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bmspos_relayconglutination ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bmspos_relayconglutination", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_neg_relay_conglutination
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_neg_relay_conglutination ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_neg_relay_conglutination", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_reserve3
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_reserve3 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_reserve3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_reserve4
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_reserve4 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_reserve4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dcdc_high_tem_alarm
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dcdc_high_tem_alarm ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dcdc_high_tem_alarm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dcdc_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dcdc_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dcdc_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dcdc_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dcdc_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dcdc_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
