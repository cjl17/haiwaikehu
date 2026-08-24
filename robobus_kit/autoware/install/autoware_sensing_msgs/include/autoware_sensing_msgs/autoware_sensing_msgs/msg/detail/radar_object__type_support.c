// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_sensing_msgs:msg/RadarObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_sensing_msgs/msg/detail/radar_object__rosidl_typesupport_introspection_c.h"
#include "autoware_sensing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_sensing_msgs/msg/detail/radar_object__functions.h"
#include "autoware_sensing_msgs/msg/detail/radar_object__struct.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `velocity`
// Member `acceleration`
// Member `size`
#include "geometry_msgs/msg/vector3.h"
// Member `velocity`
// Member `acceleration`
// Member `size`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `classifications`
#include "autoware_sensing_msgs/msg/radar_classification.h"
// Member `classifications`
#include "autoware_sensing_msgs/msg/detail/radar_classification__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__RadarObject_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_sensing_msgs__msg__RadarObject__init(message_memory);
}

void autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__RadarObject_fini_function(void * message_memory)
{
  autoware_sensing_msgs__msg__RadarObject__fini(message_memory);
}

size_t autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__size_function__RadarObject__position_covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_const_function__RadarObject__position_covariance(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_function__RadarObject__position_covariance(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__fetch_function__RadarObject__position_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_const_function__RadarObject__position_covariance(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__assign_function__RadarObject__position_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_function__RadarObject__position_covariance(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__size_function__RadarObject__velocity_covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_const_function__RadarObject__velocity_covariance(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_function__RadarObject__velocity_covariance(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__fetch_function__RadarObject__velocity_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_const_function__RadarObject__velocity_covariance(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__assign_function__RadarObject__velocity_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_function__RadarObject__velocity_covariance(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__size_function__RadarObject__acceleration_covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_const_function__RadarObject__acceleration_covariance(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_function__RadarObject__acceleration_covariance(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__fetch_function__RadarObject__acceleration_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_const_function__RadarObject__acceleration_covariance(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__assign_function__RadarObject__acceleration_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_function__RadarObject__acceleration_covariance(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__size_function__RadarObject__size_covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_const_function__RadarObject__size_covariance(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_function__RadarObject__size_covariance(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__fetch_function__RadarObject__size_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_const_function__RadarObject__size_covariance(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__assign_function__RadarObject__size_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_function__RadarObject__size_covariance(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__size_function__RadarObject__classifications(
  const void * untyped_member)
{
  const autoware_sensing_msgs__msg__RadarClassification__Sequence * member =
    (const autoware_sensing_msgs__msg__RadarClassification__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_const_function__RadarObject__classifications(
  const void * untyped_member, size_t index)
{
  const autoware_sensing_msgs__msg__RadarClassification__Sequence * member =
    (const autoware_sensing_msgs__msg__RadarClassification__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_function__RadarObject__classifications(
  void * untyped_member, size_t index)
{
  autoware_sensing_msgs__msg__RadarClassification__Sequence * member =
    (autoware_sensing_msgs__msg__RadarClassification__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__fetch_function__RadarObject__classifications(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autoware_sensing_msgs__msg__RadarClassification * item =
    ((const autoware_sensing_msgs__msg__RadarClassification *)
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_const_function__RadarObject__classifications(untyped_member, index));
  autoware_sensing_msgs__msg__RadarClassification * value =
    (autoware_sensing_msgs__msg__RadarClassification *)(untyped_value);
  *value = *item;
}

void autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__assign_function__RadarObject__classifications(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autoware_sensing_msgs__msg__RadarClassification * item =
    ((autoware_sensing_msgs__msg__RadarClassification *)
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_function__RadarObject__classifications(untyped_member, index));
  const autoware_sensing_msgs__msg__RadarClassification * value =
    (const autoware_sensing_msgs__msg__RadarClassification *)(untyped_value);
  *item = *value;
}

bool autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__resize_function__RadarObject__classifications(
  void * untyped_member, size_t size)
{
  autoware_sensing_msgs__msg__RadarClassification__Sequence * member =
    (autoware_sensing_msgs__msg__RadarClassification__Sequence *)(untyped_member);
  autoware_sensing_msgs__msg__RadarClassification__Sequence__fini(member);
  return autoware_sensing_msgs__msg__RadarClassification__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__RadarObject_message_member_array[18] = {
  {
    "object_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__RadarObject, object_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "age",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__RadarObject, age),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "measurement_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__RadarObject, measurement_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "movement_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__RadarObject, movement_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__RadarObject, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__RadarObject, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__RadarObject, acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__RadarObject, size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__RadarObject, position_covariance),  // bytes offset in struct
    NULL,  // default value
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__size_function__RadarObject__position_covariance,  // size() function pointer
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_const_function__RadarObject__position_covariance,  // get_const(index) function pointer
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_function__RadarObject__position_covariance,  // get(index) function pointer
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__fetch_function__RadarObject__position_covariance,  // fetch(index, &value) function pointer
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__assign_function__RadarObject__position_covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__RadarObject, velocity_covariance),  // bytes offset in struct
    NULL,  // default value
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__size_function__RadarObject__velocity_covariance,  // size() function pointer
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_const_function__RadarObject__velocity_covariance,  // get_const(index) function pointer
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_function__RadarObject__velocity_covariance,  // get(index) function pointer
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__fetch_function__RadarObject__velocity_covariance,  // fetch(index, &value) function pointer
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__assign_function__RadarObject__velocity_covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__RadarObject, acceleration_covariance),  // bytes offset in struct
    NULL,  // default value
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__size_function__RadarObject__acceleration_covariance,  // size() function pointer
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_const_function__RadarObject__acceleration_covariance,  // get_const(index) function pointer
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_function__RadarObject__acceleration_covariance,  // get(index) function pointer
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__fetch_function__RadarObject__acceleration_covariance,  // fetch(index, &value) function pointer
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__assign_function__RadarObject__acceleration_covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "size_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__RadarObject, size_covariance),  // bytes offset in struct
    NULL,  // default value
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__size_function__RadarObject__size_covariance,  // size() function pointer
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_const_function__RadarObject__size_covariance,  // get_const(index) function pointer
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_function__RadarObject__size_covariance,  // get(index) function pointer
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__fetch_function__RadarObject__size_covariance,  // fetch(index, &value) function pointer
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__assign_function__RadarObject__size_covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__RadarObject, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation_std",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__RadarObject, orientation_std),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__RadarObject, orientation_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation_rate_std",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__RadarObject, orientation_rate_std),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "existence_probability",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__RadarObject, existence_probability),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "classifications",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__RadarObject, classifications),  // bytes offset in struct
    NULL,  // default value
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__size_function__RadarObject__classifications,  // size() function pointer
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_const_function__RadarObject__classifications,  // get_const(index) function pointer
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__get_function__RadarObject__classifications,  // get(index) function pointer
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__fetch_function__RadarObject__classifications,  // fetch(index, &value) function pointer
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__assign_function__RadarObject__classifications,  // assign(index, value) function pointer
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__resize_function__RadarObject__classifications  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__RadarObject_message_members = {
  "autoware_sensing_msgs__msg",  // message namespace
  "RadarObject",  // message name
  18,  // number of fields
  sizeof(autoware_sensing_msgs__msg__RadarObject),
  autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__RadarObject_message_member_array,  // message members
  autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__RadarObject_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__RadarObject_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__RadarObject_message_type_support_handle = {
  0,
  &autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__RadarObject_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_sensing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_sensing_msgs, msg, RadarObject)() {
  autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__RadarObject_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__RadarObject_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__RadarObject_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__RadarObject_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__RadarObject_message_member_array[17].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_sensing_msgs, msg, RadarClassification)();
  if (!autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__RadarObject_message_type_support_handle.typesupport_identifier) {
    autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__RadarObject_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_sensing_msgs__msg__RadarObject__rosidl_typesupport_introspection_c__RadarObject_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
