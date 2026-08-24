# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pix_robobus_driver_msgs:msg/VehicleErrcode1.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleErrcode1(type):
    """Metaclass of message 'VehicleErrcode1'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('pix_robobus_driver_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pix_robobus_driver_msgs.msg.VehicleErrcode1')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_errcode1
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_errcode1
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_errcode1
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_errcode1
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_errcode1

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleErrcode1(metaclass=Metaclass_VehicleErrcode1):
    """Message class 'VehicleErrcode1'."""

    __slots__ = [
        '_header',
        '_flmc_hardware_fault',
        '_flmc_tem_fault',
        '_flm_tem_fault',
        '_rlmc_hardware_fault',
        '_rlmc_tem_fault',
        '_rlm_tem_fault',
        '_frmc_hardware_fault',
        '_frmc_tem_fault',
        '_frm_tem_fault',
        '_rrmc_hardware_fault',
        '_rrmc_tem_fault',
        '_rrm_tem_fault',
        '_flmc_network_fault',
        '_frmc_network_fault',
        '_rlmc_network_fault',
        '_rrmc_network_fault',
        '_fsteer_hardware_fault',
        '_rsteer_hardware_fault',
        '_fsteer_network_fault',
        '_rsteer_network_fault',
        '_brake_hardware_fault',
        '_brake_high_tem_fault',
        '_brake_luid_level_low',
        '_brake_network_fault',
        '_park_hardware_fault',
        '_park_network_fault',
        '_rcu_network_fault',
        '_rcu_weak_signal',
        '_rcu_elec_low_alarm',
        '_reserve1',
        '_reserve2',
        '_bms_network_fault',
        '_bms_insulationfault',
        '_bms_ocv_cell',
        '_bms_odv_cell',
        '_bms_ocv_batt',
        '_bms_odv_batt',
        '_bms_cell_volt_diff',
        '_bms_temph',
        '_bms_temphl',
        '_bms_temph_diff',
        '_bms_warchg_overcurrent',
        '_bms_soch',
        '_bms_socl',
        '_bms_time_of_heating_too_long',
        '_bms_soc_break',
        '_bms_dis_char_over_cur',
        '_bms_char_over_cur_slow',
        '_bmsfast_char_over_cur',
        '_bms_alm_sense_cell',
        '_bms_alm_sense_temp',
        '_bms_alm_sense_curr',
        '_bms_hvil',
        '_bms_war_incan_fault',
        '_bms_lst_com_withobc',
        '_bms_lst_com_with_vcu',
        '_bms_precharger_fault',
        '_bmspos_relayconglutination',
        '_bms_neg_relay_conglutination',
        '_vcu_reserve3',
        '_vcu_reserve4',
        '_dcdc_high_tem_alarm',
        '_dcdc_hardware_fault',
        '_dcdc_network_fault',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'flmc_hardware_fault': 'boolean',
        'flmc_tem_fault': 'boolean',
        'flm_tem_fault': 'boolean',
        'rlmc_hardware_fault': 'boolean',
        'rlmc_tem_fault': 'boolean',
        'rlm_tem_fault': 'boolean',
        'frmc_hardware_fault': 'boolean',
        'frmc_tem_fault': 'boolean',
        'frm_tem_fault': 'boolean',
        'rrmc_hardware_fault': 'boolean',
        'rrmc_tem_fault': 'boolean',
        'rrm_tem_fault': 'boolean',
        'flmc_network_fault': 'boolean',
        'frmc_network_fault': 'boolean',
        'rlmc_network_fault': 'boolean',
        'rrmc_network_fault': 'boolean',
        'fsteer_hardware_fault': 'boolean',
        'rsteer_hardware_fault': 'boolean',
        'fsteer_network_fault': 'boolean',
        'rsteer_network_fault': 'boolean',
        'brake_hardware_fault': 'boolean',
        'brake_high_tem_fault': 'boolean',
        'brake_luid_level_low': 'boolean',
        'brake_network_fault': 'boolean',
        'park_hardware_fault': 'boolean',
        'park_network_fault': 'boolean',
        'rcu_network_fault': 'boolean',
        'rcu_weak_signal': 'boolean',
        'rcu_elec_low_alarm': 'boolean',
        'reserve1': 'boolean',
        'reserve2': 'boolean',
        'bms_network_fault': 'boolean',
        'bms_insulationfault': 'boolean',
        'bms_ocv_cell': 'boolean',
        'bms_odv_cell': 'boolean',
        'bms_ocv_batt': 'boolean',
        'bms_odv_batt': 'boolean',
        'bms_cell_volt_diff': 'boolean',
        'bms_temph': 'boolean',
        'bms_temphl': 'boolean',
        'bms_temph_diff': 'boolean',
        'bms_warchg_overcurrent': 'boolean',
        'bms_soch': 'boolean',
        'bms_socl': 'boolean',
        'bms_time_of_heating_too_long': 'boolean',
        'bms_soc_break': 'boolean',
        'bms_dis_char_over_cur': 'boolean',
        'bms_char_over_cur_slow': 'boolean',
        'bmsfast_char_over_cur': 'boolean',
        'bms_alm_sense_cell': 'boolean',
        'bms_alm_sense_temp': 'boolean',
        'bms_alm_sense_curr': 'boolean',
        'bms_hvil': 'boolean',
        'bms_war_incan_fault': 'boolean',
        'bms_lst_com_withobc': 'boolean',
        'bms_lst_com_with_vcu': 'boolean',
        'bms_precharger_fault': 'boolean',
        'bmspos_relayconglutination': 'boolean',
        'bms_neg_relay_conglutination': 'boolean',
        'vcu_reserve3': 'boolean',
        'vcu_reserve4': 'boolean',
        'dcdc_high_tem_alarm': 'boolean',
        'dcdc_hardware_fault': 'boolean',
        'dcdc_network_fault': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.flmc_hardware_fault = kwargs.get('flmc_hardware_fault', bool())
        self.flmc_tem_fault = kwargs.get('flmc_tem_fault', bool())
        self.flm_tem_fault = kwargs.get('flm_tem_fault', bool())
        self.rlmc_hardware_fault = kwargs.get('rlmc_hardware_fault', bool())
        self.rlmc_tem_fault = kwargs.get('rlmc_tem_fault', bool())
        self.rlm_tem_fault = kwargs.get('rlm_tem_fault', bool())
        self.frmc_hardware_fault = kwargs.get('frmc_hardware_fault', bool())
        self.frmc_tem_fault = kwargs.get('frmc_tem_fault', bool())
        self.frm_tem_fault = kwargs.get('frm_tem_fault', bool())
        self.rrmc_hardware_fault = kwargs.get('rrmc_hardware_fault', bool())
        self.rrmc_tem_fault = kwargs.get('rrmc_tem_fault', bool())
        self.rrm_tem_fault = kwargs.get('rrm_tem_fault', bool())
        self.flmc_network_fault = kwargs.get('flmc_network_fault', bool())
        self.frmc_network_fault = kwargs.get('frmc_network_fault', bool())
        self.rlmc_network_fault = kwargs.get('rlmc_network_fault', bool())
        self.rrmc_network_fault = kwargs.get('rrmc_network_fault', bool())
        self.fsteer_hardware_fault = kwargs.get('fsteer_hardware_fault', bool())
        self.rsteer_hardware_fault = kwargs.get('rsteer_hardware_fault', bool())
        self.fsteer_network_fault = kwargs.get('fsteer_network_fault', bool())
        self.rsteer_network_fault = kwargs.get('rsteer_network_fault', bool())
        self.brake_hardware_fault = kwargs.get('brake_hardware_fault', bool())
        self.brake_high_tem_fault = kwargs.get('brake_high_tem_fault', bool())
        self.brake_luid_level_low = kwargs.get('brake_luid_level_low', bool())
        self.brake_network_fault = kwargs.get('brake_network_fault', bool())
        self.park_hardware_fault = kwargs.get('park_hardware_fault', bool())
        self.park_network_fault = kwargs.get('park_network_fault', bool())
        self.rcu_network_fault = kwargs.get('rcu_network_fault', bool())
        self.rcu_weak_signal = kwargs.get('rcu_weak_signal', bool())
        self.rcu_elec_low_alarm = kwargs.get('rcu_elec_low_alarm', bool())
        self.reserve1 = kwargs.get('reserve1', bool())
        self.reserve2 = kwargs.get('reserve2', bool())
        self.bms_network_fault = kwargs.get('bms_network_fault', bool())
        self.bms_insulationfault = kwargs.get('bms_insulationfault', bool())
        self.bms_ocv_cell = kwargs.get('bms_ocv_cell', bool())
        self.bms_odv_cell = kwargs.get('bms_odv_cell', bool())
        self.bms_ocv_batt = kwargs.get('bms_ocv_batt', bool())
        self.bms_odv_batt = kwargs.get('bms_odv_batt', bool())
        self.bms_cell_volt_diff = kwargs.get('bms_cell_volt_diff', bool())
        self.bms_temph = kwargs.get('bms_temph', bool())
        self.bms_temphl = kwargs.get('bms_temphl', bool())
        self.bms_temph_diff = kwargs.get('bms_temph_diff', bool())
        self.bms_warchg_overcurrent = kwargs.get('bms_warchg_overcurrent', bool())
        self.bms_soch = kwargs.get('bms_soch', bool())
        self.bms_socl = kwargs.get('bms_socl', bool())
        self.bms_time_of_heating_too_long = kwargs.get('bms_time_of_heating_too_long', bool())
        self.bms_soc_break = kwargs.get('bms_soc_break', bool())
        self.bms_dis_char_over_cur = kwargs.get('bms_dis_char_over_cur', bool())
        self.bms_char_over_cur_slow = kwargs.get('bms_char_over_cur_slow', bool())
        self.bmsfast_char_over_cur = kwargs.get('bmsfast_char_over_cur', bool())
        self.bms_alm_sense_cell = kwargs.get('bms_alm_sense_cell', bool())
        self.bms_alm_sense_temp = kwargs.get('bms_alm_sense_temp', bool())
        self.bms_alm_sense_curr = kwargs.get('bms_alm_sense_curr', bool())
        self.bms_hvil = kwargs.get('bms_hvil', bool())
        self.bms_war_incan_fault = kwargs.get('bms_war_incan_fault', bool())
        self.bms_lst_com_withobc = kwargs.get('bms_lst_com_withobc', bool())
        self.bms_lst_com_with_vcu = kwargs.get('bms_lst_com_with_vcu', bool())
        self.bms_precharger_fault = kwargs.get('bms_precharger_fault', bool())
        self.bmspos_relayconglutination = kwargs.get('bmspos_relayconglutination', bool())
        self.bms_neg_relay_conglutination = kwargs.get('bms_neg_relay_conglutination', bool())
        self.vcu_reserve3 = kwargs.get('vcu_reserve3', bool())
        self.vcu_reserve4 = kwargs.get('vcu_reserve4', bool())
        self.dcdc_high_tem_alarm = kwargs.get('dcdc_high_tem_alarm', bool())
        self.dcdc_hardware_fault = kwargs.get('dcdc_hardware_fault', bool())
        self.dcdc_network_fault = kwargs.get('dcdc_network_fault', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.flmc_hardware_fault != other.flmc_hardware_fault:
            return False
        if self.flmc_tem_fault != other.flmc_tem_fault:
            return False
        if self.flm_tem_fault != other.flm_tem_fault:
            return False
        if self.rlmc_hardware_fault != other.rlmc_hardware_fault:
            return False
        if self.rlmc_tem_fault != other.rlmc_tem_fault:
            return False
        if self.rlm_tem_fault != other.rlm_tem_fault:
            return False
        if self.frmc_hardware_fault != other.frmc_hardware_fault:
            return False
        if self.frmc_tem_fault != other.frmc_tem_fault:
            return False
        if self.frm_tem_fault != other.frm_tem_fault:
            return False
        if self.rrmc_hardware_fault != other.rrmc_hardware_fault:
            return False
        if self.rrmc_tem_fault != other.rrmc_tem_fault:
            return False
        if self.rrm_tem_fault != other.rrm_tem_fault:
            return False
        if self.flmc_network_fault != other.flmc_network_fault:
            return False
        if self.frmc_network_fault != other.frmc_network_fault:
            return False
        if self.rlmc_network_fault != other.rlmc_network_fault:
            return False
        if self.rrmc_network_fault != other.rrmc_network_fault:
            return False
        if self.fsteer_hardware_fault != other.fsteer_hardware_fault:
            return False
        if self.rsteer_hardware_fault != other.rsteer_hardware_fault:
            return False
        if self.fsteer_network_fault != other.fsteer_network_fault:
            return False
        if self.rsteer_network_fault != other.rsteer_network_fault:
            return False
        if self.brake_hardware_fault != other.brake_hardware_fault:
            return False
        if self.brake_high_tem_fault != other.brake_high_tem_fault:
            return False
        if self.brake_luid_level_low != other.brake_luid_level_low:
            return False
        if self.brake_network_fault != other.brake_network_fault:
            return False
        if self.park_hardware_fault != other.park_hardware_fault:
            return False
        if self.park_network_fault != other.park_network_fault:
            return False
        if self.rcu_network_fault != other.rcu_network_fault:
            return False
        if self.rcu_weak_signal != other.rcu_weak_signal:
            return False
        if self.rcu_elec_low_alarm != other.rcu_elec_low_alarm:
            return False
        if self.reserve1 != other.reserve1:
            return False
        if self.reserve2 != other.reserve2:
            return False
        if self.bms_network_fault != other.bms_network_fault:
            return False
        if self.bms_insulationfault != other.bms_insulationfault:
            return False
        if self.bms_ocv_cell != other.bms_ocv_cell:
            return False
        if self.bms_odv_cell != other.bms_odv_cell:
            return False
        if self.bms_ocv_batt != other.bms_ocv_batt:
            return False
        if self.bms_odv_batt != other.bms_odv_batt:
            return False
        if self.bms_cell_volt_diff != other.bms_cell_volt_diff:
            return False
        if self.bms_temph != other.bms_temph:
            return False
        if self.bms_temphl != other.bms_temphl:
            return False
        if self.bms_temph_diff != other.bms_temph_diff:
            return False
        if self.bms_warchg_overcurrent != other.bms_warchg_overcurrent:
            return False
        if self.bms_soch != other.bms_soch:
            return False
        if self.bms_socl != other.bms_socl:
            return False
        if self.bms_time_of_heating_too_long != other.bms_time_of_heating_too_long:
            return False
        if self.bms_soc_break != other.bms_soc_break:
            return False
        if self.bms_dis_char_over_cur != other.bms_dis_char_over_cur:
            return False
        if self.bms_char_over_cur_slow != other.bms_char_over_cur_slow:
            return False
        if self.bmsfast_char_over_cur != other.bmsfast_char_over_cur:
            return False
        if self.bms_alm_sense_cell != other.bms_alm_sense_cell:
            return False
        if self.bms_alm_sense_temp != other.bms_alm_sense_temp:
            return False
        if self.bms_alm_sense_curr != other.bms_alm_sense_curr:
            return False
        if self.bms_hvil != other.bms_hvil:
            return False
        if self.bms_war_incan_fault != other.bms_war_incan_fault:
            return False
        if self.bms_lst_com_withobc != other.bms_lst_com_withobc:
            return False
        if self.bms_lst_com_with_vcu != other.bms_lst_com_with_vcu:
            return False
        if self.bms_precharger_fault != other.bms_precharger_fault:
            return False
        if self.bmspos_relayconglutination != other.bmspos_relayconglutination:
            return False
        if self.bms_neg_relay_conglutination != other.bms_neg_relay_conglutination:
            return False
        if self.vcu_reserve3 != other.vcu_reserve3:
            return False
        if self.vcu_reserve4 != other.vcu_reserve4:
            return False
        if self.dcdc_high_tem_alarm != other.dcdc_high_tem_alarm:
            return False
        if self.dcdc_hardware_fault != other.dcdc_hardware_fault:
            return False
        if self.dcdc_network_fault != other.dcdc_network_fault:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def flmc_hardware_fault(self):
        """Message field 'flmc_hardware_fault'."""
        return self._flmc_hardware_fault

    @flmc_hardware_fault.setter
    def flmc_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flmc_hardware_fault' field must be of type 'bool'"
        self._flmc_hardware_fault = value

    @builtins.property
    def flmc_tem_fault(self):
        """Message field 'flmc_tem_fault'."""
        return self._flmc_tem_fault

    @flmc_tem_fault.setter
    def flmc_tem_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flmc_tem_fault' field must be of type 'bool'"
        self._flmc_tem_fault = value

    @builtins.property
    def flm_tem_fault(self):
        """Message field 'flm_tem_fault'."""
        return self._flm_tem_fault

    @flm_tem_fault.setter
    def flm_tem_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flm_tem_fault' field must be of type 'bool'"
        self._flm_tem_fault = value

    @builtins.property
    def rlmc_hardware_fault(self):
        """Message field 'rlmc_hardware_fault'."""
        return self._rlmc_hardware_fault

    @rlmc_hardware_fault.setter
    def rlmc_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rlmc_hardware_fault' field must be of type 'bool'"
        self._rlmc_hardware_fault = value

    @builtins.property
    def rlmc_tem_fault(self):
        """Message field 'rlmc_tem_fault'."""
        return self._rlmc_tem_fault

    @rlmc_tem_fault.setter
    def rlmc_tem_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rlmc_tem_fault' field must be of type 'bool'"
        self._rlmc_tem_fault = value

    @builtins.property
    def rlm_tem_fault(self):
        """Message field 'rlm_tem_fault'."""
        return self._rlm_tem_fault

    @rlm_tem_fault.setter
    def rlm_tem_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rlm_tem_fault' field must be of type 'bool'"
        self._rlm_tem_fault = value

    @builtins.property
    def frmc_hardware_fault(self):
        """Message field 'frmc_hardware_fault'."""
        return self._frmc_hardware_fault

    @frmc_hardware_fault.setter
    def frmc_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'frmc_hardware_fault' field must be of type 'bool'"
        self._frmc_hardware_fault = value

    @builtins.property
    def frmc_tem_fault(self):
        """Message field 'frmc_tem_fault'."""
        return self._frmc_tem_fault

    @frmc_tem_fault.setter
    def frmc_tem_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'frmc_tem_fault' field must be of type 'bool'"
        self._frmc_tem_fault = value

    @builtins.property
    def frm_tem_fault(self):
        """Message field 'frm_tem_fault'."""
        return self._frm_tem_fault

    @frm_tem_fault.setter
    def frm_tem_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'frm_tem_fault' field must be of type 'bool'"
        self._frm_tem_fault = value

    @builtins.property
    def rrmc_hardware_fault(self):
        """Message field 'rrmc_hardware_fault'."""
        return self._rrmc_hardware_fault

    @rrmc_hardware_fault.setter
    def rrmc_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rrmc_hardware_fault' field must be of type 'bool'"
        self._rrmc_hardware_fault = value

    @builtins.property
    def rrmc_tem_fault(self):
        """Message field 'rrmc_tem_fault'."""
        return self._rrmc_tem_fault

    @rrmc_tem_fault.setter
    def rrmc_tem_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rrmc_tem_fault' field must be of type 'bool'"
        self._rrmc_tem_fault = value

    @builtins.property
    def rrm_tem_fault(self):
        """Message field 'rrm_tem_fault'."""
        return self._rrm_tem_fault

    @rrm_tem_fault.setter
    def rrm_tem_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rrm_tem_fault' field must be of type 'bool'"
        self._rrm_tem_fault = value

    @builtins.property
    def flmc_network_fault(self):
        """Message field 'flmc_network_fault'."""
        return self._flmc_network_fault

    @flmc_network_fault.setter
    def flmc_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flmc_network_fault' field must be of type 'bool'"
        self._flmc_network_fault = value

    @builtins.property
    def frmc_network_fault(self):
        """Message field 'frmc_network_fault'."""
        return self._frmc_network_fault

    @frmc_network_fault.setter
    def frmc_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'frmc_network_fault' field must be of type 'bool'"
        self._frmc_network_fault = value

    @builtins.property
    def rlmc_network_fault(self):
        """Message field 'rlmc_network_fault'."""
        return self._rlmc_network_fault

    @rlmc_network_fault.setter
    def rlmc_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rlmc_network_fault' field must be of type 'bool'"
        self._rlmc_network_fault = value

    @builtins.property
    def rrmc_network_fault(self):
        """Message field 'rrmc_network_fault'."""
        return self._rrmc_network_fault

    @rrmc_network_fault.setter
    def rrmc_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rrmc_network_fault' field must be of type 'bool'"
        self._rrmc_network_fault = value

    @builtins.property
    def fsteer_hardware_fault(self):
        """Message field 'fsteer_hardware_fault'."""
        return self._fsteer_hardware_fault

    @fsteer_hardware_fault.setter
    def fsteer_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fsteer_hardware_fault' field must be of type 'bool'"
        self._fsteer_hardware_fault = value

    @builtins.property
    def rsteer_hardware_fault(self):
        """Message field 'rsteer_hardware_fault'."""
        return self._rsteer_hardware_fault

    @rsteer_hardware_fault.setter
    def rsteer_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rsteer_hardware_fault' field must be of type 'bool'"
        self._rsteer_hardware_fault = value

    @builtins.property
    def fsteer_network_fault(self):
        """Message field 'fsteer_network_fault'."""
        return self._fsteer_network_fault

    @fsteer_network_fault.setter
    def fsteer_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fsteer_network_fault' field must be of type 'bool'"
        self._fsteer_network_fault = value

    @builtins.property
    def rsteer_network_fault(self):
        """Message field 'rsteer_network_fault'."""
        return self._rsteer_network_fault

    @rsteer_network_fault.setter
    def rsteer_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rsteer_network_fault' field must be of type 'bool'"
        self._rsteer_network_fault = value

    @builtins.property
    def brake_hardware_fault(self):
        """Message field 'brake_hardware_fault'."""
        return self._brake_hardware_fault

    @brake_hardware_fault.setter
    def brake_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'brake_hardware_fault' field must be of type 'bool'"
        self._brake_hardware_fault = value

    @builtins.property
    def brake_high_tem_fault(self):
        """Message field 'brake_high_tem_fault'."""
        return self._brake_high_tem_fault

    @brake_high_tem_fault.setter
    def brake_high_tem_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'brake_high_tem_fault' field must be of type 'bool'"
        self._brake_high_tem_fault = value

    @builtins.property
    def brake_luid_level_low(self):
        """Message field 'brake_luid_level_low'."""
        return self._brake_luid_level_low

    @brake_luid_level_low.setter
    def brake_luid_level_low(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'brake_luid_level_low' field must be of type 'bool'"
        self._brake_luid_level_low = value

    @builtins.property
    def brake_network_fault(self):
        """Message field 'brake_network_fault'."""
        return self._brake_network_fault

    @brake_network_fault.setter
    def brake_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'brake_network_fault' field must be of type 'bool'"
        self._brake_network_fault = value

    @builtins.property
    def park_hardware_fault(self):
        """Message field 'park_hardware_fault'."""
        return self._park_hardware_fault

    @park_hardware_fault.setter
    def park_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'park_hardware_fault' field must be of type 'bool'"
        self._park_hardware_fault = value

    @builtins.property
    def park_network_fault(self):
        """Message field 'park_network_fault'."""
        return self._park_network_fault

    @park_network_fault.setter
    def park_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'park_network_fault' field must be of type 'bool'"
        self._park_network_fault = value

    @builtins.property
    def rcu_network_fault(self):
        """Message field 'rcu_network_fault'."""
        return self._rcu_network_fault

    @rcu_network_fault.setter
    def rcu_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rcu_network_fault' field must be of type 'bool'"
        self._rcu_network_fault = value

    @builtins.property
    def rcu_weak_signal(self):
        """Message field 'rcu_weak_signal'."""
        return self._rcu_weak_signal

    @rcu_weak_signal.setter
    def rcu_weak_signal(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rcu_weak_signal' field must be of type 'bool'"
        self._rcu_weak_signal = value

    @builtins.property
    def rcu_elec_low_alarm(self):
        """Message field 'rcu_elec_low_alarm'."""
        return self._rcu_elec_low_alarm

    @rcu_elec_low_alarm.setter
    def rcu_elec_low_alarm(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rcu_elec_low_alarm' field must be of type 'bool'"
        self._rcu_elec_low_alarm = value

    @builtins.property
    def reserve1(self):
        """Message field 'reserve1'."""
        return self._reserve1

    @reserve1.setter
    def reserve1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reserve1' field must be of type 'bool'"
        self._reserve1 = value

    @builtins.property
    def reserve2(self):
        """Message field 'reserve2'."""
        return self._reserve2

    @reserve2.setter
    def reserve2(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reserve2' field must be of type 'bool'"
        self._reserve2 = value

    @builtins.property
    def bms_network_fault(self):
        """Message field 'bms_network_fault'."""
        return self._bms_network_fault

    @bms_network_fault.setter
    def bms_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_network_fault' field must be of type 'bool'"
        self._bms_network_fault = value

    @builtins.property
    def bms_insulationfault(self):
        """Message field 'bms_insulationfault'."""
        return self._bms_insulationfault

    @bms_insulationfault.setter
    def bms_insulationfault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_insulationfault' field must be of type 'bool'"
        self._bms_insulationfault = value

    @builtins.property
    def bms_ocv_cell(self):
        """Message field 'bms_ocv_cell'."""
        return self._bms_ocv_cell

    @bms_ocv_cell.setter
    def bms_ocv_cell(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_ocv_cell' field must be of type 'bool'"
        self._bms_ocv_cell = value

    @builtins.property
    def bms_odv_cell(self):
        """Message field 'bms_odv_cell'."""
        return self._bms_odv_cell

    @bms_odv_cell.setter
    def bms_odv_cell(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_odv_cell' field must be of type 'bool'"
        self._bms_odv_cell = value

    @builtins.property
    def bms_ocv_batt(self):
        """Message field 'bms_ocv_batt'."""
        return self._bms_ocv_batt

    @bms_ocv_batt.setter
    def bms_ocv_batt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_ocv_batt' field must be of type 'bool'"
        self._bms_ocv_batt = value

    @builtins.property
    def bms_odv_batt(self):
        """Message field 'bms_odv_batt'."""
        return self._bms_odv_batt

    @bms_odv_batt.setter
    def bms_odv_batt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_odv_batt' field must be of type 'bool'"
        self._bms_odv_batt = value

    @builtins.property
    def bms_cell_volt_diff(self):
        """Message field 'bms_cell_volt_diff'."""
        return self._bms_cell_volt_diff

    @bms_cell_volt_diff.setter
    def bms_cell_volt_diff(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_cell_volt_diff' field must be of type 'bool'"
        self._bms_cell_volt_diff = value

    @builtins.property
    def bms_temph(self):
        """Message field 'bms_temph'."""
        return self._bms_temph

    @bms_temph.setter
    def bms_temph(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_temph' field must be of type 'bool'"
        self._bms_temph = value

    @builtins.property
    def bms_temphl(self):
        """Message field 'bms_temphl'."""
        return self._bms_temphl

    @bms_temphl.setter
    def bms_temphl(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_temphl' field must be of type 'bool'"
        self._bms_temphl = value

    @builtins.property
    def bms_temph_diff(self):
        """Message field 'bms_temph_diff'."""
        return self._bms_temph_diff

    @bms_temph_diff.setter
    def bms_temph_diff(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_temph_diff' field must be of type 'bool'"
        self._bms_temph_diff = value

    @builtins.property
    def bms_warchg_overcurrent(self):
        """Message field 'bms_warchg_overcurrent'."""
        return self._bms_warchg_overcurrent

    @bms_warchg_overcurrent.setter
    def bms_warchg_overcurrent(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_warchg_overcurrent' field must be of type 'bool'"
        self._bms_warchg_overcurrent = value

    @builtins.property
    def bms_soch(self):
        """Message field 'bms_soch'."""
        return self._bms_soch

    @bms_soch.setter
    def bms_soch(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_soch' field must be of type 'bool'"
        self._bms_soch = value

    @builtins.property
    def bms_socl(self):
        """Message field 'bms_socl'."""
        return self._bms_socl

    @bms_socl.setter
    def bms_socl(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_socl' field must be of type 'bool'"
        self._bms_socl = value

    @builtins.property
    def bms_time_of_heating_too_long(self):
        """Message field 'bms_time_of_heating_too_long'."""
        return self._bms_time_of_heating_too_long

    @bms_time_of_heating_too_long.setter
    def bms_time_of_heating_too_long(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_time_of_heating_too_long' field must be of type 'bool'"
        self._bms_time_of_heating_too_long = value

    @builtins.property
    def bms_soc_break(self):
        """Message field 'bms_soc_break'."""
        return self._bms_soc_break

    @bms_soc_break.setter
    def bms_soc_break(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_soc_break' field must be of type 'bool'"
        self._bms_soc_break = value

    @builtins.property
    def bms_dis_char_over_cur(self):
        """Message field 'bms_dis_char_over_cur'."""
        return self._bms_dis_char_over_cur

    @bms_dis_char_over_cur.setter
    def bms_dis_char_over_cur(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_dis_char_over_cur' field must be of type 'bool'"
        self._bms_dis_char_over_cur = value

    @builtins.property
    def bms_char_over_cur_slow(self):
        """Message field 'bms_char_over_cur_slow'."""
        return self._bms_char_over_cur_slow

    @bms_char_over_cur_slow.setter
    def bms_char_over_cur_slow(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_char_over_cur_slow' field must be of type 'bool'"
        self._bms_char_over_cur_slow = value

    @builtins.property
    def bmsfast_char_over_cur(self):
        """Message field 'bmsfast_char_over_cur'."""
        return self._bmsfast_char_over_cur

    @bmsfast_char_over_cur.setter
    def bmsfast_char_over_cur(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bmsfast_char_over_cur' field must be of type 'bool'"
        self._bmsfast_char_over_cur = value

    @builtins.property
    def bms_alm_sense_cell(self):
        """Message field 'bms_alm_sense_cell'."""
        return self._bms_alm_sense_cell

    @bms_alm_sense_cell.setter
    def bms_alm_sense_cell(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_alm_sense_cell' field must be of type 'bool'"
        self._bms_alm_sense_cell = value

    @builtins.property
    def bms_alm_sense_temp(self):
        """Message field 'bms_alm_sense_temp'."""
        return self._bms_alm_sense_temp

    @bms_alm_sense_temp.setter
    def bms_alm_sense_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_alm_sense_temp' field must be of type 'bool'"
        self._bms_alm_sense_temp = value

    @builtins.property
    def bms_alm_sense_curr(self):
        """Message field 'bms_alm_sense_curr'."""
        return self._bms_alm_sense_curr

    @bms_alm_sense_curr.setter
    def bms_alm_sense_curr(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_alm_sense_curr' field must be of type 'bool'"
        self._bms_alm_sense_curr = value

    @builtins.property
    def bms_hvil(self):
        """Message field 'bms_hvil'."""
        return self._bms_hvil

    @bms_hvil.setter
    def bms_hvil(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_hvil' field must be of type 'bool'"
        self._bms_hvil = value

    @builtins.property
    def bms_war_incan_fault(self):
        """Message field 'bms_war_incan_fault'."""
        return self._bms_war_incan_fault

    @bms_war_incan_fault.setter
    def bms_war_incan_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_war_incan_fault' field must be of type 'bool'"
        self._bms_war_incan_fault = value

    @builtins.property
    def bms_lst_com_withobc(self):
        """Message field 'bms_lst_com_withobc'."""
        return self._bms_lst_com_withobc

    @bms_lst_com_withobc.setter
    def bms_lst_com_withobc(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_lst_com_withobc' field must be of type 'bool'"
        self._bms_lst_com_withobc = value

    @builtins.property
    def bms_lst_com_with_vcu(self):
        """Message field 'bms_lst_com_with_vcu'."""
        return self._bms_lst_com_with_vcu

    @bms_lst_com_with_vcu.setter
    def bms_lst_com_with_vcu(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_lst_com_with_vcu' field must be of type 'bool'"
        self._bms_lst_com_with_vcu = value

    @builtins.property
    def bms_precharger_fault(self):
        """Message field 'bms_precharger_fault'."""
        return self._bms_precharger_fault

    @bms_precharger_fault.setter
    def bms_precharger_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_precharger_fault' field must be of type 'bool'"
        self._bms_precharger_fault = value

    @builtins.property
    def bmspos_relayconglutination(self):
        """Message field 'bmspos_relayconglutination'."""
        return self._bmspos_relayconglutination

    @bmspos_relayconglutination.setter
    def bmspos_relayconglutination(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bmspos_relayconglutination' field must be of type 'bool'"
        self._bmspos_relayconglutination = value

    @builtins.property
    def bms_neg_relay_conglutination(self):
        """Message field 'bms_neg_relay_conglutination'."""
        return self._bms_neg_relay_conglutination

    @bms_neg_relay_conglutination.setter
    def bms_neg_relay_conglutination(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_neg_relay_conglutination' field must be of type 'bool'"
        self._bms_neg_relay_conglutination = value

    @builtins.property
    def vcu_reserve3(self):
        """Message field 'vcu_reserve3'."""
        return self._vcu_reserve3

    @vcu_reserve3.setter
    def vcu_reserve3(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_reserve3' field must be of type 'bool'"
        self._vcu_reserve3 = value

    @builtins.property
    def vcu_reserve4(self):
        """Message field 'vcu_reserve4'."""
        return self._vcu_reserve4

    @vcu_reserve4.setter
    def vcu_reserve4(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_reserve4' field must be of type 'bool'"
        self._vcu_reserve4 = value

    @builtins.property
    def dcdc_high_tem_alarm(self):
        """Message field 'dcdc_high_tem_alarm'."""
        return self._dcdc_high_tem_alarm

    @dcdc_high_tem_alarm.setter
    def dcdc_high_tem_alarm(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dcdc_high_tem_alarm' field must be of type 'bool'"
        self._dcdc_high_tem_alarm = value

    @builtins.property
    def dcdc_hardware_fault(self):
        """Message field 'dcdc_hardware_fault'."""
        return self._dcdc_hardware_fault

    @dcdc_hardware_fault.setter
    def dcdc_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dcdc_hardware_fault' field must be of type 'bool'"
        self._dcdc_hardware_fault = value

    @builtins.property
    def dcdc_network_fault(self):
        """Message field 'dcdc_network_fault'."""
        return self._dcdc_network_fault

    @dcdc_network_fault.setter
    def dcdc_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dcdc_network_fault' field must be of type 'bool'"
        self._dcdc_network_fault = value
