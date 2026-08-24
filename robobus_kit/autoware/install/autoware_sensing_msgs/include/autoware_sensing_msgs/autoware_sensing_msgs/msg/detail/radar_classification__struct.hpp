// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_sensing_msgs:msg/RadarClassification.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_CLASSIFICATION__STRUCT_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_CLASSIFICATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autoware_sensing_msgs__msg__RadarClassification __attribute__((deprecated))
#else
# define DEPRECATED__autoware_sensing_msgs__msg__RadarClassification __declspec(deprecated)
#endif

namespace autoware_sensing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarClassification_
{
  using Type = RadarClassification_<ContainerAllocator>;

  explicit RadarClassification_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = 0;
      this->probability = 0.0f;
    }
  }

  explicit RadarClassification_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = 0;
      this->probability = 0.0f;
    }
  }

  // field types and members
  using _label_type =
    uint8_t;
  _label_type label;
  using _probability_type =
    float;
  _probability_type probability;

  // setters for named parameter idiom
  Type & set__label(
    const uint8_t & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__probability(
    const float & _arg)
  {
    this->probability = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t CAR =
    1u;
  static constexpr uint8_t TRUCK =
    2u;
  static constexpr uint8_t BUS =
    3u;
  static constexpr uint8_t TRAILER =
    4u;
  static constexpr uint8_t MOTORCYCLE =
    5u;
  static constexpr uint8_t BICYCLE =
    6u;
  static constexpr uint8_t PEDESTRIAN =
    7u;
  static constexpr uint8_t ANIMAL =
    8u;
  static constexpr uint8_t HAZARD =
    9u;
  static constexpr uint8_t OVER_DRIVABLE =
    10u;
  static constexpr uint8_t UNDER_DRIVABLE =
    11u;

  // pointer types
  using RawPtr =
    autoware_sensing_msgs::msg::RadarClassification_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_sensing_msgs::msg::RadarClassification_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_sensing_msgs::msg::RadarClassification_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_sensing_msgs::msg::RadarClassification_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_sensing_msgs::msg::RadarClassification_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_sensing_msgs::msg::RadarClassification_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_sensing_msgs::msg::RadarClassification_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_sensing_msgs::msg::RadarClassification_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_sensing_msgs::msg::RadarClassification_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_sensing_msgs::msg::RadarClassification_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_sensing_msgs__msg__RadarClassification
    std::shared_ptr<autoware_sensing_msgs::msg::RadarClassification_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_sensing_msgs__msg__RadarClassification
    std::shared_ptr<autoware_sensing_msgs::msg::RadarClassification_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarClassification_ & other) const
  {
    if (this->label != other.label) {
      return false;
    }
    if (this->probability != other.probability) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarClassification_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarClassification_

// alias to use template instance with default allocator
using RadarClassification =
  autoware_sensing_msgs::msg::RadarClassification_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarClassification_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarClassification_<ContainerAllocator>::CAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarClassification_<ContainerAllocator>::TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarClassification_<ContainerAllocator>::BUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarClassification_<ContainerAllocator>::TRAILER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarClassification_<ContainerAllocator>::MOTORCYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarClassification_<ContainerAllocator>::BICYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarClassification_<ContainerAllocator>::PEDESTRIAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarClassification_<ContainerAllocator>::ANIMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarClassification_<ContainerAllocator>::HAZARD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarClassification_<ContainerAllocator>::OVER_DRIVABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarClassification_<ContainerAllocator>::UNDER_DRIVABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_sensing_msgs

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_CLASSIFICATION__STRUCT_HPP_
