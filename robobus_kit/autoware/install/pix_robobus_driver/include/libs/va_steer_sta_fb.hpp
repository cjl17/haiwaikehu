#pragma once

#include <libs/Byte.hpp>

class VaSteerStaFb {
public:
  static const uint32_t ID = 0x532;
  VaSteerStaFb();
  void Parse();
  void update_bytes(uint8_t bytes_data[8]);
  // singal
  bool vcu_chassis_steer_en_sta_;
  bool vcu_chassis_steer_slopover_;
  int vcu_chassis_steer_work_mode_;
  int vcu_chassis_steer_mode_fb_;
  bool vcu_chassis_steer_communication_lost_;
  int vcu_chassis_steer_angle_fb_;
  int vcu_chassis_steer_angle_rear_fb_;
  double vcu_chassis_steer_angle_speed_fb_;
  int vcu_steer_life_;
  bool vcu_steer_check_sta_;
  

private:
  uint8_t bytes[8];
  
  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 1, 'name': 'vcu_chassis_steer_en_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuchassissteerensta();

  // config detail: {'bit': 1, 'is_signed_var': False, 'len': 1, 'name': 'vcu_chassis_steer_slopover', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuchassissteerslopover();

  // config detail: {'bit': 2, 'is_signed_var': False, 'len': 2, 'name': 'vcu_chassis_steer_work_mode', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcuchassissteerworkmode();

  // config detail: {'bit': 4, 'is_signed_var': False, 'len': 3, 'name': 'vcu_chassis_steer_mode_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|4]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcuchassissteermodefb();

  // config detail: {'bit': 7, 'is_signed_var': False, 'len': 1, 'name': 'vcu_chassis_steer_communication_lost', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuchassissteercommunicationlost();

  // config detail: {'bit': 8, 'is_signed_var': True, 'len': 16, 'name': 'vcu_chassis_steer_angle_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[-500|500]', 'physical_unit': 'deg', 'precision': 1.0, 'type': 'int'}
  int vcuchassissteeranglefb();

  // config detail: {'bit': 24, 'is_signed_var': True, 'len': 16, 'name': 'vcu_chassis_steer_angle_rear_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[-500|500]', 'physical_unit': 'deg', 'precision': 1.0, 'type': 'int'}
  int vcuchassissteeranglerearfb();

  // config detail: {'bit': 40, 'is_signed_var': False, 'len': 8, 'name': 'vcu_chassis_steer_angle_speed_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|500]', 'physical_unit': 'deg/s', 'precision': 2.0, 'type': 'double'}
  double vcuchassissteeranglespeedfb();

  // config detail: {'bit': 48, 'is_signed_var': False, 'len': 4, 'name': 'vcu_steer_life', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcusteerlife();

  // config detail: {'bit': 52, 'is_signed_var': False, 'len': 1, 'name': 'vcu_steer_check_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcusteerchecksta();
};



