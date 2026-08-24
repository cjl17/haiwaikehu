// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pix_robobus_driver_msgs:msg/VcuTransfer.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pix_robobus_driver_msgs/msg/detail/vcu_transfer__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void VcuTransfer_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pix_robobus_driver_msgs::msg::VcuTransfer(_init);
}

void VcuTransfer_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pix_robobus_driver_msgs::msg::VcuTransfer *>(message_memory);
  typed_message->~VcuTransfer();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VcuTransfer_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pix_robobus_driver_msgs::msg::VcuTransfer, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "spare",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pix_robobus_driver_msgs::msg::VcuTransfer, spare),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ac_out_temp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pix_robobus_driver_msgs::msg::VcuTransfer, ac_out_temp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ac_in_temp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pix_robobus_driver_msgs::msg::VcuTransfer, ac_in_temp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VcuTransfer_message_members = {
  "pix_robobus_driver_msgs::msg",  // message namespace
  "VcuTransfer",  // message name
  4,  // number of fields
  sizeof(pix_robobus_driver_msgs::msg::VcuTransfer),
  VcuTransfer_message_member_array,  // message members
  VcuTransfer_init_function,  // function to initialize message memory (memory has to be allocated)
  VcuTransfer_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VcuTransfer_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VcuTransfer_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pix_robobus_driver_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pix_robobus_driver_msgs::msg::VcuTransfer>()
{
  return &::pix_robobus_driver_msgs::msg::rosidl_typesupport_introspection_cpp::VcuTransfer_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pix_robobus_driver_msgs, msg, VcuTransfer)() {
  return &::pix_robobus_driver_msgs::msg::rosidl_typesupport_introspection_cpp::VcuTransfer_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
