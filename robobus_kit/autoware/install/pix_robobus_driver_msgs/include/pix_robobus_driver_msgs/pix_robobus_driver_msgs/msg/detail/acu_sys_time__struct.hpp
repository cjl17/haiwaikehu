// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/AcuSysTime.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__ACU_SYS_TIME__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__ACU_SYS_TIME__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__AcuSysTime __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__AcuSysTime __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AcuSysTime_
{
  using Type = AcuSysTime_<ContainerAllocator>;

  explicit AcuSysTime_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sys_time_year = 0l;
      this->sys_time_month = 0l;
      this->sys_time_day = 0l;
      this->sys_time_hour = 0l;
      this->sys_time_minute = 0l;
      this->sys_time_second = 0l;
    }
  }

  explicit AcuSysTime_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sys_time_year = 0l;
      this->sys_time_month = 0l;
      this->sys_time_day = 0l;
      this->sys_time_hour = 0l;
      this->sys_time_minute = 0l;
      this->sys_time_second = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _sys_time_year_type =
    int32_t;
  _sys_time_year_type sys_time_year;
  using _sys_time_month_type =
    int32_t;
  _sys_time_month_type sys_time_month;
  using _sys_time_day_type =
    int32_t;
  _sys_time_day_type sys_time_day;
  using _sys_time_hour_type =
    int32_t;
  _sys_time_hour_type sys_time_hour;
  using _sys_time_minute_type =
    int32_t;
  _sys_time_minute_type sys_time_minute;
  using _sys_time_second_type =
    int32_t;
  _sys_time_second_type sys_time_second;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__sys_time_year(
    const int32_t & _arg)
  {
    this->sys_time_year = _arg;
    return *this;
  }
  Type & set__sys_time_month(
    const int32_t & _arg)
  {
    this->sys_time_month = _arg;
    return *this;
  }
  Type & set__sys_time_day(
    const int32_t & _arg)
  {
    this->sys_time_day = _arg;
    return *this;
  }
  Type & set__sys_time_hour(
    const int32_t & _arg)
  {
    this->sys_time_hour = _arg;
    return *this;
  }
  Type & set__sys_time_minute(
    const int32_t & _arg)
  {
    this->sys_time_minute = _arg;
    return *this;
  }
  Type & set__sys_time_second(
    const int32_t & _arg)
  {
    this->sys_time_second = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::AcuSysTime_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::AcuSysTime_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::AcuSysTime_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::AcuSysTime_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::AcuSysTime_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::AcuSysTime_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::AcuSysTime_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::AcuSysTime_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::AcuSysTime_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::AcuSysTime_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__AcuSysTime
    std::shared_ptr<pix_robobus_driver_msgs::msg::AcuSysTime_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__AcuSysTime
    std::shared_ptr<pix_robobus_driver_msgs::msg::AcuSysTime_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AcuSysTime_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->sys_time_year != other.sys_time_year) {
      return false;
    }
    if (this->sys_time_month != other.sys_time_month) {
      return false;
    }
    if (this->sys_time_day != other.sys_time_day) {
      return false;
    }
    if (this->sys_time_hour != other.sys_time_hour) {
      return false;
    }
    if (this->sys_time_minute != other.sys_time_minute) {
      return false;
    }
    if (this->sys_time_second != other.sys_time_second) {
      return false;
    }
    return true;
  }
  bool operator!=(const AcuSysTime_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AcuSysTime_

// alias to use template instance with default allocator
using AcuSysTime =
  pix_robobus_driver_msgs::msg::AcuSysTime_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__ACU_SYS_TIME__STRUCT_HPP_
