// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/RemoteMessage.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__REMOTE_MESSAGE__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__REMOTE_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pix_robobus_driver_msgs__msg__RemoteMessage __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__RemoteMessage __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RemoteMessage_
{
  using Type = RemoteMessage_<ContainerAllocator>;

  explicit RemoteMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remote_drive_mode = 0l;
      this->remote_heartbeat = 0l;
    }
  }

  explicit RemoteMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remote_drive_mode = 0l;
      this->remote_heartbeat = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _remote_drive_mode_type =
    int32_t;
  _remote_drive_mode_type remote_drive_mode;
  using _remote_heartbeat_type =
    int32_t;
  _remote_heartbeat_type remote_heartbeat;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__remote_drive_mode(
    const int32_t & _arg)
  {
    this->remote_drive_mode = _arg;
    return *this;
  }
  Type & set__remote_heartbeat(
    const int32_t & _arg)
  {
    this->remote_heartbeat = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::RemoteMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::RemoteMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::RemoteMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::RemoteMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::RemoteMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::RemoteMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::RemoteMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::RemoteMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::RemoteMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::RemoteMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__RemoteMessage
    std::shared_ptr<pix_robobus_driver_msgs::msg::RemoteMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__RemoteMessage
    std::shared_ptr<pix_robobus_driver_msgs::msg::RemoteMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RemoteMessage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->remote_drive_mode != other.remote_drive_mode) {
      return false;
    }
    if (this->remote_heartbeat != other.remote_heartbeat) {
      return false;
    }
    return true;
  }
  bool operator!=(const RemoteMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RemoteMessage_

// alias to use template instance with default allocator
using RemoteMessage =
  pix_robobus_driver_msgs::msg::RemoteMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__REMOTE_MESSAGE__STRUCT_HPP_
