// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/AcMessage1.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AC_MESSAGE1__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AC_MESSAGE1__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__AcMessage1 __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__AcMessage1 __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AcMessage1_
{
  using Type = AcMessage1_<ContainerAllocator>;

  explicit AcMessage1_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->defrost_fdk = 0l;
      this->air_cod_sta = 0l;
      this->air_cod_gear_sta = 0l;
      this->air_cod_mod_sta = 0l;
      this->air_cod_temp_sta = 0l;
      this->in_loop_mod_sta = 0l;
    }
  }

  explicit AcMessage1_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->defrost_fdk = 0l;
      this->air_cod_sta = 0l;
      this->air_cod_gear_sta = 0l;
      this->air_cod_mod_sta = 0l;
      this->air_cod_temp_sta = 0l;
      this->in_loop_mod_sta = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _defrost_fdk_type =
    int32_t;
  _defrost_fdk_type defrost_fdk;
  using _air_cod_sta_type =
    int32_t;
  _air_cod_sta_type air_cod_sta;
  using _air_cod_gear_sta_type =
    int32_t;
  _air_cod_gear_sta_type air_cod_gear_sta;
  using _air_cod_mod_sta_type =
    int32_t;
  _air_cod_mod_sta_type air_cod_mod_sta;
  using _air_cod_temp_sta_type =
    int32_t;
  _air_cod_temp_sta_type air_cod_temp_sta;
  using _in_loop_mod_sta_type =
    int32_t;
  _in_loop_mod_sta_type in_loop_mod_sta;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__defrost_fdk(
    const int32_t & _arg)
  {
    this->defrost_fdk = _arg;
    return *this;
  }
  Type & set__air_cod_sta(
    const int32_t & _arg)
  {
    this->air_cod_sta = _arg;
    return *this;
  }
  Type & set__air_cod_gear_sta(
    const int32_t & _arg)
  {
    this->air_cod_gear_sta = _arg;
    return *this;
  }
  Type & set__air_cod_mod_sta(
    const int32_t & _arg)
  {
    this->air_cod_mod_sta = _arg;
    return *this;
  }
  Type & set__air_cod_temp_sta(
    const int32_t & _arg)
  {
    this->air_cod_temp_sta = _arg;
    return *this;
  }
  Type & set__in_loop_mod_sta(
    const int32_t & _arg)
  {
    this->in_loop_mod_sta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::AcMessage1_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::AcMessage1_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::AcMessage1_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::AcMessage1_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::AcMessage1_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::AcMessage1_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::AcMessage1_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::AcMessage1_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::AcMessage1_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::AcMessage1_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__AcMessage1
    std::shared_ptr<pix_robobus_driver_msgs::msg::AcMessage1_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__AcMessage1
    std::shared_ptr<pix_robobus_driver_msgs::msg::AcMessage1_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AcMessage1_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->defrost_fdk != other.defrost_fdk) {
      return false;
    }
    if (this->air_cod_sta != other.air_cod_sta) {
      return false;
    }
    if (this->air_cod_gear_sta != other.air_cod_gear_sta) {
      return false;
    }
    if (this->air_cod_mod_sta != other.air_cod_mod_sta) {
      return false;
    }
    if (this->air_cod_temp_sta != other.air_cod_temp_sta) {
      return false;
    }
    if (this->in_loop_mod_sta != other.in_loop_mod_sta) {
      return false;
    }
    return true;
  }
  bool operator!=(const AcMessage1_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AcMessage1_

// alias to use template instance with default allocator
using AcMessage1 =
  pix_robobus_driver_msgs::msg::AcMessage1_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AC_MESSAGE1__STRUCT_HPP_
