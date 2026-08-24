#pragma once

#include <libs/Byte.hpp>

class DpMessgae4 {
public:
  static const uint32_t ID = 0x6F4;
  DpMessgae4();
  void Parse();
  void update_bytes(uint8_t bytes_data[8]);
  // singal
  int pdu_total_cur_;
  double dp_lowbat_vol_;
  int pd_temp_;
  int auto_current1_;
  int dp_errorcode_;
  int on_sta_;
  int auto_current2_;
  

private:
  uint8_t bytes[8];
  
  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 8, 'name': 'pdu_total_cur', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': 'A', 'precision': 1.0, 'type': 'int'}
  int pdutotalcur();

  // config detail: {'bit': 8, 'is_signed_var': False, 'len': 8, 'name': 'dp_lowbat_vol', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|127.5]', 'physical_unit': 'V', 'precision': 0.5, 'type': 'double'}
  double dplowbatvol();

  // config detail: {'bit': 16, 'is_signed_var': False, 'len': 8, 'name': 'pd_temp', 'offset': -40.0, 'order': 'intel', 'physical_range': '[-40|215]', 'physical_unit': '℃', 'precision': 1.0, 'type': 'int'}
  int pdtemp();

  // config detail: {'bit': 24, 'is_signed_var': False, 'len': 8, 'name': 'auto_current1', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': 'A', 'precision': 1.0, 'type': 'int'}
  int autocurrent1();

  // config detail: {'bit': 32, 'is_signed_var': False, 'len': 8, 'name': 'dp_errorcode', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int dperrorcode();

  // config detail: {'bit': 48, 'is_signed_var': False, 'len': 8, 'name': 'on_sta', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'int'}
  int onsta();

  // config detail: {'bit': 56, 'is_signed_var': False, 'len': 8, 'name': 'auto_current2', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': 'A', 'precision': 1.0, 'type': 'int'}
  int autocurrent2();
};



