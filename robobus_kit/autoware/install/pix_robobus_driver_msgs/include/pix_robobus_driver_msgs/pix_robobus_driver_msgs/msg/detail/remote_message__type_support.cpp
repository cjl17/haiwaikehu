// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pix_robobus_driver_msgs:msg/RemoteMessage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pix_robobus_driver_msgs/msg/detail/remote_message__struct.hpp"
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

void RemoteMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pix_robobus_driver_msgs::msg::RemoteMessage(_init);
}

void RemoteMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pix_robobus_driver_msgs::msg::RemoteMessage *>(message_memory);
  typed_message->~RemoteMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RemoteMessage_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pix_robobus_driver_msgs::msg::RemoteMessage, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "remote_drive_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pix_robobus_driver_msgs::msg::RemoteMessage, remote_drive_mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "remote_heartbeat",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pix_robobus_driver_msgs::msg::RemoteMessage, remote_heartbeat),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RemoteMessage_message_members = {
  "pix_robobus_driver_msgs::msg",  // message namespace
  "RemoteMessage",  // message name
  3,  // number of fields
  sizeof(pix_robobus_driver_msgs::msg::RemoteMessage),
  RemoteMessage_message_member_array,  // message members
  RemoteMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  RemoteMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RemoteMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RemoteMessage_message_members,
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
get_message_type_support_handle<pix_robobus_driver_msgs::msg::RemoteMessage>()
{
  return &::pix_robobus_driver_msgs::msg::rosidl_typesupport_introspection_cpp::RemoteMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pix_robobus_driver_msgs, msg, RemoteMessage)() {
  return &::pix_robobus_driver_msgs::msg::rosidl_typesupport_introspection_cpp::RemoteMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
