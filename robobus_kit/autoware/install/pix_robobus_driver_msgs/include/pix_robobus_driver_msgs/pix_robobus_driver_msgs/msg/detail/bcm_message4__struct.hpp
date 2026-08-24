// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/BcmMessage4.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__BCM_MESSAGE4__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__BCM_MESSAGE4__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__BcmMessage4 __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__BcmMessage4 __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BcmMessage4_
{
  using Type = BcmMessage4_<ContainerAllocator>;

  explicit BcmMessage4_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ltemp = 0l;
      this->ntemp = 0l;
      this->safe_belt_sta1 = false;
      this->safe_belt_sta2 = false;
      this->safe_belt_sta3 = false;
      this->safe_belt_sta4 = false;
      this->safe_belt_sta5 = false;
      this->safe_belt_sta6 = false;
      this->seat_sta1 = false;
      this->seat_sta2 = false;
      this->seat_sta3 = false;
      this->seat_sta4 = false;
      this->seat_sta5 = false;
      this->seat_sta6 = false;
    }
  }

  explicit BcmMessage4_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ltemp = 0l;
      this->ntemp = 0l;
      this->safe_belt_sta1 = false;
      this->safe_belt_sta2 = false;
      this->safe_belt_sta3 = false;
      this->safe_belt_sta4 = false;
      this->safe_belt_sta5 = false;
      this->safe_belt_sta6 = false;
      this->seat_sta1 = false;
      this->seat_sta2 = false;
      this->seat_sta3 = false;
      this->seat_sta4 = false;
      this->seat_sta5 = false;
      this->seat_sta6 = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ltemp_type =
    int32_t;
  _ltemp_type ltemp;
  using _ntemp_type =
    int32_t;
  _ntemp_type ntemp;
  using _safe_belt_sta1_type =
    bool;
  _safe_belt_sta1_type safe_belt_sta1;
  using _safe_belt_sta2_type =
    bool;
  _safe_belt_sta2_type safe_belt_sta2;
  using _safe_belt_sta3_type =
    bool;
  _safe_belt_sta3_type safe_belt_sta3;
  using _safe_belt_sta4_type =
    bool;
  _safe_belt_sta4_type safe_belt_sta4;
  using _safe_belt_sta5_type =
    bool;
  _safe_belt_sta5_type safe_belt_sta5;
  using _safe_belt_sta6_type =
    bool;
  _safe_belt_sta6_type safe_belt_sta6;
  using _seat_sta1_type =
    bool;
  _seat_sta1_type seat_sta1;
  using _seat_sta2_type =
    bool;
  _seat_sta2_type seat_sta2;
  using _seat_sta3_type =
    bool;
  _seat_sta3_type seat_sta3;
  using _seat_sta4_type =
    bool;
  _seat_sta4_type seat_sta4;
  using _seat_sta5_type =
    bool;
  _seat_sta5_type seat_sta5;
  using _seat_sta6_type =
    bool;
  _seat_sta6_type seat_sta6;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ltemp(
    const int32_t & _arg)
  {
    this->ltemp = _arg;
    return *this;
  }
  Type & set__ntemp(
    const int32_t & _arg)
  {
    this->ntemp = _arg;
    return *this;
  }
  Type & set__safe_belt_sta1(
    const bool & _arg)
  {
    this->safe_belt_sta1 = _arg;
    return *this;
  }
  Type & set__safe_belt_sta2(
    const bool & _arg)
  {
    this->safe_belt_sta2 = _arg;
    return *this;
  }
  Type & set__safe_belt_sta3(
    const bool & _arg)
  {
    this->safe_belt_sta3 = _arg;
    return *this;
  }
  Type & set__safe_belt_sta4(
    const bool & _arg)
  {
    this->safe_belt_sta4 = _arg;
    return *this;
  }
  Type & set__safe_belt_sta5(
    const bool & _arg)
  {
    this->safe_belt_sta5 = _arg;
    return *this;
  }
  Type & set__safe_belt_sta6(
    const bool & _arg)
  {
    this->safe_belt_sta6 = _arg;
    return *this;
  }
  Type & set__seat_sta1(
    const bool & _arg)
  {
    this->seat_sta1 = _arg;
    return *this;
  }
  Type & set__seat_sta2(
    const bool & _arg)
  {
    this->seat_sta2 = _arg;
    return *this;
  }
  Type & set__seat_sta3(
    const bool & _arg)
  {
    this->seat_sta3 = _arg;
    return *this;
  }
  Type & set__seat_sta4(
    const bool & _arg)
  {
    this->seat_sta4 = _arg;
    return *this;
  }
  Type & set__seat_sta5(
    const bool & _arg)
  {
    this->seat_sta5 = _arg;
    return *this;
  }
  Type & set__seat_sta6(
    const bool & _arg)
  {
    this->seat_sta6 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::BcmMessage4_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::BcmMessage4_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::BcmMessage4_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::BcmMessage4_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::BcmMessage4_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::BcmMessage4_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::BcmMessage4_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::BcmMessage4_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::BcmMessage4_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::BcmMessage4_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__BcmMessage4
    std::shared_ptr<pix_robobus_driver_msgs::msg::BcmMessage4_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__BcmMessage4
    std::shared_ptr<pix_robobus_driver_msgs::msg::BcmMessage4_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BcmMessage4_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ltemp != other.ltemp) {
      return false;
    }
    if (this->ntemp != other.ntemp) {
      return false;
    }
    if (this->safe_belt_sta1 != other.safe_belt_sta1) {
      return false;
    }
    if (this->safe_belt_sta2 != other.safe_belt_sta2) {
      return false;
    }
    if (this->safe_belt_sta3 != other.safe_belt_sta3) {
      return false;
    }
    if (this->safe_belt_sta4 != other.safe_belt_sta4) {
      return false;
    }
    if (this->safe_belt_sta5 != other.safe_belt_sta5) {
      return false;
    }
    if (this->safe_belt_sta6 != other.safe_belt_sta6) {
      return false;
    }
    if (this->seat_sta1 != other.seat_sta1) {
      return false;
    }
    if (this->seat_sta2 != other.seat_sta2) {
      return false;
    }
    if (this->seat_sta3 != other.seat_sta3) {
      return false;
    }
    if (this->seat_sta4 != other.seat_sta4) {
      return false;
    }
    if (this->seat_sta5 != other.seat_sta5) {
      return false;
    }
    if (this->seat_sta6 != other.seat_sta6) {
      return false;
    }
    return true;
  }
  bool operator!=(const BcmMessage4_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BcmMessage4_

// alias to use template instance with default allocator
using BcmMessage4 =
  pix_robobus_driver_msgs::msg::BcmMessage4_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__BCM_MESSAGE4__STRUCT_HPP_
