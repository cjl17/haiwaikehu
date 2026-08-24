// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/VinResp2.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP2__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP2__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__VinResp2 __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__VinResp2 __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VinResp2_
{
  using Type = VinResp2_<ContainerAllocator>;

  explicit VinResp2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vin08 = 0l;
      this->vin09 = 0l;
      this->vin10 = 0l;
      this->vin11 = 0l;
      this->vin12 = 0l;
      this->vin13 = 0l;
      this->vin14 = 0l;
      this->vin15 = 0l;
    }
  }

  explicit VinResp2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vin08 = 0l;
      this->vin09 = 0l;
      this->vin10 = 0l;
      this->vin11 = 0l;
      this->vin12 = 0l;
      this->vin13 = 0l;
      this->vin14 = 0l;
      this->vin15 = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vin08_type =
    int32_t;
  _vin08_type vin08;
  using _vin09_type =
    int32_t;
  _vin09_type vin09;
  using _vin10_type =
    int32_t;
  _vin10_type vin10;
  using _vin11_type =
    int32_t;
  _vin11_type vin11;
  using _vin12_type =
    int32_t;
  _vin12_type vin12;
  using _vin13_type =
    int32_t;
  _vin13_type vin13;
  using _vin14_type =
    int32_t;
  _vin14_type vin14;
  using _vin15_type =
    int32_t;
  _vin15_type vin15;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vin08(
    const int32_t & _arg)
  {
    this->vin08 = _arg;
    return *this;
  }
  Type & set__vin09(
    const int32_t & _arg)
  {
    this->vin09 = _arg;
    return *this;
  }
  Type & set__vin10(
    const int32_t & _arg)
  {
    this->vin10 = _arg;
    return *this;
  }
  Type & set__vin11(
    const int32_t & _arg)
  {
    this->vin11 = _arg;
    return *this;
  }
  Type & set__vin12(
    const int32_t & _arg)
  {
    this->vin12 = _arg;
    return *this;
  }
  Type & set__vin13(
    const int32_t & _arg)
  {
    this->vin13 = _arg;
    return *this;
  }
  Type & set__vin14(
    const int32_t & _arg)
  {
    this->vin14 = _arg;
    return *this;
  }
  Type & set__vin15(
    const int32_t & _arg)
  {
    this->vin15 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::VinResp2_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::VinResp2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VinResp2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VinResp2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VinResp2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VinResp2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VinResp2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VinResp2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VinResp2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VinResp2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VinResp2
    std::shared_ptr<pix_robobus_driver_msgs::msg::VinResp2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VinResp2
    std::shared_ptr<pix_robobus_driver_msgs::msg::VinResp2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VinResp2_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vin08 != other.vin08) {
      return false;
    }
    if (this->vin09 != other.vin09) {
      return false;
    }
    if (this->vin10 != other.vin10) {
      return false;
    }
    if (this->vin11 != other.vin11) {
      return false;
    }
    if (this->vin12 != other.vin12) {
      return false;
    }
    if (this->vin13 != other.vin13) {
      return false;
    }
    if (this->vin14 != other.vin14) {
      return false;
    }
    if (this->vin15 != other.vin15) {
      return false;
    }
    return true;
  }
  bool operator!=(const VinResp2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VinResp2_

// alias to use template instance with default allocator
using VinResp2 =
  pix_robobus_driver_msgs::msg::VinResp2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VIN_RESP2__STRUCT_HPP_
