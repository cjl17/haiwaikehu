// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_sensing_msgs:msg/RadarObject.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_OBJECT__STRUCT_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'velocity'
// Member 'acceleration'
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'classifications'
#include "autoware_sensing_msgs/msg/detail/radar_classification__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_sensing_msgs__msg__RadarObject __attribute__((deprecated))
#else
# define DEPRECATED__autoware_sensing_msgs__msg__RadarObject __declspec(deprecated)
#endif

namespace autoware_sensing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarObject_
{
  using Type = RadarObject_<ContainerAllocator>;

  explicit RadarObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    velocity(_init),
    acceleration(_init),
    size(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = 0ul;
      this->age = 0;
      this->measurement_status = 0;
      this->movement_status = 0;
      std::fill<typename std::array<float, 6>::iterator, float>(this->position_covariance.begin(), this->position_covariance.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->velocity_covariance.begin(), this->velocity_covariance.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->acceleration_covariance.begin(), this->acceleration_covariance.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->size_covariance.begin(), this->size_covariance.end(), 0.0f);
      this->orientation = 0.0f;
      this->orientation_std = 0.0f;
      this->orientation_rate = 0.0f;
      this->orientation_rate_std = 0.0f;
      this->existence_probability = 0.0f;
    }
  }

  explicit RadarObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    velocity(_alloc, _init),
    acceleration(_alloc, _init),
    size(_alloc, _init),
    position_covariance(_alloc),
    velocity_covariance(_alloc),
    acceleration_covariance(_alloc),
    size_covariance(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = 0ul;
      this->age = 0;
      this->measurement_status = 0;
      this->movement_status = 0;
      std::fill<typename std::array<float, 6>::iterator, float>(this->position_covariance.begin(), this->position_covariance.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->velocity_covariance.begin(), this->velocity_covariance.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->acceleration_covariance.begin(), this->acceleration_covariance.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->size_covariance.begin(), this->size_covariance.end(), 0.0f);
      this->orientation = 0.0f;
      this->orientation_std = 0.0f;
      this->orientation_rate = 0.0f;
      this->orientation_rate_std = 0.0f;
      this->existence_probability = 0.0f;
    }
  }

  // field types and members
  using _object_id_type =
    uint32_t;
  _object_id_type object_id;
  using _age_type =
    uint16_t;
  _age_type age;
  using _measurement_status_type =
    uint8_t;
  _measurement_status_type measurement_status;
  using _movement_status_type =
    uint8_t;
  _movement_status_type movement_status;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _velocity_type velocity;
  using _acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _acceleration_type acceleration;
  using _size_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _size_type size;
  using _position_covariance_type =
    std::array<float, 6>;
  _position_covariance_type position_covariance;
  using _velocity_covariance_type =
    std::array<float, 6>;
  _velocity_covariance_type velocity_covariance;
  using _acceleration_covariance_type =
    std::array<float, 6>;
  _acceleration_covariance_type acceleration_covariance;
  using _size_covariance_type =
    std::array<float, 6>;
  _size_covariance_type size_covariance;
  using _orientation_type =
    float;
  _orientation_type orientation;
  using _orientation_std_type =
    float;
  _orientation_std_type orientation_std;
  using _orientation_rate_type =
    float;
  _orientation_rate_type orientation_rate;
  using _orientation_rate_std_type =
    float;
  _orientation_rate_std_type orientation_rate_std;
  using _existence_probability_type =
    float;
  _existence_probability_type existence_probability;
  using _classifications_type =
    std::vector<autoware_sensing_msgs::msg::RadarClassification_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_sensing_msgs::msg::RadarClassification_<ContainerAllocator>>>;
  _classifications_type classifications;

  // setters for named parameter idiom
  Type & set__object_id(
    const uint32_t & _arg)
  {
    this->object_id = _arg;
    return *this;
  }
  Type & set__age(
    const uint16_t & _arg)
  {
    this->age = _arg;
    return *this;
  }
  Type & set__measurement_status(
    const uint8_t & _arg)
  {
    this->measurement_status = _arg;
    return *this;
  }
  Type & set__movement_status(
    const uint8_t & _arg)
  {
    this->movement_status = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__size(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->size = _arg;
    return *this;
  }
  Type & set__position_covariance(
    const std::array<float, 6> & _arg)
  {
    this->position_covariance = _arg;
    return *this;
  }
  Type & set__velocity_covariance(
    const std::array<float, 6> & _arg)
  {
    this->velocity_covariance = _arg;
    return *this;
  }
  Type & set__acceleration_covariance(
    const std::array<float, 6> & _arg)
  {
    this->acceleration_covariance = _arg;
    return *this;
  }
  Type & set__size_covariance(
    const std::array<float, 6> & _arg)
  {
    this->size_covariance = _arg;
    return *this;
  }
  Type & set__orientation(
    const float & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__orientation_std(
    const float & _arg)
  {
    this->orientation_std = _arg;
    return *this;
  }
  Type & set__orientation_rate(
    const float & _arg)
  {
    this->orientation_rate = _arg;
    return *this;
  }
  Type & set__orientation_rate_std(
    const float & _arg)
  {
    this->orientation_rate_std = _arg;
    return *this;
  }
  Type & set__existence_probability(
    const float & _arg)
  {
    this->existence_probability = _arg;
    return *this;
  }
  Type & set__classifications(
    const std::vector<autoware_sensing_msgs::msg::RadarClassification_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_sensing_msgs::msg::RadarClassification_<ContainerAllocator>>> & _arg)
  {
    this->classifications = _arg;
    return *this;
  }

  // constant declarations
  static constexpr float INVALID_COV_VALUE =
    -1.0;
  static constexpr uint8_t MEASUREMENT_STATUS_INVALID =
    0u;
  static constexpr uint8_t MEASUREMENT_STATUS_MEASURED =
    1u;
  static constexpr uint8_t MEASUREMENT_STATUS_PREDICTED =
    2u;
  static constexpr uint8_t MEASUREMENT_STATUS_NEW =
    3u;
  static constexpr uint8_t MEASUREMENT_STATUS_UNKNOWN =
    4u;
  static constexpr uint8_t MOVEMENT_STATUS_INVALID =
    0u;
  static constexpr uint8_t MOVEMENT_STATUS_DYNAMIC =
    1u;
  static constexpr uint8_t MOVEMENT_STATUS_STATIC =
    2u;
  static constexpr uint8_t MOVEMENT_STATUS_UNKNOWN =
    3u;

  // pointer types
  using RawPtr =
    autoware_sensing_msgs::msg::RadarObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_sensing_msgs::msg::RadarObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_sensing_msgs::msg::RadarObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_sensing_msgs::msg::RadarObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_sensing_msgs::msg::RadarObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_sensing_msgs::msg::RadarObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_sensing_msgs::msg::RadarObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_sensing_msgs::msg::RadarObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_sensing_msgs::msg::RadarObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_sensing_msgs::msg::RadarObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_sensing_msgs__msg__RadarObject
    std::shared_ptr<autoware_sensing_msgs::msg::RadarObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_sensing_msgs__msg__RadarObject
    std::shared_ptr<autoware_sensing_msgs::msg::RadarObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarObject_ & other) const
  {
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    if (this->measurement_status != other.measurement_status) {
      return false;
    }
    if (this->movement_status != other.movement_status) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    if (this->position_covariance != other.position_covariance) {
      return false;
    }
    if (this->velocity_covariance != other.velocity_covariance) {
      return false;
    }
    if (this->acceleration_covariance != other.acceleration_covariance) {
      return false;
    }
    if (this->size_covariance != other.size_covariance) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->orientation_std != other.orientation_std) {
      return false;
    }
    if (this->orientation_rate != other.orientation_rate) {
      return false;
    }
    if (this->orientation_rate_std != other.orientation_rate_std) {
      return false;
    }
    if (this->existence_probability != other.existence_probability) {
      return false;
    }
    if (this->classifications != other.classifications) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarObject_

// alias to use template instance with default allocator
using RadarObject =
  autoware_sensing_msgs::msg::RadarObject_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr float RadarObject_<ContainerAllocator>::INVALID_COV_VALUE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObject_<ContainerAllocator>::MEASUREMENT_STATUS_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObject_<ContainerAllocator>::MEASUREMENT_STATUS_MEASURED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObject_<ContainerAllocator>::MEASUREMENT_STATUS_PREDICTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObject_<ContainerAllocator>::MEASUREMENT_STATUS_NEW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObject_<ContainerAllocator>::MEASUREMENT_STATUS_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObject_<ContainerAllocator>::MOVEMENT_STATUS_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObject_<ContainerAllocator>::MOVEMENT_STATUS_DYNAMIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObject_<ContainerAllocator>::MOVEMENT_STATUS_STATIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObject_<ContainerAllocator>::MOVEMENT_STATUS_UNKNOWN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_sensing_msgs

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_OBJECT__STRUCT_HPP_
