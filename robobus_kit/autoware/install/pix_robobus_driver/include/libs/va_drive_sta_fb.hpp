#pragma once

#include <libs/Byte.hpp>

class VaDriveStaFb {
public:
  static const uint32_t ID = 0x530;
  VaDriveStaFb();
  void Parse();
  void update_bytes(uint8_t bytes_data[8]);
  // singal
  bool vcu_chassis_driver_en_sta_;
  bool vcu_chassis_diver_slopover_;
  int vcu_chassis_driver_mode_sta_;
  int vcu_chassis_gear_fb_;
  int vcu_chassis4_wd_mode_fb_;
  double vcu_chassis_speed_fb_;
  double vcu_chassis_throttle_pald_fb_;
  bool vcu_chassis_throttle_pedal_req_fb_;
  double vcu_chassis_acceleration_fb_;
  int vcu_drive_life_;
  bool vcu_drive_check_sta_;
  

private:
  uint8_t bytes[8];
  
  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 1, 'name': 'vcu_chassis_driver_en_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuchassisdriverensta();

  // config detail: {'bit': 1, 'is_signed_var': False, 'len': 1, 'name': 'vcu_chassis_diver_slopover', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuchassisdiverslopover();

  // config detail: {'bit': 2, 'is_signed_var': False, 'len': 2, 'name': 'vcu_chassis_driver_mode_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcuchassisdrivermodesta();

  // config detail: {'bit': 4, 'is_signed_var': False, 'len': 2, 'name': 'vcu_chassis_gear_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcuchassisgearfb();

  // config detail: {'bit': 6, 'is_signed_var': False, 'len': 2, 'name': 'vcu_chassis4_wd_mode_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcuchassis4wdmodefb();

  // config detail: {'bit': 8, 'is_signed_var': True, 'len': 16, 'name': 'vcu_chassis_speed_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[-50|50]', 'physical_unit': 'm/s', 'precision': 0.01, 'type': 'double'}
  double vcuchassisspeedfb();

  // config detail: {'bit': 24, 'is_signed_var': False, 'len': 10, 'name': 'vcu_chassis_throttle_pald_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|100]', 'physical_unit': '%', 'precision': 0.1, 'type': 'double'}
  double vcuchassisthrottlepaldfb();

  // config detail: {'bit': 34, 'is_signed_var': False, 'len': 1, 'name': 'vcu_chassis_throttle_pedal_req_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuchassisthrottlepedalreqfb();

  // config detail: {'bit': 40, 'is_signed_var': True, 'len': 16, 'name': 'vcu_chassis_acceleration_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[-20|20]', 'physical_unit': 'm/s2', 'precision': 0.01, 'type': 'double'}
  double vcuchassisaccelerationfb();

  // config detail: {'bit': 56, 'is_signed_var': False, 'len': 4, 'name': 'vcu_drive_life', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcudrivelife();

  // config detail: {'bit': 60, 'is_signed_var': False, 'len': 1, 'name': 'vcu_drive_check_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcudrivechecksta();
};



