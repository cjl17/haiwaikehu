// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_sensing_msgs:msg/SourcePointCloudInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__SOURCE_POINT_CLOUD_INFO__STRUCT_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__SOURCE_POINT_CLOUD_INFO__STRUCT_HPP_

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
# define DEPRECATED__autoware_sensing_msgs__msg__SourcePointCloudInfo __attribute__((deprecated))
#else
# define DEPRECATED__autoware_sensing_msgs__msg__SourcePointCloudInfo __declspec(deprecated)
#endif

namespace autoware_sensing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SourcePointCloudInfo_
{
  using Type = SourcePointCloudInfo_<ContainerAllocator>;

  explicit SourcePointCloudInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic = "";
      this->status = 0;
      this->idx_begin = 0ul;
      this->length = 0ul;
    }
  }

  explicit SourcePointCloudInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    topic(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic = "";
      this->status = 0;
      this->idx_begin = 0ul;
      this->length = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _topic_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _topic_type topic;
  using _status_type =
    uint8_t;
  _status_type status;
  using _idx_begin_type =
    uint32_t;
  _idx_begin_type idx_begin;
  using _length_type =
    uint32_t;
  _length_type length;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__topic(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->topic = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__idx_begin(
    const uint32_t & _arg)
  {
    this->idx_begin = _arg;
    return *this;
  }
  Type & set__length(
    const uint32_t & _arg)
  {
    this->length = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATUS_OK =
    0u;
  static constexpr uint8_t STATUS_TIMEOUT =
    1u;
  static constexpr uint8_t STATUS_INVALID =
    2u;

  // pointer types
  using RawPtr =
    autoware_sensing_msgs::msg::SourcePointCloudInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_sensing_msgs::msg::SourcePointCloudInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_sensing_msgs::msg::SourcePointCloudInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_sensing_msgs::msg::SourcePointCloudInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_sensing_msgs::msg::SourcePointCloudInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_sensing_msgs::msg::SourcePointCloudInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_sensing_msgs::msg::SourcePointCloudInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_sensing_msgs::msg::SourcePointCloudInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_sensing_msgs::msg::SourcePointCloudInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_sensing_msgs::msg::SourcePointCloudInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_sensing_msgs__msg__SourcePointCloudInfo
    std::shared_ptr<autoware_sensing_msgs::msg::SourcePointCloudInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_sensing_msgs__msg__SourcePointCloudInfo
    std::shared_ptr<autoware_sensing_msgs::msg::SourcePointCloudInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SourcePointCloudInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->topic != other.topic) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->idx_begin != other.idx_begin) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    return true;
  }
  bool operator!=(const SourcePointCloudInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SourcePointCloudInfo_

// alias to use template instance with default allocator
using SourcePointCloudInfo =
  autoware_sensing_msgs::msg::SourcePointCloudInfo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SourcePointCloudInfo_<ContainerAllocator>::STATUS_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SourcePointCloudInfo_<ContainerAllocator>::STATUS_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SourcePointCloudInfo_<ContainerAllocator>::STATUS_INVALID;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_sensing_msgs

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__SOURCE_POINT_CLOUD_INFO__STRUCT_HPP_
