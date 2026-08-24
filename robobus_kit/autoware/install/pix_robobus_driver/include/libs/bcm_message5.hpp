#pragma once

#include <libs/Byte.hpp>

class BcmMessage5 {
public:
  static const uint32_t ID = 0x5F5;
  BcmMessage5();
  void Parse();
  void update_bytes(uint8_t bytes_data[8]);
  // singal
  int ad_v_vin1_;
  int ad_v_vin2_;
  

private:
  uint8_t bytes[8];
  
  // config detail: {'bit': 32, 'is_signed_var': False, 'len': 8, 'name': 'ad_v_vin1', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int advvin1();

  // config detail: {'bit': 40, 'is_signed_var': False, 'len': 8, 'name': 'ad_v_vin2', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int advvin2();
};



