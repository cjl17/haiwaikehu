// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pix_robobus_driver_msgs:msg/AvBrakeCtrl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pix_robobus_driver_msgs/msg/detail/av_brake_ctrl__rosidl_typesupport_introspection_c.h"
#include "pix_robobus_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pix_robobus_driver_msgs/msg/detail/av_brake_ctrl__functions.h"
#include "pix_robobus_driver_msgs/msg/detail/av_brake_ctrl__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pix_robobus_driver_msgs__msg__AvBrakeCtrl__rosidl_typesupport_introspection_c__AvBrakeCtrl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pix_robobus_driver_msgs__msg__AvBrakeCtrl__init(message_memory);
}

void pix_robobus_driver_msgs__msg__AvBrakeCtrl__rosidl_typesupport_introspection_c__AvBrakeCtrl_fini_function(void * message_memory)
{
  pix_robobus_driver_msgs__msg__AvBrakeCtrl__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pix_robobus_driver_msgs__msg__AvBrakeCtrl__rosidl_typesupport_introspection_c__AvBrakeCtrl_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pix_robobus_driver_msgs__msg__AvBrakeCtrl, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acu_chassis_brake_en",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pix_robobus_driver_msgs__msg__AvBrakeCtrl, acu_chassis_brake_en),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acu_chassis_brake_lamp_ctrl",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pix_robobus_driver_msgs__msg__AvBrakeCtrl, acu_chassis_brake_lamp_ctrl),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acu_chassis_aeb_ctrl",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pix_robobus_driver_msgs__msg__AvBrakeCtrl, acu_chassis_aeb_ctrl),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acu_chassis_brake_pdl_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pix_robobus_driver_msgs__msg__AvBrakeCtrl, acu_chassis_brake_pdl_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acu_chassis_epb_ctrl",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pix_robobus_driver_msgs__msg__AvBrakeCtrl, acu_chassis_epb_ctrl),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acu_brake_life_sig",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pix_robobus_driver_msgs__msg__AvBrakeCtrl, acu_brake_life_sig),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acu_check_sum131",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pix_robobus_driver_msgs__msg__AvBrakeCtrl, acu_check_sum131),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pix_robobus_driver_msgs__msg__AvBrakeCtrl__rosidl_typesupport_introspection_c__AvBrakeCtrl_message_members = {
  "pix_robobus_driver_msgs__msg",  // message namespace
  "AvBrakeCtrl",  // message name
  8,  // number of fields
  sizeof(pix_robobus_driver_msgs__msg__AvBrakeCtrl),
  pix_robobus_driver_msgs__msg__AvBrakeCtrl__rosidl_typesupport_introspection_c__AvBrakeCtrl_message_member_array,  // message members
  pix_robobus_driver_msgs__msg__AvBrakeCtrl__rosidl_typesupport_introspection_c__AvBrakeCtrl_init_function,  // function to initialize message memory (memory has to be allocated)
  pix_robobus_driver_msgs__msg__AvBrakeCtrl__rosidl_typesupport_introspection_c__AvBrakeCtrl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pix_robobus_driver_msgs__msg__AvBrakeCtrl__rosidl_typesupport_introspection_c__AvBrakeCtrl_message_type_support_handle = {
  0,
  &pix_robobus_driver_msgs__msg__AvBrakeCtrl__rosidl_typesupport_introspection_c__AvBrakeCtrl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pix_robobus_driver_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pix_robobus_driver_msgs, msg, AvBrakeCtrl)() {
  pix_robobus_driver_msgs__msg__AvBrakeCtrl__rosidl_typesupport_introspection_c__AvBrakeCtrl_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!pix_robobus_driver_msgs__msg__AvBrakeCtrl__rosidl_typesupport_introspection_c__AvBrakeCtrl_message_type_support_handle.typesupport_identifier) {
    pix_robobus_driver_msgs__msg__AvBrakeCtrl__rosidl_typesupport_introspection_c__AvBrakeCtrl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pix_robobus_driver_msgs__msg__AvBrakeCtrl__rosidl_typesupport_introspection_c__AvBrakeCtrl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
