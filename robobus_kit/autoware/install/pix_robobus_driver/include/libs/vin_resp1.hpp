#pragma once

#include <libs/Byte.hpp>

class VinResp1 {
public:
  static const uint32_t ID = 0x514;
  VinResp1();
  void Parse();
  void update_bytes(uint8_t bytes_data[8]);
  // singal
  int vin00_;
  int vin01_;
  int vin02_;
  int vin03_;
  int vin04_;
  int vin05_;
  int vin06_;
  int vin07_;
  

private:
  uint8_t bytes[8];
  
  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 8, 'name': 'vin00', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vin00();

  // config detail: {'bit': 8, 'is_signed_var': False, 'len': 8, 'name': 'vin01', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vin01();

  // config detail: {'bit': 16, 'is_signed_var': False, 'len': 8, 'name': 'vin02', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vin02();

  // config detail: {'bit': 24, 'is_signed_var': False, 'len': 8, 'name': 'vin03', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vin03();

  // config detail: {'bit': 32, 'is_signed_var': False, 'len': 8, 'name': 'vin04', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vin04();

  // config detail: {'bit': 40, 'is_signed_var': False, 'len': 8, 'name': 'vin05', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vin05();

  // config detail: {'bit': 48, 'is_signed_var': False, 'len': 8, 'name': 'vin06', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vin06();

  // config detail: {'bit': 56, 'is_signed_var': False, 'len': 8, 'name': 'vin07', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int vin07();
};



