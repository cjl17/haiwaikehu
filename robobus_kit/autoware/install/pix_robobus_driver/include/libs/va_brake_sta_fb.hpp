#pragma once

#include <libs/Byte.hpp>

class VaBrakeStaFb {
public:
  static const uint32_t ID = 0x531;
  VaBrakeStaFb();
  void Parse();
  void update_bytes(uint8_t bytes_data[8]);
  // singal
  bool vcu_chassis_brake_en_sta_;
  bool vcu_vehicle_brake_lamp_fb_;
  int vcu_chassis_epb_fb_;
  bool vcu_chassis_brake_communication_lost_;
  double vcu_chassis_brake_padl_fb_;
  bool vcu_brake_pedal_req_fb_;
  bool vcu_aeb_en_sta_fb_;
  bool vcu_aeb_trigger_sta_fb_;
  int vcu_chassis_brake_pressure_fb_;
  int vcu_brake_life_;
  bool vcu_brake_check_sta_;
  

private:
  uint8_t bytes[8];
  
  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 1, 'name': 'vcu_chassis_brake_en_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuchassisbrakeensta();

  // config detail: {'bit': 2, 'is_signed_var': False, 'len': 1, 'name': 'vcu_vehicle_brake_lamp_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuvehiclebrakelampfb();

  // config detail: {'bit': 4, 'is_signed_var': False, 'len': 2, 'name': 'vcu_chassis_epb_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcuchassisepbfb();

  // config detail: {'bit': 7, 'is_signed_var': False, 'len': 1, 'name': 'vcu_chassis_brake_communication_lost', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuchassisbrakecommunicationlost();

  // config detail: {'bit': 8, 'is_signed_var': False, 'len': 10, 'name': 'vcu_chassis_brake_padl_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|100]', 'physical_unit': '%', 'precision': 0.1, 'type': 'double'}
  double vcuchassisbrakepadlfb();

  // config detail: {'bit': 18, 'is_signed_var': False, 'len': 1, 'name': 'vcu_brake_pedal_req_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcubrakepedalreqfb();

  // config detail: {'bit': 20, 'is_signed_var': False, 'len': 1, 'name': 'vcu_aeb_en_sta_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuaebenstafb();

  // config detail: {'bit': 22, 'is_signed_var': False, 'len': 1, 'name': 'vcu_aeb_trigger_sta_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuaebtriggerstafb();

  // config detail: {'bit': 24, 'is_signed_var': False, 'len': 8, 'name': 'vcu_chassis_brake_pressure_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|100]', 'physical_unit': 'bar', 'precision': 1.0, 'type': 'int'}
  int vcuchassisbrakepressurefb();

  // config detail: {'bit': 48, 'is_signed_var': False, 'len': 4, 'name': 'vcu_brake_life', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcubrakelife();

  // config detail: {'bit': 52, 'is_signed_var': False, 'len': 1, 'name': 'vcu_brake_check_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcubrakechecksta();
};



