#pragma once

#include <libs/Byte.hpp>

class VaPowerStaFb {
public:
  static const uint32_t ID = 0x535;
  VaPowerStaFb();
  void Parse();
  void update_bytes(uint8_t bytes_data[8]);
  // singal
  int vcu_chassis_bms_reserved1_;
  int vcu_chassis_power_charge_sta_;
  bool vcu_chassis_power_charge_sock_sta_;
  int vcu_chassis_power_soc_fb_;
  double vcu_chassis_power_volt_fb_;
  double vcu_chassis_power_curr_fb_;
  int vcu_chassis_bms_max_temp_;
  int vcu_chassis_bms_reserved2_;
  

private:
  uint8_t bytes[8];
  
  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 4, 'name': 'vcu_chassis_bms_reserved1', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcuchassisbmsreserved1();

  // config detail: {'bit': 4, 'is_signed_var': False, 'len': 2, 'name': 'vcu_chassis_power_charge_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcuchassispowerchargesta();

  // config detail: {'bit': 6, 'is_signed_var': False, 'len': 1, 'name': 'vcu_chassis_power_charge_sock_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuchassispowerchargesocksta();

  // config detail: {'bit': 8, 'is_signed_var': False, 'len': 8, 'name': 'vcu_chassis_power_soc_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|100]', 'physical_unit': '%', 'precision': 1.0, 'type': 'int'}
  int vcuchassispowersocfb();

  // config detail: {'bit': 16, 'is_signed_var': False, 'len': 16, 'name': 'vcu_chassis_power_volt_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1000]', 'physical_unit': 'V', 'precision': 0.1, 'type': 'double'}
  double vcuchassispowervoltfb();

  // config detail: {'bit': 32, 'is_signed_var': False, 'len': 16, 'name': 'vcu_chassis_power_curr_fb', 'offset': -1000.0, 'order': 'intel', 'physical_range': '[-1000|1000]', 'physical_unit': 'A', 'precision': 0.1, 'type': 'double'}
  double vcuchassispowercurrfb();

  // config detail: {'bit': 48, 'is_signed_var': False, 'len': 8, 'name': 'vcu_chassis_bms_max_temp', 'offset': -40.0, 'order': 'intel', 'physical_range': '[-40|80]', 'physical_unit': '℃', 'precision': 1.0, 'type': 'int'}
  int vcuchassisbmsmaxtemp();

  // config detail: {'bit': 56, 'is_signed_var': False, 'len': 8, 'name': 'vcu_chassis_bms_reserved2', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcuchassisbmsreserved2();
};



