#pragma once
#include <libs/Byte.hpp>

class AutoVcuMessage1 {
public:
	static  int32_t ID;

	AutoVcuMessage1();
	void UpdateData(int defrost_ctrl, int air_cod_ctrl, int air_cod_gear_ctrl, int air_cod_mod_ctrl, int air_cod_temp_ctrl, int in_loop_mod_ctrl);
	void Reset();
	uint8_t *get_data();


private:
	
  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 8, 'name': 'defrost_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  void set_p_defrost_ctrl(int defrost_ctrl);

  // config detail: {'bit': 8, 'is_signed_var': False, 'len': 8, 'name': 'air_cod_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  void set_p_air_cod_ctrl(int air_cod_ctrl);

  // config detail: {'bit': 16, 'is_signed_var': False, 'len': 8, 'name': 'air_cod_gear_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  void set_p_air_cod_gear_ctrl(int air_cod_gear_ctrl);

  // config detail: {'bit': 24, 'is_signed_var': False, 'len': 8, 'name': 'air_cod_mod_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  void set_p_air_cod_mod_ctrl(int air_cod_mod_ctrl);

  // config detail: {'bit': 32, 'is_signed_var': False, 'len': 8, 'name': 'air_cod_temp_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[16|32]', 'physical_unit': '℃', 'precision': 1.0, 'type': 'int'}
  void set_p_air_cod_temp_ctrl(int air_cod_temp_ctrl);

  // config detail: {'bit': 48, 'is_signed_var': False, 'len': 8, 'name': 'in_loop_mod_ctrl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  void set_p_in_loop_mod_ctrl(int in_loop_mod_ctrl);

private:
	uint8_t data[8];
};



