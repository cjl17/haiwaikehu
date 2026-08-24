#pragma once

#include <libs/Byte.hpp>

class VaChassisWheelTirePressFb {
public:
  static const uint32_t ID = 0x540;
  VaChassisWheelTirePressFb();
  void Parse();
  void update_bytes(uint8_t bytes_data[8]);
  // singal
  double vcu_chassis_wheel_tire_press_lf_;
  double vcu_chassis_wheel_tire_press_rf_;
  double vcu_chassis_wheel_tire_press_lr_;
  double vcu_chassis_wheel_tire_press_rr_;
  

private:
  uint8_t bytes[8];
  
  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 12, 'name': 'vcu_chassis_wheel_tire_press_lf', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|20]', 'physical_unit': 'bar', 'precision': 0.01, 'type': 'double'}
  double vcuchassiswheeltirepresslf();

  // config detail: {'bit': 16, 'is_signed_var': False, 'len': 12, 'name': 'vcu_chassis_wheel_tire_press_rf', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|20]', 'physical_unit': 'bar', 'precision': 0.01, 'type': 'double'}
  double vcuchassiswheeltirepressrf();

  // config detail: {'bit': 32, 'is_signed_var': False, 'len': 12, 'name': 'vcu_chassis_wheel_tire_press_lr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|20]', 'physical_unit': 'bar', 'precision': 0.01, 'type': 'double'}
  double vcuchassiswheeltirepresslr();

  // config detail: {'bit': 48, 'is_signed_var': False, 'len': 12, 'name': 'vcu_chassis_wheel_tire_press_rr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|20]', 'physical_unit': 'bar', 'precision': 0.01, 'type': 'double'}
  double vcuchassiswheeltirepressrr();
};



