#pragma once

#include <libs/Byte.hpp>

class VcuTransfer {
public:
  static const uint32_t ID = 0x53B;
  VcuTransfer();
  void Parse();
  void update_bytes(uint8_t bytes_data[8]);
  // singal
  bool spare_;
  int ac_out_temp_;
  int ac_in_temp_;
  

private:
  uint8_t bytes[8];
  
  // config detail: {'bit': 4, 'is_signed_var': False, 'len': 1, 'name': 'spare', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool spare();

  // config detail: {'bit': 40, 'is_signed_var': True, 'len': 8, 'name': 'ac_out_temp', 'offset': -40.0, 'order': 'intel', 'physical_range': '[-40|215]', 'physical_unit': '℃', 'precision': 1.0, 'type': 'int'}
  int acouttemp();

  // config detail: {'bit': 48, 'is_signed_var': True, 'len': 8, 'name': 'ac_in_temp', 'offset': -40.0, 'order': 'intel', 'physical_range': '[-40|215]', 'physical_unit': '℃', 'precision': 1.0, 'type': 'int'}
  int acintemp();
};



