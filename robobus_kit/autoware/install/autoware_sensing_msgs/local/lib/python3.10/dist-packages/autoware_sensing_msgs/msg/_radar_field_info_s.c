// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_sensing_msgs:msg/RadarFieldInfo.idl
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
#include "autoware_sensing_msgs/msg/detail/radar_field_info__struct.h"
#include "autoware_sensing_msgs/msg/detail/radar_field_info__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__string__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__string__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_sensing_msgs__msg__radar_field_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("autoware_sensing_msgs.msg._radar_field_info.RadarFieldInfo", full_classname_dest, 58) == 0);
  }
  autoware_sensing_msgs__msg__RadarFieldInfo * ros_message = _ros_message;
  {  // field_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "field_name");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__string__convert_from_py(field, &ros_message->field_name)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // min_value_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_value_available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->min_value_available = (Py_True == field);
    Py_DECREF(field);
  }
  {  // max_value_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_value_available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->max_value_available = (Py_True == field);
    Py_DECREF(field);
  }
  {  // resolution_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "resolution_available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->resolution_available = (Py_True == field);
    Py_DECREF(field);
  }
  {  // min_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_value = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_value = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // resolution
    PyObject * field = PyObject_GetAttrString(_pymsg, "resolution");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->resolution = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_sensing_msgs__msg__radar_field_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RadarFieldInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_sensing_msgs.msg._radar_field_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RadarFieldInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_sensing_msgs__msg__RadarFieldInfo * ros_message = (autoware_sensing_msgs__msg__RadarFieldInfo *)raw_ros_message;
  {  // field_name
    PyObject * field = NULL;
    field = std_msgs__msg__string__convert_to_py(&ros_message->field_name);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "field_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_value_available
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->min_value_available ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_value_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_value_available
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->max_value_available ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_value_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // resolution_available
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->resolution_available ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "resolution_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // resolution
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->resolution);
    {
      int rc = PyObject_SetAttrString(_pymessage, "resolution", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
