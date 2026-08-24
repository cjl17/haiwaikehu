#pragma once
#include <libs/Byte.hpp>

class AvVehicleCtrl {
public:
	static  int32_t ID;

	AvVehicleCtrl();
	void UpdateData(bool acu_vehicle_pos_lamp_ctrl, bool acu_vehicle_head_lamp_ctrl, bool acu_vehicle_left_lamp_ctrl, bool acu_vehicle_right_lamp_ctrl, bool acu_vehicle_high_beam_ctrl, bool acu_vehicle_fog_lamp_ctrl, bool acu_vehicle_body_light_ctrl, bool acu_vehicle_read_light_ctrl, int acu_vehicle_voice, int acu_vehicle_wipers_ctrl, int acu_vehicle_door_ctrl, int acu_vehicle_window_ctrl, bool acu_chassis_speed_limite_mode, bool acu_vehicle_horn_ctrl, bool acu_vehicle_spray_ctrl, double acu_chassis_speed_limite_val, bool acu_check_sum_en);
	void Reset();
	uint8_t *get_data();


private:
	
  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 1, 'name': 'acu_vehicle_pos_lamp_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  void set_p_acu_vehicle_pos_lamp_ctrl(bool acu_vehicle_pos_lamp_ctrl);

  // config detail: {'bit': 1, 'is_signed_var': False, 'len': 1, 'name': 'acu_vehicle_head_lamp_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  void set_p_acu_vehicle_head_lamp_ctrl(bool acu_vehicle_head_lamp_ctrl);

  // config detail: {'bit': 2, 'is_signed_var': False, 'len': 1, 'name': 'acu_vehicle_left_lamp_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  void set_p_acu_vehicle_left_lamp_ctrl(bool acu_vehicle_left_lamp_ctrl);

  // config detail: {'bit': 3, 'is_signed_var': False, 'len': 1, 'name': 'acu_vehicle_right_lamp_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  void set_p_acu_vehicle_right_lamp_ctrl(bool acu_vehicle_right_lamp_ctrl);

  // config detail: {'bit': 4, 'is_signed_var': False, 'len': 1, 'name': 'acu_vehicle_high_beam_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  void set_p_acu_vehicle_high_beam_ctrl(bool acu_vehicle_high_beam_ctrl);

  // config detail: {'bit': 5, 'is_signed_var': False, 'len': 1, 'name': 'acu_vehicle_fog_lamp_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  void set_p_acu_vehicle_fog_lamp_ctrl(bool acu_vehicle_fog_lamp_ctrl);

  // config detail: {'bit': 6, 'is_signed_var': False, 'len': 1, 'name': 'acu_vehicle_body_light_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  void set_p_acu_vehicle_body_light_ctrl(bool acu_vehicle_body_light_ctrl);

  // config detail: {'bit': 7, 'is_signed_var': False, 'len': 1, 'name': 'acu_vehicle_read_light_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  void set_p_acu_vehicle_read_light_ctrl(bool acu_vehicle_read_light_ctrl);

  // config detail: {'bit': 8, 'is_signed_var': False, 'len': 2, 'name': 'acu_vehicle_voice', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  void set_p_acu_vehicle_voice(int acu_vehicle_voice);

  // config detail: {'bit': 10, 'is_signed_var': False, 'len': 2, 'name': 'acu_vehicle_wipers_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  void set_p_acu_vehicle_wipers_ctrl(int acu_vehicle_wipers_ctrl);

  // config detail: {'bit': 12, 'is_signed_var': False, 'len': 2, 'name': 'acu_vehicle_door_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  void set_p_acu_vehicle_door_ctrl(int acu_vehicle_door_ctrl);

  // config detail: {'bit': 14, 'is_signed_var': False, 'len': 2, 'name': 'acu_vehicle_window_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  void set_p_acu_vehicle_window_ctrl(int acu_vehicle_window_ctrl);

  // config detail: {'bit': 24, 'is_signed_var': False, 'len': 1, 'name': 'acu_chassis_speed_limite_mode', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  void set_p_acu_chassis_speed_limite_mode(bool acu_chassis_speed_limite_mode);

  // config detail: {'bit': 25, 'is_signed_var': False, 'len': 1, 'name': 'acu_vehicle_horn_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  void set_p_acu_vehicle_horn_ctrl(bool acu_vehicle_horn_ctrl);

  // config detail: {'bit': 26, 'is_signed_var': False, 'len': 1, 'name': 'acu_vehicle_spray_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  void set_p_acu_vehicle_spray_ctrl(bool acu_vehicle_spray_ctrl);

  // config detail: {'bit': 32, 'is_signed_var': False, 'len': 8, 'name': 'acu_chassis_speed_limite_val', 'offset': 0.0, 'order': 'intel', 'physical_range': '[1|20]', 'physical_unit': 'm/s', 'precision': 0.1, 'type': 'double'}
  void set_p_acu_chassis_speed_limite_val(double acu_chassis_speed_limite_val);

  // config detail: {'bit': 48, 'is_signed_var': False, 'len': 1, 'name': 'acu_check_sum_en', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  void set_p_acu_check_sum_en(bool acu_check_sum_en);

private:
	uint8_t data[8];
};



