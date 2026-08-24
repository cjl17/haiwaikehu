#pragma once

#include <libs/Byte.hpp>

class VaVehicleFltSta {
public:
  static const uint32_t ID = 0x537;
  VaVehicleFltSta();
  void Parse();
  void update_bytes(uint8_t bytes_data[8]);
  // singal
  bool vcu_sys_motor_over_temp_sta_;
  bool vcu_sys_bms_over_temp_sta_;
  bool vcu_sys_brake_over_temp_sta_;
  bool vcu_sys_steer_over_temp_sta_;
  bool vcu_sys_under_volt_;
  int vcu_sys_flt_;
  int vcu_sys_brake_flt_;
  int vcu_sys_parking_flt_;
  int vcu_sys_steer_front_flt_;
  int vcu_sys_steer_back_flt_;
  int vcu_sys_motor_lf_flt_;
  int vcu_sys_motor_rf_flt_;
  int vcu_sys_motor_lr_flt_;
  int vcu_sys_motor_rr_flt_;
  int vcu_sys_bms_flt_;
  int vcu_sys_dc_flt_;
  int vcu_sys_door_flt_;
  int vcu_sys_dpm_flt_;
  int vcu_sys_bcm_flt_;
  int vcu_vehicle_flt_level_;
  int vcu_sys_flt_reserve1_;
  

private:
  uint8_t bytes[8];
  
  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 1, 'name': 'vcu_sys_motor_over_temp_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcusysmotorovertempsta();

  // config detail: {'bit': 1, 'is_signed_var': False, 'len': 1, 'name': 'vcu_sys_bms_over_temp_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcusysbmsovertempsta();

  // config detail: {'bit': 2, 'is_signed_var': False, 'len': 1, 'name': 'vcu_sys_brake_over_temp_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcusysbrakeovertempsta();

  // config detail: {'bit': 3, 'is_signed_var': False, 'len': 1, 'name': 'vcu_sys_steer_over_temp_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcusyssteerovertempsta();

  // config detail: {'bit': 4, 'is_signed_var': False, 'len': 1, 'name': 'vcu_sys_under_volt', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcusysundervolt();

  // config detail: {'bit': 8, 'is_signed_var': False, 'len': 4, 'name': 'vcu_sys_flt', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|4]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcusysflt();

  // config detail: {'bit': 12, 'is_signed_var': False, 'len': 4, 'name': 'vcu_sys_brake_flt', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|4]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcusysbrakeflt();

  // config detail: {'bit': 16, 'is_signed_var': False, 'len': 4, 'name': 'vcu_sys_parking_flt', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|4]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcusysparkingflt();

  // config detail: {'bit': 20, 'is_signed_var': False, 'len': 4, 'name': 'vcu_sys_steer_front_flt', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|4]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcusyssteerfrontflt();

  // config detail: {'bit': 24, 'is_signed_var': False, 'len': 4, 'name': 'vcu_sys_steer_back_flt', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|4]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcusyssteerbackflt();

  // config detail: {'bit': 28, 'is_signed_var': False, 'len': 4, 'name': 'vcu_sys_motor_lf_flt', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|4]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcusysmotorlfflt();

  // config detail: {'bit': 32, 'is_signed_var': False, 'len': 4, 'name': 'vcu_sys_motor_rf_flt', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|4]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcusysmotorrfflt();

  // config detail: {'bit': 36, 'is_signed_var': False, 'len': 4, 'name': 'vcu_sys_motor_lr_flt', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|4]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcusysmotorlrflt();

  // config detail: {'bit': 40, 'is_signed_var': False, 'len': 4, 'name': 'vcu_sys_motor_rr_flt', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|4]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcusysmotorrrflt();

  // config detail: {'bit': 44, 'is_signed_var': False, 'len': 4, 'name': 'vcu_sys_bms_flt', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|4]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcusysbmsflt();

  // config detail: {'bit': 48, 'is_signed_var': False, 'len': 2, 'name': 'vcu_sys_dc_flt', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcusysdcflt();

  // config detail: {'bit': 50, 'is_signed_var': False, 'len': 2, 'name': 'vcu_sys_door_flt', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcusysdoorflt();

  // config detail: {'bit': 52, 'is_signed_var': False, 'len': 2, 'name': 'vcu_sys_dpm_flt', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcusysdpmflt();

  // config detail: {'bit': 54, 'is_signed_var': False, 'len': 2, 'name': 'vcu_sys_bcm_flt', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcusysbcmflt();

  // config detail: {'bit': 56, 'is_signed_var': False, 'len': 4, 'name': 'vcu_vehicle_flt_level', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|4]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcuvehiclefltlevel();

  // config detail: {'bit': 60, 'is_signed_var': False, 'len': 4, 'name': 'vcu_sys_flt_reserve1', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|4]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vcusysfltreserve1();
};



