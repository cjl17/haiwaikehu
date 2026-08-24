// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pix_robobus_driver_msgs:msg/VinResp2.idl
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
#include "pix_robobus_driver_msgs/msg/detail/vin_resp2__struct.h"
#include "pix_robobus_driver_msgs/msg/detail/vin_resp2__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool pix_robobus_driver_msgs__msg__vin_resp2__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("pix_robobus_driver_msgs.msg._vin_resp2.VinResp2", full_classname_dest, 47) == 0);
  }
  pix_robobus_driver_msgs__msg__VinResp2 * ros_message = _ros_message;
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
  {  // vin08
    PyObject * field = PyObject_GetAttrString(_pymsg, "vin08");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vin08 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vin09
    PyObject * field = PyObject_GetAttrString(_pymsg, "vin09");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vin09 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vin10
    PyObject * field = PyObject_GetAttrString(_pymsg, "vin10");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vin10 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vin11
    PyObject * field = PyObject_GetAttrString(_pymsg, "vin11");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vin11 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vin12
    PyObject * field = PyObject_GetAttrString(_pymsg, "vin12");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vin12 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vin13
    PyObject * field = PyObject_GetAttrString(_pymsg, "vin13");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vin13 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vin14
    PyObject * field = PyObject_GetAttrString(_pymsg, "vin14");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vin14 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vin15
    PyObject * field = PyObject_GetAttrString(_pymsg, "vin15");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vin15 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pix_robobus_driver_msgs__msg__vin_resp2__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VinResp2 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pix_robobus_driver_msgs.msg._vin_resp2");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VinResp2");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pix_robobus_driver_msgs__msg__VinResp2 * ros_message = (pix_robobus_driver_msgs__msg__VinResp2 *)raw_ros_message;
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
  {  // vin08
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vin08);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vin08", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vin09
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vin09);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vin09", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vin10
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vin10);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vin10", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vin11
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vin11);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vin11", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vin12
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vin12);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vin12", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vin13
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vin13);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vin13", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vin14
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vin14);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vin14", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vin15
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vin15);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vin15", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
