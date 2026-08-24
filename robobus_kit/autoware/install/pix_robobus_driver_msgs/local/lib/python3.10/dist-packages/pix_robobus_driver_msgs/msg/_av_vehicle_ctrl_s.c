// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pix_robobus_driver_msgs:msg/AvVehicleCtrl.idl
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
#include "pix_robobus_driver_msgs/msg/detail/av_vehicle_ctrl__struct.h"
#include "pix_robobus_driver_msgs/msg/detail/av_vehicle_ctrl__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool pix_robobus_driver_msgs__msg__av_vehicle_ctrl__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("pix_robobus_driver_msgs.msg._av_vehicle_ctrl.AvVehicleCtrl", full_classname_dest, 58) == 0);
  }
  pix_robobus_driver_msgs__msg__AvVehicleCtrl * ros_message = _ros_message;
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
  {  // acu_vehicle_pos_lamp_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "acu_vehicle_pos_lamp_ctrl");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->acu_vehicle_pos_lamp_ctrl = (Py_True == field);
    Py_DECREF(field);
  }
  {  // acu_vehicle_head_lamp_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "acu_vehicle_head_lamp_ctrl");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->acu_vehicle_head_lamp_ctrl = (Py_True == field);
    Py_DECREF(field);
  }
  {  // acu_vehicle_left_lamp_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "acu_vehicle_left_lamp_ctrl");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->acu_vehicle_left_lamp_ctrl = (Py_True == field);
    Py_DECREF(field);
  }
  {  // acu_vehicle_right_lamp_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "acu_vehicle_right_lamp_ctrl");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->acu_vehicle_right_lamp_ctrl = (Py_True == field);
    Py_DECREF(field);
  }
  {  // acu_vehicle_high_beam_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "acu_vehicle_high_beam_ctrl");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->acu_vehicle_high_beam_ctrl = (Py_True == field);
    Py_DECREF(field);
  }
  {  // acu_vehicle_fog_lamp_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "acu_vehicle_fog_lamp_ctrl");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->acu_vehicle_fog_lamp_ctrl = (Py_True == field);
    Py_DECREF(field);
  }
  {  // acu_vehicle_body_light_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "acu_vehicle_body_light_ctrl");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->acu_vehicle_body_light_ctrl = (Py_True == field);
    Py_DECREF(field);
  }
  {  // acu_vehicle_read_light_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "acu_vehicle_read_light_ctrl");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->acu_vehicle_read_light_ctrl = (Py_True == field);
    Py_DECREF(field);
  }
  {  // acu_vehicle_voice
    PyObject * field = PyObject_GetAttrString(_pymsg, "acu_vehicle_voice");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acu_vehicle_voice = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // acu_vehicle_wipers_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "acu_vehicle_wipers_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acu_vehicle_wipers_ctrl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // acu_vehicle_door_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "acu_vehicle_door_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acu_vehicle_door_ctrl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // acu_vehicle_window_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "acu_vehicle_window_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acu_vehicle_window_ctrl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // acu_chassis_speed_limite_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "acu_chassis_speed_limite_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->acu_chassis_speed_limite_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // acu_vehicle_horn_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "acu_vehicle_horn_ctrl");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->acu_vehicle_horn_ctrl = (Py_True == field);
    Py_DECREF(field);
  }
  {  // acu_vehicle_spray_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "acu_vehicle_spray_ctrl");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->acu_vehicle_spray_ctrl = (Py_True == field);
    Py_DECREF(field);
  }
  {  // acu_chassis_speed_limite_val
    PyObject * field = PyObject_GetAttrString(_pymsg, "acu_chassis_speed_limite_val");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acu_chassis_speed_limite_val = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acu_check_sum_en
    PyObject * field = PyObject_GetAttrString(_pymsg, "acu_check_sum_en");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->acu_check_sum_en = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pix_robobus_driver_msgs__msg__av_vehicle_ctrl__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AvVehicleCtrl */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pix_robobus_driver_msgs.msg._av_vehicle_ctrl");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AvVehicleCtrl");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pix_robobus_driver_msgs__msg__AvVehicleCtrl * ros_message = (pix_robobus_driver_msgs__msg__AvVehicleCtrl *)raw_ros_message;
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
  {  // acu_vehicle_pos_lamp_ctrl
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->acu_vehicle_pos_lamp_ctrl ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acu_vehicle_pos_lamp_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acu_vehicle_head_lamp_ctrl
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->acu_vehicle_head_lamp_ctrl ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acu_vehicle_head_lamp_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acu_vehicle_left_lamp_ctrl
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->acu_vehicle_left_lamp_ctrl ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acu_vehicle_left_lamp_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acu_vehicle_right_lamp_ctrl
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->acu_vehicle_right_lamp_ctrl ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acu_vehicle_right_lamp_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acu_vehicle_high_beam_ctrl
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->acu_vehicle_high_beam_ctrl ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acu_vehicle_high_beam_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acu_vehicle_fog_lamp_ctrl
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->acu_vehicle_fog_lamp_ctrl ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acu_vehicle_fog_lamp_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acu_vehicle_body_light_ctrl
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->acu_vehicle_body_light_ctrl ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acu_vehicle_body_light_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acu_vehicle_read_light_ctrl
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->acu_vehicle_read_light_ctrl ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acu_vehicle_read_light_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acu_vehicle_voice
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->acu_vehicle_voice);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acu_vehicle_voice", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acu_vehicle_wipers_ctrl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->acu_vehicle_wipers_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acu_vehicle_wipers_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acu_vehicle_door_ctrl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->acu_vehicle_door_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acu_vehicle_door_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acu_vehicle_window_ctrl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->acu_vehicle_window_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acu_vehicle_window_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acu_chassis_speed_limite_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->acu_chassis_speed_limite_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acu_chassis_speed_limite_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acu_vehicle_horn_ctrl
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->acu_vehicle_horn_ctrl ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acu_vehicle_horn_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acu_vehicle_spray_ctrl
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->acu_vehicle_spray_ctrl ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acu_vehicle_spray_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acu_chassis_speed_limite_val
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acu_chassis_speed_limite_val);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acu_chassis_speed_limite_val", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acu_check_sum_en
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->acu_check_sum_en ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acu_check_sum_en", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
