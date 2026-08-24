#pragma once

#include <libs/Byte.hpp>

class DpMessgae5 {
public:
  static const uint32_t ID = 0x6F5;
  DpMessgae5();
  void Parse();
  void update_bytes(uint8_t bytes_data[8]);
  // singal
  int pwn_red_sta_;
  int pwn_green_sta_;
  int pwn_blue_sta_;
  int atmospherelightbrightness_;
  bool vcu_reserve33_;
  bool vcu_reserve41_;
  

private:
  uint8_t bytes[8];
  
  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 8, 'name': 'pwn_red_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int pwnredsta();

  // config detail: {'bit': 8, 'is_signed_var': False, 'len': 8, 'name': 'pwn_green_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int pwngreensta();

  // config detail: {'bit': 16, 'is_signed_var': False, 'len': 8, 'name': 'pwn_blue_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int pwnbluesta();

  // config detail: {'bit': 24, 'is_signed_var': False, 'len': 8, 'name': 'atmospherelightbrightness', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|100]', 'physical_unit': '%', 'precision': 1.0, 'type': 'int'}
  int atmospherelightbrightness();

  // config detail: {'bit': 48, 'is_signed_var': False, 'len': 1, 'name': 'vcu_reserve33', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcureserve33();

  // config detail: {'bit': 56, 'is_signed_var': False, 'len': 1, 'name': 'vcu_reserve41', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcureserve41();
};



