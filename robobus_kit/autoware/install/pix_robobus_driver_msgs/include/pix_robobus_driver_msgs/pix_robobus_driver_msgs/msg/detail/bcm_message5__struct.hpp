// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/BcmMessage5.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__BCM_MESSAGE5__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__BCM_MESSAGE5__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__BcmMessage5 __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__BcmMessage5 __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BcmMessage5_
{
  using Type = BcmMessage5_<ContainerAllocator>;

  explicit BcmMessage5_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ad_v_vin1 = 0l;
      this->ad_v_vin2 = 0l;
    }
  }

  explicit BcmMessage5_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ad_v_vin1 = 0l;
      this->ad_v_vin2 = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ad_v_vin1_type =
    int32_t;
  _ad_v_vin1_type ad_v_vin1;
  using _ad_v_vin2_type =
    int32_t;
  _ad_v_vin2_type ad_v_vin2;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ad_v_vin1(
    const int32_t & _arg)
  {
    this->ad_v_vin1 = _arg;
    return *this;
  }
  Type & set__ad_v_vin2(
    const int32_t & _arg)
  {
    this->ad_v_vin2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::BcmMessage5_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::BcmMessage5_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::BcmMessage5_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::BcmMessage5_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::BcmMessage5_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::BcmMessage5_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::BcmMessage5_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::BcmMessage5_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::BcmMessage5_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::BcmMessage5_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__BcmMessage5
    std::shared_ptr<pix_robobus_driver_msgs::msg::BcmMessage5_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__BcmMessage5
    std::shared_ptr<pix_robobus_driver_msgs::msg::BcmMessage5_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BcmMessage5_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ad_v_vin1 != other.ad_v_vin1) {
      return false;
    }
    if (this->ad_v_vin2 != other.ad_v_vin2) {
      return false;
    }
    return true;
  }
  bool operator!=(const BcmMessage5_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BcmMessage5_

// alias to use template instance with default allocator
using BcmMessage5 =
  pix_robobus_driver_msgs::msg::BcmMessage5_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__BCM_MESSAGE5__STRUCT_HPP_
