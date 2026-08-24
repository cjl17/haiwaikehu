// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/VinResp3.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP3__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP3__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__VinResp3 __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__VinResp3 __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VinResp3_
{
  using Type = VinResp3_<ContainerAllocator>;

  explicit VinResp3_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vin16 = 0l;
    }
  }

  explicit VinResp3_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vin16 = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vin16_type =
    int32_t;
  _vin16_type vin16;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vin16(
    const int32_t & _arg)
  {
    this->vin16 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::VinResp3_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::VinResp3_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VinResp3_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VinResp3_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VinResp3_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VinResp3_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VinResp3_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VinResp3_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VinResp3_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VinResp3_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VinResp3
    std::shared_ptr<pix_robobus_driver_msgs::msg::VinResp3_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VinResp3
    std::shared_ptr<pix_robobus_driver_msgs::msg::VinResp3_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VinResp3_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vin16 != other.vin16) {
      return false;
    }
    return true;
  }
  bool operator!=(const VinResp3_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VinResp3_

// alias to use template instance with default allocator
using VinResp3 =
  pix_robobus_driver_msgs::msg::VinResp3_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP3__STRUCT_HPP_
