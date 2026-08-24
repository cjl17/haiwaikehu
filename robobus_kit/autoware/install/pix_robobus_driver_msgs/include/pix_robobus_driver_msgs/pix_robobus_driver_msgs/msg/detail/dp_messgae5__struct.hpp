// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/DpMessgae5.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__DP_MESSGAE5__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__DP_MESSGAE5__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__DpMessgae5 __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__DpMessgae5 __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DpMessgae5_
{
  using Type = DpMessgae5_<ContainerAllocator>;

  explicit DpMessgae5_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pwn_red_sta = 0l;
      this->pwn_green_sta = 0l;
      this->pwn_blue_sta = 0l;
      this->atmospherelightbrightness = 0l;
      this->vcu_reserve33 = false;
      this->vcu_reserve41 = false;
    }
  }

  explicit DpMessgae5_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pwn_red_sta = 0l;
      this->pwn_green_sta = 0l;
      this->pwn_blue_sta = 0l;
      this->atmospherelightbrightness = 0l;
      this->vcu_reserve33 = false;
      this->vcu_reserve41 = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pwn_red_sta_type =
    int32_t;
  _pwn_red_sta_type pwn_red_sta;
  using _pwn_green_sta_type =
    int32_t;
  _pwn_green_sta_type pwn_green_sta;
  using _pwn_blue_sta_type =
    int32_t;
  _pwn_blue_sta_type pwn_blue_sta;
  using _atmospherelightbrightness_type =
    int32_t;
  _atmospherelightbrightness_type atmospherelightbrightness;
  using _vcu_reserve33_type =
    bool;
  _vcu_reserve33_type vcu_reserve33;
  using _vcu_reserve41_type =
    bool;
  _vcu_reserve41_type vcu_reserve41;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pwn_red_sta(
    const int32_t & _arg)
  {
    this->pwn_red_sta = _arg;
    return *this;
  }
  Type & set__pwn_green_sta(
    const int32_t & _arg)
  {
    this->pwn_green_sta = _arg;
    return *this;
  }
  Type & set__pwn_blue_sta(
    const int32_t & _arg)
  {
    this->pwn_blue_sta = _arg;
    return *this;
  }
  Type & set__atmospherelightbrightness(
    const int32_t & _arg)
  {
    this->atmospherelightbrightness = _arg;
    return *this;
  }
  Type & set__vcu_reserve33(
    const bool & _arg)
  {
    this->vcu_reserve33 = _arg;
    return *this;
  }
  Type & set__vcu_reserve41(
    const bool & _arg)
  {
    this->vcu_reserve41 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::DpMessgae5_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::DpMessgae5_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::DpMessgae5_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::DpMessgae5_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::DpMessgae5_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::DpMessgae5_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::DpMessgae5_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::DpMessgae5_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::DpMessgae5_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::DpMessgae5_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__DpMessgae5
    std::shared_ptr<pix_robobus_driver_msgs::msg::DpMessgae5_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__DpMessgae5
    std::shared_ptr<pix_robobus_driver_msgs::msg::DpMessgae5_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DpMessgae5_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pwn_red_sta != other.pwn_red_sta) {
      return false;
    }
    if (this->pwn_green_sta != other.pwn_green_sta) {
      return false;
    }
    if (this->pwn_blue_sta != other.pwn_blue_sta) {
      return false;
    }
    if (this->atmospherelightbrightness != other.atmospherelightbrightness) {
      return false;
    }
    if (this->vcu_reserve33 != other.vcu_reserve33) {
      return false;
    }
    if (this->vcu_reserve41 != other.vcu_reserve41) {
      return false;
    }
    return true;
  }
  bool operator!=(const DpMessgae5_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DpMessgae5_

// alias to use template instance with default allocator
using DpMessgae5 =
  pix_robobus_driver_msgs::msg::DpMessgae5_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__DP_MESSGAE5__STRUCT_HPP_
