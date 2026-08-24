// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pix_robobus_driver_msgs:msg/VinResp1.idl
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
#include "pix_robobus_driver_msgs/msg/detail/vin_resp1__struct.h"
#include "pix_robobus_driver_msgs/msg/detail/vin_resp1__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool pix_robobus_driver_msgs__msg__vin_resp1__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("pix_robobus_driver_msgs.msg._vin_resp1.VinResp1", full_classname_dest, 47) == 0);
  }
  pix_robobus_driver_msgs__msg__VinResp1 * ros_message = _ros_message;
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
  {  // vin00
    PyObject * field = PyObject_GetAttrString(_pymsg, "vin00");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vin00 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vin01
    PyObject * field = PyObject_GetAttrString(_pymsg, "vin01");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vin01 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vin02
    PyObject * field = PyObject_GetAttrString(_pymsg, "vin02");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vin02 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vin03
    PyObject * field = PyObject_GetAttrString(_pymsg, "vin03");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vin03 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vin04
    PyObject * field = PyObject_GetAttrString(_pymsg, "vin04");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vin04 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vin05
    PyObject * field = PyObject_GetAttrString(_pymsg, "vin05");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vin05 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vin06
    PyObject * field = PyObject_GetAttrString(_pymsg, "vin06");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vin06 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vin07
    PyObject * field = PyObject_GetAttrString(_pymsg, "vin07");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vin07 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pix_robobus_driver_msgs__msg__vin_resp1__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VinResp1 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pix_robobus_driver_msgs.msg._vin_resp1");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VinResp1");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pix_robobus_driver_msgs__msg__VinResp1 * ros_message = (pix_robobus_driver_msgs__msg__VinResp1 *)raw_ros_message;
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
  {  // vin00
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vin00);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vin00", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vin01
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vin01);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vin01", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vin02
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vin02);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vin02", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vin03
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vin03);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vin03", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vin04
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vin04);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vin04", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vin05
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vin05);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vin05", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vin06
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vin06);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vin06", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vin07
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vin07);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vin07", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
