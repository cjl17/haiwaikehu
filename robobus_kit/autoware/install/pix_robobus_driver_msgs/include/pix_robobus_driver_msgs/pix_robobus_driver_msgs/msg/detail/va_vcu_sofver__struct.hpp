// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaVcuSofver.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VCU_SOFVER__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VCU_SOFVER__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__VaVcuSofver __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__VaVcuSofver __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VaVcuSofver_
{
  using Type = VaVcuSofver_<ContainerAllocator>;

  explicit VaVcuSofver_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version_year = 0l;
      this->version_month = 0l;
      this->version_day = 0l;
      this->version_main = 0l;
      this->version_sub = 0l;
      this->version_patch = 0l;
    }
  }

  explicit VaVcuSofver_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version_year = 0l;
      this->version_month = 0l;
      this->version_day = 0l;
      this->version_main = 0l;
      this->version_sub = 0l;
      this->version_patch = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _version_year_type =
    int32_t;
  _version_year_type version_year;
  using _version_month_type =
    int32_t;
  _version_month_type version_month;
  using _version_day_type =
    int32_t;
  _version_day_type version_day;
  using _version_main_type =
    int32_t;
  _version_main_type version_main;
  using _version_sub_type =
    int32_t;
  _version_sub_type version_sub;
  using _version_patch_type =
    int32_t;
  _version_patch_type version_patch;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__version_year(
    const int32_t & _arg)
  {
    this->version_year = _arg;
    return *this;
  }
  Type & set__version_month(
    const int32_t & _arg)
  {
    this->version_month = _arg;
    return *this;
  }
  Type & set__version_day(
    const int32_t & _arg)
  {
    this->version_day = _arg;
    return *this;
  }
  Type & set__version_main(
    const int32_t & _arg)
  {
    this->version_main = _arg;
    return *this;
  }
  Type & set__version_sub(
    const int32_t & _arg)
  {
    this->version_sub = _arg;
    return *this;
  }
  Type & set__version_patch(
    const int32_t & _arg)
  {
    this->version_patch = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::VaVcuSofver_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::VaVcuSofver_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaVcuSofver_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaVcuSofver_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VaVcuSofver_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VaVcuSofver_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VaVcuSofver_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VaVcuSofver_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VaVcuSofver_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VaVcuSofver_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VaVcuSofver
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaVcuSofver_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VaVcuSofver
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaVcuSofver_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VaVcuSofver_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->version_year != other.version_year) {
      return false;
    }
    if (this->version_month != other.version_month) {
      return false;
    }
    if (this->version_day != other.version_day) {
      return false;
    }
    if (this->version_main != other.version_main) {
      return false;
    }
    if (this->version_sub != other.version_sub) {
      return false;
    }
    if (this->version_patch != other.version_patch) {
      return false;
    }
    return true;
  }
  bool operator!=(const VaVcuSofver_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VaVcuSofver_

// alias to use template instance with default allocator
using VaVcuSofver =
  pix_robobus_driver_msgs::msg::VaVcuSofver_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VCU_SOFVER__STRUCT_HPP_
