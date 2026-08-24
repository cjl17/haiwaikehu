#pragma once

#include <libs/Byte.hpp>

class AcMessage1 {
public:
  static const uint32_t ID = 0x2F8;
  AcMessage1();
  void Parse();
  void update_bytes(uint8_t bytes_data[8]);
  // singal
  int defrost_fdk_;
  int air_cod_sta_;
  int air_cod_gear_sta_;
  int air_cod_mod_sta_;
  int air_cod_temp_sta_;
  int in_loop_mod_sta_;
  

private:
  uint8_t bytes[8];
  
  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 8, 'name': 'defrost_fdk', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int defrostfdk();

  // config detail: {'bit': 8, 'is_signed_var': False, 'len': 8, 'name': 'air_cod_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int aircodsta();

  // config detail: {'bit': 16, 'is_signed_var': False, 'len': 8, 'name': 'air_cod_gear_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int aircodgearsta();

  // config detail: {'bit': 24, 'is_signed_var': False, 'len': 8, 'name': 'air_cod_mod_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int aircodmodsta();

  // config detail: {'bit': 32, 'is_signed_var': False, 'len': 8, 'name': 'air_cod_temp_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[16|32]', 'physical_unit': '℃', 'precision': 1.0, 'type': 'int'}
  int aircodtempsta();

  // config detail: {'bit': 48, 'is_signed_var': False, 'len': 8, 'name': 'in_loop_mod_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int inloopmodsta();
};



