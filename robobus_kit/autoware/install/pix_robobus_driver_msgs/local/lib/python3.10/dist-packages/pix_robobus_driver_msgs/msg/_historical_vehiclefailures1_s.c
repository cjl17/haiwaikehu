// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pix_robobus_driver_msgs:msg/HistoricalVehiclefailures1.idl
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
#include "pix_robobus_driver_msgs/msg/detail/historical_vehiclefailures1__struct.h"
#include "pix_robobus_driver_msgs/msg/detail/historical_vehiclefailures1__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool pix_robobus_driver_msgs__msg__historical_vehiclefailures1__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[84];
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
    assert(strncmp("pix_robobus_driver_msgs.msg._historical_vehiclefailures1.HistoricalVehiclefailures1", full_classname_dest, 83) == 0);
  }
  pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1 * ros_message = _ros_message;
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
  {  // hflmc_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hflmc_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hflmc_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hflmc_tem_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hflmc_tem_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hflmc_tem_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hflm_tem_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hflm_tem_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hflm_tem_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hrlmc_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hrlmc_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hrlmc_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hrlmc_tem_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hrlmc_tem_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hrlmc_tem_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hrlm_tem_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hrlm_tem_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hrlm_tem_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hfrmc_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hfrmc_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hfrmc_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hfrmc_tem_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hfrmc_tem_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hfrmc_tem_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hfrm_tem_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hfrm_tem_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hfrm_tem_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hrrmc_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hrrmc_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hrrmc_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hrrmc_tem_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hrrmc_tem_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hrrmc_tem_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hrrm_tem_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hrrm_tem_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hrrm_tem_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hflmc_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hflmc_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hflmc_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hfrmc_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hfrmc_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hfrmc_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hrlmc_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hrlmc_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hrlmc_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hrrmc_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hrrmc_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hrrmc_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hfsteer_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hfsteer_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hfsteer_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hrsteer_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hrsteer_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hrsteer_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hfsteer_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hfsteer_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hfsteer_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hrsteer_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hrsteer_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hrsteer_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbrake_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbrake_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbrake_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbrake_high_tem_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbrake_high_tem_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbrake_high_tem_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbrake_luid_level_low
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbrake_luid_level_low");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbrake_luid_level_low = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbrake_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbrake_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbrake_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hpark_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hpark_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hpark_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hpark_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hpark_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hpark_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hrcu_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hrcu_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hrcu_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hrcu_weak_signal
    PyObject * field = PyObject_GetAttrString(_pymsg, "hrcu_weak_signal");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hrcu_weak_signal = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hrcu_elec_low_alarm
    PyObject * field = PyObject_GetAttrString(_pymsg, "hrcu_elec_low_alarm");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hrcu_elec_low_alarm = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_insulationfault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_insulationfault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_insulationfault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_ocv_cell
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_ocv_cell");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_ocv_cell = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_odv_cell
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_odv_cell");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_odv_cell = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_ocv_batt
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_ocv_batt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_ocv_batt = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_odv_batt
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_odv_batt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_odv_batt = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_cell_volt_diff
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_cell_volt_diff");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_cell_volt_diff = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_temph
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_temph");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_temph = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_temphl
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_temphl");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_temphl = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_temph_diff
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_temph_diff");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_temph_diff = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_warchg_overcurrent
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_warchg_overcurrent");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_warchg_overcurrent = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_soch
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_soch");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_soch = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_socl
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_socl");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_socl = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_time_of_heating_too_long
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_time_of_heating_too_long");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_time_of_heating_too_long = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_soc_break
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_soc_break");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_soc_break = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_dis_char_over_cur
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_dis_char_over_cur");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_dis_char_over_cur = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_char_over_cur_slow
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_char_over_cur_slow");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_char_over_cur_slow = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbmsfast_char_over_cur
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbmsfast_char_over_cur");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbmsfast_char_over_cur = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_alm_sense_cell
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_alm_sense_cell");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_alm_sense_cell = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_alm_sense_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_alm_sense_temp");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_alm_sense_temp = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_alm_sense_curr
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_alm_sense_curr");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_alm_sense_curr = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_hvil
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_hvil");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_hvil = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_war_incan_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_war_incan_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_war_incan_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_lst_com_withobc
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_lst_com_withobc");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_lst_com_withobc = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_lst_com_with_vcu
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_lst_com_with_vcu");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_lst_com_with_vcu = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_precharger_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_precharger_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_precharger_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbmspos_relayconglutination
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbmspos_relayconglutination");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbmspos_relayconglutination = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbms_neg_relay_conglutination
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbms_neg_relay_conglutination");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbms_neg_relay_conglutination = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hdcdc_high_tem_alarm
    PyObject * field = PyObject_GetAttrString(_pymsg, "hdcdc_high_tem_alarm");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hdcdc_high_tem_alarm = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hdcdc_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hdcdc_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hdcdc_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hdcdc_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hdcdc_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hdcdc_network_fault = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pix_robobus_driver_msgs__msg__historical_vehiclefailures1__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HistoricalVehiclefailures1 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pix_robobus_driver_msgs.msg._historical_vehiclefailures1");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HistoricalVehiclefailures1");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1 * ros_message = (pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1 *)raw_ros_message;
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
  {  // hflmc_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hflmc_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hflmc_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hflmc_tem_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hflmc_tem_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hflmc_tem_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hflm_tem_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hflm_tem_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hflm_tem_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hrlmc_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hrlmc_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hrlmc_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hrlmc_tem_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hrlmc_tem_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hrlmc_tem_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hrlm_tem_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hrlm_tem_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hrlm_tem_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hfrmc_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hfrmc_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hfrmc_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hfrmc_tem_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hfrmc_tem_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hfrmc_tem_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hfrm_tem_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hfrm_tem_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hfrm_tem_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hrrmc_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hrrmc_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hrrmc_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hrrmc_tem_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hrrmc_tem_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hrrmc_tem_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hrrm_tem_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hrrm_tem_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hrrm_tem_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hflmc_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hflmc_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hflmc_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hfrmc_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hfrmc_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hfrmc_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hrlmc_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hrlmc_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hrlmc_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hrrmc_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hrrmc_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hrrmc_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hfsteer_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hfsteer_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hfsteer_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hrsteer_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hrsteer_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hrsteer_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hfsteer_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hfsteer_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hfsteer_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hrsteer_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hrsteer_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hrsteer_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbrake_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbrake_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbrake_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbrake_high_tem_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbrake_high_tem_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbrake_high_tem_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbrake_luid_level_low
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbrake_luid_level_low ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbrake_luid_level_low", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbrake_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbrake_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbrake_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hpark_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hpark_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hpark_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hpark_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hpark_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hpark_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hrcu_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hrcu_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hrcu_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hrcu_weak_signal
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hrcu_weak_signal ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hrcu_weak_signal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hrcu_elec_low_alarm
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hrcu_elec_low_alarm ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hrcu_elec_low_alarm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_insulationfault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_insulationfault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_insulationfault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_ocv_cell
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_ocv_cell ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_ocv_cell", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_odv_cell
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_odv_cell ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_odv_cell", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_ocv_batt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_ocv_batt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_ocv_batt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_odv_batt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_odv_batt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_odv_batt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_cell_volt_diff
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_cell_volt_diff ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_cell_volt_diff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_temph
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_temph ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_temph", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_temphl
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_temphl ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_temphl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_temph_diff
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_temph_diff ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_temph_diff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_warchg_overcurrent
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_warchg_overcurrent ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_warchg_overcurrent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_soch
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_soch ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_soch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_socl
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_socl ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_socl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_time_of_heating_too_long
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_time_of_heating_too_long ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_time_of_heating_too_long", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_soc_break
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_soc_break ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_soc_break", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_dis_char_over_cur
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_dis_char_over_cur ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_dis_char_over_cur", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_char_over_cur_slow
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_char_over_cur_slow ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_char_over_cur_slow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbmsfast_char_over_cur
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbmsfast_char_over_cur ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbmsfast_char_over_cur", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_alm_sense_cell
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_alm_sense_cell ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_alm_sense_cell", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_alm_sense_temp
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_alm_sense_temp ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_alm_sense_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_alm_sense_curr
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_alm_sense_curr ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_alm_sense_curr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_hvil
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_hvil ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_hvil", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_war_incan_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_war_incan_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_war_incan_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_lst_com_withobc
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_lst_com_withobc ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_lst_com_withobc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_lst_com_with_vcu
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_lst_com_with_vcu ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_lst_com_with_vcu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_precharger_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_precharger_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_precharger_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbmspos_relayconglutination
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbmspos_relayconglutination ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbmspos_relayconglutination", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbms_neg_relay_conglutination
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbms_neg_relay_conglutination ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbms_neg_relay_conglutination", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hdcdc_high_tem_alarm
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hdcdc_high_tem_alarm ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hdcdc_high_tem_alarm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hdcdc_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hdcdc_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hdcdc_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hdcdc_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hdcdc_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hdcdc_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
