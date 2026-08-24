// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pix_robobus_driver_msgs:msg/VaVehicleStaFb.idl
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
#include "pix_robobus_driver_msgs/msg/detail/va_vehicle_sta_fb__struct.h"
#include "pix_robobus_driver_msgs/msg/detail/va_vehicle_sta_fb__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool pix_robobus_driver_msgs__msg__va_vehicle_sta_fb__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("pix_robobus_driver_msgs.msg._va_vehicle_sta_fb.VaVehicleStaFb", full_classname_dest, 61) == 0);
  }
  pix_robobus_driver_msgs__msg__VaVehicleStaFb * ros_message = _ros_message;
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
  {  // vcu_vehicle_pos_lamp_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_vehicle_pos_lamp_fb");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_vehicle_pos_lamp_fb = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_vehicle_head_lamp_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_vehicle_head_lamp_fb");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_vehicle_head_lamp_fb = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_vehicle_left_lamp_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_vehicle_left_lamp_fb");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_vehicle_left_lamp_fb = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_vehicle_right_lamp_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_vehicle_right_lamp_fb");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_vehicle_right_lamp_fb = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_vehicle_high_beam_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_vehicle_high_beam_fb");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_vehicle_high_beam_fb = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_vehicle_fog_lamp_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_vehicle_fog_lamp_fb");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_vehicle_fog_lamp_fb = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_vehicle_hazard_war_lamp_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_vehicle_hazard_war_lamp_fb");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_vehicle_hazard_war_lamp_fb = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_vehicle_body_lamp_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_vehicle_body_lamp_fb");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_vehicle_body_lamp_fb = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vcu_vehicle_read_lamp_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_vehicle_read_lamp_fb");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vcu_vehicle_read_lamp_fb = (Py_True == field);
    Py_DECREF(field);
  }
  {  // acu_vehicle_window_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "acu_vehicle_window_fb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acu_vehicle_window_fb = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_vehicle_door_sta_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_vehicle_door_sta_fb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_vehicle_door_sta_fb = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_vehicle_wipers_sta_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_vehicle_wipers_sta_fb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_vehicle_wipers_sta_fb = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_vehicle_safety_belt1
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_vehicle_safety_belt1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_vehicle_safety_belt1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_vehicle_safety_belt2
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_vehicle_safety_belt2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_vehicle_safety_belt2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_vehicle_safety_belt3
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_vehicle_safety_belt3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_vehicle_safety_belt3 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_vehicle_safety_belt4
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_vehicle_safety_belt4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_vehicle_safety_belt4 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_vehicle_safety_belt5
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_vehicle_safety_belt5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_vehicle_safety_belt5 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_vehicle_safety_belt6
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_vehicle_safety_belt6");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_vehicle_safety_belt6 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_vehicle_reserve_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_vehicle_reserve_warning");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_vehicle_reserve_warning = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vcu_vehicle_display_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_vehicle_display_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_vehicle_display_speed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pix_robobus_driver_msgs__msg__va_vehicle_sta_fb__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VaVehicleStaFb */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pix_robobus_driver_msgs.msg._va_vehicle_sta_fb");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VaVehicleStaFb");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pix_robobus_driver_msgs__msg__VaVehicleStaFb * ros_message = (pix_robobus_driver_msgs__msg__VaVehicleStaFb *)raw_ros_message;
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
  {  // vcu_vehicle_pos_lamp_fb
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_vehicle_pos_lamp_fb ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_vehicle_pos_lamp_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_vehicle_head_lamp_fb
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_vehicle_head_lamp_fb ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_vehicle_head_lamp_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_vehicle_left_lamp_fb
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_vehicle_left_lamp_fb ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_vehicle_left_lamp_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_vehicle_right_lamp_fb
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_vehicle_right_lamp_fb ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_vehicle_right_lamp_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_vehicle_high_beam_fb
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_vehicle_high_beam_fb ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_vehicle_high_beam_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_vehicle_fog_lamp_fb
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_vehicle_fog_lamp_fb ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_vehicle_fog_lamp_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_vehicle_hazard_war_lamp_fb
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_vehicle_hazard_war_lamp_fb ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_vehicle_hazard_war_lamp_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_vehicle_body_lamp_fb
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_vehicle_body_lamp_fb ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_vehicle_body_lamp_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_vehicle_read_lamp_fb
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vcu_vehicle_read_lamp_fb ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_vehicle_read_lamp_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acu_vehicle_window_fb
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->acu_vehicle_window_fb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acu_vehicle_window_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_vehicle_door_sta_fb
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_vehicle_door_sta_fb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_vehicle_door_sta_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_vehicle_wipers_sta_fb
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_vehicle_wipers_sta_fb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_vehicle_wipers_sta_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_vehicle_safety_belt1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_vehicle_safety_belt1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_vehicle_safety_belt1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_vehicle_safety_belt2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_vehicle_safety_belt2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_vehicle_safety_belt2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_vehicle_safety_belt3
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_vehicle_safety_belt3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_vehicle_safety_belt3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_vehicle_safety_belt4
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_vehicle_safety_belt4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_vehicle_safety_belt4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_vehicle_safety_belt5
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_vehicle_safety_belt5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_vehicle_safety_belt5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_vehicle_safety_belt6
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_vehicle_safety_belt6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_vehicle_safety_belt6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_vehicle_reserve_warning
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_vehicle_reserve_warning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_vehicle_reserve_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_vehicle_display_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vcu_vehicle_display_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_vehicle_display_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
