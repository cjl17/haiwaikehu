#pragma once

#include <libs/Byte.hpp>

class AcMessage2 {
public:
  static const uint32_t ID = 0x2FF;
  AcMessage2();
  void Parse();
  void update_bytes(uint8_t bytes_data[8]);
  // singal
  int fan_temp_;
  int ac_out_temp_;
  int ac_in_temp_;
  int ac_hardware_;
  int ac_software_;
  

private:
  uint8_t bytes[8];
  
  // config detail: {'bit': 24, 'is_signed_var': True, 'len': 8, 'name': 'fan_temp', 'offset': -40.0, 'order': 'intel', 'physical_range': '[-40|255]', 'physical_unit': '℃', 'precision': 1.0, 'type': 'int'}
  int fantemp();

  // config detail: {'bit': 32, 'is_signed_var': True, 'len': 8, 'name': 'ac_out_temp', 'offset': -40.0, 'order': 'intel', 'physical_range': '[-40|255]', 'physical_unit': '℃', 'precision': 1.0, 'type': 'int'}
  int acouttemp();

  // config detail: {'bit': 40, 'is_signed_var': True, 'len': 8, 'name': 'ac_in_temp', 'offset': -40.0, 'order': 'intel', 'physical_range': '[-40|255]', 'physical_unit': '℃', 'precision': 1.0, 'type': 'int'}
  int acintemp();

  // config detail: {'bit': 48, 'is_signed_var': True, 'len': 8, 'name': 'ac_hardware', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int achardware();

  // config detail: {'bit': 56, 'is_signed_var': True, 'len': 8, 'name': 'ac_software', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int acsoftware();
};



