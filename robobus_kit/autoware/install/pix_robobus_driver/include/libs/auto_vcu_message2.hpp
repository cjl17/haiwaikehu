#pragma once
#include <libs/Byte.hpp>

class AutoVcuMessage2 {
public:
	static  int32_t ID;

	AutoVcuMessage2();
	void UpdateData(int pwm_red_ctrl, int pwm_green_ctrl, int pwm_blue_ctrl, int atmospherelightbrightness);
	void Reset();
	uint8_t *get_data();


private:
	
  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 8, 'name': 'pwm_red_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  void set_p_pwm_red_ctrl(int pwm_red_ctrl);

  // config detail: {'bit': 8, 'is_signed_var': False, 'len': 8, 'name': 'pwm_green_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  void set_p_pwm_green_ctrl(int pwm_green_ctrl);

  // config detail: {'bit': 16, 'is_signed_var': False, 'len': 8, 'name': 'pwm_blue_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  void set_p_pwm_blue_ctrl(int pwm_blue_ctrl);

  // config detail: {'bit': 24, 'is_signed_var': False, 'len': 8, 'name': 'atmospherelightbrightness', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|100]', 'physical_unit': '%', 'precision': 1.0, 'type': 'int'}
  void set_p_atmospherelightbrightness(int atmospherelightbrightness);

private:
	uint8_t data[8];
};



