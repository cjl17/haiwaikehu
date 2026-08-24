#pragma once

#include <libs/Byte.hpp>

class VaVehicleWorkStaFb {
public:
  static const uint32_t ID = 0x534;
  VaVehicleWorkStaFb();
  void Parse();
  void update_bytes(uint8_t bytes_data[8]);
  // singal
  int vcu_driving_mode_fb_;
  int vcu_chassis_power_sta_fb_;
  int vcu_chassis_power_dc_sta_;
  bool vcu_remote_connecte_sta_;
  bool vcu_acu_connect_sta_;
  bool vcu_chassis_speed_limited_mode_fb_;
  bool vcu_chassis_power_limite_sta_;
  int vcu_sys_eco_mode_;
  double vcu_chassis_speed_limited_val_fb_;
  double vcu_chassis_low_power_volt_sta_;
  int vcu_chassis_e_stop_sta_fb_;
  bool vcu_crash_front_sta_;
  bool vcu_crash_rear_sta_;
  bool vcu_crash_left_sta_;
  bool vcu_crash_right_sta_;
  int vcu_life_;
  int vcu_check_sum_;
  

private:
  uint8_t bytes[8];
  
  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 2, 'name': 'vcu_driving_mode_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcudrivingmodefb();

  // config detail: {'bit': 2, 'is_signed_var': False, 'len': 2, 'name': 'vcu_chassis_power_sta_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcuchassispowerstafb();

  // config detail: {'bit': 4, 'is_signed_var': False, 'len': 2, 'name': 'vcu_chassis_power_dc_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcuchassispowerdcsta();

  // config detail: {'bit': 6, 'is_signed_var': False, 'len': 1, 'name': 'vcu_remote_connecte_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuremoteconnectesta();

  // config detail: {'bit': 7, 'is_signed_var': False, 'len': 1, 'name': 'vcu_acu_connect_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuacuconnectsta();

  // config detail: {'bit': 8, 'is_signed_var': False, 'len': 1, 'name': 'vcu_chassis_speed_limited_mode_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuchassisspeedlimitedmodefb();

  // config detail: {'bit': 9, 'is_signed_var': False, 'len': 1, 'name': 'vcu_chassis_power_limite_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuchassispowerlimitesta();

  // config detail: {'bit': 10, 'is_signed_var': False, 'len': 2, 'name': 'vcu_sys_eco_mode', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcusysecomode();

  // config detail: {'bit': 16, 'is_signed_var': False, 'len': 16, 'name': 'vcu_chassis_speed_limited_val_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|50]', 'physical_unit': 'm/s', 'precision': 0.1, 'type': 'double'}
  double vcuchassisspeedlimitedvalfb();

  // config detail: {'bit': 32, 'is_signed_var': False, 'len': 8, 'name': 'vcu_chassis_low_power_volt_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|25]', 'physical_unit': 'V', 'precision': 0.1, 'type': 'double'}
  double vcuchassislowpowervoltsta();

  // config detail: {'bit': 40, 'is_signed_var': False, 'len': 4, 'name': 'vcu_chassis_e_stop_sta_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcuchassisestopstafb();

  // config detail: {'bit': 44, 'is_signed_var': False, 'len': 1, 'name': 'vcu_crash_front_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcucrashfrontsta();

  // config detail: {'bit': 45, 'is_signed_var': False, 'len': 1, 'name': 'vcu_crash_rear_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcucrashrearsta();

  // config detail: {'bit': 46, 'is_signed_var': False, 'len': 1, 'name': 'vcu_crash_left_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcucrashleftsta();

  // config detail: {'bit': 47, 'is_signed_var': False, 'len': 1, 'name': 'vcu_crash_right_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcucrashrightsta();

  // config detail: {'bit': 48, 'is_signed_var': False, 'len': 4, 'name': 'vcu_life', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vculife();

  // config detail: {'bit': 56, 'is_signed_var': False, 'len': 8, 'name': 'vcu_check_sum', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcuchecksum();
};



