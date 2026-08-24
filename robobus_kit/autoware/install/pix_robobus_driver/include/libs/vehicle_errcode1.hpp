#pragma once

#include <libs/Byte.hpp>

class VehicleErrcode1 {
public:
  static const uint32_t ID = 0x51A;
  VehicleErrcode1();
  void Parse();
  void update_bytes(uint8_t bytes_data[8]);
  // singal
  bool flmc_hardware_fault_;
  bool flmc_tem_fault_;
  bool flm_tem_fault_;
  bool rlmc_hardware_fault_;
  bool rlmc_tem_fault_;
  bool rlm_tem_fault_;
  bool frmc_hardware_fault_;
  bool frmc_tem_fault_;
  bool frm_tem_fault_;
  bool rrmc_hardware_fault_;
  bool rrmc_tem_fault_;
  bool rrm_tem_fault_;
  bool flmc_network_fault_;
  bool frmc_network_fault_;
  bool rlmc_network_fault_;
  bool rrmc_network_fault_;
  bool fsteer_hardware_fault_;
  bool rsteer_hardware_fault_;
  bool fsteer_network_fault_;
  bool rsteer_network_fault_;
  bool brake_hardware_fault_;
  bool brake_high_tem_fault_;
  bool brake_luid_level_low_;
  bool brake_network_fault_;
  bool park_hardware_fault_;
  bool park_network_fault_;
  bool rcu_network_fault_;
  bool rcu_weak_signal_;
  bool rcu_elec_low_alarm_;
  bool reserve1_;
  bool reserve2_;
  bool bms_network_fault_;
  bool bms_insulationfault_;
  bool bms_ocv_cell_;
  bool bms_odv_cell_;
  bool bms_ocv_batt_;
  bool bms_odv_batt_;
  bool bms_cell_volt_diff_;
  bool bms_temph_;
  bool bms_temphl_;
  bool bms_temph_diff_;
  bool bms_warchg_overcurrent_;
  bool bms_soch_;
  bool bms_socl_;
  bool bms_time_of_heating_too_long_;
  bool bms_soc_break_;
  bool bms_dis_char_over_cur_;
  bool bms_char_over_cur_slow_;
  bool bmsfast_char_over_cur_;
  bool bms_alm_sense_cell_;
  bool bms_alm_sense_temp_;
  bool bms_alm_sense_curr_;
  bool bms_hvil_;
  bool bms_war_incan_fault_;
  bool bms_lst_com_withobc_;
  bool bms_lst_com_with_vcu_;
  bool bms_precharger_fault_;
  bool bmspos_relayconglutination_;
  bool bms_neg_relay_conglutination_;
  bool vcu_reserve3_;
  bool vcu_reserve4_;
  bool dcdc_high_tem_alarm_;
  bool dcdc_hardware_fault_;
  bool dcdc_network_fault_;
  

private:
  uint8_t bytes[8];
  
  // config detail: {'bit': 0, 'is_signed_var': False, 'len': 1, 'name': 'flmc_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool flmchardwarefault();

  // config detail: {'bit': 1, 'is_signed_var': False, 'len': 1, 'name': 'flmc_tem_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool flmctemfault();

  // config detail: {'bit': 2, 'is_signed_var': False, 'len': 1, 'name': 'flm_tem_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool flmtemfault();

  // config detail: {'bit': 3, 'is_signed_var': False, 'len': 1, 'name': 'rlmc_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool rlmchardwarefault();

  // config detail: {'bit': 4, 'is_signed_var': False, 'len': 1, 'name': 'rlmc_tem_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool rlmctemfault();

  // config detail: {'bit': 5, 'is_signed_var': False, 'len': 1, 'name': 'rlm_tem_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool rlmtemfault();

  // config detail: {'bit': 6, 'is_signed_var': False, 'len': 1, 'name': 'frmc_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool frmchardwarefault();

  // config detail: {'bit': 7, 'is_signed_var': False, 'len': 1, 'name': 'frmc_tem_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool frmctemfault();

  // config detail: {'bit': 8, 'is_signed_var': False, 'len': 1, 'name': 'frm_tem_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool frmtemfault();

  // config detail: {'bit': 9, 'is_signed_var': False, 'len': 1, 'name': 'rrmc_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool rrmchardwarefault();

  // config detail: {'bit': 10, 'is_signed_var': False, 'len': 1, 'name': 'rrmc_tem_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool rrmctemfault();

  // config detail: {'bit': 11, 'is_signed_var': False, 'len': 1, 'name': 'rrm_tem_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool rrmtemfault();

  // config detail: {'bit': 12, 'is_signed_var': False, 'len': 1, 'name': 'flmc_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool flmcnetworkfault();

  // config detail: {'bit': 13, 'is_signed_var': False, 'len': 1, 'name': 'frmc_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool frmcnetworkfault();

  // config detail: {'bit': 14, 'is_signed_var': False, 'len': 1, 'name': 'rlmc_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool rlmcnetworkfault();

  // config detail: {'bit': 15, 'is_signed_var': False, 'len': 1, 'name': 'rrmc_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool rrmcnetworkfault();

  // config detail: {'bit': 16, 'is_signed_var': False, 'len': 1, 'name': 'fsteer_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool fsteerhardwarefault();

  // config detail: {'bit': 17, 'is_signed_var': False, 'len': 1, 'name': 'rsteer_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool rsteerhardwarefault();

  // config detail: {'bit': 18, 'is_signed_var': False, 'len': 1, 'name': 'fsteer_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool fsteernetworkfault();

  // config detail: {'bit': 19, 'is_signed_var': False, 'len': 1, 'name': 'rsteer_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool rsteernetworkfault();

  // config detail: {'bit': 20, 'is_signed_var': False, 'len': 1, 'name': 'brake_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool brakehardwarefault();

  // config detail: {'bit': 21, 'is_signed_var': False, 'len': 1, 'name': 'brake_high_tem_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool brakehightemfault();

  // config detail: {'bit': 22, 'is_signed_var': False, 'len': 1, 'name': 'brake_luid_level_low', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool brakeluidlevellow();

  // config detail: {'bit': 23, 'is_signed_var': False, 'len': 1, 'name': 'brake_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool brakenetworkfault();

  // config detail: {'bit': 24, 'is_signed_var': False, 'len': 1, 'name': 'park_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool parkhardwarefault();

  // config detail: {'bit': 25, 'is_signed_var': False, 'len': 1, 'name': 'park_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool parknetworkfault();

  // config detail: {'bit': 26, 'is_signed_var': False, 'len': 1, 'name': 'rcu_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool rcunetworkfault();

  // config detail: {'bit': 27, 'is_signed_var': False, 'len': 1, 'name': 'rcu_weak_signal', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool rcuweaksignal();

  // config detail: {'bit': 28, 'is_signed_var': False, 'len': 1, 'name': 'rcu_elec_low_alarm', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool rcueleclowalarm();

  // config detail: {'bit': 29, 'is_signed_var': False, 'len': 1, 'name': 'reserve1', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool reserve1();

  // config detail: {'bit': 30, 'is_signed_var': False, 'len': 1, 'name': 'reserve2', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool reserve2();

  // config detail: {'bit': 31, 'is_signed_var': False, 'len': 1, 'name': 'bms_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmsnetworkfault();

  // config detail: {'bit': 32, 'is_signed_var': False, 'len': 1, 'name': 'bms_insulationfault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmsinsulationfault();

  // config detail: {'bit': 33, 'is_signed_var': False, 'len': 1, 'name': 'bms_ocv_cell', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmsocvcell();

  // config detail: {'bit': 34, 'is_signed_var': False, 'len': 1, 'name': 'bms_odv_cell', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmsodvcell();

  // config detail: {'bit': 35, 'is_signed_var': False, 'len': 1, 'name': 'bms_ocv_batt', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmsocvbatt();

  // config detail: {'bit': 36, 'is_signed_var': False, 'len': 1, 'name': 'bms_odv_batt', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmsodvbatt();

  // config detail: {'bit': 37, 'is_signed_var': False, 'len': 1, 'name': 'bms_cell_volt_diff', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmscellvoltdiff();

  // config detail: {'bit': 38, 'is_signed_var': False, 'len': 1, 'name': 'bms_temph', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmstemph();

  // config detail: {'bit': 39, 'is_signed_var': False, 'len': 1, 'name': 'bms_temphl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmstemphl();

  // config detail: {'bit': 40, 'is_signed_var': False, 'len': 1, 'name': 'bms_temph_diff', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmstemphdiff();

  // config detail: {'bit': 41, 'is_signed_var': False, 'len': 1, 'name': 'bms_warchg_overcurrent', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmswarchgovercurrent();

  // config detail: {'bit': 42, 'is_signed_var': False, 'len': 1, 'name': 'bms_soch', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmssoch();

  // config detail: {'bit': 43, 'is_signed_var': False, 'len': 1, 'name': 'bms_socl', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmssocl();

  // config detail: {'bit': 44, 'is_signed_var': False, 'len': 1, 'name': 'bms_time_of_heating_too_long', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmstimeofheatingtoolong();

  // config detail: {'bit': 45, 'is_signed_var': False, 'len': 1, 'name': 'bms_soc_break', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmssocbreak();

  // config detail: {'bit': 46, 'is_signed_var': False, 'len': 1, 'name': 'bms_dis_char_over_cur', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmsdischarovercur();

  // config detail: {'bit': 47, 'is_signed_var': False, 'len': 1, 'name': 'bms_char_over_cur_slow', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmscharovercurslow();

  // config detail: {'bit': 48, 'is_signed_var': False, 'len': 1, 'name': 'bmsfast_char_over_cur', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmsfastcharovercur();

  // config detail: {'bit': 49, 'is_signed_var': False, 'len': 1, 'name': 'bms_alm_sense_cell', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmsalmsensecell();

  // config detail: {'bit': 50, 'is_signed_var': False, 'len': 1, 'name': 'bms_alm_sense_temp', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmsalmsensetemp();

  // config detail: {'bit': 51, 'is_signed_var': False, 'len': 1, 'name': 'bms_alm_sense_curr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmsalmsensecurr();

  // config detail: {'bit': 52, 'is_signed_var': False, 'len': 1, 'name': 'bms_hvil', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmshvil();

  // config detail: {'bit': 53, 'is_signed_var': False, 'len': 1, 'name': 'bms_war_incan_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmswarincanfault();

  // config detail: {'bit': 54, 'is_signed_var': False, 'len': 1, 'name': 'bms_lst_com_withobc', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmslstcomwithobc();

  // config detail: {'bit': 55, 'is_signed_var': False, 'len': 1, 'name': 'bms_lst_com_with_vcu', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmslstcomwithvcu();

  // config detail: {'bit': 56, 'is_signed_var': False, 'len': 1, 'name': 'bms_precharger_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmsprechargerfault();

  // config detail: {'bit': 57, 'is_signed_var': False, 'len': 1, 'name': 'bmspos_relayconglutination', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmsposrelayconglutination();

  // config detail: {'bit': 58, 'is_signed_var': False, 'len': 1, 'name': 'bms_neg_relay_conglutination', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool bmsnegrelayconglutination();

  // config detail: {'bit': 59, 'is_signed_var': False, 'len': 1, 'name': 'vcu_reserve3', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcureserve3();

  // config detail: {'bit': 60, 'is_signed_var': False, 'len': 1, 'name': 'vcu_reserve4', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcureserve4();

  // config detail: {'bit': 61, 'is_signed_var': False, 'len': 1, 'name': 'dcdc_high_tem_alarm', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool dcdchightemalarm();

  // config detail: {'bit': 62, 'is_signed_var': False, 'len': 1, 'name': 'dcdc_hardware_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool dcdchardwarefault();

  // config detail: {'bit': 63, 'is_signed_var': False, 'len': 1, 'name': 'dcdc_network_fault', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool dcdcnetworkfault();
};



