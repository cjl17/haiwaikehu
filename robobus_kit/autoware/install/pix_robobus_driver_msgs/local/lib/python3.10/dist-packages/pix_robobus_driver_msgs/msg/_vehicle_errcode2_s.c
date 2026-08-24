// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pix_robobus_driver_msgs:msg/VehicleErrcode2.idl
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
#include "pix_robobus_driver_msgs/msg/detail/vehicle_errcode2__struct.h"
#include "pix_robobus_driver_msgs/msg/detail/vehicle_errcode2__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool pix_robobus_driver_msgs__msg__vehicle_errcode2__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("pix_robobus_driver_msgs.msg._vehicle_errcode2.VehicleErrcode2", full_classname_dest, 61) == 0);
  }
  pix_robobus_driver_msgs__msg__VehicleErrcode2 * ros_message = _ros_message;
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
  {  // obc_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "obc_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->obc_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // obc_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "obc_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->obc_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_reserve1
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_reserve1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_reserve1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dp_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "dp_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dp_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dp_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "dp_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dp_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_reserve5
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_reserve5");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_reserve5 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bcm_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "bcm_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bcm_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bcm_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "bcm_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bcm_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_reserve11
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_reserve11");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_reserve11 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dcu_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "dcu_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dcu_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dcu_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "dcu_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dcu_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_reserve17
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_reserve17");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_reserve17 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // avas_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "avas_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->avas_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // avas_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "avas_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->avas_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_reserve18
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_reserve18");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_reserve18 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_reserve19
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_reserve19");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_reserve19 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // iis_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "iis_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->iis_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // iis_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "iis_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->iis_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_reserve20
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_reserve20");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_reserve20 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_reserve26
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_reserve26");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_reserve26 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ac_hardware_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "ac_hardware_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ac_hardware_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ac_network_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "ac_network_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ac_network_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_reserve32
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_reserve32");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_reserve32 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lv_battery_low_voltage_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "lv_battery_low_voltage_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lv_battery_low_voltage_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lv_battery_high_voltage_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "lv_battery_high_voltage_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lv_battery_high_voltage_fault = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pix_robobus_driver_msgs__msg__vehicle_errcode2__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleErrcode2 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pix_robobus_driver_msgs.msg._vehicle_errcode2");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleErrcode2");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pix_robobus_driver_msgs__msg__VehicleErrcode2 * ros_message = (pix_robobus_driver_msgs__msg__VehicleErrcode2 *)raw_ros_message;
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
  {  // obc_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->obc_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obc_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obc_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->obc_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obc_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_reserve1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_reserve1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_reserve1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dp_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dp_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dp_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dp_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dp_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dp_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_reserve5
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_reserve5 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_reserve5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bcm_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bcm_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bcm_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bcm_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bcm_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bcm_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_reserve11
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_reserve11 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_reserve11", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dcu_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dcu_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dcu_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dcu_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dcu_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dcu_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_reserve17
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_reserve17 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_reserve17", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avas_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->avas_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avas_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avas_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->avas_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avas_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_reserve18
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_reserve18 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_reserve18", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_reserve19
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_reserve19 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_reserve19", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // iis_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->iis_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "iis_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // iis_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->iis_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "iis_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_reserve20
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_reserve20 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_reserve20", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_reserve26
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_reserve26 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_reserve26", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ac_hardware_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ac_hardware_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ac_hardware_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ac_network_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ac_network_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ac_network_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_reserve32
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_reserve32 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_reserve32", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lv_battery_low_voltage_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lv_battery_low_voltage_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lv_battery_low_voltage_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lv_battery_high_voltage_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lv_battery_high_voltage_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lv_battery_high_voltage_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
