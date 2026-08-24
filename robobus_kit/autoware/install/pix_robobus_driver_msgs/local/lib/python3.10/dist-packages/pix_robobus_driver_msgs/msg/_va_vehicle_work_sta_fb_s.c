// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pix_robobus_driver_msgs:msg/VaVehicleWorkStaFb.idl
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
#include "pix_robobus_driver_msgs/msg/detail/va_vehicle_work_sta_fb__struct.h"
#include "pix_robobus_driver_msgs/msg/detail/va_vehicle_work_sta_fb__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool pix_robobus_driver_msgs__msg__va_vehicle_work_sta_fb__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[71];
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
    assert(strncmp("pix_robobus_driver_msgs.msg._va_vehicle_work_sta_fb.VaVehicleWorkStaFb", full_classname_dest, 70) == 0);
  }
  pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb * ros_message = _ros_message;
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
  {  // vcu_driving_mode_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_driving_mode_fb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_driving_mode_fb = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_chassis_power_sta_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_chassis_power_sta_fb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_chassis_power_sta_fb = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_chassis_power_dc_sta
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_chassis_power_dc_sta");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_chassis_power_dc_sta = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_remote_connecte_sta
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_remote_connecte_sta");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_remote_connecte_sta = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_acu_connect_sta
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_acu_connect_sta");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_acu_connect_sta = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_chassis_speed_limited_mode_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_chassis_speed_limited_mode_fb");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_chassis_speed_limited_mode_fb = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_chassis_power_limite_sta
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_chassis_power_limite_sta");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_chassis_power_limite_sta = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_sys_eco_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_sys_eco_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_sys_eco_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_chassis_speed_limited_val_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_chassis_speed_limited_val_fb");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vcu_chassis_speed_limited_val_fb = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vcu_chassis_low_power_volt_sta
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_chassis_low_power_volt_sta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vcu_chassis_low_power_volt_sta = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vcu_chassis_e_stop_sta_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_chassis_e_stop_sta_fb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_chassis_e_stop_sta_fb = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_crash_front_sta
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_crash_front_sta");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_crash_front_sta = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_crash_rear_sta
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_crash_rear_sta");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_crash_rear_sta = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_crash_left_sta
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_crash_left_sta");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_crash_left_sta = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_crash_right_sta
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_crash_right_sta");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_crash_right_sta = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_life
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_life");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_life = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_check_sum
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_check_sum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_check_sum = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pix_robobus_driver_msgs__msg__va_vehicle_work_sta_fb__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VaVehicleWorkStaFb */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pix_robobus_driver_msgs.msg._va_vehicle_work_sta_fb");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VaVehicleWorkStaFb");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb * ros_message = (pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb *)raw_ros_message;
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
  {  // vcu_driving_mode_fb
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_driving_mode_fb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_driving_mode_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_chassis_power_sta_fb
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_chassis_power_sta_fb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_chassis_power_sta_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_chassis_power_dc_sta
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_chassis_power_dc_sta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_chassis_power_dc_sta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_remote_connecte_sta
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_remote_connecte_sta ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_remote_connecte_sta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_acu_connect_sta
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_acu_connect_sta ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_acu_connect_sta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_chassis_speed_limited_mode_fb
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_chassis_speed_limited_mode_fb ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_chassis_speed_limited_mode_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_chassis_power_limite_sta
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_chassis_power_limite_sta ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_chassis_power_limite_sta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_sys_eco_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_sys_eco_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_sys_eco_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_chassis_speed_limited_val_fb
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vcu_chassis_speed_limited_val_fb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_chassis_speed_limited_val_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_chassis_low_power_volt_sta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vcu_chassis_low_power_volt_sta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_chassis_low_power_volt_sta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_chassis_e_stop_sta_fb
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_chassis_e_stop_sta_fb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_chassis_e_stop_sta_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_crash_front_sta
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_crash_front_sta ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_crash_front_sta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_crash_rear_sta
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_crash_rear_sta ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_crash_rear_sta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_crash_left_sta
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_crash_left_sta ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_crash_left_sta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_crash_right_sta
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_crash_right_sta ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_crash_right_sta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_life
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_life);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_life", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_check_sum
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_check_sum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_check_sum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
