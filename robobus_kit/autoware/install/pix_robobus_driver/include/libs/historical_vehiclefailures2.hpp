#pragma once

#include <libs/Byte.hpp>

class HistoricalVehiclefailures2 {
public:
  static const uint32_t ID = 0x51D;
  HistoricalVehiclefailures2();
  void Parse();
  void update_bytes(uint8_t bytes_data[8]);
  // singal
  bool hobc_network_fault_;
  bool hobc_hardware_fault_;
  bool hdp_hardware_fault_;
  bool hdp_network_fault_;
  bool hbcm_hardware_fault_;
  bool hbcm_network_fault_;
  bool hdcu_network_fault_;
  bool hdcu_hardware_fault_;
  bool havas_network_fault_;
  bool havas_hardware_fault_;
  bool hlis_hardware_fault_;
  bool h_iis_network_fault_;
  bool hac_hardware_fault_;
  bool hac_network_fault_;
  bool h_iv_battery_low_voltage_fault_;
  bool h_iv_battery_high_voltage_fault_;
  

private:
  uint8_t bytes[8];
  
  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 1, 'name': 'hobc_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hobcnetworkfault();

  // config detail: {'bit': 1, 'is_signed_var': False, 'len': 1, 'name': 'hobc_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hobchardwarefault();

  // config detail: {'bit': 6, 'is_signed_var': False, 'len': 1, 'name': 'hdp_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hdphardwarefault();

  // config detail: {'bit': 7, 'is_signed_var': False, 'len': 1, 'name': 'hdp_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hdpnetworkfault();

  // config detail: {'bit': 14, 'is_signed_var': False, 'len': 1, 'name': 'hbcm_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbcmhardwarefault();

  // config detail: {'bit': 15, 'is_signed_var': False, 'len': 1, 'name': 'hbcm_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbcmnetworkfault();

  // config detail: {'bit': 22, 'is_signed_var': False, 'len': 1, 'name': 'hdcu_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hdcunetworkfault();

  // config detail: {'bit': 23, 'is_signed_var': False, 'len': 1, 'name': 'hdcu_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hdcuhardwarefault();

  // config detail: {'bit': 25, 'is_signed_var': False, 'len': 1, 'name': 'havas_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool havasnetworkfault();

  // config detail: {'bit': 26, 'is_signed_var': False, 'len': 1, 'name': 'havas_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool havashardwarefault();

  // config detail: {'bit': 29, 'is_signed_var': False, 'len': 1, 'name': 'hlis_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hlishardwarefault();

  // config detail: {'bit': 30, 'is_signed_var': False, 'len': 1, 'name': 'h_iis_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hiisnetworkfault();

  // config detail: {'bit': 38, 'is_signed_var': False, 'len': 1, 'name': 'hac_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hachardwarefault();

  // config detail: {'bit': 39, 'is_signed_var': False, 'len': 1, 'name': 'hac_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hacnetworkfault();

  // config detail: {'bit': 46, 'is_signed_var': False, 'len': 1, 'name': 'h_iv_battery_low_voltage_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hivbatterylowvoltagefault();

  // config detail: {'bit': 47, 'is_signed_var': False, 'len': 1, 'name': 'h_iv_battery_high_voltage_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hivbatteryhighvoltagefault();
};



