#pragma once
#include <libs/Byte.hpp>

class RemoteMessage {
public:
	static  int32_t ID;

	RemoteMessage();
	void UpdateData(int remote_drive_mode, int remote_heartbeat);
	void Reset();
	uint8_t *get_data();


private:
	
  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 8, 'name': 'remote_drive_mode', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  void set_p_remote_drive_mode(int remote_drive_mode);

  // config detail: {'bit': 56, 'is_signed_var': False, 'len': 8, 'name': 'remote_heartbeat', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  void set_p_remote_heartbeat(int remote_heartbeat);

private:
	uint8_t data[8];
};



