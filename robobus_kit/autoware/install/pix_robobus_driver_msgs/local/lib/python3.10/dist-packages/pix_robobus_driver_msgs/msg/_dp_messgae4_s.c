// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pix_robobus_driver_msgs:msg/DpMessgae4.idl
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
#include "pix_robobus_driver_msgs/msg/detail/dp_messgae4__struct.h"
#include "pix_robobus_driver_msgs/msg/detail/dp_messgae4__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool pix_robobus_driver_msgs__msg__dp_messgae4__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("pix_robobus_driver_msgs.msg._dp_messgae4.DpMessgae4", full_classname_dest, 51) == 0);
  }
  pix_robobus_driver_msgs__msg__DpMessgae4 * ros_message = _ros_message;
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
  {  // pdu_total_cur
    PyObject * field = PyObject_GetAttrString(_pymsg, "pdu_total_cur");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pdu_total_cur = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // dp_lowbat_vol
    PyObject * field = PyObject_GetAttrString(_pymsg, "dp_lowbat_vol");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dp_lowbat_vol = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pd_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "pd_temp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pd_temp = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // auto_current1
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_current1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->auto_current1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // dp_errorcode
    PyObject * field = PyObject_GetAttrString(_pymsg, "dp_errorcode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dp_errorcode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // on_sta
    PyObject * field = PyObject_GetAttrString(_pymsg, "on_sta");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->on_sta = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // auto_current2
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_current2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->auto_current2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pix_robobus_driver_msgs__msg__dp_messgae4__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DpMessgae4 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pix_robobus_driver_msgs.msg._dp_messgae4");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DpMessgae4");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pix_robobus_driver_msgs__msg__DpMessgae4 * ros_message = (pix_robobus_driver_msgs__msg__DpMessgae4 *)raw_ros_message;
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
  {  // pdu_total_cur
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pdu_total_cur);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pdu_total_cur", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dp_lowbat_vol
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dp_lowbat_vol);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dp_lowbat_vol", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pd_temp
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pd_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pd_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_current1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->auto_current1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_current1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dp_errorcode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->dp_errorcode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dp_errorcode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // on_sta
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->on_sta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "on_sta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_current2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->auto_current2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_current2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
