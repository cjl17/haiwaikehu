// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_sensing_msgs:msg/RadarInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_INFO__STRUCT_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_INFO__STRUCT_HPP_

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
// Member 'object_fields_info'
// Member 'detection_fields_info'
#include "autoware_sensing_msgs/msg/detail/radar_field_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_sensing_msgs__msg__RadarInfo __attribute__((deprecated))
#else
# define DEPRECATED__autoware_sensing_msgs__msg__RadarInfo __declspec(deprecated)
#endif

namespace autoware_sensing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarInfo_
{
  using Type = RadarInfo_<ContainerAllocator>;

  explicit RadarInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->absolute_dynamics = false;
    }
  }

  explicit RadarInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->absolute_dynamics = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _object_fields_info_type =
    std::vector<autoware_sensing_msgs::msg::RadarFieldInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_sensing_msgs::msg::RadarFieldInfo_<ContainerAllocator>>>;
  _object_fields_info_type object_fields_info;
  using _detection_fields_info_type =
    std::vector<autoware_sensing_msgs::msg::RadarFieldInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_sensing_msgs::msg::RadarFieldInfo_<ContainerAllocator>>>;
  _detection_fields_info_type detection_fields_info;
  using _available_classes_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _available_classes_type available_classes;
  using _absolute_dynamics_type =
    bool;
  _absolute_dynamics_type absolute_dynamics;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__object_fields_info(
    const std::vector<autoware_sensing_msgs::msg::RadarFieldInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_sensing_msgs::msg::RadarFieldInfo_<ContainerAllocator>>> & _arg)
  {
    this->object_fields_info = _arg;
    return *this;
  }
  Type & set__detection_fields_info(
    const std::vector<autoware_sensing_msgs::msg::RadarFieldInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_sensing_msgs::msg::RadarFieldInfo_<ContainerAllocator>>> & _arg)
  {
    this->detection_fields_info = _arg;
    return *this;
  }
  Type & set__available_classes(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->available_classes = _arg;
    return *this;
  }
  Type & set__absolute_dynamics(
    const bool & _arg)
  {
    this->absolute_dynamics = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_sensing_msgs::msg::RadarInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_sensing_msgs::msg::RadarInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_sensing_msgs::msg::RadarInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_sensing_msgs::msg::RadarInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_sensing_msgs::msg::RadarInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_sensing_msgs::msg::RadarInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_sensing_msgs::msg::RadarInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_sensing_msgs::msg::RadarInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_sensing_msgs::msg::RadarInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_sensing_msgs::msg::RadarInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_sensing_msgs__msg__RadarInfo
    std::shared_ptr<autoware_sensing_msgs::msg::RadarInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_sensing_msgs__msg__RadarInfo
    std::shared_ptr<autoware_sensing_msgs::msg::RadarInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->object_fields_info != other.object_fields_info) {
      return false;
    }
    if (this->detection_fields_info != other.detection_fields_info) {
      return false;
    }
    if (this->available_classes != other.available_classes) {
      return false;
    }
    if (this->absolute_dynamics != other.absolute_dynamics) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarInfo_

// alias to use template instance with default allocator
using RadarInfo =
  autoware_sensing_msgs::msg::RadarInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_sensing_msgs

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_INFO__STRUCT_HPP_
