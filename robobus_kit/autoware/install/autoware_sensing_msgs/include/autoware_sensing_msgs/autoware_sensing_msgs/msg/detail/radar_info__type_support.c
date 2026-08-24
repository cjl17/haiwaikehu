// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_sensing_msgs:msg/RadarInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_sensing_msgs/msg/detail/radar_info__rosidl_typesupport_introspection_c.h"
#include "autoware_sensing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_sensing_msgs/msg/detail/radar_info__functions.h"
#include "autoware_sensing_msgs/msg/detail/radar_info__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `object_fields_info`
// Member `detection_fields_info`
#include "autoware_sensing_msgs/msg/radar_field_info.h"
// Member `object_fields_info`
// Member `detection_fields_info`
#include "autoware_sensing_msgs/msg/detail/radar_field_info__rosidl_typesupport_introspection_c.h"
// Member `available_classes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__RadarInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_sensing_msgs__msg__RadarInfo__init(message_memory);
}

void autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__RadarInfo_fini_function(void * message_memory)
{
  autoware_sensing_msgs__msg__RadarInfo__fini(message_memory);
}

size_t autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__size_function__RadarInfo__object_fields_info(
  const void * untyped_member)
{
  const autoware_sensing_msgs__msg__RadarFieldInfo__Sequence * member =
    (const autoware_sensing_msgs__msg__RadarFieldInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__get_const_function__RadarInfo__object_fields_info(
  const void * untyped_member, size_t index)
{
  const autoware_sensing_msgs__msg__RadarFieldInfo__Sequence * member =
    (const autoware_sensing_msgs__msg__RadarFieldInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__get_function__RadarInfo__object_fields_info(
  void * untyped_member, size_t index)
{
  autoware_sensing_msgs__msg__RadarFieldInfo__Sequence * member =
    (autoware_sensing_msgs__msg__RadarFieldInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__fetch_function__RadarInfo__object_fields_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autoware_sensing_msgs__msg__RadarFieldInfo * item =
    ((const autoware_sensing_msgs__msg__RadarFieldInfo *)
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__get_const_function__RadarInfo__object_fields_info(untyped_member, index));
  autoware_sensing_msgs__msg__RadarFieldInfo * value =
    (autoware_sensing_msgs__msg__RadarFieldInfo *)(untyped_value);
  *value = *item;
}

void autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__assign_function__RadarInfo__object_fields_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autoware_sensing_msgs__msg__RadarFieldInfo * item =
    ((autoware_sensing_msgs__msg__RadarFieldInfo *)
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__get_function__RadarInfo__object_fields_info(untyped_member, index));
  const autoware_sensing_msgs__msg__RadarFieldInfo * value =
    (const autoware_sensing_msgs__msg__RadarFieldInfo *)(untyped_value);
  *item = *value;
}

bool autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__resize_function__RadarInfo__object_fields_info(
  void * untyped_member, size_t size)
{
  autoware_sensing_msgs__msg__RadarFieldInfo__Sequence * member =
    (autoware_sensing_msgs__msg__RadarFieldInfo__Sequence *)(untyped_member);
  autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__fini(member);
  return autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__init(member, size);
}

size_t autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__size_function__RadarInfo__detection_fields_info(
  const void * untyped_member)
{
  const autoware_sensing_msgs__msg__RadarFieldInfo__Sequence * member =
    (const autoware_sensing_msgs__msg__RadarFieldInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__get_const_function__RadarInfo__detection_fields_info(
  const void * untyped_member, size_t index)
{
  const autoware_sensing_msgs__msg__RadarFieldInfo__Sequence * member =
    (const autoware_sensing_msgs__msg__RadarFieldInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__get_function__RadarInfo__detection_fields_info(
  void * untyped_member, size_t index)
{
  autoware_sensing_msgs__msg__RadarFieldInfo__Sequence * member =
    (autoware_sensing_msgs__msg__RadarFieldInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__fetch_function__RadarInfo__detection_fields_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autoware_sensing_msgs__msg__RadarFieldInfo * item =
    ((const autoware_sensing_msgs__msg__RadarFieldInfo *)
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__get_const_function__RadarInfo__detection_fields_info(untyped_member, index));
  autoware_sensing_msgs__msg__RadarFieldInfo * value =
    (autoware_sensing_msgs__msg__RadarFieldInfo *)(untyped_value);
  *value = *item;
}

void autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__assign_function__RadarInfo__detection_fields_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autoware_sensing_msgs__msg__RadarFieldInfo * item =
    ((autoware_sensing_msgs__msg__RadarFieldInfo *)
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__get_function__RadarInfo__detection_fields_info(untyped_member, index));
  const autoware_sensing_msgs__msg__RadarFieldInfo * value =
    (const autoware_sensing_msgs__msg__RadarFieldInfo *)(untyped_value);
  *item = *value;
}

bool autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__resize_function__RadarInfo__detection_fields_info(
  void * untyped_member, size_t size)
{
  autoware_sensing_msgs__msg__RadarFieldInfo__Sequence * member =
    (autoware_sensing_msgs__msg__RadarFieldInfo__Sequence *)(untyped_member);
  autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__fini(member);
  return autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__init(member, size);
}

size_t autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__size_function__RadarInfo__available_classes(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__get_const_function__RadarInfo__available_classes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__get_function__RadarInfo__available_classes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__fetch_function__RadarInfo__available_classes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__get_const_function__RadarInfo__available_classes(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__assign_function__RadarInfo__available_classes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__get_function__RadarInfo__available_classes(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__resize_function__RadarInfo__available_classes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__RadarInfo_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__RadarInfo, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_fields_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__RadarInfo, object_fields_info),  // bytes offset in struct
    NULL,  // default value
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__size_function__RadarInfo__object_fields_info,  // size() function pointer
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__get_const_function__RadarInfo__object_fields_info,  // get_const(index) function pointer
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__get_function__RadarInfo__object_fields_info,  // get(index) function pointer
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__fetch_function__RadarInfo__object_fields_info,  // fetch(index, &value) function pointer
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__assign_function__RadarInfo__object_fields_info,  // assign(index, value) function pointer
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__resize_function__RadarInfo__object_fields_info  // resize(index) function pointer
  },
  {
    "detection_fields_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__RadarInfo, detection_fields_info),  // bytes offset in struct
    NULL,  // default value
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__size_function__RadarInfo__detection_fields_info,  // size() function pointer
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__get_const_function__RadarInfo__detection_fields_info,  // get_const(index) function pointer
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__get_function__RadarInfo__detection_fields_info,  // get(index) function pointer
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__fetch_function__RadarInfo__detection_fields_info,  // fetch(index, &value) function pointer
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__assign_function__RadarInfo__detection_fields_info,  // assign(index, value) function pointer
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__resize_function__RadarInfo__detection_fields_info  // resize(index) function pointer
  },
  {
    "available_classes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__RadarInfo, available_classes),  // bytes offset in struct
    NULL,  // default value
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__size_function__RadarInfo__available_classes,  // size() function pointer
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__get_const_function__RadarInfo__available_classes,  // get_const(index) function pointer
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__get_function__RadarInfo__available_classes,  // get(index) function pointer
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__fetch_function__RadarInfo__available_classes,  // fetch(index, &value) function pointer
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__assign_function__RadarInfo__available_classes,  // assign(index, value) function pointer
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__resize_function__RadarInfo__available_classes  // resize(index) function pointer
  },
  {
    "absolute_dynamics",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__RadarInfo, absolute_dynamics),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__RadarInfo_message_members = {
  "autoware_sensing_msgs__msg",  // message namespace
  "RadarInfo",  // message name
  5,  // number of fields
  sizeof(autoware_sensing_msgs__msg__RadarInfo),
  autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__RadarInfo_message_member_array,  // message members
  autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__RadarInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__RadarInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__RadarInfo_message_type_support_handle = {
  0,
  &autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__RadarInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_sensing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_sensing_msgs, msg, RadarInfo)() {
  autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__RadarInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__RadarInfo_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_sensing_msgs, msg, RadarFieldInfo)();
  autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__RadarInfo_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_sensing_msgs, msg, RadarFieldInfo)();
  if (!autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__RadarInfo_message_type_support_handle.typesupport_identifier) {
    autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__RadarInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_sensing_msgs__msg__RadarInfo__rosidl_typesupport_introspection_c__RadarInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
