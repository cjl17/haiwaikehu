#ifndef PIX_ROBOBUS_DRIVER__COMMON_HPP_
#define PIX_ROBOBUS_DRIVER__COMMON_HPP_

#define ERROR_THRESHOLD 5   // 严重级别延迟阈值
#define WARNING_THRESHOLD 3  // 警告级别延迟阈值

#include <rclcpp/rclcpp.hpp>

// 延迟记录
struct DelayRecording
{
  uint64_t count_eorro;  // 严重级别延迟累计 - 丢失5个周期
  uint64_t count_waring; // 警告级别延迟累计 - 丢失3个周期
};

#endif // PIX_ROBOBUS_DRIVER__COMMON_HPP_
