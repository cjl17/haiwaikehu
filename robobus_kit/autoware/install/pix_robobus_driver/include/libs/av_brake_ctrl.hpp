#pragma once
#include <libs/Byte.hpp>

class AvBrakeCtrl {
public:
	static  int32_t ID;

	AvBrakeCtrl();
	void UpdateData(bool acu_chassis_brake_en, bool acu_chassis_brake_lamp_ctrl, bool acu_chassis_aeb_ctrl, double acu_chassis_brake_pdl_target, int acu_chassis_epb_ctrl, int acu_brake_life_sig, int acu_check_sum131);
	void Reset();
	uint8_t *get_data();


private:
	
  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 1, 'name': 'acu_chassis_brake_en', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  void set_p_acu_chassis_brake_en(bool acu_chassis_brake_en);

  // config detail: {'bit': 1, 'is_signed_var': False, 'len': 1, 'name': 'acu_chassis_brake_lamp_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  void set_p_acu_chassis_brake_lamp_ctrl(bool acu_chassis_brake_lamp_ctrl);

  // config detail: {'bit': 4, 'is_signed_var': False, 'len': 1, 'name': 'acu_chassis_aeb_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  void set_p_acu_chassis_aeb_ctrl(bool acu_chassis_aeb_ctrl);

  // config detail: {'bit': 8, 'is_signed_var': False, 'len': 10, 'name': 'acu_chassis_brake_pdl_target', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|100]', 'physical_unit': '%', 'precision': 0.1, 'type': 'double'}
  void set_p_acu_chassis_brake_pdl_target(double acu_chassis_brake_pdl_target);

  // config detail: {'bit': 24, 'is_signed_var': False, 'len': 2, 'name': 'acu_chassis_epb_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  void set_p_acu_chassis_epb_ctrl(int acu_chassis_epb_ctrl);

  // config detail: {'bit': 48, 'is_signed_var': False, 'len': 4, 'name': 'acu_brake_life_sig', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  void set_p_acu_brake_life_sig(int acu_brake_life_sig);

  // config detail: {'bit': 56, 'is_signed_var': False, 'len': 8, 'name': 'acu_check_sum131', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  void set_p_acu_check_sum131(int acu_check_sum131);

private:
	uint8_t data[8];
};



