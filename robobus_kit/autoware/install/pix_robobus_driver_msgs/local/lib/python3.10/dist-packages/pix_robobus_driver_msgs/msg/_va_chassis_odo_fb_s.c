// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pix_robobus_driver_msgs:msg/VaChassisOdoFb.idl
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
#include "pix_robobus_driver_msgs/msg/detail/va_chassis_odo_fb__struct.h"
#include "pix_robobus_driver_msgs/msg/detail/va_chassis_odo_fb__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool pix_robobus_driver_msgs__msg__va_chassis_odo_fb__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("pix_robobus_driver_msgs.msg._va_chassis_odo_fb.VaChassisOdoFb", full_classname_dest, 61) == 0);
  }
  pix_robobus_driver_msgs__msg__VaChassisOdoFb * ros_message = _ros_message;
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
  {  // vcu_vehicle_odo
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_vehicle_odo");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_vehicle_odo = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_vehicle_trip
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_vehicle_trip");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vcu_vehicle_trip = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vcu_vehicle_remaining_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_vehicle_remaining_range");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_vehicle_remaining_range = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pix_robobus_driver_msgs__msg__va_chassis_odo_fb__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VaChassisOdoFb */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pix_robobus_driver_msgs.msg._va_chassis_odo_fb");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VaChassisOdoFb");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pix_robobus_driver_msgs__msg__VaChassisOdoFb * ros_message = (pix_robobus_driver_msgs__msg__VaChassisOdoFb *)raw_ros_message;
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
  {  // vcu_vehicle_odo
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_vehicle_odo);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_vehicle_odo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_vehicle_trip
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vcu_vehicle_trip);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_vehicle_trip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_vehicle_remaining_range
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_vehicle_remaining_range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_vehicle_remaining_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
