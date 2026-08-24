#pragma once
#include <libs/Byte.hpp>

class AvSteerCtrl {
public:
	static  int32_t ID;

	AvSteerCtrl();
	void UpdateData(bool acu_chassis_steer_en_ctrl, int acu_chassis_steer_mode_ctrl, int acu_chassis_steer_angle_target, int acu_chassis_steer_angle_rear_target, double acu_chassis_steer_angle_speed_ctrl, int acu_steer_life_sig, int acu_check_sum132);
	void Reset();
	uint8_t *get_data();


private:
	
  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 1, 'name': 'acu_chassis_steer_en_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  void set_p_acu_chassis_steer_en_ctrl(bool acu_chassis_steer_en_ctrl);

  // config detail: {'bit': 4, 'is_signed_var': False, 'len': 4, 'name': 'acu_chassis_steer_mode_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|4]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  void set_p_acu_chassis_steer_mode_ctrl(int acu_chassis_steer_mode_ctrl);

  // config detail: {'bit': 8, 'is_signed_var': True, 'len': 16, 'name': 'acu_chassis_steer_angle_target', 'offset': 0.0, 'order': 'intel', 'physical_range': '[-500|500]', 'physical_unit': 'deg', 'precision': 1.0, 'type': 'int'}
  void set_p_acu_chassis_steer_angle_target(int acu_chassis_steer_angle_target);

  // config detail: {'bit': 24, 'is_signed_var': True, 'len': 16, 'name': 'acu_chassis_steer_angle_rear_target', 'offset': 0.0, 'order': 'intel', 'physical_range': '[-500|500]', 'physical_unit': 'deg', 'precision': 1.0, 'type': 'int'}
  void set_p_acu_chassis_steer_angle_rear_target(int acu_chassis_steer_angle_rear_target);

  // config detail: {'bit': 40, 'is_signed_var': False, 'len': 8, 'name': 'acu_chassis_steer_angle_speed_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|500]', 'physical_unit': 'deg/s', 'precision': 2.0, 'type': 'double'}
  void set_p_acu_chassis_steer_angle_speed_ctrl(double acu_chassis_steer_angle_speed_ctrl);

  // config detail: {'bit': 48, 'is_signed_var': False, 'len': 4, 'name': 'acu_steer_life_sig', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  void set_p_acu_steer_life_sig(int acu_steer_life_sig);

  // config detail: {'bit': 56, 'is_signed_var': False, 'len': 8, 'name': 'acu_check_sum132', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  void set_p_acu_check_sum132(int acu_check_sum132);

private:
	uint8_t data[8];
};



