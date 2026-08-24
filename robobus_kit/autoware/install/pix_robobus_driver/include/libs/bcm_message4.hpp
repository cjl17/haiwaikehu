#pragma once

#include <libs/Byte.hpp>

class BcmMessage4 {
public:
  static const uint32_t ID = 0x5F4;
  BcmMessage4();
  void Parse();
  void update_bytes(uint8_t bytes_data[8]);
  // singal
  int ltemp_;
  int ntemp_;
  bool safe_belt_sta1_;
  bool safe_belt_sta2_;
  bool safe_belt_sta3_;
  bool safe_belt_sta4_;
  bool safe_belt_sta5_;
  bool safe_belt_sta6_;
  bool seat_sta1_;
  bool seat_sta2_;
  bool seat_sta3_;
  bool seat_sta4_;
  bool seat_sta5_;
  bool seat_sta6_;
  

private:
  uint8_t bytes[8];
  
  // config detail: {'bit': 8, 'is_signed_var': False, 'len': 8, 'name': 'ltemp', 'offset': -40.0, 'order': 'intel', 'physical_range': '[-40|215]', 'physical_unit': '℃', 'precision': 1.0, 'type': 'int'}
  int ltemp();

  // config detail: {'bit': 16, 'is_signed_var': False, 'len': 8, 'name': 'ntemp', 'offset': -40.0, 'order': 'intel', 'physical_range': '[-40|215]', 'physical_unit': '℃', 'precision': 1.0, 'type': 'int'}
  int ntemp();

  // config detail: {'bit': 24, 'is_signed_var': False, 'len': 1, 'name': 'safe_belt_sta1', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool safebeltsta1();

  // config detail: {'bit': 25, 'is_signed_var': False, 'len': 1, 'name': 'safe_belt_sta2', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool safebeltsta2();

  // config detail: {'bit': 26, 'is_signed_var': False, 'len': 1, 'name': 'safe_belt_sta3', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool safebeltsta3();

  // config detail: {'bit': 27, 'is_signed_var': False, 'len': 1, 'name': 'safe_belt_sta4', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool safebeltsta4();

  // config detail: {'bit': 28, 'is_signed_var': False, 'len': 1, 'name': 'safe_belt_sta5', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool safebeltsta5();

  // config detail: {'bit': 29, 'is_signed_var': False, 'len': 1, 'name': 'safe_belt_sta6', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool safebeltsta6();

  // config detail: {'bit': 30, 'is_signed_var': False, 'len': 1, 'name': 'seat_sta1', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool seatsta1();

  // config detail: {'bit': 31, 'is_signed_var': False, 'len': 1, 'name': 'seat_sta2', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool seatsta2();

  // config detail: {'bit': 32, 'is_signed_var': False, 'len': 1, 'name': 'seat_sta3', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool seatsta3();

  // config detail: {'bit': 33, 'is_signed_var': False, 'len': 1, 'name': 'seat_sta4', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool seatsta4();

  // config detail: {'bit': 34, 'is_signed_var': False, 'len': 1, 'name': 'seat_sta5', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool seatsta5();

  // config detail: {'bit': 35, 'is_signed_var': False, 'len': 1, 'name': 'seat_sta6', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool seatsta6();
};



