#pragma once

#include <libs/Byte.hpp>

class VehicleErrcode2 {
public:
  static const uint32_t ID = 0x51B;
  VehicleErrcode2();
  void Parse();
  void update_bytes(uint8_t bytes_data[8]);
  // singal
  bool obc_network_fault_;
  bool obc_hardware_fault_;
  bool vcu_reserve1_;
  bool dp_hardware_fault_;
  bool dp_network_fault_;
  bool vcu_reserve5_;
  bool bcm_hardware_fault_;
  bool bcm_network_fault_;
  bool vcu_reserve11_;
  bool dcu_network_fault_;
  bool dcu_hardware_fault_;
  bool vcu_reserve17_;
  bool avas_network_fault_;
  bool avas_hardware_fault_;
  bool vcu_reserve18_;
  bool vcu_reserve19_;
  bool iis_hardware_fault_;
  bool iis_network_fault_;
  bool vcu_reserve20_;
  bool vcu_reserve26_;
  bool ac_hardware_fault_;
  bool ac_network_fault_;
  bool vcu_reserve32_;
  bool lv_battery_low_voltage_fault_;
  bool lv_battery_high_voltage_fault_;
  

private:
  uint8_t bytes[8];
  
  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 1, 'name': 'obc_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool obcnetworkfault();

  // config detail: {'bit': 1, 'is_signed_var': False, 'len': 1, 'name': 'obc_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool obchardwarefault();

  // config detail: {'bit': 2, 'is_signed_var': False, 'len': 1, 'name': 'vcu_reserve1', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcureserve1();

  // config detail: {'bit': 6, 'is_signed_var': False, 'len': 1, 'name': 'dp_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool dphardwarefault();

  // config detail: {'bit': 7, 'is_signed_var': False, 'len': 1, 'name': 'dp_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool dpnetworkfault();

  // config detail: {'bit': 8, 'is_signed_var': False, 'len': 1, 'name': 'vcu_reserve5', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcureserve5();

  // config detail: {'bit': 14, 'is_signed_var': False, 'len': 1, 'name': 'bcm_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bcmhardwarefault();

  // config detail: {'bit': 15, 'is_signed_var': False, 'len': 1, 'name': 'bcm_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bcmnetworkfault();

  // config detail: {'bit': 16, 'is_signed_var': False, 'len': 1, 'name': 'vcu_reserve11', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcureserve11();

  // config detail: {'bit': 22, 'is_signed_var': False, 'len': 1, 'name': 'dcu_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool dcunetworkfault();

  // config detail: {'bit': 23, 'is_signed_var': False, 'len': 1, 'name': 'dcu_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool dcuhardwarefault();

  // config detail: {'bit': 24, 'is_signed_var': False, 'len': 1, 'name': 'vcu_reserve17', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcureserve17();

  // config detail: {'bit': 25, 'is_signed_var': False, 'len': 1, 'name': 'avas_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool avasnetworkfault();

  // config detail: {'bit': 26, 'is_signed_var': False, 'len': 1, 'name': 'avas_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool avashardwarefault();

  // config detail: {'bit': 27, 'is_signed_var': False, 'len': 1, 'name': 'vcu_reserve18', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcureserve18();

  // config detail: {'bit': 28, 'is_signed_var': False, 'len': 1, 'name': 'vcu_reserve19', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcureserve19();

  // config detail: {'bit': 29, 'is_signed_var': False, 'len': 1, 'name': 'iis_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool iishardwarefault();

  // config detail: {'bit': 30, 'is_signed_var': False, 'len': 1, 'name': 'iis_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool iisnetworkfault();

  // config detail: {'bit': 31, 'is_signed_var': False, 'len': 1, 'name': 'vcu_reserve20', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcureserve20();

  // config detail: {'bit': 37, 'is_signed_var': False, 'len': 1, 'name': 'vcu_reserve26', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcureserve26();

  // config detail: {'bit': 38, 'is_signed_var': False, 'len': 1, 'name': 'ac_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool achardwarefault();

  // config detail: {'bit': 39, 'is_signed_var': False, 'len': 1, 'name': 'ac_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool acnetworkfault();

  // config detail: {'bit': 45, 'is_signed_var': False, 'len': 1, 'name': 'vcu_reserve32', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcureserve32();

  // config detail: {'bit': 46, 'is_signed_var': False, 'len': 1, 'name': 'lv_battery_low_voltage_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool lvbatterylowvoltagefault();

  // config detail: {'bit': 47, 'is_signed_var': False, 'len': 1, 'name': 'lv_battery_high_voltage_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool lvbatteryhighvoltagefault();
};



