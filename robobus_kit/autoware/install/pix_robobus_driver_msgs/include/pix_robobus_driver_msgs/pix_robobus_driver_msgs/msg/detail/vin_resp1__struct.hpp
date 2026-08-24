// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/VinResp1.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP1__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP1__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__VinResp1 __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__VinResp1 __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VinResp1_
{
  using Type = VinResp1_<ContainerAllocator>;

  explicit VinResp1_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vin00 = 0l;
      this->vin01 = 0l;
      this->vin02 = 0l;
      this->vin03 = 0l;
      this->vin04 = 0l;
      this->vin05 = 0l;
      this->vin06 = 0l;
      this->vin07 = 0l;
    }
  }

  explicit VinResp1_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vin00 = 0l;
      this->vin01 = 0l;
      this->vin02 = 0l;
      this->vin03 = 0l;
      this->vin04 = 0l;
      this->vin05 = 0l;
      this->vin06 = 0l;
      this->vin07 = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vin00_type =
    int32_t;
  _vin00_type vin00;
  using _vin01_type =
    int32_t;
  _vin01_type vin01;
  using _vin02_type =
    int32_t;
  _vin02_type vin02;
  using _vin03_type =
    int32_t;
  _vin03_type vin03;
  using _vin04_type =
    int32_t;
  _vin04_type vin04;
  using _vin05_type =
    int32_t;
  _vin05_type vin05;
  using _vin06_type =
    int32_t;
  _vin06_type vin06;
  using _vin07_type =
    int32_t;
  _vin07_type vin07;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vin00(
    const int32_t & _arg)
  {
    this->vin00 = _arg;
    return *this;
  }
  Type & set__vin01(
    const int32_t & _arg)
  {
    this->vin01 = _arg;
    return *this;
  }
  Type & set__vin02(
    const int32_t & _arg)
  {
    this->vin02 = _arg;
    return *this;
  }
  Type & set__vin03(
    const int32_t & _arg)
  {
    this->vin03 = _arg;
    return *this;
  }
  Type & set__vin04(
    const int32_t & _arg)
  {
    this->vin04 = _arg;
    return *this;
  }
  Type & set__vin05(
    const int32_t & _arg)
  {
    this->vin05 = _arg;
    return *this;
  }
  Type & set__vin06(
    const int32_t & _arg)
  {
    this->vin06 = _arg;
    return *this;
  }
  Type & set__vin07(
    const int32_t & _arg)
  {
    this->vin07 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::VinResp1_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::VinResp1_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VinResp1_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VinResp1_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VinResp1_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VinResp1_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VinResp1_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VinResp1_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VinResp1_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VinResp1_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VinResp1
    std::shared_ptr<pix_robobus_driver_msgs::msg::VinResp1_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VinResp1
    std::shared_ptr<pix_robobus_driver_msgs::msg::VinResp1_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VinResp1_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vin00 != other.vin00) {
      return false;
    }
    if (this->vin01 != other.vin01) {
      return false;
    }
    if (this->vin02 != other.vin02) {
      return false;
    }
    if (this->vin03 != other.vin03) {
      return false;
    }
    if (this->vin04 != other.vin04) {
      return false;
    }
    if (this->vin05 != other.vin05) {
      return false;
    }
    if (this->vin06 != other.vin06) {
      return false;
    }
    if (this->vin07 != other.vin07) {
      return false;
    }
    return true;
  }
  bool operator!=(const VinResp1_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VinResp1_

// alias to use template instance with default allocator
using VinResp1 =
  pix_robobus_driver_msgs::msg::VinResp1_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP1__STRUCT_HPP_
