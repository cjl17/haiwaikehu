// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pix_robobus_driver_msgs:msg/AutoVcuMessage1.idl
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
#include "pix_robobus_driver_msgs/msg/detail/auto_vcu_message1__struct.h"
#include "pix_robobus_driver_msgs/msg/detail/auto_vcu_message1__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool pix_robobus_driver_msgs__msg__auto_vcu_message1__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("pix_robobus_driver_msgs.msg._auto_vcu_message1.AutoVcuMessage1", full_classname_dest, 62) == 0);
  }
  pix_robobus_driver_msgs__msg__AutoVcuMessage1 * ros_message = _ros_message;
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
  {  // defrost_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "defrost_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->defrost_ctrl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // air_cod_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "air_cod_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->air_cod_ctrl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // air_cod_gear_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "air_cod_gear_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->air_cod_gear_ctrl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // air_cod_mod_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "air_cod_mod_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->air_cod_mod_ctrl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // air_cod_temp_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "air_cod_temp_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->air_cod_temp_ctrl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // in_loop_mod_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_loop_mod_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->in_loop_mod_ctrl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pix_robobus_driver_msgs__msg__auto_vcu_message1__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AutoVcuMessage1 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pix_robobus_driver_msgs.msg._auto_vcu_message1");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AutoVcuMessage1");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pix_robobus_driver_msgs__msg__AutoVcuMessage1 * ros_message = (pix_robobus_driver_msgs__msg__AutoVcuMessage1 *)raw_ros_message;
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
  {  // defrost_ctrl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->defrost_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "defrost_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // air_cod_ctrl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->air_cod_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "air_cod_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // air_cod_gear_ctrl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->air_cod_gear_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "air_cod_gear_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // air_cod_mod_ctrl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->air_cod_mod_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "air_cod_mod_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // air_cod_temp_ctrl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->air_cod_temp_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "air_cod_temp_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // in_loop_mod_ctrl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->in_loop_mod_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_loop_mod_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
