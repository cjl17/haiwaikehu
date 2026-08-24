#pragma once

#include <libs/Byte.hpp>

class VaVehicleStaFb {
public:
  static const uint32_t ID = 0x536;
  VaVehicleStaFb();
  void Parse();
  void update_bytes(uint8_t bytes_data[8]);
  // singal
  bool vcu_vehicle_pos_lamp_fb_;
  bool vcu_vehicle_head_lamp_fb_;
  bool vcu_vehicle_left_lamp_fb_;
  bool vcu_vehicle_right_lamp_fb_;
  bool vcu_vehicle_high_beam_fb_;
  bool vcu_vehicle_fog_lamp_fb_;
  bool vcu_vehicle_hazard_war_lamp_fb_;
  bool vcu_vehicle_body_lamp_fb_;
  bool vcu_vehicle_read_lamp_fb_;
  int acu_vehicle_window_fb_;
  int vcu_vehicle_door_sta_fb_;
  int vcu_vehicle_wipers_sta_fb_;
  int vcu_vehicle_safety_belt1_;
  int vcu_vehicle_safety_belt2_;
  int vcu_vehicle_safety_belt3_;
  int vcu_vehicle_safety_belt4_;
  int vcu_vehicle_safety_belt5_;
  int vcu_vehicle_safety_belt6_;
  int vcu_vehicle_reserve_warning_;
  int vcu_vehicle_display_speed_;
  

private:
  uint8_t bytes[8];
  
  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 1, 'name': 'vcu_vehicle_pos_lamp_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuvehicleposlampfb();

  // config detail: {'bit': 1, 'is_signed_var': False, 'len': 1, 'name': 'vcu_vehicle_head_lamp_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuvehicleheadlampfb();

  // config detail: {'bit': 2, 'is_signed_var': False, 'len': 1, 'name': 'vcu_vehicle_left_lamp_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuvehicleleftlampfb();

  // config detail: {'bit': 3, 'is_signed_var': False, 'len': 1, 'name': 'vcu_vehicle_right_lamp_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuvehiclerightlampfb();

  // config detail: {'bit': 4, 'is_signed_var': False, 'len': 1, 'name': 'vcu_vehicle_high_beam_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuvehiclehighbeamfb();

  // config detail: {'bit': 5, 'is_signed_var': False, 'len': 1, 'name': 'vcu_vehicle_fog_lamp_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuvehiclefoglampfb();

  // config detail: {'bit': 6, 'is_signed_var': False, 'len': 1, 'name': 'vcu_vehicle_hazard_war_lamp_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuvehiclehazardwarlampfb();

  // config detail: {'bit': 7, 'is_signed_var': False, 'len': 1, 'name': 'vcu_vehicle_body_lamp_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuvehiclebodylampfb();

  // config detail: {'bit': 8, 'is_signed_var': False, 'len': 1, 'name': 'vcu_vehicle_read_lamp_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcuvehiclereadlampfb();

  // config detail: {'bit': 9, 'is_signed_var': False, 'len': 4, 'name': 'acu_vehicle_window_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|6]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int acuvehiclewindowfb();

  // config detail: {'bit': 16, 'is_signed_var': False, 'len': 4, 'name': 'vcu_vehicle_door_sta_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|6]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcuvehicledoorstafb();

  // config detail: {'bit': 20, 'is_signed_var': False, 'len': 2, 'name': 'vcu_vehicle_wipers_sta_fb', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcuvehiclewipersstafb();

  // config detail: {'bit': 24, 'is_signed_var': False, 'len': 2, 'name': 'vcu_vehicle_safety_belt1', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcuvehiclesafetybelt1();

  // config detail: {'bit': 26, 'is_signed_var': False, 'len': 2, 'name': 'vcu_vehicle_safety_belt2', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcuvehiclesafetybelt2();

  // config detail: {'bit': 28, 'is_signed_var': False, 'len': 2, 'name': 'vcu_vehicle_safety_belt3', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcuvehiclesafetybelt3();

  // config detail: {'bit': 30, 'is_signed_var': False, 'len': 2, 'name': 'vcu_vehicle_safety_belt4', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcuvehiclesafetybelt4();

  // config detail: {'bit': 32, 'is_signed_var': False, 'len': 2, 'name': 'vcu_vehicle_safety_belt5', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcuvehiclesafetybelt5();

  // config detail: {'bit': 34, 'is_signed_var': False, 'len': 2, 'name': 'vcu_vehicle_safety_belt6', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcuvehiclesafetybelt6();

  // config detail: {'bit': 40, 'is_signed_var': False, 'len': 16, 'name': 'vcu_vehicle_reserve_warning', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|65535]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcuvehiclereservewarning();

  // config detail: {'bit': 56, 'is_signed_var': False, 'len': 8, 'name': 'vcu_vehicle_display_speed', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|240]', 'physical_unit': 'Km/h', 'precision': 1.0, 'type': 'int'}
  int vcuvehicledisplayspeed();
};



