#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to pix_robobus_driver_msgs__msg__VaVcuSofver

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaVcuSofver {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub version_year: i32,

    /// []
    pub version_month: i32,

    /// []
    pub version_day: i32,

    /// []
    pub version_main: i32,

    /// []
    pub version_sub: i32,

    /// []
    pub version_patch: i32,

}



impl Default for VaVcuSofver {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VaVcuSofver::default())
  }
}

impl rosidl_runtime_rs::Message for VaVcuSofver {
  type RmwMsg = super::msg::rmw::VaVcuSofver;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        version_year: msg.version_year,
        version_month: msg.version_month,
        version_day: msg.version_day,
        version_main: msg.version_main,
        version_sub: msg.version_sub,
        version_patch: msg.version_patch,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      version_year: msg.version_year,
      version_month: msg.version_month,
      version_day: msg.version_day,
      version_main: msg.version_main,
      version_sub: msg.version_sub,
      version_patch: msg.version_patch,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      version_year: msg.version_year,
      version_month: msg.version_month,
      version_day: msg.version_day,
      version_main: msg.version_main,
      version_sub: msg.version_sub,
      version_patch: msg.version_patch,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__AcMessage1

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AcMessage1 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub defrost_fdk: i32,

    /// []
    pub air_cod_sta: i32,

    /// []
    pub air_cod_gear_sta: i32,

    /// []
    pub air_cod_mod_sta: i32,

    /// [℃] [16|32]
    pub air_cod_temp_sta: i32,

    /// []
    pub in_loop_mod_sta: i32,

}



impl Default for AcMessage1 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AcMessage1::default())
  }
}

impl rosidl_runtime_rs::Message for AcMessage1 {
  type RmwMsg = super::msg::rmw::AcMessage1;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        defrost_fdk: msg.defrost_fdk,
        air_cod_sta: msg.air_cod_sta,
        air_cod_gear_sta: msg.air_cod_gear_sta,
        air_cod_mod_sta: msg.air_cod_mod_sta,
        air_cod_temp_sta: msg.air_cod_temp_sta,
        in_loop_mod_sta: msg.in_loop_mod_sta,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      defrost_fdk: msg.defrost_fdk,
      air_cod_sta: msg.air_cod_sta,
      air_cod_gear_sta: msg.air_cod_gear_sta,
      air_cod_mod_sta: msg.air_cod_mod_sta,
      air_cod_temp_sta: msg.air_cod_temp_sta,
      in_loop_mod_sta: msg.in_loop_mod_sta,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      defrost_fdk: msg.defrost_fdk,
      air_cod_sta: msg.air_cod_sta,
      air_cod_gear_sta: msg.air_cod_gear_sta,
      air_cod_mod_sta: msg.air_cod_mod_sta,
      air_cod_temp_sta: msg.air_cod_temp_sta,
      in_loop_mod_sta: msg.in_loop_mod_sta,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__AcMessage2

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AcMessage2 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// [℃] [-40|255]
    pub fan_temp: i32,

    /// [℃] [-40|255]
    pub ac_out_temp: i32,

    /// [℃] [-40|255]
    pub ac_in_temp: i32,

    /// []
    pub ac_hardware: i32,

    /// []
    pub ac_software: i32,

}



impl Default for AcMessage2 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AcMessage2::default())
  }
}

impl rosidl_runtime_rs::Message for AcMessage2 {
  type RmwMsg = super::msg::rmw::AcMessage2;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        fan_temp: msg.fan_temp,
        ac_out_temp: msg.ac_out_temp,
        ac_in_temp: msg.ac_in_temp,
        ac_hardware: msg.ac_hardware,
        ac_software: msg.ac_software,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      fan_temp: msg.fan_temp,
      ac_out_temp: msg.ac_out_temp,
      ac_in_temp: msg.ac_in_temp,
      ac_hardware: msg.ac_hardware,
      ac_software: msg.ac_software,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      fan_temp: msg.fan_temp,
      ac_out_temp: msg.ac_out_temp,
      ac_in_temp: msg.ac_in_temp,
      ac_hardware: msg.ac_hardware,
      ac_software: msg.ac_software,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__AutoMessage

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AutoMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub auto_drive_mode: i32,

    /// []
    pub auto_heartbeat: i32,

}



impl Default for AutoMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AutoMessage::default())
  }
}

impl rosidl_runtime_rs::Message for AutoMessage {
  type RmwMsg = super::msg::rmw::AutoMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        auto_drive_mode: msg.auto_drive_mode,
        auto_heartbeat: msg.auto_heartbeat,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      auto_drive_mode: msg.auto_drive_mode,
      auto_heartbeat: msg.auto_heartbeat,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      auto_drive_mode: msg.auto_drive_mode,
      auto_heartbeat: msg.auto_heartbeat,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__VinResp1

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VinResp1 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub vin00: i32,

    /// []
    pub vin01: i32,

    /// []
    pub vin02: i32,

    /// []
    pub vin03: i32,

    /// []
    pub vin04: i32,

    /// []
    pub vin05: i32,

    /// []
    pub vin06: i32,

    /// []
    pub vin07: i32,

}



impl Default for VinResp1 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VinResp1::default())
  }
}

impl rosidl_runtime_rs::Message for VinResp1 {
  type RmwMsg = super::msg::rmw::VinResp1;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        vin00: msg.vin00,
        vin01: msg.vin01,
        vin02: msg.vin02,
        vin03: msg.vin03,
        vin04: msg.vin04,
        vin05: msg.vin05,
        vin06: msg.vin06,
        vin07: msg.vin07,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      vin00: msg.vin00,
      vin01: msg.vin01,
      vin02: msg.vin02,
      vin03: msg.vin03,
      vin04: msg.vin04,
      vin05: msg.vin05,
      vin06: msg.vin06,
      vin07: msg.vin07,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      vin00: msg.vin00,
      vin01: msg.vin01,
      vin02: msg.vin02,
      vin03: msg.vin03,
      vin04: msg.vin04,
      vin05: msg.vin05,
      vin06: msg.vin06,
      vin07: msg.vin07,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__VinResp2

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VinResp2 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub vin08: i32,

    /// []
    pub vin09: i32,

    /// []
    pub vin10: i32,

    /// []
    pub vin11: i32,

    /// []
    pub vin12: i32,

    /// []
    pub vin13: i32,

    /// []
    pub vin14: i32,

    /// []
    pub vin15: i32,

}



impl Default for VinResp2 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VinResp2::default())
  }
}

impl rosidl_runtime_rs::Message for VinResp2 {
  type RmwMsg = super::msg::rmw::VinResp2;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        vin08: msg.vin08,
        vin09: msg.vin09,
        vin10: msg.vin10,
        vin11: msg.vin11,
        vin12: msg.vin12,
        vin13: msg.vin13,
        vin14: msg.vin14,
        vin15: msg.vin15,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      vin08: msg.vin08,
      vin09: msg.vin09,
      vin10: msg.vin10,
      vin11: msg.vin11,
      vin12: msg.vin12,
      vin13: msg.vin13,
      vin14: msg.vin14,
      vin15: msg.vin15,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      vin08: msg.vin08,
      vin09: msg.vin09,
      vin10: msg.vin10,
      vin11: msg.vin11,
      vin12: msg.vin12,
      vin13: msg.vin13,
      vin14: msg.vin14,
      vin15: msg.vin15,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__VinResp3

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VinResp3 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub vin16: i32,

}



impl Default for VinResp3 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VinResp3::default())
  }
}

impl rosidl_runtime_rs::Message for VinResp3 {
  type RmwMsg = super::msg::rmw::VinResp3;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        vin16: msg.vin16,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      vin16: msg.vin16,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      vin16: msg.vin16,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__VehicleErrcode1

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleErrcode1 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub flmc_hardware_fault: bool,

    /// []
    pub flmc_tem_fault: bool,

    /// []
    pub flm_tem_fault: bool,

    /// []
    pub rlmc_hardware_fault: bool,

    /// []
    pub rlmc_tem_fault: bool,

    /// []
    pub rlm_tem_fault: bool,

    /// []
    pub frmc_hardware_fault: bool,

    /// []
    pub frmc_tem_fault: bool,

    /// []
    pub frm_tem_fault: bool,

    /// []
    pub rrmc_hardware_fault: bool,

    /// []
    pub rrmc_tem_fault: bool,

    /// []
    pub rrm_tem_fault: bool,

    /// []
    pub flmc_network_fault: bool,

    /// []
    pub frmc_network_fault: bool,

    /// []
    pub rlmc_network_fault: bool,

    /// []
    pub rrmc_network_fault: bool,

    /// []
    pub fsteer_hardware_fault: bool,

    /// []
    pub rsteer_hardware_fault: bool,

    /// []
    pub fsteer_network_fault: bool,

    /// []
    pub rsteer_network_fault: bool,

    /// []
    pub brake_hardware_fault: bool,

    /// []
    pub brake_high_tem_fault: bool,

    /// []
    pub brake_luid_level_low: bool,

    /// []
    pub brake_network_fault: bool,

    /// []
    pub park_hardware_fault: bool,

    /// []
    pub park_network_fault: bool,

    /// []
    pub rcu_network_fault: bool,

    /// []
    pub rcu_weak_signal: bool,

    /// []
    pub rcu_elec_low_alarm: bool,

    /// []
    pub reserve1: bool,

    /// []
    pub reserve2: bool,

    /// []
    pub bms_network_fault: bool,

    /// []
    pub bms_insulationfault: bool,

    /// []
    pub bms_ocv_cell: bool,

    /// []
    pub bms_odv_cell: bool,

    /// []
    pub bms_ocv_batt: bool,

    /// []
    pub bms_odv_batt: bool,

    /// []
    pub bms_cell_volt_diff: bool,

    /// []
    pub bms_temph: bool,

    /// []
    pub bms_temphl: bool,

    /// []
    pub bms_temph_diff: bool,

    /// []
    pub bms_warchg_overcurrent: bool,

    /// []
    pub bms_soch: bool,

    /// []
    pub bms_socl: bool,

    /// []
    pub bms_time_of_heating_too_long: bool,

    /// []
    pub bms_soc_break: bool,

    /// []
    pub bms_dis_char_over_cur: bool,

    /// []
    pub bms_char_over_cur_slow: bool,

    /// []
    pub bmsfast_char_over_cur: bool,

    /// []
    pub bms_alm_sense_cell: bool,

    /// []
    pub bms_alm_sense_temp: bool,

    /// []
    pub bms_alm_sense_curr: bool,

    /// []
    pub bms_hvil: bool,

    /// []
    pub bms_war_incan_fault: bool,

    /// []
    pub bms_lst_com_withobc: bool,

    /// []
    pub bms_lst_com_with_vcu: bool,

    /// []
    pub bms_precharger_fault: bool,

    /// []
    pub bmspos_relayconglutination: bool,

    /// []
    pub bms_neg_relay_conglutination: bool,

    /// []
    pub vcu_reserve3: bool,

    /// []
    pub vcu_reserve4: bool,

    /// []
    pub dcdc_high_tem_alarm: bool,

    /// []
    pub dcdc_hardware_fault: bool,

    /// []
    pub dcdc_network_fault: bool,

}



impl Default for VehicleErrcode1 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleErrcode1::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleErrcode1 {
  type RmwMsg = super::msg::rmw::VehicleErrcode1;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        flmc_hardware_fault: msg.flmc_hardware_fault,
        flmc_tem_fault: msg.flmc_tem_fault,
        flm_tem_fault: msg.flm_tem_fault,
        rlmc_hardware_fault: msg.rlmc_hardware_fault,
        rlmc_tem_fault: msg.rlmc_tem_fault,
        rlm_tem_fault: msg.rlm_tem_fault,
        frmc_hardware_fault: msg.frmc_hardware_fault,
        frmc_tem_fault: msg.frmc_tem_fault,
        frm_tem_fault: msg.frm_tem_fault,
        rrmc_hardware_fault: msg.rrmc_hardware_fault,
        rrmc_tem_fault: msg.rrmc_tem_fault,
        rrm_tem_fault: msg.rrm_tem_fault,
        flmc_network_fault: msg.flmc_network_fault,
        frmc_network_fault: msg.frmc_network_fault,
        rlmc_network_fault: msg.rlmc_network_fault,
        rrmc_network_fault: msg.rrmc_network_fault,
        fsteer_hardware_fault: msg.fsteer_hardware_fault,
        rsteer_hardware_fault: msg.rsteer_hardware_fault,
        fsteer_network_fault: msg.fsteer_network_fault,
        rsteer_network_fault: msg.rsteer_network_fault,
        brake_hardware_fault: msg.brake_hardware_fault,
        brake_high_tem_fault: msg.brake_high_tem_fault,
        brake_luid_level_low: msg.brake_luid_level_low,
        brake_network_fault: msg.brake_network_fault,
        park_hardware_fault: msg.park_hardware_fault,
        park_network_fault: msg.park_network_fault,
        rcu_network_fault: msg.rcu_network_fault,
        rcu_weak_signal: msg.rcu_weak_signal,
        rcu_elec_low_alarm: msg.rcu_elec_low_alarm,
        reserve1: msg.reserve1,
        reserve2: msg.reserve2,
        bms_network_fault: msg.bms_network_fault,
        bms_insulationfault: msg.bms_insulationfault,
        bms_ocv_cell: msg.bms_ocv_cell,
        bms_odv_cell: msg.bms_odv_cell,
        bms_ocv_batt: msg.bms_ocv_batt,
        bms_odv_batt: msg.bms_odv_batt,
        bms_cell_volt_diff: msg.bms_cell_volt_diff,
        bms_temph: msg.bms_temph,
        bms_temphl: msg.bms_temphl,
        bms_temph_diff: msg.bms_temph_diff,
        bms_warchg_overcurrent: msg.bms_warchg_overcurrent,
        bms_soch: msg.bms_soch,
        bms_socl: msg.bms_socl,
        bms_time_of_heating_too_long: msg.bms_time_of_heating_too_long,
        bms_soc_break: msg.bms_soc_break,
        bms_dis_char_over_cur: msg.bms_dis_char_over_cur,
        bms_char_over_cur_slow: msg.bms_char_over_cur_slow,
        bmsfast_char_over_cur: msg.bmsfast_char_over_cur,
        bms_alm_sense_cell: msg.bms_alm_sense_cell,
        bms_alm_sense_temp: msg.bms_alm_sense_temp,
        bms_alm_sense_curr: msg.bms_alm_sense_curr,
        bms_hvil: msg.bms_hvil,
        bms_war_incan_fault: msg.bms_war_incan_fault,
        bms_lst_com_withobc: msg.bms_lst_com_withobc,
        bms_lst_com_with_vcu: msg.bms_lst_com_with_vcu,
        bms_precharger_fault: msg.bms_precharger_fault,
        bmspos_relayconglutination: msg.bmspos_relayconglutination,
        bms_neg_relay_conglutination: msg.bms_neg_relay_conglutination,
        vcu_reserve3: msg.vcu_reserve3,
        vcu_reserve4: msg.vcu_reserve4,
        dcdc_high_tem_alarm: msg.dcdc_high_tem_alarm,
        dcdc_hardware_fault: msg.dcdc_hardware_fault,
        dcdc_network_fault: msg.dcdc_network_fault,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      flmc_hardware_fault: msg.flmc_hardware_fault,
      flmc_tem_fault: msg.flmc_tem_fault,
      flm_tem_fault: msg.flm_tem_fault,
      rlmc_hardware_fault: msg.rlmc_hardware_fault,
      rlmc_tem_fault: msg.rlmc_tem_fault,
      rlm_tem_fault: msg.rlm_tem_fault,
      frmc_hardware_fault: msg.frmc_hardware_fault,
      frmc_tem_fault: msg.frmc_tem_fault,
      frm_tem_fault: msg.frm_tem_fault,
      rrmc_hardware_fault: msg.rrmc_hardware_fault,
      rrmc_tem_fault: msg.rrmc_tem_fault,
      rrm_tem_fault: msg.rrm_tem_fault,
      flmc_network_fault: msg.flmc_network_fault,
      frmc_network_fault: msg.frmc_network_fault,
      rlmc_network_fault: msg.rlmc_network_fault,
      rrmc_network_fault: msg.rrmc_network_fault,
      fsteer_hardware_fault: msg.fsteer_hardware_fault,
      rsteer_hardware_fault: msg.rsteer_hardware_fault,
      fsteer_network_fault: msg.fsteer_network_fault,
      rsteer_network_fault: msg.rsteer_network_fault,
      brake_hardware_fault: msg.brake_hardware_fault,
      brake_high_tem_fault: msg.brake_high_tem_fault,
      brake_luid_level_low: msg.brake_luid_level_low,
      brake_network_fault: msg.brake_network_fault,
      park_hardware_fault: msg.park_hardware_fault,
      park_network_fault: msg.park_network_fault,
      rcu_network_fault: msg.rcu_network_fault,
      rcu_weak_signal: msg.rcu_weak_signal,
      rcu_elec_low_alarm: msg.rcu_elec_low_alarm,
      reserve1: msg.reserve1,
      reserve2: msg.reserve2,
      bms_network_fault: msg.bms_network_fault,
      bms_insulationfault: msg.bms_insulationfault,
      bms_ocv_cell: msg.bms_ocv_cell,
      bms_odv_cell: msg.bms_odv_cell,
      bms_ocv_batt: msg.bms_ocv_batt,
      bms_odv_batt: msg.bms_odv_batt,
      bms_cell_volt_diff: msg.bms_cell_volt_diff,
      bms_temph: msg.bms_temph,
      bms_temphl: msg.bms_temphl,
      bms_temph_diff: msg.bms_temph_diff,
      bms_warchg_overcurrent: msg.bms_warchg_overcurrent,
      bms_soch: msg.bms_soch,
      bms_socl: msg.bms_socl,
      bms_time_of_heating_too_long: msg.bms_time_of_heating_too_long,
      bms_soc_break: msg.bms_soc_break,
      bms_dis_char_over_cur: msg.bms_dis_char_over_cur,
      bms_char_over_cur_slow: msg.bms_char_over_cur_slow,
      bmsfast_char_over_cur: msg.bmsfast_char_over_cur,
      bms_alm_sense_cell: msg.bms_alm_sense_cell,
      bms_alm_sense_temp: msg.bms_alm_sense_temp,
      bms_alm_sense_curr: msg.bms_alm_sense_curr,
      bms_hvil: msg.bms_hvil,
      bms_war_incan_fault: msg.bms_war_incan_fault,
      bms_lst_com_withobc: msg.bms_lst_com_withobc,
      bms_lst_com_with_vcu: msg.bms_lst_com_with_vcu,
      bms_precharger_fault: msg.bms_precharger_fault,
      bmspos_relayconglutination: msg.bmspos_relayconglutination,
      bms_neg_relay_conglutination: msg.bms_neg_relay_conglutination,
      vcu_reserve3: msg.vcu_reserve3,
      vcu_reserve4: msg.vcu_reserve4,
      dcdc_high_tem_alarm: msg.dcdc_high_tem_alarm,
      dcdc_hardware_fault: msg.dcdc_hardware_fault,
      dcdc_network_fault: msg.dcdc_network_fault,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      flmc_hardware_fault: msg.flmc_hardware_fault,
      flmc_tem_fault: msg.flmc_tem_fault,
      flm_tem_fault: msg.flm_tem_fault,
      rlmc_hardware_fault: msg.rlmc_hardware_fault,
      rlmc_tem_fault: msg.rlmc_tem_fault,
      rlm_tem_fault: msg.rlm_tem_fault,
      frmc_hardware_fault: msg.frmc_hardware_fault,
      frmc_tem_fault: msg.frmc_tem_fault,
      frm_tem_fault: msg.frm_tem_fault,
      rrmc_hardware_fault: msg.rrmc_hardware_fault,
      rrmc_tem_fault: msg.rrmc_tem_fault,
      rrm_tem_fault: msg.rrm_tem_fault,
      flmc_network_fault: msg.flmc_network_fault,
      frmc_network_fault: msg.frmc_network_fault,
      rlmc_network_fault: msg.rlmc_network_fault,
      rrmc_network_fault: msg.rrmc_network_fault,
      fsteer_hardware_fault: msg.fsteer_hardware_fault,
      rsteer_hardware_fault: msg.rsteer_hardware_fault,
      fsteer_network_fault: msg.fsteer_network_fault,
      rsteer_network_fault: msg.rsteer_network_fault,
      brake_hardware_fault: msg.brake_hardware_fault,
      brake_high_tem_fault: msg.brake_high_tem_fault,
      brake_luid_level_low: msg.brake_luid_level_low,
      brake_network_fault: msg.brake_network_fault,
      park_hardware_fault: msg.park_hardware_fault,
      park_network_fault: msg.park_network_fault,
      rcu_network_fault: msg.rcu_network_fault,
      rcu_weak_signal: msg.rcu_weak_signal,
      rcu_elec_low_alarm: msg.rcu_elec_low_alarm,
      reserve1: msg.reserve1,
      reserve2: msg.reserve2,
      bms_network_fault: msg.bms_network_fault,
      bms_insulationfault: msg.bms_insulationfault,
      bms_ocv_cell: msg.bms_ocv_cell,
      bms_odv_cell: msg.bms_odv_cell,
      bms_ocv_batt: msg.bms_ocv_batt,
      bms_odv_batt: msg.bms_odv_batt,
      bms_cell_volt_diff: msg.bms_cell_volt_diff,
      bms_temph: msg.bms_temph,
      bms_temphl: msg.bms_temphl,
      bms_temph_diff: msg.bms_temph_diff,
      bms_warchg_overcurrent: msg.bms_warchg_overcurrent,
      bms_soch: msg.bms_soch,
      bms_socl: msg.bms_socl,
      bms_time_of_heating_too_long: msg.bms_time_of_heating_too_long,
      bms_soc_break: msg.bms_soc_break,
      bms_dis_char_over_cur: msg.bms_dis_char_over_cur,
      bms_char_over_cur_slow: msg.bms_char_over_cur_slow,
      bmsfast_char_over_cur: msg.bmsfast_char_over_cur,
      bms_alm_sense_cell: msg.bms_alm_sense_cell,
      bms_alm_sense_temp: msg.bms_alm_sense_temp,
      bms_alm_sense_curr: msg.bms_alm_sense_curr,
      bms_hvil: msg.bms_hvil,
      bms_war_incan_fault: msg.bms_war_incan_fault,
      bms_lst_com_withobc: msg.bms_lst_com_withobc,
      bms_lst_com_with_vcu: msg.bms_lst_com_with_vcu,
      bms_precharger_fault: msg.bms_precharger_fault,
      bmspos_relayconglutination: msg.bmspos_relayconglutination,
      bms_neg_relay_conglutination: msg.bms_neg_relay_conglutination,
      vcu_reserve3: msg.vcu_reserve3,
      vcu_reserve4: msg.vcu_reserve4,
      dcdc_high_tem_alarm: msg.dcdc_high_tem_alarm,
      dcdc_hardware_fault: msg.dcdc_hardware_fault,
      dcdc_network_fault: msg.dcdc_network_fault,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__VehicleErrcode2

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleErrcode2 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub obc_network_fault: bool,

    /// []
    pub obc_hardware_fault: bool,

    /// []
    pub vcu_reserve1: bool,

    /// []
    pub dp_hardware_fault: bool,

    /// []
    pub dp_network_fault: bool,

    /// []
    pub vcu_reserve5: bool,

    /// []
    pub bcm_hardware_fault: bool,

    /// []
    pub bcm_network_fault: bool,

    /// []
    pub vcu_reserve11: bool,

    /// []
    pub dcu_network_fault: bool,

    /// []
    pub dcu_hardware_fault: bool,

    /// []
    pub vcu_reserve17: bool,

    /// []
    pub avas_network_fault: bool,

    /// []
    pub avas_hardware_fault: bool,

    /// []
    pub vcu_reserve18: bool,

    /// []
    pub vcu_reserve19: bool,

    /// []
    pub iis_hardware_fault: bool,

    /// []
    pub iis_network_fault: bool,

    /// []
    pub vcu_reserve20: bool,

    /// []
    pub vcu_reserve26: bool,

    /// []
    pub ac_hardware_fault: bool,

    /// []
    pub ac_network_fault: bool,

    /// []
    pub vcu_reserve32: bool,

    /// []
    pub lv_battery_low_voltage_fault: bool,

    /// []
    pub lv_battery_high_voltage_fault: bool,

}



impl Default for VehicleErrcode2 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleErrcode2::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleErrcode2 {
  type RmwMsg = super::msg::rmw::VehicleErrcode2;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        obc_network_fault: msg.obc_network_fault,
        obc_hardware_fault: msg.obc_hardware_fault,
        vcu_reserve1: msg.vcu_reserve1,
        dp_hardware_fault: msg.dp_hardware_fault,
        dp_network_fault: msg.dp_network_fault,
        vcu_reserve5: msg.vcu_reserve5,
        bcm_hardware_fault: msg.bcm_hardware_fault,
        bcm_network_fault: msg.bcm_network_fault,
        vcu_reserve11: msg.vcu_reserve11,
        dcu_network_fault: msg.dcu_network_fault,
        dcu_hardware_fault: msg.dcu_hardware_fault,
        vcu_reserve17: msg.vcu_reserve17,
        avas_network_fault: msg.avas_network_fault,
        avas_hardware_fault: msg.avas_hardware_fault,
        vcu_reserve18: msg.vcu_reserve18,
        vcu_reserve19: msg.vcu_reserve19,
        iis_hardware_fault: msg.iis_hardware_fault,
        iis_network_fault: msg.iis_network_fault,
        vcu_reserve20: msg.vcu_reserve20,
        vcu_reserve26: msg.vcu_reserve26,
        ac_hardware_fault: msg.ac_hardware_fault,
        ac_network_fault: msg.ac_network_fault,
        vcu_reserve32: msg.vcu_reserve32,
        lv_battery_low_voltage_fault: msg.lv_battery_low_voltage_fault,
        lv_battery_high_voltage_fault: msg.lv_battery_high_voltage_fault,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      obc_network_fault: msg.obc_network_fault,
      obc_hardware_fault: msg.obc_hardware_fault,
      vcu_reserve1: msg.vcu_reserve1,
      dp_hardware_fault: msg.dp_hardware_fault,
      dp_network_fault: msg.dp_network_fault,
      vcu_reserve5: msg.vcu_reserve5,
      bcm_hardware_fault: msg.bcm_hardware_fault,
      bcm_network_fault: msg.bcm_network_fault,
      vcu_reserve11: msg.vcu_reserve11,
      dcu_network_fault: msg.dcu_network_fault,
      dcu_hardware_fault: msg.dcu_hardware_fault,
      vcu_reserve17: msg.vcu_reserve17,
      avas_network_fault: msg.avas_network_fault,
      avas_hardware_fault: msg.avas_hardware_fault,
      vcu_reserve18: msg.vcu_reserve18,
      vcu_reserve19: msg.vcu_reserve19,
      iis_hardware_fault: msg.iis_hardware_fault,
      iis_network_fault: msg.iis_network_fault,
      vcu_reserve20: msg.vcu_reserve20,
      vcu_reserve26: msg.vcu_reserve26,
      ac_hardware_fault: msg.ac_hardware_fault,
      ac_network_fault: msg.ac_network_fault,
      vcu_reserve32: msg.vcu_reserve32,
      lv_battery_low_voltage_fault: msg.lv_battery_low_voltage_fault,
      lv_battery_high_voltage_fault: msg.lv_battery_high_voltage_fault,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      obc_network_fault: msg.obc_network_fault,
      obc_hardware_fault: msg.obc_hardware_fault,
      vcu_reserve1: msg.vcu_reserve1,
      dp_hardware_fault: msg.dp_hardware_fault,
      dp_network_fault: msg.dp_network_fault,
      vcu_reserve5: msg.vcu_reserve5,
      bcm_hardware_fault: msg.bcm_hardware_fault,
      bcm_network_fault: msg.bcm_network_fault,
      vcu_reserve11: msg.vcu_reserve11,
      dcu_network_fault: msg.dcu_network_fault,
      dcu_hardware_fault: msg.dcu_hardware_fault,
      vcu_reserve17: msg.vcu_reserve17,
      avas_network_fault: msg.avas_network_fault,
      avas_hardware_fault: msg.avas_hardware_fault,
      vcu_reserve18: msg.vcu_reserve18,
      vcu_reserve19: msg.vcu_reserve19,
      iis_hardware_fault: msg.iis_hardware_fault,
      iis_network_fault: msg.iis_network_fault,
      vcu_reserve20: msg.vcu_reserve20,
      vcu_reserve26: msg.vcu_reserve26,
      ac_hardware_fault: msg.ac_hardware_fault,
      ac_network_fault: msg.ac_network_fault,
      vcu_reserve32: msg.vcu_reserve32,
      lv_battery_low_voltage_fault: msg.lv_battery_low_voltage_fault,
      lv_battery_high_voltage_fault: msg.lv_battery_high_voltage_fault,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HistoricalVehiclefailures1 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub hflmc_hardware_fault: bool,

    /// []
    pub hflmc_tem_fault: bool,

    /// []
    pub hflm_tem_fault: bool,

    /// []
    pub hrlmc_hardware_fault: bool,

    /// []
    pub hrlmc_tem_fault: bool,

    /// []
    pub hrlm_tem_fault: bool,

    /// []
    pub hfrmc_hardware_fault: bool,

    /// []
    pub hfrmc_tem_fault: bool,

    /// []
    pub hfrm_tem_fault: bool,

    /// []
    pub hrrmc_hardware_fault: bool,

    /// []
    pub hrrmc_tem_fault: bool,

    /// []
    pub hrrm_tem_fault: bool,

    /// []
    pub hflmc_network_fault: bool,

    /// []
    pub hfrmc_network_fault: bool,

    /// []
    pub hrlmc_network_fault: bool,

    /// []
    pub hrrmc_network_fault: bool,

    /// []
    pub hfsteer_hardware_fault: bool,

    /// []
    pub hrsteer_hardware_fault: bool,

    /// []
    pub hfsteer_network_fault: bool,

    /// []
    pub hrsteer_network_fault: bool,

    /// []
    pub hbrake_hardware_fault: bool,

    /// []
    pub hbrake_high_tem_fault: bool,

    /// []
    pub hbrake_luid_level_low: bool,

    /// []
    pub hbrake_network_fault: bool,

    /// []
    pub hpark_hardware_fault: bool,

    /// []
    pub hpark_network_fault: bool,

    /// []
    pub hrcu_network_fault: bool,

    /// []
    pub hrcu_weak_signal: bool,

    /// []
    pub hrcu_elec_low_alarm: bool,

    /// []
    pub hbms_network_fault: bool,

    /// []
    pub hbms_insulationfault: bool,

    /// []
    pub hbms_ocv_cell: bool,

    /// []
    pub hbms_odv_cell: bool,

    /// []
    pub hbms_ocv_batt: bool,

    /// []
    pub hbms_odv_batt: bool,

    /// []
    pub hbms_cell_volt_diff: bool,

    /// []
    pub hbms_temph: bool,

    /// []
    pub hbms_temphl: bool,

    /// []
    pub hbms_temph_diff: bool,

    /// []
    pub hbms_warchg_overcurrent: bool,

    /// []
    pub hbms_soch: bool,

    /// []
    pub hbms_socl: bool,

    /// []
    pub hbms_time_of_heating_too_long: bool,

    /// []
    pub hbms_soc_break: bool,

    /// []
    pub hbms_dis_char_over_cur: bool,

    /// []
    pub hbms_char_over_cur_slow: bool,

    /// []
    pub hbmsfast_char_over_cur: bool,

    /// []
    pub hbms_alm_sense_cell: bool,

    /// []
    pub hbms_alm_sense_temp: bool,

    /// []
    pub hbms_alm_sense_curr: bool,

    /// []
    pub hbms_hvil: bool,

    /// []
    pub hbms_war_incan_fault: bool,

    /// []
    pub hbms_lst_com_withobc: bool,

    /// []
    pub hbms_lst_com_with_vcu: bool,

    /// []
    pub hbms_precharger_fault: bool,

    /// []
    pub hbmspos_relayconglutination: bool,

    /// []
    pub hbms_neg_relay_conglutination: bool,

    /// []
    pub hdcdc_high_tem_alarm: bool,

    /// []
    pub hdcdc_hardware_fault: bool,

    /// []
    pub hdcdc_network_fault: bool,

}



impl Default for HistoricalVehiclefailures1 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HistoricalVehiclefailures1::default())
  }
}

impl rosidl_runtime_rs::Message for HistoricalVehiclefailures1 {
  type RmwMsg = super::msg::rmw::HistoricalVehiclefailures1;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        hflmc_hardware_fault: msg.hflmc_hardware_fault,
        hflmc_tem_fault: msg.hflmc_tem_fault,
        hflm_tem_fault: msg.hflm_tem_fault,
        hrlmc_hardware_fault: msg.hrlmc_hardware_fault,
        hrlmc_tem_fault: msg.hrlmc_tem_fault,
        hrlm_tem_fault: msg.hrlm_tem_fault,
        hfrmc_hardware_fault: msg.hfrmc_hardware_fault,
        hfrmc_tem_fault: msg.hfrmc_tem_fault,
        hfrm_tem_fault: msg.hfrm_tem_fault,
        hrrmc_hardware_fault: msg.hrrmc_hardware_fault,
        hrrmc_tem_fault: msg.hrrmc_tem_fault,
        hrrm_tem_fault: msg.hrrm_tem_fault,
        hflmc_network_fault: msg.hflmc_network_fault,
        hfrmc_network_fault: msg.hfrmc_network_fault,
        hrlmc_network_fault: msg.hrlmc_network_fault,
        hrrmc_network_fault: msg.hrrmc_network_fault,
        hfsteer_hardware_fault: msg.hfsteer_hardware_fault,
        hrsteer_hardware_fault: msg.hrsteer_hardware_fault,
        hfsteer_network_fault: msg.hfsteer_network_fault,
        hrsteer_network_fault: msg.hrsteer_network_fault,
        hbrake_hardware_fault: msg.hbrake_hardware_fault,
        hbrake_high_tem_fault: msg.hbrake_high_tem_fault,
        hbrake_luid_level_low: msg.hbrake_luid_level_low,
        hbrake_network_fault: msg.hbrake_network_fault,
        hpark_hardware_fault: msg.hpark_hardware_fault,
        hpark_network_fault: msg.hpark_network_fault,
        hrcu_network_fault: msg.hrcu_network_fault,
        hrcu_weak_signal: msg.hrcu_weak_signal,
        hrcu_elec_low_alarm: msg.hrcu_elec_low_alarm,
        hbms_network_fault: msg.hbms_network_fault,
        hbms_insulationfault: msg.hbms_insulationfault,
        hbms_ocv_cell: msg.hbms_ocv_cell,
        hbms_odv_cell: msg.hbms_odv_cell,
        hbms_ocv_batt: msg.hbms_ocv_batt,
        hbms_odv_batt: msg.hbms_odv_batt,
        hbms_cell_volt_diff: msg.hbms_cell_volt_diff,
        hbms_temph: msg.hbms_temph,
        hbms_temphl: msg.hbms_temphl,
        hbms_temph_diff: msg.hbms_temph_diff,
        hbms_warchg_overcurrent: msg.hbms_warchg_overcurrent,
        hbms_soch: msg.hbms_soch,
        hbms_socl: msg.hbms_socl,
        hbms_time_of_heating_too_long: msg.hbms_time_of_heating_too_long,
        hbms_soc_break: msg.hbms_soc_break,
        hbms_dis_char_over_cur: msg.hbms_dis_char_over_cur,
        hbms_char_over_cur_slow: msg.hbms_char_over_cur_slow,
        hbmsfast_char_over_cur: msg.hbmsfast_char_over_cur,
        hbms_alm_sense_cell: msg.hbms_alm_sense_cell,
        hbms_alm_sense_temp: msg.hbms_alm_sense_temp,
        hbms_alm_sense_curr: msg.hbms_alm_sense_curr,
        hbms_hvil: msg.hbms_hvil,
        hbms_war_incan_fault: msg.hbms_war_incan_fault,
        hbms_lst_com_withobc: msg.hbms_lst_com_withobc,
        hbms_lst_com_with_vcu: msg.hbms_lst_com_with_vcu,
        hbms_precharger_fault: msg.hbms_precharger_fault,
        hbmspos_relayconglutination: msg.hbmspos_relayconglutination,
        hbms_neg_relay_conglutination: msg.hbms_neg_relay_conglutination,
        hdcdc_high_tem_alarm: msg.hdcdc_high_tem_alarm,
        hdcdc_hardware_fault: msg.hdcdc_hardware_fault,
        hdcdc_network_fault: msg.hdcdc_network_fault,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      hflmc_hardware_fault: msg.hflmc_hardware_fault,
      hflmc_tem_fault: msg.hflmc_tem_fault,
      hflm_tem_fault: msg.hflm_tem_fault,
      hrlmc_hardware_fault: msg.hrlmc_hardware_fault,
      hrlmc_tem_fault: msg.hrlmc_tem_fault,
      hrlm_tem_fault: msg.hrlm_tem_fault,
      hfrmc_hardware_fault: msg.hfrmc_hardware_fault,
      hfrmc_tem_fault: msg.hfrmc_tem_fault,
      hfrm_tem_fault: msg.hfrm_tem_fault,
      hrrmc_hardware_fault: msg.hrrmc_hardware_fault,
      hrrmc_tem_fault: msg.hrrmc_tem_fault,
      hrrm_tem_fault: msg.hrrm_tem_fault,
      hflmc_network_fault: msg.hflmc_network_fault,
      hfrmc_network_fault: msg.hfrmc_network_fault,
      hrlmc_network_fault: msg.hrlmc_network_fault,
      hrrmc_network_fault: msg.hrrmc_network_fault,
      hfsteer_hardware_fault: msg.hfsteer_hardware_fault,
      hrsteer_hardware_fault: msg.hrsteer_hardware_fault,
      hfsteer_network_fault: msg.hfsteer_network_fault,
      hrsteer_network_fault: msg.hrsteer_network_fault,
      hbrake_hardware_fault: msg.hbrake_hardware_fault,
      hbrake_high_tem_fault: msg.hbrake_high_tem_fault,
      hbrake_luid_level_low: msg.hbrake_luid_level_low,
      hbrake_network_fault: msg.hbrake_network_fault,
      hpark_hardware_fault: msg.hpark_hardware_fault,
      hpark_network_fault: msg.hpark_network_fault,
      hrcu_network_fault: msg.hrcu_network_fault,
      hrcu_weak_signal: msg.hrcu_weak_signal,
      hrcu_elec_low_alarm: msg.hrcu_elec_low_alarm,
      hbms_network_fault: msg.hbms_network_fault,
      hbms_insulationfault: msg.hbms_insulationfault,
      hbms_ocv_cell: msg.hbms_ocv_cell,
      hbms_odv_cell: msg.hbms_odv_cell,
      hbms_ocv_batt: msg.hbms_ocv_batt,
      hbms_odv_batt: msg.hbms_odv_batt,
      hbms_cell_volt_diff: msg.hbms_cell_volt_diff,
      hbms_temph: msg.hbms_temph,
      hbms_temphl: msg.hbms_temphl,
      hbms_temph_diff: msg.hbms_temph_diff,
      hbms_warchg_overcurrent: msg.hbms_warchg_overcurrent,
      hbms_soch: msg.hbms_soch,
      hbms_socl: msg.hbms_socl,
      hbms_time_of_heating_too_long: msg.hbms_time_of_heating_too_long,
      hbms_soc_break: msg.hbms_soc_break,
      hbms_dis_char_over_cur: msg.hbms_dis_char_over_cur,
      hbms_char_over_cur_slow: msg.hbms_char_over_cur_slow,
      hbmsfast_char_over_cur: msg.hbmsfast_char_over_cur,
      hbms_alm_sense_cell: msg.hbms_alm_sense_cell,
      hbms_alm_sense_temp: msg.hbms_alm_sense_temp,
      hbms_alm_sense_curr: msg.hbms_alm_sense_curr,
      hbms_hvil: msg.hbms_hvil,
      hbms_war_incan_fault: msg.hbms_war_incan_fault,
      hbms_lst_com_withobc: msg.hbms_lst_com_withobc,
      hbms_lst_com_with_vcu: msg.hbms_lst_com_with_vcu,
      hbms_precharger_fault: msg.hbms_precharger_fault,
      hbmspos_relayconglutination: msg.hbmspos_relayconglutination,
      hbms_neg_relay_conglutination: msg.hbms_neg_relay_conglutination,
      hdcdc_high_tem_alarm: msg.hdcdc_high_tem_alarm,
      hdcdc_hardware_fault: msg.hdcdc_hardware_fault,
      hdcdc_network_fault: msg.hdcdc_network_fault,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      hflmc_hardware_fault: msg.hflmc_hardware_fault,
      hflmc_tem_fault: msg.hflmc_tem_fault,
      hflm_tem_fault: msg.hflm_tem_fault,
      hrlmc_hardware_fault: msg.hrlmc_hardware_fault,
      hrlmc_tem_fault: msg.hrlmc_tem_fault,
      hrlm_tem_fault: msg.hrlm_tem_fault,
      hfrmc_hardware_fault: msg.hfrmc_hardware_fault,
      hfrmc_tem_fault: msg.hfrmc_tem_fault,
      hfrm_tem_fault: msg.hfrm_tem_fault,
      hrrmc_hardware_fault: msg.hrrmc_hardware_fault,
      hrrmc_tem_fault: msg.hrrmc_tem_fault,
      hrrm_tem_fault: msg.hrrm_tem_fault,
      hflmc_network_fault: msg.hflmc_network_fault,
      hfrmc_network_fault: msg.hfrmc_network_fault,
      hrlmc_network_fault: msg.hrlmc_network_fault,
      hrrmc_network_fault: msg.hrrmc_network_fault,
      hfsteer_hardware_fault: msg.hfsteer_hardware_fault,
      hrsteer_hardware_fault: msg.hrsteer_hardware_fault,
      hfsteer_network_fault: msg.hfsteer_network_fault,
      hrsteer_network_fault: msg.hrsteer_network_fault,
      hbrake_hardware_fault: msg.hbrake_hardware_fault,
      hbrake_high_tem_fault: msg.hbrake_high_tem_fault,
      hbrake_luid_level_low: msg.hbrake_luid_level_low,
      hbrake_network_fault: msg.hbrake_network_fault,
      hpark_hardware_fault: msg.hpark_hardware_fault,
      hpark_network_fault: msg.hpark_network_fault,
      hrcu_network_fault: msg.hrcu_network_fault,
      hrcu_weak_signal: msg.hrcu_weak_signal,
      hrcu_elec_low_alarm: msg.hrcu_elec_low_alarm,
      hbms_network_fault: msg.hbms_network_fault,
      hbms_insulationfault: msg.hbms_insulationfault,
      hbms_ocv_cell: msg.hbms_ocv_cell,
      hbms_odv_cell: msg.hbms_odv_cell,
      hbms_ocv_batt: msg.hbms_ocv_batt,
      hbms_odv_batt: msg.hbms_odv_batt,
      hbms_cell_volt_diff: msg.hbms_cell_volt_diff,
      hbms_temph: msg.hbms_temph,
      hbms_temphl: msg.hbms_temphl,
      hbms_temph_diff: msg.hbms_temph_diff,
      hbms_warchg_overcurrent: msg.hbms_warchg_overcurrent,
      hbms_soch: msg.hbms_soch,
      hbms_socl: msg.hbms_socl,
      hbms_time_of_heating_too_long: msg.hbms_time_of_heating_too_long,
      hbms_soc_break: msg.hbms_soc_break,
      hbms_dis_char_over_cur: msg.hbms_dis_char_over_cur,
      hbms_char_over_cur_slow: msg.hbms_char_over_cur_slow,
      hbmsfast_char_over_cur: msg.hbmsfast_char_over_cur,
      hbms_alm_sense_cell: msg.hbms_alm_sense_cell,
      hbms_alm_sense_temp: msg.hbms_alm_sense_temp,
      hbms_alm_sense_curr: msg.hbms_alm_sense_curr,
      hbms_hvil: msg.hbms_hvil,
      hbms_war_incan_fault: msg.hbms_war_incan_fault,
      hbms_lst_com_withobc: msg.hbms_lst_com_withobc,
      hbms_lst_com_with_vcu: msg.hbms_lst_com_with_vcu,
      hbms_precharger_fault: msg.hbms_precharger_fault,
      hbmspos_relayconglutination: msg.hbmspos_relayconglutination,
      hbms_neg_relay_conglutination: msg.hbms_neg_relay_conglutination,
      hdcdc_high_tem_alarm: msg.hdcdc_high_tem_alarm,
      hdcdc_hardware_fault: msg.hdcdc_hardware_fault,
      hdcdc_network_fault: msg.hdcdc_network_fault,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HistoricalVehiclefailures2 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub hobc_network_fault: bool,

    /// []
    pub hobc_hardware_fault: bool,

    /// []
    pub hdp_hardware_fault: bool,

    /// []
    pub hdp_network_fault: bool,

    /// []
    pub hbcm_hardware_fault: bool,

    /// []
    pub hbcm_network_fault: bool,

    /// []
    pub hdcu_network_fault: bool,

    /// []
    pub hdcu_hardware_fault: bool,

    /// []
    pub havas_network_fault: bool,

    /// []
    pub havas_hardware_fault: bool,

    /// []
    pub hlis_hardware_fault: bool,

    /// []
    pub h_iis_network_fault: bool,

    /// []
    pub hac_hardware_fault: bool,

    /// []
    pub hac_network_fault: bool,

    /// []
    pub h_iv_battery_low_voltage_fault: bool,

    /// []
    pub h_iv_battery_high_voltage_fault: bool,

}



impl Default for HistoricalVehiclefailures2 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HistoricalVehiclefailures2::default())
  }
}

impl rosidl_runtime_rs::Message for HistoricalVehiclefailures2 {
  type RmwMsg = super::msg::rmw::HistoricalVehiclefailures2;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        hobc_network_fault: msg.hobc_network_fault,
        hobc_hardware_fault: msg.hobc_hardware_fault,
        hdp_hardware_fault: msg.hdp_hardware_fault,
        hdp_network_fault: msg.hdp_network_fault,
        hbcm_hardware_fault: msg.hbcm_hardware_fault,
        hbcm_network_fault: msg.hbcm_network_fault,
        hdcu_network_fault: msg.hdcu_network_fault,
        hdcu_hardware_fault: msg.hdcu_hardware_fault,
        havas_network_fault: msg.havas_network_fault,
        havas_hardware_fault: msg.havas_hardware_fault,
        hlis_hardware_fault: msg.hlis_hardware_fault,
        h_iis_network_fault: msg.h_iis_network_fault,
        hac_hardware_fault: msg.hac_hardware_fault,
        hac_network_fault: msg.hac_network_fault,
        h_iv_battery_low_voltage_fault: msg.h_iv_battery_low_voltage_fault,
        h_iv_battery_high_voltage_fault: msg.h_iv_battery_high_voltage_fault,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      hobc_network_fault: msg.hobc_network_fault,
      hobc_hardware_fault: msg.hobc_hardware_fault,
      hdp_hardware_fault: msg.hdp_hardware_fault,
      hdp_network_fault: msg.hdp_network_fault,
      hbcm_hardware_fault: msg.hbcm_hardware_fault,
      hbcm_network_fault: msg.hbcm_network_fault,
      hdcu_network_fault: msg.hdcu_network_fault,
      hdcu_hardware_fault: msg.hdcu_hardware_fault,
      havas_network_fault: msg.havas_network_fault,
      havas_hardware_fault: msg.havas_hardware_fault,
      hlis_hardware_fault: msg.hlis_hardware_fault,
      h_iis_network_fault: msg.h_iis_network_fault,
      hac_hardware_fault: msg.hac_hardware_fault,
      hac_network_fault: msg.hac_network_fault,
      h_iv_battery_low_voltage_fault: msg.h_iv_battery_low_voltage_fault,
      h_iv_battery_high_voltage_fault: msg.h_iv_battery_high_voltage_fault,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      hobc_network_fault: msg.hobc_network_fault,
      hobc_hardware_fault: msg.hobc_hardware_fault,
      hdp_hardware_fault: msg.hdp_hardware_fault,
      hdp_network_fault: msg.hdp_network_fault,
      hbcm_hardware_fault: msg.hbcm_hardware_fault,
      hbcm_network_fault: msg.hbcm_network_fault,
      hdcu_network_fault: msg.hdcu_network_fault,
      hdcu_hardware_fault: msg.hdcu_hardware_fault,
      havas_network_fault: msg.havas_network_fault,
      havas_hardware_fault: msg.havas_hardware_fault,
      hlis_hardware_fault: msg.hlis_hardware_fault,
      h_iis_network_fault: msg.h_iis_network_fault,
      hac_hardware_fault: msg.hac_hardware_fault,
      hac_network_fault: msg.hac_network_fault,
      h_iv_battery_low_voltage_fault: msg.h_iv_battery_low_voltage_fault,
      h_iv_battery_high_voltage_fault: msg.h_iv_battery_high_voltage_fault,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__VaDriveStaFb

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaDriveStaFb {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub vcu_chassis_driver_en_sta: bool,

    /// []
    pub vcu_chassis_diver_slopover: bool,

    /// []
    pub vcu_chassis_driver_mode_sta: i32,

    /// []
    pub vcu_chassis_gear_fb: i32,

    /// []
    pub vcu_chassis4_wd_mode_fb: i32,

    /// [m/s] [-50|50]
    pub vcu_chassis_speed_fb: f32,

    /// [%] [0|100]
    pub vcu_chassis_throttle_pald_fb: f32,

    /// []
    pub vcu_chassis_throttle_pedal_req_fb: bool,

    /// [m/s2] [-20|20]
    pub vcu_chassis_acceleration_fb: f32,

    /// []
    pub vcu_drive_life: i32,

    /// []
    pub vcu_drive_check_sta: bool,

}



impl Default for VaDriveStaFb {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VaDriveStaFb::default())
  }
}

impl rosidl_runtime_rs::Message for VaDriveStaFb {
  type RmwMsg = super::msg::rmw::VaDriveStaFb;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        vcu_chassis_driver_en_sta: msg.vcu_chassis_driver_en_sta,
        vcu_chassis_diver_slopover: msg.vcu_chassis_diver_slopover,
        vcu_chassis_driver_mode_sta: msg.vcu_chassis_driver_mode_sta,
        vcu_chassis_gear_fb: msg.vcu_chassis_gear_fb,
        vcu_chassis4_wd_mode_fb: msg.vcu_chassis4_wd_mode_fb,
        vcu_chassis_speed_fb: msg.vcu_chassis_speed_fb,
        vcu_chassis_throttle_pald_fb: msg.vcu_chassis_throttle_pald_fb,
        vcu_chassis_throttle_pedal_req_fb: msg.vcu_chassis_throttle_pedal_req_fb,
        vcu_chassis_acceleration_fb: msg.vcu_chassis_acceleration_fb,
        vcu_drive_life: msg.vcu_drive_life,
        vcu_drive_check_sta: msg.vcu_drive_check_sta,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      vcu_chassis_driver_en_sta: msg.vcu_chassis_driver_en_sta,
      vcu_chassis_diver_slopover: msg.vcu_chassis_diver_slopover,
      vcu_chassis_driver_mode_sta: msg.vcu_chassis_driver_mode_sta,
      vcu_chassis_gear_fb: msg.vcu_chassis_gear_fb,
      vcu_chassis4_wd_mode_fb: msg.vcu_chassis4_wd_mode_fb,
      vcu_chassis_speed_fb: msg.vcu_chassis_speed_fb,
      vcu_chassis_throttle_pald_fb: msg.vcu_chassis_throttle_pald_fb,
      vcu_chassis_throttle_pedal_req_fb: msg.vcu_chassis_throttle_pedal_req_fb,
      vcu_chassis_acceleration_fb: msg.vcu_chassis_acceleration_fb,
      vcu_drive_life: msg.vcu_drive_life,
      vcu_drive_check_sta: msg.vcu_drive_check_sta,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      vcu_chassis_driver_en_sta: msg.vcu_chassis_driver_en_sta,
      vcu_chassis_diver_slopover: msg.vcu_chassis_diver_slopover,
      vcu_chassis_driver_mode_sta: msg.vcu_chassis_driver_mode_sta,
      vcu_chassis_gear_fb: msg.vcu_chassis_gear_fb,
      vcu_chassis4_wd_mode_fb: msg.vcu_chassis4_wd_mode_fb,
      vcu_chassis_speed_fb: msg.vcu_chassis_speed_fb,
      vcu_chassis_throttle_pald_fb: msg.vcu_chassis_throttle_pald_fb,
      vcu_chassis_throttle_pedal_req_fb: msg.vcu_chassis_throttle_pedal_req_fb,
      vcu_chassis_acceleration_fb: msg.vcu_chassis_acceleration_fb,
      vcu_drive_life: msg.vcu_drive_life,
      vcu_drive_check_sta: msg.vcu_drive_check_sta,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__VaBrakeStaFb

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaBrakeStaFb {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub vcu_chassis_brake_en_sta: bool,

    /// []
    pub vcu_vehicle_brake_lamp_fb: bool,

    /// []
    pub vcu_chassis_epb_fb: i32,

    /// []
    pub vcu_chassis_brake_communication_lost: bool,

    /// [%] [0|100]
    pub vcu_chassis_brake_padl_fb: f32,

    /// []
    pub vcu_brake_pedal_req_fb: bool,

    /// []
    pub vcu_aeb_en_sta_fb: bool,

    /// []
    pub vcu_aeb_trigger_sta_fb: bool,

    /// [bar] [0|100]
    pub vcu_chassis_brake_pressure_fb: i32,

    /// []
    pub vcu_brake_life: i32,

    /// []
    pub vcu_brake_check_sta: bool,

}



impl Default for VaBrakeStaFb {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VaBrakeStaFb::default())
  }
}

impl rosidl_runtime_rs::Message for VaBrakeStaFb {
  type RmwMsg = super::msg::rmw::VaBrakeStaFb;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        vcu_chassis_brake_en_sta: msg.vcu_chassis_brake_en_sta,
        vcu_vehicle_brake_lamp_fb: msg.vcu_vehicle_brake_lamp_fb,
        vcu_chassis_epb_fb: msg.vcu_chassis_epb_fb,
        vcu_chassis_brake_communication_lost: msg.vcu_chassis_brake_communication_lost,
        vcu_chassis_brake_padl_fb: msg.vcu_chassis_brake_padl_fb,
        vcu_brake_pedal_req_fb: msg.vcu_brake_pedal_req_fb,
        vcu_aeb_en_sta_fb: msg.vcu_aeb_en_sta_fb,
        vcu_aeb_trigger_sta_fb: msg.vcu_aeb_trigger_sta_fb,
        vcu_chassis_brake_pressure_fb: msg.vcu_chassis_brake_pressure_fb,
        vcu_brake_life: msg.vcu_brake_life,
        vcu_brake_check_sta: msg.vcu_brake_check_sta,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      vcu_chassis_brake_en_sta: msg.vcu_chassis_brake_en_sta,
      vcu_vehicle_brake_lamp_fb: msg.vcu_vehicle_brake_lamp_fb,
      vcu_chassis_epb_fb: msg.vcu_chassis_epb_fb,
      vcu_chassis_brake_communication_lost: msg.vcu_chassis_brake_communication_lost,
      vcu_chassis_brake_padl_fb: msg.vcu_chassis_brake_padl_fb,
      vcu_brake_pedal_req_fb: msg.vcu_brake_pedal_req_fb,
      vcu_aeb_en_sta_fb: msg.vcu_aeb_en_sta_fb,
      vcu_aeb_trigger_sta_fb: msg.vcu_aeb_trigger_sta_fb,
      vcu_chassis_brake_pressure_fb: msg.vcu_chassis_brake_pressure_fb,
      vcu_brake_life: msg.vcu_brake_life,
      vcu_brake_check_sta: msg.vcu_brake_check_sta,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      vcu_chassis_brake_en_sta: msg.vcu_chassis_brake_en_sta,
      vcu_vehicle_brake_lamp_fb: msg.vcu_vehicle_brake_lamp_fb,
      vcu_chassis_epb_fb: msg.vcu_chassis_epb_fb,
      vcu_chassis_brake_communication_lost: msg.vcu_chassis_brake_communication_lost,
      vcu_chassis_brake_padl_fb: msg.vcu_chassis_brake_padl_fb,
      vcu_brake_pedal_req_fb: msg.vcu_brake_pedal_req_fb,
      vcu_aeb_en_sta_fb: msg.vcu_aeb_en_sta_fb,
      vcu_aeb_trigger_sta_fb: msg.vcu_aeb_trigger_sta_fb,
      vcu_chassis_brake_pressure_fb: msg.vcu_chassis_brake_pressure_fb,
      vcu_brake_life: msg.vcu_brake_life,
      vcu_brake_check_sta: msg.vcu_brake_check_sta,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__VaSteerStaFb

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaSteerStaFb {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub vcu_chassis_steer_en_sta: bool,

    /// []
    pub vcu_chassis_steer_slopover: bool,

    /// []
    pub vcu_chassis_steer_work_mode: i32,

    /// []
    pub vcu_chassis_steer_mode_fb: i32,

    /// []
    pub vcu_chassis_steer_communication_lost: bool,

    /// [deg] [-500|500]
    pub vcu_chassis_steer_angle_fb: i32,

    /// [deg] [-500|500]
    pub vcu_chassis_steer_angle_rear_fb: i32,

    /// [deg/s] [0|500]
    pub vcu_chassis_steer_angle_speed_fb: f32,

    /// []
    pub vcu_steer_life: i32,

    /// []
    pub vcu_steer_check_sta: bool,

}



impl Default for VaSteerStaFb {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VaSteerStaFb::default())
  }
}

impl rosidl_runtime_rs::Message for VaSteerStaFb {
  type RmwMsg = super::msg::rmw::VaSteerStaFb;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        vcu_chassis_steer_en_sta: msg.vcu_chassis_steer_en_sta,
        vcu_chassis_steer_slopover: msg.vcu_chassis_steer_slopover,
        vcu_chassis_steer_work_mode: msg.vcu_chassis_steer_work_mode,
        vcu_chassis_steer_mode_fb: msg.vcu_chassis_steer_mode_fb,
        vcu_chassis_steer_communication_lost: msg.vcu_chassis_steer_communication_lost,
        vcu_chassis_steer_angle_fb: msg.vcu_chassis_steer_angle_fb,
        vcu_chassis_steer_angle_rear_fb: msg.vcu_chassis_steer_angle_rear_fb,
        vcu_chassis_steer_angle_speed_fb: msg.vcu_chassis_steer_angle_speed_fb,
        vcu_steer_life: msg.vcu_steer_life,
        vcu_steer_check_sta: msg.vcu_steer_check_sta,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      vcu_chassis_steer_en_sta: msg.vcu_chassis_steer_en_sta,
      vcu_chassis_steer_slopover: msg.vcu_chassis_steer_slopover,
      vcu_chassis_steer_work_mode: msg.vcu_chassis_steer_work_mode,
      vcu_chassis_steer_mode_fb: msg.vcu_chassis_steer_mode_fb,
      vcu_chassis_steer_communication_lost: msg.vcu_chassis_steer_communication_lost,
      vcu_chassis_steer_angle_fb: msg.vcu_chassis_steer_angle_fb,
      vcu_chassis_steer_angle_rear_fb: msg.vcu_chassis_steer_angle_rear_fb,
      vcu_chassis_steer_angle_speed_fb: msg.vcu_chassis_steer_angle_speed_fb,
      vcu_steer_life: msg.vcu_steer_life,
      vcu_steer_check_sta: msg.vcu_steer_check_sta,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      vcu_chassis_steer_en_sta: msg.vcu_chassis_steer_en_sta,
      vcu_chassis_steer_slopover: msg.vcu_chassis_steer_slopover,
      vcu_chassis_steer_work_mode: msg.vcu_chassis_steer_work_mode,
      vcu_chassis_steer_mode_fb: msg.vcu_chassis_steer_mode_fb,
      vcu_chassis_steer_communication_lost: msg.vcu_chassis_steer_communication_lost,
      vcu_chassis_steer_angle_fb: msg.vcu_chassis_steer_angle_fb,
      vcu_chassis_steer_angle_rear_fb: msg.vcu_chassis_steer_angle_rear_fb,
      vcu_chassis_steer_angle_speed_fb: msg.vcu_chassis_steer_angle_speed_fb,
      vcu_steer_life: msg.vcu_steer_life,
      vcu_steer_check_sta: msg.vcu_steer_check_sta,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaVehicleWorkStaFb {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub vcu_driving_mode_fb: i32,

    /// []
    pub vcu_chassis_power_sta_fb: i32,

    /// []
    pub vcu_chassis_power_dc_sta: i32,

    /// []
    pub vcu_remote_connecte_sta: bool,

    /// []
    pub vcu_acu_connect_sta: bool,

    /// []
    pub vcu_chassis_speed_limited_mode_fb: bool,

    /// []
    pub vcu_chassis_power_limite_sta: bool,

    /// []
    pub vcu_sys_eco_mode: i32,

    /// [m/s] [0|50]
    pub vcu_chassis_speed_limited_val_fb: f32,

    /// [V] [0|25]
    pub vcu_chassis_low_power_volt_sta: f32,

    /// []
    pub vcu_chassis_e_stop_sta_fb: i32,

    /// []
    pub vcu_crash_front_sta: bool,

    /// []
    pub vcu_crash_rear_sta: bool,

    /// []
    pub vcu_crash_left_sta: bool,

    /// []
    pub vcu_crash_right_sta: bool,

    /// []
    pub vcu_life: i32,

    /// []
    pub vcu_check_sum: i32,

}



impl Default for VaVehicleWorkStaFb {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VaVehicleWorkStaFb::default())
  }
}

impl rosidl_runtime_rs::Message for VaVehicleWorkStaFb {
  type RmwMsg = super::msg::rmw::VaVehicleWorkStaFb;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        vcu_driving_mode_fb: msg.vcu_driving_mode_fb,
        vcu_chassis_power_sta_fb: msg.vcu_chassis_power_sta_fb,
        vcu_chassis_power_dc_sta: msg.vcu_chassis_power_dc_sta,
        vcu_remote_connecte_sta: msg.vcu_remote_connecte_sta,
        vcu_acu_connect_sta: msg.vcu_acu_connect_sta,
        vcu_chassis_speed_limited_mode_fb: msg.vcu_chassis_speed_limited_mode_fb,
        vcu_chassis_power_limite_sta: msg.vcu_chassis_power_limite_sta,
        vcu_sys_eco_mode: msg.vcu_sys_eco_mode,
        vcu_chassis_speed_limited_val_fb: msg.vcu_chassis_speed_limited_val_fb,
        vcu_chassis_low_power_volt_sta: msg.vcu_chassis_low_power_volt_sta,
        vcu_chassis_e_stop_sta_fb: msg.vcu_chassis_e_stop_sta_fb,
        vcu_crash_front_sta: msg.vcu_crash_front_sta,
        vcu_crash_rear_sta: msg.vcu_crash_rear_sta,
        vcu_crash_left_sta: msg.vcu_crash_left_sta,
        vcu_crash_right_sta: msg.vcu_crash_right_sta,
        vcu_life: msg.vcu_life,
        vcu_check_sum: msg.vcu_check_sum,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      vcu_driving_mode_fb: msg.vcu_driving_mode_fb,
      vcu_chassis_power_sta_fb: msg.vcu_chassis_power_sta_fb,
      vcu_chassis_power_dc_sta: msg.vcu_chassis_power_dc_sta,
      vcu_remote_connecte_sta: msg.vcu_remote_connecte_sta,
      vcu_acu_connect_sta: msg.vcu_acu_connect_sta,
      vcu_chassis_speed_limited_mode_fb: msg.vcu_chassis_speed_limited_mode_fb,
      vcu_chassis_power_limite_sta: msg.vcu_chassis_power_limite_sta,
      vcu_sys_eco_mode: msg.vcu_sys_eco_mode,
      vcu_chassis_speed_limited_val_fb: msg.vcu_chassis_speed_limited_val_fb,
      vcu_chassis_low_power_volt_sta: msg.vcu_chassis_low_power_volt_sta,
      vcu_chassis_e_stop_sta_fb: msg.vcu_chassis_e_stop_sta_fb,
      vcu_crash_front_sta: msg.vcu_crash_front_sta,
      vcu_crash_rear_sta: msg.vcu_crash_rear_sta,
      vcu_crash_left_sta: msg.vcu_crash_left_sta,
      vcu_crash_right_sta: msg.vcu_crash_right_sta,
      vcu_life: msg.vcu_life,
      vcu_check_sum: msg.vcu_check_sum,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      vcu_driving_mode_fb: msg.vcu_driving_mode_fb,
      vcu_chassis_power_sta_fb: msg.vcu_chassis_power_sta_fb,
      vcu_chassis_power_dc_sta: msg.vcu_chassis_power_dc_sta,
      vcu_remote_connecte_sta: msg.vcu_remote_connecte_sta,
      vcu_acu_connect_sta: msg.vcu_acu_connect_sta,
      vcu_chassis_speed_limited_mode_fb: msg.vcu_chassis_speed_limited_mode_fb,
      vcu_chassis_power_limite_sta: msg.vcu_chassis_power_limite_sta,
      vcu_sys_eco_mode: msg.vcu_sys_eco_mode,
      vcu_chassis_speed_limited_val_fb: msg.vcu_chassis_speed_limited_val_fb,
      vcu_chassis_low_power_volt_sta: msg.vcu_chassis_low_power_volt_sta,
      vcu_chassis_e_stop_sta_fb: msg.vcu_chassis_e_stop_sta_fb,
      vcu_crash_front_sta: msg.vcu_crash_front_sta,
      vcu_crash_rear_sta: msg.vcu_crash_rear_sta,
      vcu_crash_left_sta: msg.vcu_crash_left_sta,
      vcu_crash_right_sta: msg.vcu_crash_right_sta,
      vcu_life: msg.vcu_life,
      vcu_check_sum: msg.vcu_check_sum,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__VaPowerStaFb

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaPowerStaFb {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub vcu_chassis_bms_reserved1: i32,

    /// []
    pub vcu_chassis_power_charge_sta: i32,

    /// []
    pub vcu_chassis_power_charge_sock_sta: bool,

    /// [%] [0|100]
    pub vcu_chassis_power_soc_fb: i32,

    /// [V] [0|1000]
    pub vcu_chassis_power_volt_fb: f32,

    /// [A] [-1000|1000]
    pub vcu_chassis_power_curr_fb: f32,

    /// [℃] [-40|80]
    pub vcu_chassis_bms_max_temp: i32,

    /// []
    pub vcu_chassis_bms_reserved2: i32,

}



impl Default for VaPowerStaFb {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VaPowerStaFb::default())
  }
}

impl rosidl_runtime_rs::Message for VaPowerStaFb {
  type RmwMsg = super::msg::rmw::VaPowerStaFb;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        vcu_chassis_bms_reserved1: msg.vcu_chassis_bms_reserved1,
        vcu_chassis_power_charge_sta: msg.vcu_chassis_power_charge_sta,
        vcu_chassis_power_charge_sock_sta: msg.vcu_chassis_power_charge_sock_sta,
        vcu_chassis_power_soc_fb: msg.vcu_chassis_power_soc_fb,
        vcu_chassis_power_volt_fb: msg.vcu_chassis_power_volt_fb,
        vcu_chassis_power_curr_fb: msg.vcu_chassis_power_curr_fb,
        vcu_chassis_bms_max_temp: msg.vcu_chassis_bms_max_temp,
        vcu_chassis_bms_reserved2: msg.vcu_chassis_bms_reserved2,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      vcu_chassis_bms_reserved1: msg.vcu_chassis_bms_reserved1,
      vcu_chassis_power_charge_sta: msg.vcu_chassis_power_charge_sta,
      vcu_chassis_power_charge_sock_sta: msg.vcu_chassis_power_charge_sock_sta,
      vcu_chassis_power_soc_fb: msg.vcu_chassis_power_soc_fb,
      vcu_chassis_power_volt_fb: msg.vcu_chassis_power_volt_fb,
      vcu_chassis_power_curr_fb: msg.vcu_chassis_power_curr_fb,
      vcu_chassis_bms_max_temp: msg.vcu_chassis_bms_max_temp,
      vcu_chassis_bms_reserved2: msg.vcu_chassis_bms_reserved2,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      vcu_chassis_bms_reserved1: msg.vcu_chassis_bms_reserved1,
      vcu_chassis_power_charge_sta: msg.vcu_chassis_power_charge_sta,
      vcu_chassis_power_charge_sock_sta: msg.vcu_chassis_power_charge_sock_sta,
      vcu_chassis_power_soc_fb: msg.vcu_chassis_power_soc_fb,
      vcu_chassis_power_volt_fb: msg.vcu_chassis_power_volt_fb,
      vcu_chassis_power_curr_fb: msg.vcu_chassis_power_curr_fb,
      vcu_chassis_bms_max_temp: msg.vcu_chassis_bms_max_temp,
      vcu_chassis_bms_reserved2: msg.vcu_chassis_bms_reserved2,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__VaVehicleStaFb

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaVehicleStaFb {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub vcu_vehicle_pos_lamp_fb: bool,

    /// []
    pub vcu_vehicle_head_lamp_fb: bool,

    /// []
    pub vcu_vehicle_left_lamp_fb: bool,

    /// []
    pub vcu_vehicle_right_lamp_fb: bool,

    /// []
    pub vcu_vehicle_high_beam_fb: bool,

    /// []
    pub vcu_vehicle_fog_lamp_fb: bool,

    /// []
    pub vcu_vehicle_hazard_war_lamp_fb: bool,

    /// []
    pub vcu_vehicle_body_lamp_fb: bool,

    /// []
    pub vcu_vehicle_read_lamp_fb: bool,

    /// []
    pub acu_vehicle_window_fb: i32,

    /// []
    pub vcu_vehicle_door_sta_fb: i32,

    /// []
    pub vcu_vehicle_wipers_sta_fb: i32,

    /// []
    pub vcu_vehicle_safety_belt1: i32,

    /// []
    pub vcu_vehicle_safety_belt2: i32,

    /// []
    pub vcu_vehicle_safety_belt3: i32,

    /// []
    pub vcu_vehicle_safety_belt4: i32,

    /// []
    pub vcu_vehicle_safety_belt5: i32,

    /// []
    pub vcu_vehicle_safety_belt6: i32,

    /// []
    pub vcu_vehicle_reserve_warning: i32,

    /// [Km/h] [0|240]
    pub vcu_vehicle_display_speed: i32,

}



impl Default for VaVehicleStaFb {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VaVehicleStaFb::default())
  }
}

impl rosidl_runtime_rs::Message for VaVehicleStaFb {
  type RmwMsg = super::msg::rmw::VaVehicleStaFb;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        vcu_vehicle_pos_lamp_fb: msg.vcu_vehicle_pos_lamp_fb,
        vcu_vehicle_head_lamp_fb: msg.vcu_vehicle_head_lamp_fb,
        vcu_vehicle_left_lamp_fb: msg.vcu_vehicle_left_lamp_fb,
        vcu_vehicle_right_lamp_fb: msg.vcu_vehicle_right_lamp_fb,
        vcu_vehicle_high_beam_fb: msg.vcu_vehicle_high_beam_fb,
        vcu_vehicle_fog_lamp_fb: msg.vcu_vehicle_fog_lamp_fb,
        vcu_vehicle_hazard_war_lamp_fb: msg.vcu_vehicle_hazard_war_lamp_fb,
        vcu_vehicle_body_lamp_fb: msg.vcu_vehicle_body_lamp_fb,
        vcu_vehicle_read_lamp_fb: msg.vcu_vehicle_read_lamp_fb,
        acu_vehicle_window_fb: msg.acu_vehicle_window_fb,
        vcu_vehicle_door_sta_fb: msg.vcu_vehicle_door_sta_fb,
        vcu_vehicle_wipers_sta_fb: msg.vcu_vehicle_wipers_sta_fb,
        vcu_vehicle_safety_belt1: msg.vcu_vehicle_safety_belt1,
        vcu_vehicle_safety_belt2: msg.vcu_vehicle_safety_belt2,
        vcu_vehicle_safety_belt3: msg.vcu_vehicle_safety_belt3,
        vcu_vehicle_safety_belt4: msg.vcu_vehicle_safety_belt4,
        vcu_vehicle_safety_belt5: msg.vcu_vehicle_safety_belt5,
        vcu_vehicle_safety_belt6: msg.vcu_vehicle_safety_belt6,
        vcu_vehicle_reserve_warning: msg.vcu_vehicle_reserve_warning,
        vcu_vehicle_display_speed: msg.vcu_vehicle_display_speed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      vcu_vehicle_pos_lamp_fb: msg.vcu_vehicle_pos_lamp_fb,
      vcu_vehicle_head_lamp_fb: msg.vcu_vehicle_head_lamp_fb,
      vcu_vehicle_left_lamp_fb: msg.vcu_vehicle_left_lamp_fb,
      vcu_vehicle_right_lamp_fb: msg.vcu_vehicle_right_lamp_fb,
      vcu_vehicle_high_beam_fb: msg.vcu_vehicle_high_beam_fb,
      vcu_vehicle_fog_lamp_fb: msg.vcu_vehicle_fog_lamp_fb,
      vcu_vehicle_hazard_war_lamp_fb: msg.vcu_vehicle_hazard_war_lamp_fb,
      vcu_vehicle_body_lamp_fb: msg.vcu_vehicle_body_lamp_fb,
      vcu_vehicle_read_lamp_fb: msg.vcu_vehicle_read_lamp_fb,
      acu_vehicle_window_fb: msg.acu_vehicle_window_fb,
      vcu_vehicle_door_sta_fb: msg.vcu_vehicle_door_sta_fb,
      vcu_vehicle_wipers_sta_fb: msg.vcu_vehicle_wipers_sta_fb,
      vcu_vehicle_safety_belt1: msg.vcu_vehicle_safety_belt1,
      vcu_vehicle_safety_belt2: msg.vcu_vehicle_safety_belt2,
      vcu_vehicle_safety_belt3: msg.vcu_vehicle_safety_belt3,
      vcu_vehicle_safety_belt4: msg.vcu_vehicle_safety_belt4,
      vcu_vehicle_safety_belt5: msg.vcu_vehicle_safety_belt5,
      vcu_vehicle_safety_belt6: msg.vcu_vehicle_safety_belt6,
      vcu_vehicle_reserve_warning: msg.vcu_vehicle_reserve_warning,
      vcu_vehicle_display_speed: msg.vcu_vehicle_display_speed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      vcu_vehicle_pos_lamp_fb: msg.vcu_vehicle_pos_lamp_fb,
      vcu_vehicle_head_lamp_fb: msg.vcu_vehicle_head_lamp_fb,
      vcu_vehicle_left_lamp_fb: msg.vcu_vehicle_left_lamp_fb,
      vcu_vehicle_right_lamp_fb: msg.vcu_vehicle_right_lamp_fb,
      vcu_vehicle_high_beam_fb: msg.vcu_vehicle_high_beam_fb,
      vcu_vehicle_fog_lamp_fb: msg.vcu_vehicle_fog_lamp_fb,
      vcu_vehicle_hazard_war_lamp_fb: msg.vcu_vehicle_hazard_war_lamp_fb,
      vcu_vehicle_body_lamp_fb: msg.vcu_vehicle_body_lamp_fb,
      vcu_vehicle_read_lamp_fb: msg.vcu_vehicle_read_lamp_fb,
      acu_vehicle_window_fb: msg.acu_vehicle_window_fb,
      vcu_vehicle_door_sta_fb: msg.vcu_vehicle_door_sta_fb,
      vcu_vehicle_wipers_sta_fb: msg.vcu_vehicle_wipers_sta_fb,
      vcu_vehicle_safety_belt1: msg.vcu_vehicle_safety_belt1,
      vcu_vehicle_safety_belt2: msg.vcu_vehicle_safety_belt2,
      vcu_vehicle_safety_belt3: msg.vcu_vehicle_safety_belt3,
      vcu_vehicle_safety_belt4: msg.vcu_vehicle_safety_belt4,
      vcu_vehicle_safety_belt5: msg.vcu_vehicle_safety_belt5,
      vcu_vehicle_safety_belt6: msg.vcu_vehicle_safety_belt6,
      vcu_vehicle_reserve_warning: msg.vcu_vehicle_reserve_warning,
      vcu_vehicle_display_speed: msg.vcu_vehicle_display_speed,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__VaVehicleFltSta

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaVehicleFltSta {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub vcu_sys_motor_over_temp_sta: bool,

    /// []
    pub vcu_sys_bms_over_temp_sta: bool,

    /// []
    pub vcu_sys_brake_over_temp_sta: bool,

    /// []
    pub vcu_sys_steer_over_temp_sta: bool,

    /// []
    pub vcu_sys_under_volt: bool,

    /// []
    pub vcu_sys_flt: i32,

    /// []
    pub vcu_sys_brake_flt: i32,

    /// []
    pub vcu_sys_parking_flt: i32,

    /// []
    pub vcu_sys_steer_front_flt: i32,

    /// []
    pub vcu_sys_steer_back_flt: i32,

    /// []
    pub vcu_sys_motor_lf_flt: i32,

    /// []
    pub vcu_sys_motor_rf_flt: i32,

    /// []
    pub vcu_sys_motor_lr_flt: i32,

    /// []
    pub vcu_sys_motor_rr_flt: i32,

    /// []
    pub vcu_sys_bms_flt: i32,

    /// []
    pub vcu_sys_dc_flt: i32,

    /// []
    pub vcu_sys_door_flt: i32,

    /// []
    pub vcu_sys_dpm_flt: i32,

    /// []
    pub vcu_sys_bcm_flt: i32,

    /// []
    pub vcu_vehicle_flt_level: i32,

    /// []
    pub vcu_sys_flt_reserve1: i32,

}



impl Default for VaVehicleFltSta {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VaVehicleFltSta::default())
  }
}

impl rosidl_runtime_rs::Message for VaVehicleFltSta {
  type RmwMsg = super::msg::rmw::VaVehicleFltSta;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        vcu_sys_motor_over_temp_sta: msg.vcu_sys_motor_over_temp_sta,
        vcu_sys_bms_over_temp_sta: msg.vcu_sys_bms_over_temp_sta,
        vcu_sys_brake_over_temp_sta: msg.vcu_sys_brake_over_temp_sta,
        vcu_sys_steer_over_temp_sta: msg.vcu_sys_steer_over_temp_sta,
        vcu_sys_under_volt: msg.vcu_sys_under_volt,
        vcu_sys_flt: msg.vcu_sys_flt,
        vcu_sys_brake_flt: msg.vcu_sys_brake_flt,
        vcu_sys_parking_flt: msg.vcu_sys_parking_flt,
        vcu_sys_steer_front_flt: msg.vcu_sys_steer_front_flt,
        vcu_sys_steer_back_flt: msg.vcu_sys_steer_back_flt,
        vcu_sys_motor_lf_flt: msg.vcu_sys_motor_lf_flt,
        vcu_sys_motor_rf_flt: msg.vcu_sys_motor_rf_flt,
        vcu_sys_motor_lr_flt: msg.vcu_sys_motor_lr_flt,
        vcu_sys_motor_rr_flt: msg.vcu_sys_motor_rr_flt,
        vcu_sys_bms_flt: msg.vcu_sys_bms_flt,
        vcu_sys_dc_flt: msg.vcu_sys_dc_flt,
        vcu_sys_door_flt: msg.vcu_sys_door_flt,
        vcu_sys_dpm_flt: msg.vcu_sys_dpm_flt,
        vcu_sys_bcm_flt: msg.vcu_sys_bcm_flt,
        vcu_vehicle_flt_level: msg.vcu_vehicle_flt_level,
        vcu_sys_flt_reserve1: msg.vcu_sys_flt_reserve1,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      vcu_sys_motor_over_temp_sta: msg.vcu_sys_motor_over_temp_sta,
      vcu_sys_bms_over_temp_sta: msg.vcu_sys_bms_over_temp_sta,
      vcu_sys_brake_over_temp_sta: msg.vcu_sys_brake_over_temp_sta,
      vcu_sys_steer_over_temp_sta: msg.vcu_sys_steer_over_temp_sta,
      vcu_sys_under_volt: msg.vcu_sys_under_volt,
      vcu_sys_flt: msg.vcu_sys_flt,
      vcu_sys_brake_flt: msg.vcu_sys_brake_flt,
      vcu_sys_parking_flt: msg.vcu_sys_parking_flt,
      vcu_sys_steer_front_flt: msg.vcu_sys_steer_front_flt,
      vcu_sys_steer_back_flt: msg.vcu_sys_steer_back_flt,
      vcu_sys_motor_lf_flt: msg.vcu_sys_motor_lf_flt,
      vcu_sys_motor_rf_flt: msg.vcu_sys_motor_rf_flt,
      vcu_sys_motor_lr_flt: msg.vcu_sys_motor_lr_flt,
      vcu_sys_motor_rr_flt: msg.vcu_sys_motor_rr_flt,
      vcu_sys_bms_flt: msg.vcu_sys_bms_flt,
      vcu_sys_dc_flt: msg.vcu_sys_dc_flt,
      vcu_sys_door_flt: msg.vcu_sys_door_flt,
      vcu_sys_dpm_flt: msg.vcu_sys_dpm_flt,
      vcu_sys_bcm_flt: msg.vcu_sys_bcm_flt,
      vcu_vehicle_flt_level: msg.vcu_vehicle_flt_level,
      vcu_sys_flt_reserve1: msg.vcu_sys_flt_reserve1,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      vcu_sys_motor_over_temp_sta: msg.vcu_sys_motor_over_temp_sta,
      vcu_sys_bms_over_temp_sta: msg.vcu_sys_bms_over_temp_sta,
      vcu_sys_brake_over_temp_sta: msg.vcu_sys_brake_over_temp_sta,
      vcu_sys_steer_over_temp_sta: msg.vcu_sys_steer_over_temp_sta,
      vcu_sys_under_volt: msg.vcu_sys_under_volt,
      vcu_sys_flt: msg.vcu_sys_flt,
      vcu_sys_brake_flt: msg.vcu_sys_brake_flt,
      vcu_sys_parking_flt: msg.vcu_sys_parking_flt,
      vcu_sys_steer_front_flt: msg.vcu_sys_steer_front_flt,
      vcu_sys_steer_back_flt: msg.vcu_sys_steer_back_flt,
      vcu_sys_motor_lf_flt: msg.vcu_sys_motor_lf_flt,
      vcu_sys_motor_rf_flt: msg.vcu_sys_motor_rf_flt,
      vcu_sys_motor_lr_flt: msg.vcu_sys_motor_lr_flt,
      vcu_sys_motor_rr_flt: msg.vcu_sys_motor_rr_flt,
      vcu_sys_bms_flt: msg.vcu_sys_bms_flt,
      vcu_sys_dc_flt: msg.vcu_sys_dc_flt,
      vcu_sys_door_flt: msg.vcu_sys_door_flt,
      vcu_sys_dpm_flt: msg.vcu_sys_dpm_flt,
      vcu_sys_bcm_flt: msg.vcu_sys_bcm_flt,
      vcu_vehicle_flt_level: msg.vcu_vehicle_flt_level,
      vcu_sys_flt_reserve1: msg.vcu_sys_flt_reserve1,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__VaChassisWheelRpmFb

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaChassisWheelRpmFb {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// [rpm] [-1000|1000]
    pub vcu_chassis_wheel_rpm_lf: f32,

    /// [rpm] [-1000|1000]
    pub vcu_chassis_wheel_rpm_rf: f32,

    /// [rpm] [-1000|1000]
    pub vcu_chassis_wheel_rpm_lr: f32,

    /// [rpm] [-1000|1000]
    pub vcu_chassis_wheel_rpm_rr: f32,

}



impl Default for VaChassisWheelRpmFb {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VaChassisWheelRpmFb::default())
  }
}

impl rosidl_runtime_rs::Message for VaChassisWheelRpmFb {
  type RmwMsg = super::msg::rmw::VaChassisWheelRpmFb;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        vcu_chassis_wheel_rpm_lf: msg.vcu_chassis_wheel_rpm_lf,
        vcu_chassis_wheel_rpm_rf: msg.vcu_chassis_wheel_rpm_rf,
        vcu_chassis_wheel_rpm_lr: msg.vcu_chassis_wheel_rpm_lr,
        vcu_chassis_wheel_rpm_rr: msg.vcu_chassis_wheel_rpm_rr,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      vcu_chassis_wheel_rpm_lf: msg.vcu_chassis_wheel_rpm_lf,
      vcu_chassis_wheel_rpm_rf: msg.vcu_chassis_wheel_rpm_rf,
      vcu_chassis_wheel_rpm_lr: msg.vcu_chassis_wheel_rpm_lr,
      vcu_chassis_wheel_rpm_rr: msg.vcu_chassis_wheel_rpm_rr,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      vcu_chassis_wheel_rpm_lf: msg.vcu_chassis_wheel_rpm_lf,
      vcu_chassis_wheel_rpm_rf: msg.vcu_chassis_wheel_rpm_rf,
      vcu_chassis_wheel_rpm_lr: msg.vcu_chassis_wheel_rpm_lr,
      vcu_chassis_wheel_rpm_rr: msg.vcu_chassis_wheel_rpm_rr,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__VaChassisOdoFb

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaChassisOdoFb {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// [km] [0|16777215]
    pub vcu_vehicle_odo: i32,

    /// [km] [0|167772.15]
    pub vcu_vehicle_trip: f32,

    /// [km] [0|1000]
    pub vcu_vehicle_remaining_range: i32,

}



impl Default for VaChassisOdoFb {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VaChassisOdoFb::default())
  }
}

impl rosidl_runtime_rs::Message for VaChassisOdoFb {
  type RmwMsg = super::msg::rmw::VaChassisOdoFb;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        vcu_vehicle_odo: msg.vcu_vehicle_odo,
        vcu_vehicle_trip: msg.vcu_vehicle_trip,
        vcu_vehicle_remaining_range: msg.vcu_vehicle_remaining_range,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      vcu_vehicle_odo: msg.vcu_vehicle_odo,
      vcu_vehicle_trip: msg.vcu_vehicle_trip,
      vcu_vehicle_remaining_range: msg.vcu_vehicle_remaining_range,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      vcu_vehicle_odo: msg.vcu_vehicle_odo,
      vcu_vehicle_trip: msg.vcu_vehicle_trip,
      vcu_vehicle_remaining_range: msg.vcu_vehicle_remaining_range,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__VcuTransfer

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VcuTransfer {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub spare: bool,

    /// [℃] [-40|215]
    pub ac_out_temp: i32,

    /// [℃] [-40|215]
    pub ac_in_temp: i32,

}



impl Default for VcuTransfer {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VcuTransfer::default())
  }
}

impl rosidl_runtime_rs::Message for VcuTransfer {
  type RmwMsg = super::msg::rmw::VcuTransfer;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        spare: msg.spare,
        ac_out_temp: msg.ac_out_temp,
        ac_in_temp: msg.ac_in_temp,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      spare: msg.spare,
      ac_out_temp: msg.ac_out_temp,
      ac_in_temp: msg.ac_in_temp,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      spare: msg.spare,
      ac_out_temp: msg.ac_out_temp,
      ac_in_temp: msg.ac_in_temp,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaChassisWheelTirePressFb {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// [bar] [0|20]
    pub vcu_chassis_wheel_tire_press_lf: f32,

    /// [bar] [0|20]
    pub vcu_chassis_wheel_tire_press_rf: f32,

    /// [bar] [0|20]
    pub vcu_chassis_wheel_tire_press_lr: f32,

    /// [bar] [0|20]
    pub vcu_chassis_wheel_tire_press_rr: f32,

}



impl Default for VaChassisWheelTirePressFb {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VaChassisWheelTirePressFb::default())
  }
}

impl rosidl_runtime_rs::Message for VaChassisWheelTirePressFb {
  type RmwMsg = super::msg::rmw::VaChassisWheelTirePressFb;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        vcu_chassis_wheel_tire_press_lf: msg.vcu_chassis_wheel_tire_press_lf,
        vcu_chassis_wheel_tire_press_rf: msg.vcu_chassis_wheel_tire_press_rf,
        vcu_chassis_wheel_tire_press_lr: msg.vcu_chassis_wheel_tire_press_lr,
        vcu_chassis_wheel_tire_press_rr: msg.vcu_chassis_wheel_tire_press_rr,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      vcu_chassis_wheel_tire_press_lf: msg.vcu_chassis_wheel_tire_press_lf,
      vcu_chassis_wheel_tire_press_rf: msg.vcu_chassis_wheel_tire_press_rf,
      vcu_chassis_wheel_tire_press_lr: msg.vcu_chassis_wheel_tire_press_lr,
      vcu_chassis_wheel_tire_press_rr: msg.vcu_chassis_wheel_tire_press_rr,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      vcu_chassis_wheel_tire_press_lf: msg.vcu_chassis_wheel_tire_press_lf,
      vcu_chassis_wheel_tire_press_rf: msg.vcu_chassis_wheel_tire_press_rf,
      vcu_chassis_wheel_tire_press_lr: msg.vcu_chassis_wheel_tire_press_lr,
      vcu_chassis_wheel_tire_press_rr: msg.vcu_chassis_wheel_tire_press_rr,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__VaChassisWheelAngleFb

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaChassisWheelAngleFb {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// [deg] [-90|90]
    pub vcu_chassis_wheel_angle_lf: f32,

    /// [deg] [-90|90]
    pub vcu_chassis_wheel_angle_rf: f32,

    /// [deg] [-90|90]
    pub vcu_chassis_wheel_angle_lr: f32,

    /// [deg] [-90|90]
    pub vcu_chassis_wheel_angle_rr: f32,

}



impl Default for VaChassisWheelAngleFb {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VaChassisWheelAngleFb::default())
  }
}

impl rosidl_runtime_rs::Message for VaChassisWheelAngleFb {
  type RmwMsg = super::msg::rmw::VaChassisWheelAngleFb;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        vcu_chassis_wheel_angle_lf: msg.vcu_chassis_wheel_angle_lf,
        vcu_chassis_wheel_angle_rf: msg.vcu_chassis_wheel_angle_rf,
        vcu_chassis_wheel_angle_lr: msg.vcu_chassis_wheel_angle_lr,
        vcu_chassis_wheel_angle_rr: msg.vcu_chassis_wheel_angle_rr,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      vcu_chassis_wheel_angle_lf: msg.vcu_chassis_wheel_angle_lf,
      vcu_chassis_wheel_angle_rf: msg.vcu_chassis_wheel_angle_rf,
      vcu_chassis_wheel_angle_lr: msg.vcu_chassis_wheel_angle_lr,
      vcu_chassis_wheel_angle_rr: msg.vcu_chassis_wheel_angle_rr,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      vcu_chassis_wheel_angle_lf: msg.vcu_chassis_wheel_angle_lf,
      vcu_chassis_wheel_angle_rf: msg.vcu_chassis_wheel_angle_rf,
      vcu_chassis_wheel_angle_lr: msg.vcu_chassis_wheel_angle_lr,
      vcu_chassis_wheel_angle_rr: msg.vcu_chassis_wheel_angle_rr,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__VaChassisWheelTorqueFb

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaChassisWheelTorqueFb {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// [Nm] [-200|200]
    pub vcu_chassis_torque_lf: f32,

    /// [Nm] [-200|200]
    pub vcu_chassis_torque_rf: f32,

    /// [Nm] [-200|200]
    pub vcu_chassis_torque_lr: f32,

    /// [Nm] [-200|200]
    pub vcu_chassis_torque_rr: f32,

}



impl Default for VaChassisWheelTorqueFb {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VaChassisWheelTorqueFb::default())
  }
}

impl rosidl_runtime_rs::Message for VaChassisWheelTorqueFb {
  type RmwMsg = super::msg::rmw::VaChassisWheelTorqueFb;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        vcu_chassis_torque_lf: msg.vcu_chassis_torque_lf,
        vcu_chassis_torque_rf: msg.vcu_chassis_torque_rf,
        vcu_chassis_torque_lr: msg.vcu_chassis_torque_lr,
        vcu_chassis_torque_rr: msg.vcu_chassis_torque_rr,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      vcu_chassis_torque_lf: msg.vcu_chassis_torque_lf,
      vcu_chassis_torque_rf: msg.vcu_chassis_torque_rf,
      vcu_chassis_torque_lr: msg.vcu_chassis_torque_lr,
      vcu_chassis_torque_rr: msg.vcu_chassis_torque_rr,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      vcu_chassis_torque_lf: msg.vcu_chassis_torque_lf,
      vcu_chassis_torque_rf: msg.vcu_chassis_torque_rf,
      vcu_chassis_torque_lr: msg.vcu_chassis_torque_lr,
      vcu_chassis_torque_rr: msg.vcu_chassis_torque_rr,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__BcmMessage4

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BcmMessage4 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// [℃] [-40|215]
    pub ltemp: i32,

    /// [℃] [-40|215]
    pub ntemp: i32,

    /// []
    pub safe_belt_sta1: bool,

    /// []
    pub safe_belt_sta2: bool,

    /// []
    pub safe_belt_sta3: bool,

    /// []
    pub safe_belt_sta4: bool,

    /// []
    pub safe_belt_sta5: bool,

    /// []
    pub safe_belt_sta6: bool,

    /// []
    pub seat_sta1: bool,

    /// []
    pub seat_sta2: bool,

    /// []
    pub seat_sta3: bool,

    /// []
    pub seat_sta4: bool,

    /// []
    pub seat_sta5: bool,

    /// []
    pub seat_sta6: bool,

}



impl Default for BcmMessage4 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BcmMessage4::default())
  }
}

impl rosidl_runtime_rs::Message for BcmMessage4 {
  type RmwMsg = super::msg::rmw::BcmMessage4;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        ltemp: msg.ltemp,
        ntemp: msg.ntemp,
        safe_belt_sta1: msg.safe_belt_sta1,
        safe_belt_sta2: msg.safe_belt_sta2,
        safe_belt_sta3: msg.safe_belt_sta3,
        safe_belt_sta4: msg.safe_belt_sta4,
        safe_belt_sta5: msg.safe_belt_sta5,
        safe_belt_sta6: msg.safe_belt_sta6,
        seat_sta1: msg.seat_sta1,
        seat_sta2: msg.seat_sta2,
        seat_sta3: msg.seat_sta3,
        seat_sta4: msg.seat_sta4,
        seat_sta5: msg.seat_sta5,
        seat_sta6: msg.seat_sta6,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      ltemp: msg.ltemp,
      ntemp: msg.ntemp,
      safe_belt_sta1: msg.safe_belt_sta1,
      safe_belt_sta2: msg.safe_belt_sta2,
      safe_belt_sta3: msg.safe_belt_sta3,
      safe_belt_sta4: msg.safe_belt_sta4,
      safe_belt_sta5: msg.safe_belt_sta5,
      safe_belt_sta6: msg.safe_belt_sta6,
      seat_sta1: msg.seat_sta1,
      seat_sta2: msg.seat_sta2,
      seat_sta3: msg.seat_sta3,
      seat_sta4: msg.seat_sta4,
      seat_sta5: msg.seat_sta5,
      seat_sta6: msg.seat_sta6,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      ltemp: msg.ltemp,
      ntemp: msg.ntemp,
      safe_belt_sta1: msg.safe_belt_sta1,
      safe_belt_sta2: msg.safe_belt_sta2,
      safe_belt_sta3: msg.safe_belt_sta3,
      safe_belt_sta4: msg.safe_belt_sta4,
      safe_belt_sta5: msg.safe_belt_sta5,
      safe_belt_sta6: msg.safe_belt_sta6,
      seat_sta1: msg.seat_sta1,
      seat_sta2: msg.seat_sta2,
      seat_sta3: msg.seat_sta3,
      seat_sta4: msg.seat_sta4,
      seat_sta5: msg.seat_sta5,
      seat_sta6: msg.seat_sta6,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__BcmMessage5

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BcmMessage5 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub ad_v_vin1: i32,

    /// []
    pub ad_v_vin2: i32,

}



impl Default for BcmMessage5 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BcmMessage5::default())
  }
}

impl rosidl_runtime_rs::Message for BcmMessage5 {
  type RmwMsg = super::msg::rmw::BcmMessage5;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        ad_v_vin1: msg.ad_v_vin1,
        ad_v_vin2: msg.ad_v_vin2,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      ad_v_vin1: msg.ad_v_vin1,
      ad_v_vin2: msg.ad_v_vin2,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      ad_v_vin1: msg.ad_v_vin1,
      ad_v_vin2: msg.ad_v_vin2,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__DpMessgae4

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DpMessgae4 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// [A] [0|255]
    pub pdu_total_cur: i32,

    /// [V] [0|127.5]
    pub dp_lowbat_vol: f32,

    /// [℃] [-40|215]
    pub pd_temp: i32,

    /// [A] [0|255]
    pub auto_current1: i32,

    /// []
    pub dp_errorcode: i32,

    /// []
    pub on_sta: i32,

    /// [A] [0|255]
    pub auto_current2: i32,

}



impl Default for DpMessgae4 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DpMessgae4::default())
  }
}

impl rosidl_runtime_rs::Message for DpMessgae4 {
  type RmwMsg = super::msg::rmw::DpMessgae4;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pdu_total_cur: msg.pdu_total_cur,
        dp_lowbat_vol: msg.dp_lowbat_vol,
        pd_temp: msg.pd_temp,
        auto_current1: msg.auto_current1,
        dp_errorcode: msg.dp_errorcode,
        on_sta: msg.on_sta,
        auto_current2: msg.auto_current2,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      pdu_total_cur: msg.pdu_total_cur,
      dp_lowbat_vol: msg.dp_lowbat_vol,
      pd_temp: msg.pd_temp,
      auto_current1: msg.auto_current1,
      dp_errorcode: msg.dp_errorcode,
      on_sta: msg.on_sta,
      auto_current2: msg.auto_current2,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      pdu_total_cur: msg.pdu_total_cur,
      dp_lowbat_vol: msg.dp_lowbat_vol,
      pd_temp: msg.pd_temp,
      auto_current1: msg.auto_current1,
      dp_errorcode: msg.dp_errorcode,
      on_sta: msg.on_sta,
      auto_current2: msg.auto_current2,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__DpMessgae5

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DpMessgae5 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub pwn_red_sta: i32,

    /// []
    pub pwn_green_sta: i32,

    /// []
    pub pwn_blue_sta: i32,

    /// [%] [0|100]
    pub atmospherelightbrightness: i32,

    /// []
    pub vcu_reserve33: bool,

    /// []
    pub vcu_reserve41: bool,

}



impl Default for DpMessgae5 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DpMessgae5::default())
  }
}

impl rosidl_runtime_rs::Message for DpMessgae5 {
  type RmwMsg = super::msg::rmw::DpMessgae5;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pwn_red_sta: msg.pwn_red_sta,
        pwn_green_sta: msg.pwn_green_sta,
        pwn_blue_sta: msg.pwn_blue_sta,
        atmospherelightbrightness: msg.atmospherelightbrightness,
        vcu_reserve33: msg.vcu_reserve33,
        vcu_reserve41: msg.vcu_reserve41,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      pwn_red_sta: msg.pwn_red_sta,
      pwn_green_sta: msg.pwn_green_sta,
      pwn_blue_sta: msg.pwn_blue_sta,
      atmospherelightbrightness: msg.atmospherelightbrightness,
      vcu_reserve33: msg.vcu_reserve33,
      vcu_reserve41: msg.vcu_reserve41,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      pwn_red_sta: msg.pwn_red_sta,
      pwn_green_sta: msg.pwn_green_sta,
      pwn_blue_sta: msg.pwn_blue_sta,
      atmospherelightbrightness: msg.atmospherelightbrightness,
      vcu_reserve33: msg.vcu_reserve33,
      vcu_reserve41: msg.vcu_reserve41,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__AvAebCtrl

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AvAebCtrl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub acu_aeb_work_sta: i32,

    /// []
    pub acu_aeb_active_request: bool,

    /// []
    pub acu_fcw_active_request: bool,

    /// []
    pub acu_aeb_brake_en: bool,

    /// [%] [0|100]
    pub acu_aeb_brake_pedal_target: i32,

    /// []
    pub acu_aeb_brake_life_sig: i32,

    /// []
    pub acu_check_sum121: i32,

}



impl Default for AvAebCtrl {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AvAebCtrl::default())
  }
}

impl rosidl_runtime_rs::Message for AvAebCtrl {
  type RmwMsg = super::msg::rmw::AvAebCtrl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        acu_aeb_work_sta: msg.acu_aeb_work_sta,
        acu_aeb_active_request: msg.acu_aeb_active_request,
        acu_fcw_active_request: msg.acu_fcw_active_request,
        acu_aeb_brake_en: msg.acu_aeb_brake_en,
        acu_aeb_brake_pedal_target: msg.acu_aeb_brake_pedal_target,
        acu_aeb_brake_life_sig: msg.acu_aeb_brake_life_sig,
        acu_check_sum121: msg.acu_check_sum121,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      acu_aeb_work_sta: msg.acu_aeb_work_sta,
      acu_aeb_active_request: msg.acu_aeb_active_request,
      acu_fcw_active_request: msg.acu_fcw_active_request,
      acu_aeb_brake_en: msg.acu_aeb_brake_en,
      acu_aeb_brake_pedal_target: msg.acu_aeb_brake_pedal_target,
      acu_aeb_brake_life_sig: msg.acu_aeb_brake_life_sig,
      acu_check_sum121: msg.acu_check_sum121,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      acu_aeb_work_sta: msg.acu_aeb_work_sta,
      acu_aeb_active_request: msg.acu_aeb_active_request,
      acu_fcw_active_request: msg.acu_fcw_active_request,
      acu_aeb_brake_en: msg.acu_aeb_brake_en,
      acu_aeb_brake_pedal_target: msg.acu_aeb_brake_pedal_target,
      acu_aeb_brake_life_sig: msg.acu_aeb_brake_life_sig,
      acu_check_sum121: msg.acu_check_sum121,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__AvDriveCtrl

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AvDriveCtrl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub acu_chassis_driver_en_ctrl: bool,

    /// []
    pub acu_chassis_driver_mode_ctrl: i32,

    /// []
    pub acu_chassis_gear_ctrl: i32,

    /// []
    pub acu_chassis4_wd_mode_ctrl: i32,

    /// [m/s] [0|50]
    pub acu_chassis_speed_ctrl: f32,

    /// [%] [0|100]
    pub acu_chassis_throttle_pdl_target: f32,

    /// []
    pub acu_drive_life_sig: i32,

    /// []
    pub acu_check_sum130: i32,

}



impl Default for AvDriveCtrl {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AvDriveCtrl::default())
  }
}

impl rosidl_runtime_rs::Message for AvDriveCtrl {
  type RmwMsg = super::msg::rmw::AvDriveCtrl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        acu_chassis_driver_en_ctrl: msg.acu_chassis_driver_en_ctrl,
        acu_chassis_driver_mode_ctrl: msg.acu_chassis_driver_mode_ctrl,
        acu_chassis_gear_ctrl: msg.acu_chassis_gear_ctrl,
        acu_chassis4_wd_mode_ctrl: msg.acu_chassis4_wd_mode_ctrl,
        acu_chassis_speed_ctrl: msg.acu_chassis_speed_ctrl,
        acu_chassis_throttle_pdl_target: msg.acu_chassis_throttle_pdl_target,
        acu_drive_life_sig: msg.acu_drive_life_sig,
        acu_check_sum130: msg.acu_check_sum130,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      acu_chassis_driver_en_ctrl: msg.acu_chassis_driver_en_ctrl,
      acu_chassis_driver_mode_ctrl: msg.acu_chassis_driver_mode_ctrl,
      acu_chassis_gear_ctrl: msg.acu_chassis_gear_ctrl,
      acu_chassis4_wd_mode_ctrl: msg.acu_chassis4_wd_mode_ctrl,
      acu_chassis_speed_ctrl: msg.acu_chassis_speed_ctrl,
      acu_chassis_throttle_pdl_target: msg.acu_chassis_throttle_pdl_target,
      acu_drive_life_sig: msg.acu_drive_life_sig,
      acu_check_sum130: msg.acu_check_sum130,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      acu_chassis_driver_en_ctrl: msg.acu_chassis_driver_en_ctrl,
      acu_chassis_driver_mode_ctrl: msg.acu_chassis_driver_mode_ctrl,
      acu_chassis_gear_ctrl: msg.acu_chassis_gear_ctrl,
      acu_chassis4_wd_mode_ctrl: msg.acu_chassis4_wd_mode_ctrl,
      acu_chassis_speed_ctrl: msg.acu_chassis_speed_ctrl,
      acu_chassis_throttle_pdl_target: msg.acu_chassis_throttle_pdl_target,
      acu_drive_life_sig: msg.acu_drive_life_sig,
      acu_check_sum130: msg.acu_check_sum130,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__AvBrakeCtrl

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AvBrakeCtrl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub acu_chassis_brake_en: bool,

    /// []
    pub acu_chassis_brake_lamp_ctrl: bool,

    /// []
    pub acu_chassis_aeb_ctrl: bool,

    /// [%] [0|100]
    pub acu_chassis_brake_pdl_target: f32,

    /// []
    pub acu_chassis_epb_ctrl: i32,

    /// []
    pub acu_brake_life_sig: i32,

    /// []
    pub acu_check_sum131: i32,

}



impl Default for AvBrakeCtrl {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AvBrakeCtrl::default())
  }
}

impl rosidl_runtime_rs::Message for AvBrakeCtrl {
  type RmwMsg = super::msg::rmw::AvBrakeCtrl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        acu_chassis_brake_en: msg.acu_chassis_brake_en,
        acu_chassis_brake_lamp_ctrl: msg.acu_chassis_brake_lamp_ctrl,
        acu_chassis_aeb_ctrl: msg.acu_chassis_aeb_ctrl,
        acu_chassis_brake_pdl_target: msg.acu_chassis_brake_pdl_target,
        acu_chassis_epb_ctrl: msg.acu_chassis_epb_ctrl,
        acu_brake_life_sig: msg.acu_brake_life_sig,
        acu_check_sum131: msg.acu_check_sum131,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      acu_chassis_brake_en: msg.acu_chassis_brake_en,
      acu_chassis_brake_lamp_ctrl: msg.acu_chassis_brake_lamp_ctrl,
      acu_chassis_aeb_ctrl: msg.acu_chassis_aeb_ctrl,
      acu_chassis_brake_pdl_target: msg.acu_chassis_brake_pdl_target,
      acu_chassis_epb_ctrl: msg.acu_chassis_epb_ctrl,
      acu_brake_life_sig: msg.acu_brake_life_sig,
      acu_check_sum131: msg.acu_check_sum131,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      acu_chassis_brake_en: msg.acu_chassis_brake_en,
      acu_chassis_brake_lamp_ctrl: msg.acu_chassis_brake_lamp_ctrl,
      acu_chassis_aeb_ctrl: msg.acu_chassis_aeb_ctrl,
      acu_chassis_brake_pdl_target: msg.acu_chassis_brake_pdl_target,
      acu_chassis_epb_ctrl: msg.acu_chassis_epb_ctrl,
      acu_brake_life_sig: msg.acu_brake_life_sig,
      acu_check_sum131: msg.acu_check_sum131,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__AvSteerCtrl

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AvSteerCtrl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub acu_chassis_steer_en_ctrl: bool,

    /// []
    pub acu_chassis_steer_mode_ctrl: i32,

    /// [deg] [-500|500]
    pub acu_chassis_steer_angle_target: i32,

    /// [deg] [-500|500]
    pub acu_chassis_steer_angle_rear_target: i32,

    /// [deg/s] [0|500]
    pub acu_chassis_steer_angle_speed_ctrl: f32,

    /// []
    pub acu_steer_life_sig: i32,

    /// []
    pub acu_check_sum132: i32,

}



impl Default for AvSteerCtrl {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AvSteerCtrl::default())
  }
}

impl rosidl_runtime_rs::Message for AvSteerCtrl {
  type RmwMsg = super::msg::rmw::AvSteerCtrl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        acu_chassis_steer_en_ctrl: msg.acu_chassis_steer_en_ctrl,
        acu_chassis_steer_mode_ctrl: msg.acu_chassis_steer_mode_ctrl,
        acu_chassis_steer_angle_target: msg.acu_chassis_steer_angle_target,
        acu_chassis_steer_angle_rear_target: msg.acu_chassis_steer_angle_rear_target,
        acu_chassis_steer_angle_speed_ctrl: msg.acu_chassis_steer_angle_speed_ctrl,
        acu_steer_life_sig: msg.acu_steer_life_sig,
        acu_check_sum132: msg.acu_check_sum132,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      acu_chassis_steer_en_ctrl: msg.acu_chassis_steer_en_ctrl,
      acu_chassis_steer_mode_ctrl: msg.acu_chassis_steer_mode_ctrl,
      acu_chassis_steer_angle_target: msg.acu_chassis_steer_angle_target,
      acu_chassis_steer_angle_rear_target: msg.acu_chassis_steer_angle_rear_target,
      acu_chassis_steer_angle_speed_ctrl: msg.acu_chassis_steer_angle_speed_ctrl,
      acu_steer_life_sig: msg.acu_steer_life_sig,
      acu_check_sum132: msg.acu_check_sum132,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      acu_chassis_steer_en_ctrl: msg.acu_chassis_steer_en_ctrl,
      acu_chassis_steer_mode_ctrl: msg.acu_chassis_steer_mode_ctrl,
      acu_chassis_steer_angle_target: msg.acu_chassis_steer_angle_target,
      acu_chassis_steer_angle_rear_target: msg.acu_chassis_steer_angle_rear_target,
      acu_chassis_steer_angle_speed_ctrl: msg.acu_chassis_steer_angle_speed_ctrl,
      acu_steer_life_sig: msg.acu_steer_life_sig,
      acu_check_sum132: msg.acu_check_sum132,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__AvVehicleCtrl

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AvVehicleCtrl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub acu_vehicle_pos_lamp_ctrl: bool,

    /// []
    pub acu_vehicle_head_lamp_ctrl: bool,

    /// []
    pub acu_vehicle_left_lamp_ctrl: bool,

    /// []
    pub acu_vehicle_right_lamp_ctrl: bool,

    /// []
    pub acu_vehicle_high_beam_ctrl: bool,

    /// []
    pub acu_vehicle_fog_lamp_ctrl: bool,

    /// []
    pub acu_vehicle_body_light_ctrl: bool,

    /// []
    pub acu_vehicle_read_light_ctrl: bool,

    /// []
    pub acu_vehicle_voice: i32,

    /// []
    pub acu_vehicle_wipers_ctrl: i32,

    /// []
    pub acu_vehicle_door_ctrl: i32,

    /// []
    pub acu_vehicle_window_ctrl: i32,

    /// []
    pub acu_chassis_speed_limite_mode: bool,

    /// []
    pub acu_vehicle_horn_ctrl: bool,

    /// []
    pub acu_vehicle_spray_ctrl: bool,

    /// [m/s] [1|20]
    pub acu_chassis_speed_limite_val: f32,

    /// []
    pub acu_check_sum_en: bool,

}



impl Default for AvVehicleCtrl {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AvVehicleCtrl::default())
  }
}

impl rosidl_runtime_rs::Message for AvVehicleCtrl {
  type RmwMsg = super::msg::rmw::AvVehicleCtrl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        acu_vehicle_pos_lamp_ctrl: msg.acu_vehicle_pos_lamp_ctrl,
        acu_vehicle_head_lamp_ctrl: msg.acu_vehicle_head_lamp_ctrl,
        acu_vehicle_left_lamp_ctrl: msg.acu_vehicle_left_lamp_ctrl,
        acu_vehicle_right_lamp_ctrl: msg.acu_vehicle_right_lamp_ctrl,
        acu_vehicle_high_beam_ctrl: msg.acu_vehicle_high_beam_ctrl,
        acu_vehicle_fog_lamp_ctrl: msg.acu_vehicle_fog_lamp_ctrl,
        acu_vehicle_body_light_ctrl: msg.acu_vehicle_body_light_ctrl,
        acu_vehicle_read_light_ctrl: msg.acu_vehicle_read_light_ctrl,
        acu_vehicle_voice: msg.acu_vehicle_voice,
        acu_vehicle_wipers_ctrl: msg.acu_vehicle_wipers_ctrl,
        acu_vehicle_door_ctrl: msg.acu_vehicle_door_ctrl,
        acu_vehicle_window_ctrl: msg.acu_vehicle_window_ctrl,
        acu_chassis_speed_limite_mode: msg.acu_chassis_speed_limite_mode,
        acu_vehicle_horn_ctrl: msg.acu_vehicle_horn_ctrl,
        acu_vehicle_spray_ctrl: msg.acu_vehicle_spray_ctrl,
        acu_chassis_speed_limite_val: msg.acu_chassis_speed_limite_val,
        acu_check_sum_en: msg.acu_check_sum_en,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      acu_vehicle_pos_lamp_ctrl: msg.acu_vehicle_pos_lamp_ctrl,
      acu_vehicle_head_lamp_ctrl: msg.acu_vehicle_head_lamp_ctrl,
      acu_vehicle_left_lamp_ctrl: msg.acu_vehicle_left_lamp_ctrl,
      acu_vehicle_right_lamp_ctrl: msg.acu_vehicle_right_lamp_ctrl,
      acu_vehicle_high_beam_ctrl: msg.acu_vehicle_high_beam_ctrl,
      acu_vehicle_fog_lamp_ctrl: msg.acu_vehicle_fog_lamp_ctrl,
      acu_vehicle_body_light_ctrl: msg.acu_vehicle_body_light_ctrl,
      acu_vehicle_read_light_ctrl: msg.acu_vehicle_read_light_ctrl,
      acu_vehicle_voice: msg.acu_vehicle_voice,
      acu_vehicle_wipers_ctrl: msg.acu_vehicle_wipers_ctrl,
      acu_vehicle_door_ctrl: msg.acu_vehicle_door_ctrl,
      acu_vehicle_window_ctrl: msg.acu_vehicle_window_ctrl,
      acu_chassis_speed_limite_mode: msg.acu_chassis_speed_limite_mode,
      acu_vehicle_horn_ctrl: msg.acu_vehicle_horn_ctrl,
      acu_vehicle_spray_ctrl: msg.acu_vehicle_spray_ctrl,
      acu_chassis_speed_limite_val: msg.acu_chassis_speed_limite_val,
      acu_check_sum_en: msg.acu_check_sum_en,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      acu_vehicle_pos_lamp_ctrl: msg.acu_vehicle_pos_lamp_ctrl,
      acu_vehicle_head_lamp_ctrl: msg.acu_vehicle_head_lamp_ctrl,
      acu_vehicle_left_lamp_ctrl: msg.acu_vehicle_left_lamp_ctrl,
      acu_vehicle_right_lamp_ctrl: msg.acu_vehicle_right_lamp_ctrl,
      acu_vehicle_high_beam_ctrl: msg.acu_vehicle_high_beam_ctrl,
      acu_vehicle_fog_lamp_ctrl: msg.acu_vehicle_fog_lamp_ctrl,
      acu_vehicle_body_light_ctrl: msg.acu_vehicle_body_light_ctrl,
      acu_vehicle_read_light_ctrl: msg.acu_vehicle_read_light_ctrl,
      acu_vehicle_voice: msg.acu_vehicle_voice,
      acu_vehicle_wipers_ctrl: msg.acu_vehicle_wipers_ctrl,
      acu_vehicle_door_ctrl: msg.acu_vehicle_door_ctrl,
      acu_vehicle_window_ctrl: msg.acu_vehicle_window_ctrl,
      acu_chassis_speed_limite_mode: msg.acu_chassis_speed_limite_mode,
      acu_vehicle_horn_ctrl: msg.acu_vehicle_horn_ctrl,
      acu_vehicle_spray_ctrl: msg.acu_vehicle_spray_ctrl,
      acu_chassis_speed_limite_val: msg.acu_chassis_speed_limite_val,
      acu_check_sum_en: msg.acu_check_sum_en,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__AvWheelTorqueCtrl

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AvWheelTorqueCtrl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// [Nm] [-200|200]
    pub acu_motor_torque_lf_ctrl: f32,

    /// [Nm] [-200|200]
    pub acu_motor_torque_rf_ctrl: f32,

    /// [Nm] [-200|200]
    pub acu_motor_torque_lr_ctrl: f32,

    /// [Nm] [-200|200]
    pub acu_motor_torque_rr_ctrl: f32,

}



impl Default for AvWheelTorqueCtrl {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AvWheelTorqueCtrl::default())
  }
}

impl rosidl_runtime_rs::Message for AvWheelTorqueCtrl {
  type RmwMsg = super::msg::rmw::AvWheelTorqueCtrl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        acu_motor_torque_lf_ctrl: msg.acu_motor_torque_lf_ctrl,
        acu_motor_torque_rf_ctrl: msg.acu_motor_torque_rf_ctrl,
        acu_motor_torque_lr_ctrl: msg.acu_motor_torque_lr_ctrl,
        acu_motor_torque_rr_ctrl: msg.acu_motor_torque_rr_ctrl,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      acu_motor_torque_lf_ctrl: msg.acu_motor_torque_lf_ctrl,
      acu_motor_torque_rf_ctrl: msg.acu_motor_torque_rf_ctrl,
      acu_motor_torque_lr_ctrl: msg.acu_motor_torque_lr_ctrl,
      acu_motor_torque_rr_ctrl: msg.acu_motor_torque_rr_ctrl,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      acu_motor_torque_lf_ctrl: msg.acu_motor_torque_lf_ctrl,
      acu_motor_torque_rf_ctrl: msg.acu_motor_torque_rf_ctrl,
      acu_motor_torque_lr_ctrl: msg.acu_motor_torque_lr_ctrl,
      acu_motor_torque_rr_ctrl: msg.acu_motor_torque_rr_ctrl,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__RemoteMessage

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RemoteMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub remote_drive_mode: i32,

    /// []
    pub remote_heartbeat: i32,

}



impl Default for RemoteMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RemoteMessage::default())
  }
}

impl rosidl_runtime_rs::Message for RemoteMessage {
  type RmwMsg = super::msg::rmw::RemoteMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        remote_drive_mode: msg.remote_drive_mode,
        remote_heartbeat: msg.remote_heartbeat,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      remote_drive_mode: msg.remote_drive_mode,
      remote_heartbeat: msg.remote_heartbeat,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      remote_drive_mode: msg.remote_drive_mode,
      remote_heartbeat: msg.remote_heartbeat,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__AcuSysTime

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AcuSysTime {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// [Y] [0|153]
    pub sys_time_year: i32,

    /// [M] [0|18]
    pub sys_time_month: i32,

    /// [D] [0|49]
    pub sys_time_day: i32,

    /// [h] [0|36]
    pub sys_time_hour: i32,

    /// [m] [0|96]
    pub sys_time_minute: i32,

    /// [s] [0|96]
    pub sys_time_second: i32,

}



impl Default for AcuSysTime {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AcuSysTime::default())
  }
}

impl rosidl_runtime_rs::Message for AcuSysTime {
  type RmwMsg = super::msg::rmw::AcuSysTime;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        sys_time_year: msg.sys_time_year,
        sys_time_month: msg.sys_time_month,
        sys_time_day: msg.sys_time_day,
        sys_time_hour: msg.sys_time_hour,
        sys_time_minute: msg.sys_time_minute,
        sys_time_second: msg.sys_time_second,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      sys_time_year: msg.sys_time_year,
      sys_time_month: msg.sys_time_month,
      sys_time_day: msg.sys_time_day,
      sys_time_hour: msg.sys_time_hour,
      sys_time_minute: msg.sys_time_minute,
      sys_time_second: msg.sys_time_second,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      sys_time_year: msg.sys_time_year,
      sys_time_month: msg.sys_time_month,
      sys_time_day: msg.sys_time_day,
      sys_time_hour: msg.sys_time_hour,
      sys_time_minute: msg.sys_time_minute,
      sys_time_second: msg.sys_time_second,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__AutoVcuMessage1

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AutoVcuMessage1 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub defrost_ctrl: i32,

    /// []
    pub air_cod_ctrl: i32,

    /// []
    pub air_cod_gear_ctrl: i32,

    /// []
    pub air_cod_mod_ctrl: i32,

    /// [℃] [16|32]
    pub air_cod_temp_ctrl: i32,

    /// []
    pub in_loop_mod_ctrl: i32,

}



impl Default for AutoVcuMessage1 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AutoVcuMessage1::default())
  }
}

impl rosidl_runtime_rs::Message for AutoVcuMessage1 {
  type RmwMsg = super::msg::rmw::AutoVcuMessage1;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        defrost_ctrl: msg.defrost_ctrl,
        air_cod_ctrl: msg.air_cod_ctrl,
        air_cod_gear_ctrl: msg.air_cod_gear_ctrl,
        air_cod_mod_ctrl: msg.air_cod_mod_ctrl,
        air_cod_temp_ctrl: msg.air_cod_temp_ctrl,
        in_loop_mod_ctrl: msg.in_loop_mod_ctrl,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      defrost_ctrl: msg.defrost_ctrl,
      air_cod_ctrl: msg.air_cod_ctrl,
      air_cod_gear_ctrl: msg.air_cod_gear_ctrl,
      air_cod_mod_ctrl: msg.air_cod_mod_ctrl,
      air_cod_temp_ctrl: msg.air_cod_temp_ctrl,
      in_loop_mod_ctrl: msg.in_loop_mod_ctrl,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      defrost_ctrl: msg.defrost_ctrl,
      air_cod_ctrl: msg.air_cod_ctrl,
      air_cod_gear_ctrl: msg.air_cod_gear_ctrl,
      air_cod_mod_ctrl: msg.air_cod_mod_ctrl,
      air_cod_temp_ctrl: msg.air_cod_temp_ctrl,
      in_loop_mod_ctrl: msg.in_loop_mod_ctrl,
    }
  }
}


// Corresponds to pix_robobus_driver_msgs__msg__AutoVcuMessage2

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AutoVcuMessage2 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// []
    pub pwm_red_ctrl: i32,

    /// []
    pub pwm_green_ctrl: i32,

    /// []
    pub pwm_blue_ctrl: i32,

    /// [%] [0|100]
    pub atmospherelightbrightness: i32,

}



impl Default for AutoVcuMessage2 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AutoVcuMessage2::default())
  }
}

impl rosidl_runtime_rs::Message for AutoVcuMessage2 {
  type RmwMsg = super::msg::rmw::AutoVcuMessage2;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pwm_red_ctrl: msg.pwm_red_ctrl,
        pwm_green_ctrl: msg.pwm_green_ctrl,
        pwm_blue_ctrl: msg.pwm_blue_ctrl,
        atmospherelightbrightness: msg.atmospherelightbrightness,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      pwm_red_ctrl: msg.pwm_red_ctrl,
      pwm_green_ctrl: msg.pwm_green_ctrl,
      pwm_blue_ctrl: msg.pwm_blue_ctrl,
      atmospherelightbrightness: msg.atmospherelightbrightness,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      pwm_red_ctrl: msg.pwm_red_ctrl,
      pwm_green_ctrl: msg.pwm_green_ctrl,
      pwm_blue_ctrl: msg.pwm_blue_ctrl,
      atmospherelightbrightness: msg.atmospherelightbrightness,
    }
  }
}


