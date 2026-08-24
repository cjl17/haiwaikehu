#pragma once

#include <libs/Byte.hpp>

class AutoMessage {
public:
  static const uint32_t ID = 0x3A0;
  AutoMessage();
  void Parse();
  void update_bytes(uint8_t bytes_data[8]);
  // singal
  int auto_drive_mode_;
  int auto_heartbeat_;
  

private:
  uint8_t bytes[8];
  
  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 8, 'name': 'auto_drive_mode', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int autodrivemode();

  // config detail: {'bit': 56, 'is_signed_var': False, 'len': 8, 'name': 'auto_heartbeat', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int autoheartbeat();
};



