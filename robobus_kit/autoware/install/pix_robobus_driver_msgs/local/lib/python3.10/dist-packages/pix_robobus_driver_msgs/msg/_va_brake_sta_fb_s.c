// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pix_robobus_driver_msgs:msg/VaBrakeStaFb.idl
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
#include "pix_robobus_driver_msgs/msg/detail/va_brake_sta_fb__struct.h"
#include "pix_robobus_driver_msgs/msg/detail/va_brake_sta_fb__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool pix_robobus_driver_msgs__msg__va_brake_sta_fb__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("pix_robobus_driver_msgs.msg._va_brake_sta_fb.VaBrakeStaFb", full_classname_dest, 57) == 0);
  }
  pix_robobus_driver_msgs__msg__VaBrakeStaFb * ros_message = _ros_message;
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
  {  // vcu_chassis_brake_en_sta
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_chassis_brake_en_sta");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_chassis_brake_en_sta = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_vehicle_brake_lamp_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_vehicle_brake_lamp_fb");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_vehicle_brake_lamp_fb = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_chassis_epb_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_chassis_epb_fb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_chassis_epb_fb = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_chassis_brake_communication_lost
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_chassis_brake_communication_lost");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_chassis_brake_communication_lost = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_chassis_brake_padl_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_chassis_brake_padl_fb");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vcu_chassis_brake_padl_fb = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vcu_brake_pedal_req_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_brake_pedal_req_fb");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_brake_pedal_req_fb = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_aeb_en_sta_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_aeb_en_sta_fb");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_aeb_en_sta_fb = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_aeb_trigger_sta_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_aeb_trigger_sta_fb");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_aeb_trigger_sta_fb = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_chassis_brake_pressure_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_chassis_brake_pressure_fb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_chassis_brake_pressure_fb = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_brake_life
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_brake_life");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_brake_life = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_brake_check_sta
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_brake_check_sta");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_brake_check_sta = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pix_robobus_driver_msgs__msg__va_brake_sta_fb__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VaBrakeStaFb */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pix_robobus_driver_msgs.msg._va_brake_sta_fb");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VaBrakeStaFb");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pix_robobus_driver_msgs__msg__VaBrakeStaFb * ros_message = (pix_robobus_driver_msgs__msg__VaBrakeStaFb *)raw_ros_message;
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
  {  // vcu_chassis_brake_en_sta
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_chassis_brake_en_sta ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_chassis_brake_en_sta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_vehicle_brake_lamp_fb
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_vehicle_brake_lamp_fb ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_vehicle_brake_lamp_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_chassis_epb_fb
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_chassis_epb_fb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_chassis_epb_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_chassis_brake_communication_lost
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_chassis_brake_communication_lost ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_chassis_brake_communication_lost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_chassis_brake_padl_fb
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vcu_chassis_brake_padl_fb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_chassis_brake_padl_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_brake_pedal_req_fb
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_brake_pedal_req_fb ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_brake_pedal_req_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_aeb_en_sta_fb
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_aeb_en_sta_fb ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_aeb_en_sta_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_aeb_trigger_sta_fb
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_aeb_trigger_sta_fb ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_aeb_trigger_sta_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_chassis_brake_pressure_fb
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_chassis_brake_pressure_fb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_chassis_brake_pressure_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_brake_life
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_brake_life);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_brake_life", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_brake_check_sta
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_brake_check_sta ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_brake_check_sta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
