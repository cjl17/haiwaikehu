#pragma once

#include <libs/Byte.hpp>

class HistoricalVehiclefailures1 {
public:
  static const uint32_t ID = 0x51C;
  HistoricalVehiclefailures1();
  void Parse();
  void update_bytes(uint8_t bytes_data[8]);
  // singal
  bool hflmc_hardware_fault_;
  bool hflmc_tem_fault_;
  bool hflm_tem_fault_;
  bool hrlmc_hardware_fault_;
  bool hrlmc_tem_fault_;
  bool hrlm_tem_fault_;
  bool hfrmc_hardware_fault_;
  bool hfrmc_tem_fault_;
  bool hfrm_tem_fault_;
  bool hrrmc_hardware_fault_;
  bool hrrmc_tem_fault_;
  bool hrrm_tem_fault_;
  bool hflmc_network_fault_;
  bool hfrmc_network_fault_;
  bool hrlmc_network_fault_;
  bool hrrmc_network_fault_;
  bool hfsteer_hardware_fault_;
  bool hrsteer_hardware_fault_;
  bool hfsteer_network_fault_;
  bool hrsteer_network_fault_;
  bool hbrake_hardware_fault_;
  bool hbrake_high_tem_fault_;
  bool hbrake_luid_level_low_;
  bool hbrake_network_fault_;
  bool hpark_hardware_fault_;
  bool hpark_network_fault_;
  bool hrcu_network_fault_;
  bool hrcu_weak_signal_;
  bool hrcu_elec_low_alarm_;
  bool hbms_network_fault_;
  bool hbms_insulationfault_;
  bool hbms_ocv_cell_;
  bool hbms_odv_cell_;
  bool hbms_ocv_batt_;
  bool hbms_odv_batt_;
  bool hbms_cell_volt_diff_;
  bool hbms_temph_;
  bool hbms_temphl_;
  bool hbms_temph_diff_;
  bool hbms_warchg_overcurrent_;
  bool hbms_soch_;
  bool hbms_socl_;
  bool hbms_time_of_heating_too_long_;
  bool hbms_soc_break_;
  bool hbms_dis_char_over_cur_;
  bool hbms_char_over_cur_slow_;
  bool hbmsfast_char_over_cur_;
  bool hbms_alm_sense_cell_;
  bool hbms_alm_sense_temp_;
  bool hbms_alm_sense_curr_;
  bool hbms_hvil_;
  bool hbms_war_incan_fault_;
  bool hbms_lst_com_withobc_;
  bool hbms_lst_com_with_vcu_;
  bool hbms_precharger_fault_;
  bool hbmspos_relayconglutination_;
  bool hbms_neg_relay_conglutination_;
  bool hdcdc_high_tem_alarm_;
  bool hdcdc_hardware_fault_;
  bool hdcdc_network_fault_;
  

private:
  uint8_t bytes[8];
  
  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 1, 'name': 'hflmc_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hflmchardwarefault();

  // config detail: {'bit': 1, 'is_signed_var': False, 'len': 1, 'name': 'hflmc_tem_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hflmctemfault();

  // config detail: {'bit': 2, 'is_signed_var': False, 'len': 1, 'name': 'hflm_tem_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hflmtemfault();

  // config detail: {'bit': 3, 'is_signed_var': False, 'len': 1, 'name': 'hrlmc_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hrlmchardwarefault();

  // config detail: {'bit': 4, 'is_signed_var': False, 'len': 1, 'name': 'hrlmc_tem_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hrlmctemfault();

  // config detail: {'bit': 5, 'is_signed_var': False, 'len': 1, 'name': 'hrlm_tem_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hrlmtemfault();

  // config detail: {'bit': 6, 'is_signed_var': False, 'len': 1, 'name': 'hfrmc_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hfrmchardwarefault();

  // config detail: {'bit': 7, 'is_signed_var': False, 'len': 1, 'name': 'hfrmc_tem_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hfrmctemfault();

  // config detail: {'bit': 8, 'is_signed_var': False, 'len': 1, 'name': 'hfrm_tem_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hfrmtemfault();

  // config detail: {'bit': 9, 'is_signed_var': False, 'len': 1, 'name': 'hrrmc_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hrrmchardwarefault();

  // config detail: {'bit': 10, 'is_signed_var': False, 'len': 1, 'name': 'hrrmc_tem_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hrrmctemfault();

  // config detail: {'bit': 11, 'is_signed_var': False, 'len': 1, 'name': 'hrrm_tem_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hrrmtemfault();

  // config detail: {'bit': 12, 'is_signed_var': False, 'len': 1, 'name': 'hflmc_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hflmcnetworkfault();

  // config detail: {'bit': 13, 'is_signed_var': False, 'len': 1, 'name': 'hfrmc_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hfrmcnetworkfault();

  // config detail: {'bit': 14, 'is_signed_var': False, 'len': 1, 'name': 'hrlmc_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hrlmcnetworkfault();

  // config detail: {'bit': 15, 'is_signed_var': False, 'len': 1, 'name': 'hrrmc_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hrrmcnetworkfault();

  // config detail: {'bit': 16, 'is_signed_var': False, 'len': 1, 'name': 'hfsteer_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hfsteerhardwarefault();

  // config detail: {'bit': 17, 'is_signed_var': False, 'len': 1, 'name': 'hrsteer_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hrsteerhardwarefault();

  // config detail: {'bit': 18, 'is_signed_var': False, 'len': 1, 'name': 'hfsteer_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hfsteernetworkfault();

  // config detail: {'bit': 19, 'is_signed_var': False, 'len': 1, 'name': 'hrsteer_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hrsteernetworkfault();

  // config detail: {'bit': 20, 'is_signed_var': False, 'len': 1, 'name': 'hbrake_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbrakehardwarefault();

  // config detail: {'bit': 21, 'is_signed_var': False, 'len': 1, 'name': 'hbrake_high_tem_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbrakehightemfault();

  // config detail: {'bit': 22, 'is_signed_var': False, 'len': 1, 'name': 'hbrake_luid_level_low', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbrakeluidlevellow();

  // config detail: {'bit': 23, 'is_signed_var': False, 'len': 1, 'name': 'hbrake_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbrakenetworkfault();

  // config detail: {'bit': 24, 'is_signed_var': False, 'len': 1, 'name': 'hpark_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hparkhardwarefault();

  // config detail: {'bit': 25, 'is_signed_var': False, 'len': 1, 'name': 'hpark_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hparknetworkfault();

  // config detail: {'bit': 26, 'is_signed_var': False, 'len': 1, 'name': 'hrcu_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hrcunetworkfault();

  // config detail: {'bit': 27, 'is_signed_var': False, 'len': 1, 'name': 'hrcu_weak_signal', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hrcuweaksignal();

  // config detail: {'bit': 28, 'is_signed_var': False, 'len': 1, 'name': 'hrcu_elec_low_alarm', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hrcueleclowalarm();

  // config detail: {'bit': 31, 'is_signed_var': False, 'len': 1, 'name': 'hbms_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmsnetworkfault();

  // config detail: {'bit': 32, 'is_signed_var': False, 'len': 1, 'name': 'hbms_insulationfault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmsinsulationfault();

  // config detail: {'bit': 33, 'is_signed_var': False, 'len': 1, 'name': 'hbms_ocv_cell', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmsocvcell();

  // config detail: {'bit': 34, 'is_signed_var': False, 'len': 1, 'name': 'hbms_odv_cell', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmsodvcell();

  // config detail: {'bit': 35, 'is_signed_var': False, 'len': 1, 'name': 'hbms_ocv_batt', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmsocvbatt();

  // config detail: {'bit': 36, 'is_signed_var': False, 'len': 1, 'name': 'hbms_odv_batt', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmsodvbatt();

  // config detail: {'bit': 37, 'is_signed_var': False, 'len': 1, 'name': 'hbms_cell_volt_diff', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmscellvoltdiff();

  // config detail: {'bit': 38, 'is_signed_var': False, 'len': 1, 'name': 'hbms_temph', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmstemph();

  // config detail: {'bit': 39, 'is_signed_var': False, 'len': 1, 'name': 'hbms_temphl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmstemphl();

  // config detail: {'bit': 40, 'is_signed_var': False, 'len': 1, 'name': 'hbms_temph_diff', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmstemphdiff();

  // config detail: {'bit': 41, 'is_signed_var': False, 'len': 1, 'name': 'hbms_warchg_overcurrent', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmswarchgovercurrent();

  // config detail: {'bit': 42, 'is_signed_var': False, 'len': 1, 'name': 'hbms_soch', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmssoch();

  // config detail: {'bit': 43, 'is_signed_var': False, 'len': 1, 'name': 'hbms_socl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmssocl();

  // config detail: {'bit': 44, 'is_signed_var': False, 'len': 1, 'name': 'hbms_time_of_heating_too_long', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmstimeofheatingtoolong();

  // config detail: {'bit': 45, 'is_signed_var': False, 'len': 1, 'name': 'hbms_soc_break', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmssocbreak();

  // config detail: {'bit': 46, 'is_signed_var': False, 'len': 1, 'name': 'hbms_dis_char_over_cur', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmsdischarovercur();

  // config detail: {'bit': 47, 'is_signed_var': False, 'len': 1, 'name': 'hbms_char_over_cur_slow', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmscharovercurslow();

  // config detail: {'bit': 48, 'is_signed_var': False, 'len': 1, 'name': 'hbmsfast_char_over_cur', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmsfastcharovercur();

  // config detail: {'bit': 49, 'is_signed_var': False, 'len': 1, 'name': 'hbms_alm_sense_cell', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmsalmsensecell();

  // config detail: {'bit': 50, 'is_signed_var': False, 'len': 1, 'name': 'hbms_alm_sense_temp', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmsalmsensetemp();

  // config detail: {'bit': 51, 'is_signed_var': False, 'len': 1, 'name': 'hbms_alm_sense_curr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmsalmsensecurr();

  // config detail: {'bit': 52, 'is_signed_var': False, 'len': 1, 'name': 'hbms_hvil', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmshvil();

  // config detail: {'bit': 53, 'is_signed_var': False, 'len': 1, 'name': 'hbms_war_incan_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmswarincanfault();

  // config detail: {'bit': 54, 'is_signed_var': False, 'len': 1, 'name': 'hbms_lst_com_withobc', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmslstcomwithobc();

  // config detail: {'bit': 55, 'is_signed_var': False, 'len': 1, 'name': 'hbms_lst_com_with_vcu', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmslstcomwithvcu();

  // config detail: {'bit': 56, 'is_signed_var': False, 'len': 1, 'name': 'hbms_precharger_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmsprechargerfault();

  // config detail: {'bit': 57, 'is_signed_var': False, 'len': 1, 'name': 'hbmspos_relayconglutination', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmsposrelayconglutination();

  // config detail: {'bit': 58, 'is_signed_var': False, 'len': 1, 'name': 'hbms_neg_relay_conglutination', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hbmsnegrelayconglutination();

  // config detail: {'bit': 61, 'is_signed_var': False, 'len': 1, 'name': 'hdcdc_high_tem_alarm', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hdcdchightemalarm();

  // config detail: {'bit': 62, 'is_signed_var': False, 'len': 1, 'name': 'hdcdc_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hdcdchardwarefault();

  // config detail: {'bit': 63, 'is_signed_var': False, 'len': 1, 'name': 'hdcdc_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool hdcdcnetworkfault();
};



