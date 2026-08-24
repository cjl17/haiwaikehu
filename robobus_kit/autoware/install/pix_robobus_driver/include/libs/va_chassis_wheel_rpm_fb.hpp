#pragma once

#include <libs/Byte.hpp>

class VaChassisWheelRpmFb {
public:
  static const uint32_t ID = 0x539;
  VaChassisWheelRpmFb();
  void Parse();
  void update_bytes(uint8_t bytes_data[8]);
  // singal
  double vcu_chassis_wheel_rpm_lf_;
  double vcu_chassis_wheel_rpm_rf_;
  double vcu_chassis_wheel_rpm_lr_;
  double vcu_chassis_wheel_rpm_rr_;
  

private:
  uint8_t bytes[8];
  
  // config detail: {'bit': 0, 'is_signed_var': True, 'len': 16, 'name': 'vcu_chassis_wheel_rpm_lf', 'offset': 0.0, 'order': 'intel', 'physical_range': '[-1000|1000]', 'physical_unit': 'rpm', 'precision': 0.1, 'type': 'double'}
  double vcuchassiswheelrpmlf();

  // config detail: {'bit': 16, 'is_signed_var': True, 'len': 16, 'name': 'vcu_chassis_wheel_rpm_rf', 'offset': 0.0, 'order': 'intel', 'physical_range': '[-1000|1000]', 'physical_unit': 'rpm', 'precision': 0.1, 'type': 'double'}
  double vcuchassiswheelrpmrf();

  // config detail: {'bit': 32, 'is_signed_var': True, 'len': 16, 'name': 'vcu_chassis_wheel_rpm_lr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[-1000|1000]', 'physical_unit': 'rpm', 'precision': 0.1, 'type': 'double'}
  double vcuchassiswheelrpmlr();

  // config detail: {'bit': 48, 'is_signed_var': True, 'len': 16, 'name': 'vcu_chassis_wheel_rpm_rr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[-1000|1000]', 'physical_unit': 'rpm', 'precision': 0.1, 'type': 'double'}
  double vcuchassiswheelrpmrr();
};



