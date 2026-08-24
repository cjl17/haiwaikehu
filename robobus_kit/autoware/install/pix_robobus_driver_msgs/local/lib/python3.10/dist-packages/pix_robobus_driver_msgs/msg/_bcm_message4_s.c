// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pix_robobus_driver_msgs:msg/BcmMessage4.idl
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
#include "pix_robobus_driver_msgs/msg/detail/bcm_message4__struct.h"
#include "pix_robobus_driver_msgs/msg/detail/bcm_message4__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool pix_robobus_driver_msgs__msg__bcm_message4__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("pix_robobus_driver_msgs.msg._bcm_message4.BcmMessage4", full_classname_dest, 53) == 0);
  }
  pix_robobus_driver_msgs__msg__BcmMessage4 * ros_message = _ros_message;
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
  {  // ltemp
    PyObject * field = PyObject_GetAttrString(_pymsg, "ltemp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ltemp = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ntemp
    PyObject * field = PyObject_GetAttrString(_pymsg, "ntemp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ntemp = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // safe_belt_sta1
    PyObject * field = PyObject_GetAttrString(_pymsg, "safe_belt_sta1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->safe_belt_sta1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // safe_belt_sta2
    PyObject * field = PyObject_GetAttrString(_pymsg, "safe_belt_sta2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->safe_belt_sta2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // safe_belt_sta3
    PyObject * field = PyObject_GetAttrString(_pymsg, "safe_belt_sta3");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->safe_belt_sta3 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // safe_belt_sta4
    PyObject * field = PyObject_GetAttrString(_pymsg, "safe_belt_sta4");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->safe_belt_sta4 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // safe_belt_sta5
    PyObject * field = PyObject_GetAttrString(_pymsg, "safe_belt_sta5");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->safe_belt_sta5 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // safe_belt_sta6
    PyObject * field = PyObject_GetAttrString(_pymsg, "safe_belt_sta6");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->safe_belt_sta6 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // seat_sta1
    PyObject * field = PyObject_GetAttrString(_pymsg, "seat_sta1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->seat_sta1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // seat_sta2
    PyObject * field = PyObject_GetAttrString(_pymsg, "seat_sta2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->seat_sta2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // seat_sta3
    PyObject * field = PyObject_GetAttrString(_pymsg, "seat_sta3");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->seat_sta3 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // seat_sta4
    PyObject * field = PyObject_GetAttrString(_pymsg, "seat_sta4");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->seat_sta4 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // seat_sta5
    PyObject * field = PyObject_GetAttrString(_pymsg, "seat_sta5");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->seat_sta5 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // seat_sta6
    PyObject * field = PyObject_GetAttrString(_pymsg, "seat_sta6");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->seat_sta6 = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pix_robobus_driver_msgs__msg__bcm_message4__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BcmMessage4 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pix_robobus_driver_msgs.msg._bcm_message4");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BcmMessage4");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pix_robobus_driver_msgs__msg__BcmMessage4 * ros_message = (pix_robobus_driver_msgs__msg__BcmMessage4 *)raw_ros_message;
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
  {  // ltemp
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ltemp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ltemp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ntemp
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ntemp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ntemp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safe_belt_sta1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->safe_belt_sta1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safe_belt_sta1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safe_belt_sta2
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->safe_belt_sta2 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safe_belt_sta2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safe_belt_sta3
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->safe_belt_sta3 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safe_belt_sta3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safe_belt_sta4
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->safe_belt_sta4 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safe_belt_sta4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safe_belt_sta5
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->safe_belt_sta5 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safe_belt_sta5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safe_belt_sta6
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->safe_belt_sta6 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safe_belt_sta6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seat_sta1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->seat_sta1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seat_sta1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seat_sta2
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->seat_sta2 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seat_sta2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seat_sta3
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->seat_sta3 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seat_sta3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seat_sta4
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->seat_sta4 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seat_sta4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seat_sta5
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->seat_sta5 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seat_sta5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seat_sta6
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->seat_sta6 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seat_sta6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
