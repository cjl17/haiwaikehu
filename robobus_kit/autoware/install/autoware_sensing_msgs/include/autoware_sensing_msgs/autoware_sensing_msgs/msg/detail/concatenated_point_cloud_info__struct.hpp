// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_sensing_msgs:msg/ConcatenatedPointCloudInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__CONCATENATED_POINT_CLOUD_INFO__STRUCT_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__CONCATENATED_POINT_CLOUD_INFO__STRUCT_HPP_

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
// Member 'source_info'
#include "autoware_sensing_msgs/msg/detail/source_point_cloud_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo __attribute__((deprecated))
#else
# define DEPRECATED__autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo __declspec(deprecated)
#endif

namespace autoware_sensing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConcatenatedPointCloudInfo_
{
  using Type = ConcatenatedPointCloudInfo_<ContainerAllocator>;

  explicit ConcatenatedPointCloudInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->concatenation_success = false;
      this->matching_strategy = 0;
    }
  }

  explicit ConcatenatedPointCloudInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->concatenation_success = false;
      this->matching_strategy = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _concatenation_success_type =
    bool;
  _concatenation_success_type concatenation_success;
  using _matching_strategy_type =
    uint8_t;
  _matching_strategy_type matching_strategy;
  using _matching_strategy_config_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _matching_strategy_config_type matching_strategy_config;
  using _source_info_type =
    std::vector<autoware_sensing_msgs::msg::SourcePointCloudInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_sensing_msgs::msg::SourcePointCloudInfo_<ContainerAllocator>>>;
  _source_info_type source_info;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__concatenation_success(
    const bool & _arg)
  {
    this->concatenation_success = _arg;
    return *this;
  }
  Type & set__matching_strategy(
    const uint8_t & _arg)
  {
    this->matching_strategy = _arg;
    return *this;
  }
  Type & set__matching_strategy_config(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->matching_strategy_config = _arg;
    return *this;
  }
  Type & set__source_info(
    const std::vector<autoware_sensing_msgs::msg::SourcePointCloudInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_sensing_msgs::msg::SourcePointCloudInfo_<ContainerAllocator>>> & _arg)
  {
    this->source_info = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STRATEGY_NAIVE =
    0u;
  static constexpr uint8_t STRATEGY_ADVANCED =
    1u;

  // pointer types
  using RawPtr =
    autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo
    std::shared_ptr<autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo
    std::shared_ptr<autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConcatenatedPointCloudInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->concatenation_success != other.concatenation_success) {
      return false;
    }
    if (this->matching_strategy != other.matching_strategy) {
      return false;
    }
    if (this->matching_strategy_config != other.matching_strategy_config) {
      return false;
    }
    if (this->source_info != other.source_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConcatenatedPointCloudInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConcatenatedPointCloudInfo_

// alias to use template instance with default allocator
using ConcatenatedPointCloudInfo =
  autoware_sensing_msgs::msg::ConcatenatedPointCloudInfo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ConcatenatedPointCloudInfo_<ContainerAllocator>::STRATEGY_NAIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ConcatenatedPointCloudInfo_<ContainerAllocator>::STRATEGY_ADVANCED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_sensing_msgs

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__CONCATENATED_POINT_CLOUD_INFO__STRUCT_HPP_
