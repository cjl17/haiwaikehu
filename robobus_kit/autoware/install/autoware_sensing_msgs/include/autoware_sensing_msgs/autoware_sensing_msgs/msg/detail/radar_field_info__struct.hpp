// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_sensing_msgs:msg/RadarFieldInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_FIELD_INFO__STRUCT_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_FIELD_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'field_name'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_sensing_msgs__msg__RadarFieldInfo __attribute__((deprecated))
#else
# define DEPRECATED__autoware_sensing_msgs__msg__RadarFieldInfo __declspec(deprecated)
#endif

namespace autoware_sensing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarFieldInfo_
{
  using Type = RadarFieldInfo_<ContainerAllocator>;

  explicit RadarFieldInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : field_name(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_value_available = false;
      this->max_value_available = false;
      this->resolution_available = false;
      this->min_value = 0.0f;
      this->max_value = 0.0f;
      this->resolution = 0.0f;
    }
  }

  explicit RadarFieldInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : field_name(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_value_available = false;
      this->max_value_available = false;
      this->resolution_available = false;
      this->min_value = 0.0f;
      this->max_value = 0.0f;
      this->resolution = 0.0f;
    }
  }

  // field types and members
  using _field_name_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _field_name_type field_name;
  using _min_value_available_type =
    bool;
  _min_value_available_type min_value_available;
  using _max_value_available_type =
    bool;
  _max_value_available_type max_value_available;
  using _resolution_available_type =
    bool;
  _resolution_available_type resolution_available;
  using _min_value_type =
    float;
  _min_value_type min_value;
  using _max_value_type =
    float;
  _max_value_type max_value;
  using _resolution_type =
    float;
  _resolution_type resolution;

  // setters for named parameter idiom
  Type & set__field_name(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->field_name = _arg;
    return *this;
  }
  Type & set__min_value_available(
    const bool & _arg)
  {
    this->min_value_available = _arg;
    return *this;
  }
  Type & set__max_value_available(
    const bool & _arg)
  {
    this->max_value_available = _arg;
    return *this;
  }
  Type & set__resolution_available(
    const bool & _arg)
  {
    this->resolution_available = _arg;
    return *this;
  }
  Type & set__min_value(
    const float & _arg)
  {
    this->min_value = _arg;
    return *this;
  }
  Type & set__max_value(
    const float & _arg)
  {
    this->max_value = _arg;
    return *this;
  }
  Type & set__resolution(
    const float & _arg)
  {
    this->resolution = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_sensing_msgs::msg::RadarFieldInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_sensing_msgs::msg::RadarFieldInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_sensing_msgs::msg::RadarFieldInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_sensing_msgs::msg::RadarFieldInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_sensing_msgs::msg::RadarFieldInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_sensing_msgs::msg::RadarFieldInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_sensing_msgs::msg::RadarFieldInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_sensing_msgs::msg::RadarFieldInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_sensing_msgs::msg::RadarFieldInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_sensing_msgs::msg::RadarFieldInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_sensing_msgs__msg__RadarFieldInfo
    std::shared_ptr<autoware_sensing_msgs::msg::RadarFieldInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_sensing_msgs__msg__RadarFieldInfo
    std::shared_ptr<autoware_sensing_msgs::msg::RadarFieldInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarFieldInfo_ & other) const
  {
    if (this->field_name != other.field_name) {
      return false;
    }
    if (this->min_value_available != other.min_value_available) {
      return false;
    }
    if (this->max_value_available != other.max_value_available) {
      return false;
    }
    if (this->resolution_available != other.resolution_available) {
      return false;
    }
    if (this->min_value != other.min_value) {
      return false;
    }
    if (this->max_value != other.max_value) {
      return false;
    }
    if (this->resolution != other.resolution) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarFieldInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarFieldInfo_

// alias to use template instance with default allocator
using RadarFieldInfo =
  autoware_sensing_msgs::msg::RadarFieldInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_sensing_msgs

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_FIELD_INFO__STRUCT_HPP_
