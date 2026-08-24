// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pix_robobus_driver_msgs:msg/HistoricalVehiclefailures2.idl
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
#include "pix_robobus_driver_msgs/msg/detail/historical_vehiclefailures2__struct.h"
#include "pix_robobus_driver_msgs/msg/detail/historical_vehiclefailures2__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool pix_robobus_driver_msgs__msg__historical_vehiclefailures2__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("pix_robobus_driver_msgs.msg._historical_vehiclefailures2.HistoricalVehiclefailures2", full_classname_dest, 83) == 0);
  }
  pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2 * ros_message = _ros_message;
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
  {  // hobc_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hobc_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hobc_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hobc_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hobc_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hobc_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hdp_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hdp_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hdp_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hdp_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hdp_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hdp_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbcm_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbcm_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbcm_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hbcm_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hbcm_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hbcm_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hdcu_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hdcu_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hdcu_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hdcu_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hdcu_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hdcu_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // havas_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "havas_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->havas_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // havas_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "havas_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->havas_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hlis_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hlis_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hlis_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // h_iis_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "h_iis_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->h_iis_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hac_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hac_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hac_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hac_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "hac_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hac_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // h_iv_battery_low_voltage_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "h_iv_battery_low_voltage_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->h_iv_battery_low_voltage_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // h_iv_battery_high_voltage_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "h_iv_battery_high_voltage_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->h_iv_battery_high_voltage_fault = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pix_robobus_driver_msgs__msg__historical_vehiclefailures2__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HistoricalVehiclefailures2 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pix_robobus_driver_msgs.msg._historical_vehiclefailures2");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HistoricalVehiclefailures2");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2 * ros_message = (pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2 *)raw_ros_message;
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
  {  // hobc_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hobc_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hobc_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hobc_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hobc_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hobc_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hdp_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hdp_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hdp_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hdp_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hdp_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hdp_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbcm_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbcm_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbcm_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hbcm_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hbcm_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hbcm_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hdcu_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hdcu_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hdcu_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hdcu_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hdcu_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hdcu_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // havas_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->havas_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "havas_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // havas_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->havas_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "havas_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hlis_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hlis_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hlis_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // h_iis_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->h_iis_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "h_iis_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hac_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hac_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hac_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hac_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hac_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hac_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // h_iv_battery_low_voltage_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->h_iv_battery_low_voltage_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "h_iv_battery_low_voltage_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // h_iv_battery_high_voltage_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->h_iv_battery_high_voltage_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "h_iv_battery_high_voltage_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
