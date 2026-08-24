// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/AcMessage2.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AC_MESSAGE2__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AC_MESSAGE2__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__AcMessage2 __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__AcMessage2 __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AcMessage2_
{
  using Type = AcMessage2_<ContainerAllocator>;

  explicit AcMessage2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fan_temp = 0l;
      this->ac_out_temp = 0l;
      this->ac_in_temp = 0l;
      this->ac_hardware = 0l;
      this->ac_software = 0l;
    }
  }

  explicit AcMessage2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fan_temp = 0l;
      this->ac_out_temp = 0l;
      this->ac_in_temp = 0l;
      this->ac_hardware = 0l;
      this->ac_software = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _fan_temp_type =
    int32_t;
  _fan_temp_type fan_temp;
  using _ac_out_temp_type =
    int32_t;
  _ac_out_temp_type ac_out_temp;
  using _ac_in_temp_type =
    int32_t;
  _ac_in_temp_type ac_in_temp;
  using _ac_hardware_type =
    int32_t;
  _ac_hardware_type ac_hardware;
  using _ac_software_type =
    int32_t;
  _ac_software_type ac_software;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__fan_temp(
    const int32_t & _arg)
  {
    this->fan_temp = _arg;
    return *this;
  }
  Type & set__ac_out_temp(
    const int32_t & _arg)
  {
    this->ac_out_temp = _arg;
    return *this;
  }
  Type & set__ac_in_temp(
    const int32_t & _arg)
  {
    this->ac_in_temp = _arg;
    return *this;
  }
  Type & set__ac_hardware(
    const int32_t & _arg)
  {
    this->ac_hardware = _arg;
    return *this;
  }
  Type & set__ac_software(
    const int32_t & _arg)
  {
    this->ac_software = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::AcMessage2_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::AcMessage2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::AcMessage2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::AcMessage2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::AcMessage2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::AcMessage2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::AcMessage2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::AcMessage2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::AcMessage2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::AcMessage2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__AcMessage2
    std::shared_ptr<pix_robobus_driver_msgs::msg::AcMessage2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__AcMessage2
    std::shared_ptr<pix_robobus_driver_msgs::msg::AcMessage2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AcMessage2_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->fan_temp != other.fan_temp) {
      return false;
    }
    if (this->ac_out_temp != other.ac_out_temp) {
      return false;
    }
    if (this->ac_in_temp != other.ac_in_temp) {
      return false;
    }
    if (this->ac_hardware != other.ac_hardware) {
      return false;
    }
    if (this->ac_software != other.ac_software) {
      return false;
    }
    return true;
  }
  bool operator!=(const AcMessage2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AcMessage2_

// alias to use template instance with default allocator
using AcMessage2 =
  pix_robobus_driver_msgs::msg::AcMessage2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AC_MESSAGE2__STRUCT_HPP_
