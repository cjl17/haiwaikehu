// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pix_robobus_driver_msgs:msg/VaVehicleFltSta.idl
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
#include "pix_robobus_driver_msgs/msg/detail/va_vehicle_flt_sta__struct.h"
#include "pix_robobus_driver_msgs/msg/detail/va_vehicle_flt_sta__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool pix_robobus_driver_msgs__msg__va_vehicle_flt_sta__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("pix_robobus_driver_msgs.msg._va_vehicle_flt_sta.VaVehicleFltSta", full_classname_dest, 63) == 0);
  }
  pix_robobus_driver_msgs__msg__VaVehicleFltSta * ros_message = _ros_message;
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
  {  // vcu_sys_motor_over_temp_sta
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_sys_motor_over_temp_sta");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_sys_motor_over_temp_sta = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_sys_bms_over_temp_sta
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_sys_bms_over_temp_sta");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_sys_bms_over_temp_sta = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_sys_brake_over_temp_sta
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_sys_brake_over_temp_sta");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_sys_brake_over_temp_sta = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_sys_steer_over_temp_sta
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_sys_steer_over_temp_sta");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_sys_steer_over_temp_sta = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_sys_under_volt
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_sys_under_volt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_sys_under_volt = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_sys_flt
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_sys_flt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_sys_flt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_sys_brake_flt
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_sys_brake_flt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_sys_brake_flt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_sys_parking_flt
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_sys_parking_flt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_sys_parking_flt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_sys_steer_front_flt
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_sys_steer_front_flt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_sys_steer_front_flt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_sys_steer_back_flt
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_sys_steer_back_flt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_sys_steer_back_flt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_sys_motor_lf_flt
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_sys_motor_lf_flt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_sys_motor_lf_flt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_sys_motor_rf_flt
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_sys_motor_rf_flt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_sys_motor_rf_flt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_sys_motor_lr_flt
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_sys_motor_lr_flt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_sys_motor_lr_flt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_sys_motor_rr_flt
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_sys_motor_rr_flt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_sys_motor_rr_flt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_sys_bms_flt
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_sys_bms_flt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_sys_bms_flt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_sys_dc_flt
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_sys_dc_flt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_sys_dc_flt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_sys_door_flt
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_sys_door_flt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_sys_door_flt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_sys_dpm_flt
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_sys_dpm_flt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_sys_dpm_flt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_sys_bcm_flt
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_sys_bcm_flt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_sys_bcm_flt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_vehicle_flt_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_vehicle_flt_level");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_vehicle_flt_level = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_sys_flt_reserve1
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_sys_flt_reserve1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_sys_flt_reserve1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pix_robobus_driver_msgs__msg__va_vehicle_flt_sta__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VaVehicleFltSta */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pix_robobus_driver_msgs.msg._va_vehicle_flt_sta");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VaVehicleFltSta");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pix_robobus_driver_msgs__msg__VaVehicleFltSta * ros_message = (pix_robobus_driver_msgs__msg__VaVehicleFltSta *)raw_ros_message;
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
  {  // vcu_sys_motor_over_temp_sta
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_sys_motor_over_temp_sta ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_sys_motor_over_temp_sta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_sys_bms_over_temp_sta
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_sys_bms_over_temp_sta ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_sys_bms_over_temp_sta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_sys_brake_over_temp_sta
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_sys_brake_over_temp_sta ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_sys_brake_over_temp_sta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_sys_steer_over_temp_sta
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_sys_steer_over_temp_sta ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_sys_steer_over_temp_sta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_sys_under_volt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_sys_under_volt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_sys_under_volt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_sys_flt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_sys_flt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_sys_flt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_sys_brake_flt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_sys_brake_flt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_sys_brake_flt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_sys_parking_flt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_sys_parking_flt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_sys_parking_flt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_sys_steer_front_flt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_sys_steer_front_flt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_sys_steer_front_flt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_sys_steer_back_flt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_sys_steer_back_flt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_sys_steer_back_flt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_sys_motor_lf_flt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_sys_motor_lf_flt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_sys_motor_lf_flt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_sys_motor_rf_flt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_sys_motor_rf_flt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_sys_motor_rf_flt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_sys_motor_lr_flt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_sys_motor_lr_flt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_sys_motor_lr_flt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_sys_motor_rr_flt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_sys_motor_rr_flt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_sys_motor_rr_flt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_sys_bms_flt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_sys_bms_flt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_sys_bms_flt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_sys_dc_flt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_sys_dc_flt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_sys_dc_flt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_sys_door_flt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_sys_door_flt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_sys_door_flt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_sys_dpm_flt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_sys_dpm_flt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_sys_dpm_flt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_sys_bcm_flt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_sys_bcm_flt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_sys_bcm_flt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_vehicle_flt_level
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_vehicle_flt_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_vehicle_flt_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_sys_flt_reserve1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_sys_flt_reserve1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_sys_flt_reserve1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
