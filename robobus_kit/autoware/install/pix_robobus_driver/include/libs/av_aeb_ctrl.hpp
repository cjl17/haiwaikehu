#pragma once
#include <libs/Byte.hpp>

class AvAebCtrl {
public:
	static  int32_t ID;

	AvAebCtrl();
	void UpdateData(int acu_aeb_work_sta, bool acu_aeb_active_request, bool acu_fcw_active_request, bool acu_aeb_brake_en, int acu_aeb_brake_pedal_target, int acu_aeb_brake_life_sig, int acu_check_sum121);
	void Reset();
	uint8_t *get_data();


private:
	
  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 2, 'name': 'acu_aeb_work_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  void set_p_acu_aeb_work_sta(int acu_aeb_work_sta);

  // config detail: {'bit': 2, 'is_signed_var': False, 'len': 1, 'name': 'acu_aeb_active_request', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  void set_p_acu_aeb_active_request(bool acu_aeb_active_request);

  // config detail: {'bit': 3, 'is_signed_var': False, 'len': 1, 'name': 'acu_fcw_active_request', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  void set_p_acu_fcw_active_request(bool acu_fcw_active_request);

  // config detail: {'bit': 4, 'is_signed_var': False, 'len': 1, 'name': 'acu_aeb_brake_en', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  void set_p_acu_aeb_brake_en(bool acu_aeb_brake_en);

  // config detail: {'bit': 8, 'is_signed_var': False, 'len': 8, 'name': 'acu_aeb_brake_pedal_target', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|100]', 'physical_unit': '%', 'precision': 1.0, 'type': 'int'}
  void set_p_acu_aeb_brake_pedal_target(int acu_aeb_brake_pedal_target);

  // config detail: {'bit': 48, 'is_signed_var': False, 'len': 4, 'name': 'acu_aeb_brake_life_sig', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  void set_p_acu_aeb_brake_life_sig(int acu_aeb_brake_life_sig);

  // config detail: {'bit': 56, 'is_signed_var': False, 'len': 8, 'name': 'acu_check_sum121', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  void set_p_acu_check_sum121(int acu_check_sum121);

private:
	uint8_t data[8];
};



