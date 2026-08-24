#pragma once

#include <libs/Byte.hpp>

class VaVcuSofver {
public:
  static const uint32_t ID = 0x10F;
  VaVcuSofver();
  void Parse();
  void update_bytes(uint8_t bytes_data[8]);
  // singal
  int version_year_;
  int version_month_;
  int version_day_;
  int version_main_;
  int version_sub_;
  int version_patch_;
  

private:
  uint8_t bytes[8];
  
  // config detail: {'bit': 16, 'is_signed_var': False, 'len': 8, 'name': 'version_year', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int versionyear();

  // config detail: {'bit': 24, 'is_signed_var': False, 'len': 8, 'name': 'version_month', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int versionmonth();

  // config detail: {'bit': 32, 'is_signed_var': False, 'len': 8, 'name': 'version_day', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int versionday();

  // config detail: {'bit': 40, 'is_signed_var': False, 'len': 8, 'name': 'version_main', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int versionmain();

  // config detail: {'bit': 48, 'is_signed_var': False, 'len': 8, 'name': 'version_sub', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int versionsub();

  // config detail: {'bit': 56, 'is_signed_var': False, 'len': 8, 'name': 'version_patch', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int versionpatch();
};



