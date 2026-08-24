# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pix_robobus_driver_msgs:msg/HistoricalVehiclefailures1.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HistoricalVehiclefailures1(type):
    """Metaclass of message 'HistoricalVehiclefailures1'."""

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
                'pix_robobus_driver_msgs.msg.HistoricalVehiclefailures1')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__historical_vehiclefailures1
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__historical_vehiclefailures1
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__historical_vehiclefailures1
            cls._TYPE_SUPPORT = module.type_support_msg__msg__historical_vehiclefailures1
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__historical_vehiclefailures1

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


class HistoricalVehiclefailures1(metaclass=Metaclass_HistoricalVehiclefailures1):
    """Message class 'HistoricalVehiclefailures1'."""

    __slots__ = [
        '_header',
        '_hflmc_hardware_fault',
        '_hflmc_tem_fault',
        '_hflm_tem_fault',
        '_hrlmc_hardware_fault',
        '_hrlmc_tem_fault',
        '_hrlm_tem_fault',
        '_hfrmc_hardware_fault',
        '_hfrmc_tem_fault',
        '_hfrm_tem_fault',
        '_hrrmc_hardware_fault',
        '_hrrmc_tem_fault',
        '_hrrm_tem_fault',
        '_hflmc_network_fault',
        '_hfrmc_network_fault',
        '_hrlmc_network_fault',
        '_hrrmc_network_fault',
        '_hfsteer_hardware_fault',
        '_hrsteer_hardware_fault',
        '_hfsteer_network_fault',
        '_hrsteer_network_fault',
        '_hbrake_hardware_fault',
        '_hbrake_high_tem_fault',
        '_hbrake_luid_level_low',
        '_hbrake_network_fault',
        '_hpark_hardware_fault',
        '_hpark_network_fault',
        '_hrcu_network_fault',
        '_hrcu_weak_signal',
        '_hrcu_elec_low_alarm',
        '_hbms_network_fault',
        '_hbms_insulationfault',
        '_hbms_ocv_cell',
        '_hbms_odv_cell',
        '_hbms_ocv_batt',
        '_hbms_odv_batt',
        '_hbms_cell_volt_diff',
        '_hbms_temph',
        '_hbms_temphl',
        '_hbms_temph_diff',
        '_hbms_warchg_overcurrent',
        '_hbms_soch',
        '_hbms_socl',
        '_hbms_time_of_heating_too_long',
        '_hbms_soc_break',
        '_hbms_dis_char_over_cur',
        '_hbms_char_over_cur_slow',
        '_hbmsfast_char_over_cur',
        '_hbms_alm_sense_cell',
        '_hbms_alm_sense_temp',
        '_hbms_alm_sense_curr',
        '_hbms_hvil',
        '_hbms_war_incan_fault',
        '_hbms_lst_com_withobc',
        '_hbms_lst_com_with_vcu',
        '_hbms_precharger_fault',
        '_hbmspos_relayconglutination',
        '_hbms_neg_relay_conglutination',
        '_hdcdc_high_tem_alarm',
        '_hdcdc_hardware_fault',
        '_hdcdc_network_fault',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'hflmc_hardware_fault': 'boolean',
        'hflmc_tem_fault': 'boolean',
        'hflm_tem_fault': 'boolean',
        'hrlmc_hardware_fault': 'boolean',
        'hrlmc_tem_fault': 'boolean',
        'hrlm_tem_fault': 'boolean',
        'hfrmc_hardware_fault': 'boolean',
        'hfrmc_tem_fault': 'boolean',
        'hfrm_tem_fault': 'boolean',
        'hrrmc_hardware_fault': 'boolean',
        'hrrmc_tem_fault': 'boolean',
        'hrrm_tem_fault': 'boolean',
        'hflmc_network_fault': 'boolean',
        'hfrmc_network_fault': 'boolean',
        'hrlmc_network_fault': 'boolean',
        'hrrmc_network_fault': 'boolean',
        'hfsteer_hardware_fault': 'boolean',
        'hrsteer_hardware_fault': 'boolean',
        'hfsteer_network_fault': 'boolean',
        'hrsteer_network_fault': 'boolean',
        'hbrake_hardware_fault': 'boolean',
        'hbrake_high_tem_fault': 'boolean',
        'hbrake_luid_level_low': 'boolean',
        'hbrake_network_fault': 'boolean',
        'hpark_hardware_fault': 'boolean',
        'hpark_network_fault': 'boolean',
        'hrcu_network_fault': 'boolean',
        'hrcu_weak_signal': 'boolean',
        'hrcu_elec_low_alarm': 'boolean',
        'hbms_network_fault': 'boolean',
        'hbms_insulationfault': 'boolean',
        'hbms_ocv_cell': 'boolean',
        'hbms_odv_cell': 'boolean',
        'hbms_ocv_batt': 'boolean',
        'hbms_odv_batt': 'boolean',
        'hbms_cell_volt_diff': 'boolean',
        'hbms_temph': 'boolean',
        'hbms_temphl': 'boolean',
        'hbms_temph_diff': 'boolean',
        'hbms_warchg_overcurrent': 'boolean',
        'hbms_soch': 'boolean',
        'hbms_socl': 'boolean',
        'hbms_time_of_heating_too_long': 'boolean',
        'hbms_soc_break': 'boolean',
        'hbms_dis_char_over_cur': 'boolean',
        'hbms_char_over_cur_slow': 'boolean',
        'hbmsfast_char_over_cur': 'boolean',
        'hbms_alm_sense_cell': 'boolean',
        'hbms_alm_sense_temp': 'boolean',
        'hbms_alm_sense_curr': 'boolean',
        'hbms_hvil': 'boolean',
        'hbms_war_incan_fault': 'boolean',
        'hbms_lst_com_withobc': 'boolean',
        'hbms_lst_com_with_vcu': 'boolean',
        'hbms_precharger_fault': 'boolean',
        'hbmspos_relayconglutination': 'boolean',
        'hbms_neg_relay_conglutination': 'boolean',
        'hdcdc_high_tem_alarm': 'boolean',
        'hdcdc_hardware_fault': 'boolean',
        'hdcdc_network_fault': 'boolean',
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.hflmc_hardware_fault = kwargs.get('hflmc_hardware_fault', bool())
        self.hflmc_tem_fault = kwargs.get('hflmc_tem_fault', bool())
        self.hflm_tem_fault = kwargs.get('hflm_tem_fault', bool())
        self.hrlmc_hardware_fault = kwargs.get('hrlmc_hardware_fault', bool())
        self.hrlmc_tem_fault = kwargs.get('hrlmc_tem_fault', bool())
        self.hrlm_tem_fault = kwargs.get('hrlm_tem_fault', bool())
        self.hfrmc_hardware_fault = kwargs.get('hfrmc_hardware_fault', bool())
        self.hfrmc_tem_fault = kwargs.get('hfrmc_tem_fault', bool())
        self.hfrm_tem_fault = kwargs.get('hfrm_tem_fault', bool())
        self.hrrmc_hardware_fault = kwargs.get('hrrmc_hardware_fault', bool())
        self.hrrmc_tem_fault = kwargs.get('hrrmc_tem_fault', bool())
        self.hrrm_tem_fault = kwargs.get('hrrm_tem_fault', bool())
        self.hflmc_network_fault = kwargs.get('hflmc_network_fault', bool())
        self.hfrmc_network_fault = kwargs.get('hfrmc_network_fault', bool())
        self.hrlmc_network_fault = kwargs.get('hrlmc_network_fault', bool())
        self.hrrmc_network_fault = kwargs.get('hrrmc_network_fault', bool())
        self.hfsteer_hardware_fault = kwargs.get('hfsteer_hardware_fault', bool())
        self.hrsteer_hardware_fault = kwargs.get('hrsteer_hardware_fault', bool())
        self.hfsteer_network_fault = kwargs.get('hfsteer_network_fault', bool())
        self.hrsteer_network_fault = kwargs.get('hrsteer_network_fault', bool())
        self.hbrake_hardware_fault = kwargs.get('hbrake_hardware_fault', bool())
        self.hbrake_high_tem_fault = kwargs.get('hbrake_high_tem_fault', bool())
        self.hbrake_luid_level_low = kwargs.get('hbrake_luid_level_low', bool())
        self.hbrake_network_fault = kwargs.get('hbrake_network_fault', bool())
        self.hpark_hardware_fault = kwargs.get('hpark_hardware_fault', bool())
        self.hpark_network_fault = kwargs.get('hpark_network_fault', bool())
        self.hrcu_network_fault = kwargs.get('hrcu_network_fault', bool())
        self.hrcu_weak_signal = kwargs.get('hrcu_weak_signal', bool())
        self.hrcu_elec_low_alarm = kwargs.get('hrcu_elec_low_alarm', bool())
        self.hbms_network_fault = kwargs.get('hbms_network_fault', bool())
        self.hbms_insulationfault = kwargs.get('hbms_insulationfault', bool())
        self.hbms_ocv_cell = kwargs.get('hbms_ocv_cell', bool())
        self.hbms_odv_cell = kwargs.get('hbms_odv_cell', bool())
        self.hbms_ocv_batt = kwargs.get('hbms_ocv_batt', bool())
        self.hbms_odv_batt = kwargs.get('hbms_odv_batt', bool())
        self.hbms_cell_volt_diff = kwargs.get('hbms_cell_volt_diff', bool())
        self.hbms_temph = kwargs.get('hbms_temph', bool())
        self.hbms_temphl = kwargs.get('hbms_temphl', bool())
        self.hbms_temph_diff = kwargs.get('hbms_temph_diff', bool())
        self.hbms_warchg_overcurrent = kwargs.get('hbms_warchg_overcurrent', bool())
        self.hbms_soch = kwargs.get('hbms_soch', bool())
        self.hbms_socl = kwargs.get('hbms_socl', bool())
        self.hbms_time_of_heating_too_long = kwargs.get('hbms_time_of_heating_too_long', bool())
        self.hbms_soc_break = kwargs.get('hbms_soc_break', bool())
        self.hbms_dis_char_over_cur = kwargs.get('hbms_dis_char_over_cur', bool())
        self.hbms_char_over_cur_slow = kwargs.get('hbms_char_over_cur_slow', bool())
        self.hbmsfast_char_over_cur = kwargs.get('hbmsfast_char_over_cur', bool())
        self.hbms_alm_sense_cell = kwargs.get('hbms_alm_sense_cell', bool())
        self.hbms_alm_sense_temp = kwargs.get('hbms_alm_sense_temp', bool())
        self.hbms_alm_sense_curr = kwargs.get('hbms_alm_sense_curr', bool())
        self.hbms_hvil = kwargs.get('hbms_hvil', bool())
        self.hbms_war_incan_fault = kwargs.get('hbms_war_incan_fault', bool())
        self.hbms_lst_com_withobc = kwargs.get('hbms_lst_com_withobc', bool())
        self.hbms_lst_com_with_vcu = kwargs.get('hbms_lst_com_with_vcu', bool())
        self.hbms_precharger_fault = kwargs.get('hbms_precharger_fault', bool())
        self.hbmspos_relayconglutination = kwargs.get('hbmspos_relayconglutination', bool())
        self.hbms_neg_relay_conglutination = kwargs.get('hbms_neg_relay_conglutination', bool())
        self.hdcdc_high_tem_alarm = kwargs.get('hdcdc_high_tem_alarm', bool())
        self.hdcdc_hardware_fault = kwargs.get('hdcdc_hardware_fault', bool())
        self.hdcdc_network_fault = kwargs.get('hdcdc_network_fault', bool())

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
        if self.hflmc_hardware_fault != other.hflmc_hardware_fault:
            return False
        if self.hflmc_tem_fault != other.hflmc_tem_fault:
            return False
        if self.hflm_tem_fault != other.hflm_tem_fault:
            return False
        if self.hrlmc_hardware_fault != other.hrlmc_hardware_fault:
            return False
        if self.hrlmc_tem_fault != other.hrlmc_tem_fault:
            return False
        if self.hrlm_tem_fault != other.hrlm_tem_fault:
            return False
        if self.hfrmc_hardware_fault != other.hfrmc_hardware_fault:
            return False
        if self.hfrmc_tem_fault != other.hfrmc_tem_fault:
            return False
        if self.hfrm_tem_fault != other.hfrm_tem_fault:
            return False
        if self.hrrmc_hardware_fault != other.hrrmc_hardware_fault:
            return False
        if self.hrrmc_tem_fault != other.hrrmc_tem_fault:
            return False
        if self.hrrm_tem_fault != other.hrrm_tem_fault:
            return False
        if self.hflmc_network_fault != other.hflmc_network_fault:
            return False
        if self.hfrmc_network_fault != other.hfrmc_network_fault:
            return False
        if self.hrlmc_network_fault != other.hrlmc_network_fault:
            return False
        if self.hrrmc_network_fault != other.hrrmc_network_fault:
            return False
        if self.hfsteer_hardware_fault != other.hfsteer_hardware_fault:
            return False
        if self.hrsteer_hardware_fault != other.hrsteer_hardware_fault:
            return False
        if self.hfsteer_network_fault != other.hfsteer_network_fault:
            return False
        if self.hrsteer_network_fault != other.hrsteer_network_fault:
            return False
        if self.hbrake_hardware_fault != other.hbrake_hardware_fault:
            return False
        if self.hbrake_high_tem_fault != other.hbrake_high_tem_fault:
            return False
        if self.hbrake_luid_level_low != other.hbrake_luid_level_low:
            return False
        if self.hbrake_network_fault != other.hbrake_network_fault:
            return False
        if self.hpark_hardware_fault != other.hpark_hardware_fault:
            return False
        if self.hpark_network_fault != other.hpark_network_fault:
            return False
        if self.hrcu_network_fault != other.hrcu_network_fault:
            return False
        if self.hrcu_weak_signal != other.hrcu_weak_signal:
            return False
        if self.hrcu_elec_low_alarm != other.hrcu_elec_low_alarm:
            return False
        if self.hbms_network_fault != other.hbms_network_fault:
            return False
        if self.hbms_insulationfault != other.hbms_insulationfault:
            return False
        if self.hbms_ocv_cell != other.hbms_ocv_cell:
            return False
        if self.hbms_odv_cell != other.hbms_odv_cell:
            return False
        if self.hbms_ocv_batt != other.hbms_ocv_batt:
            return False
        if self.hbms_odv_batt != other.hbms_odv_batt:
            return False
        if self.hbms_cell_volt_diff != other.hbms_cell_volt_diff:
            return False
        if self.hbms_temph != other.hbms_temph:
            return False
        if self.hbms_temphl != other.hbms_temphl:
            return False
        if self.hbms_temph_diff != other.hbms_temph_diff:
            return False
        if self.hbms_warchg_overcurrent != other.hbms_warchg_overcurrent:
            return False
        if self.hbms_soch != other.hbms_soch:
            return False
        if self.hbms_socl != other.hbms_socl:
            return False
        if self.hbms_time_of_heating_too_long != other.hbms_time_of_heating_too_long:
            return False
        if self.hbms_soc_break != other.hbms_soc_break:
            return False
        if self.hbms_dis_char_over_cur != other.hbms_dis_char_over_cur:
            return False
        if self.hbms_char_over_cur_slow != other.hbms_char_over_cur_slow:
            return False
        if self.hbmsfast_char_over_cur != other.hbmsfast_char_over_cur:
            return False
        if self.hbms_alm_sense_cell != other.hbms_alm_sense_cell:
            return False
        if self.hbms_alm_sense_temp != other.hbms_alm_sense_temp:
            return False
        if self.hbms_alm_sense_curr != other.hbms_alm_sense_curr:
            return False
        if self.hbms_hvil != other.hbms_hvil:
            return False
        if self.hbms_war_incan_fault != other.hbms_war_incan_fault:
            return False
        if self.hbms_lst_com_withobc != other.hbms_lst_com_withobc:
            return False
        if self.hbms_lst_com_with_vcu != other.hbms_lst_com_with_vcu:
            return False
        if self.hbms_precharger_fault != other.hbms_precharger_fault:
            return False
        if self.hbmspos_relayconglutination != other.hbmspos_relayconglutination:
            return False
        if self.hbms_neg_relay_conglutination != other.hbms_neg_relay_conglutination:
            return False
        if self.hdcdc_high_tem_alarm != other.hdcdc_high_tem_alarm:
            return False
        if self.hdcdc_hardware_fault != other.hdcdc_hardware_fault:
            return False
        if self.hdcdc_network_fault != other.hdcdc_network_fault:
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
    def hflmc_hardware_fault(self):
        """Message field 'hflmc_hardware_fault'."""
        return self._hflmc_hardware_fault

    @hflmc_hardware_fault.setter
    def hflmc_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hflmc_hardware_fault' field must be of type 'bool'"
        self._hflmc_hardware_fault = value

    @builtins.property
    def hflmc_tem_fault(self):
        """Message field 'hflmc_tem_fault'."""
        return self._hflmc_tem_fault

    @hflmc_tem_fault.setter
    def hflmc_tem_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hflmc_tem_fault' field must be of type 'bool'"
        self._hflmc_tem_fault = value

    @builtins.property
    def hflm_tem_fault(self):
        """Message field 'hflm_tem_fault'."""
        return self._hflm_tem_fault

    @hflm_tem_fault.setter
    def hflm_tem_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hflm_tem_fault' field must be of type 'bool'"
        self._hflm_tem_fault = value

    @builtins.property
    def hrlmc_hardware_fault(self):
        """Message field 'hrlmc_hardware_fault'."""
        return self._hrlmc_hardware_fault

    @hrlmc_hardware_fault.setter
    def hrlmc_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hrlmc_hardware_fault' field must be of type 'bool'"
        self._hrlmc_hardware_fault = value

    @builtins.property
    def hrlmc_tem_fault(self):
        """Message field 'hrlmc_tem_fault'."""
        return self._hrlmc_tem_fault

    @hrlmc_tem_fault.setter
    def hrlmc_tem_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hrlmc_tem_fault' field must be of type 'bool'"
        self._hrlmc_tem_fault = value

    @builtins.property
    def hrlm_tem_fault(self):
        """Message field 'hrlm_tem_fault'."""
        return self._hrlm_tem_fault

    @hrlm_tem_fault.setter
    def hrlm_tem_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hrlm_tem_fault' field must be of type 'bool'"
        self._hrlm_tem_fault = value

    @builtins.property
    def hfrmc_hardware_fault(self):
        """Message field 'hfrmc_hardware_fault'."""
        return self._hfrmc_hardware_fault

    @hfrmc_hardware_fault.setter
    def hfrmc_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hfrmc_hardware_fault' field must be of type 'bool'"
        self._hfrmc_hardware_fault = value

    @builtins.property
    def hfrmc_tem_fault(self):
        """Message field 'hfrmc_tem_fault'."""
        return self._hfrmc_tem_fault

    @hfrmc_tem_fault.setter
    def hfrmc_tem_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hfrmc_tem_fault' field must be of type 'bool'"
        self._hfrmc_tem_fault = value

    @builtins.property
    def hfrm_tem_fault(self):
        """Message field 'hfrm_tem_fault'."""
        return self._hfrm_tem_fault

    @hfrm_tem_fault.setter
    def hfrm_tem_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hfrm_tem_fault' field must be of type 'bool'"
        self._hfrm_tem_fault = value

    @builtins.property
    def hrrmc_hardware_fault(self):
        """Message field 'hrrmc_hardware_fault'."""
        return self._hrrmc_hardware_fault

    @hrrmc_hardware_fault.setter
    def hrrmc_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hrrmc_hardware_fault' field must be of type 'bool'"
        self._hrrmc_hardware_fault = value

    @builtins.property
    def hrrmc_tem_fault(self):
        """Message field 'hrrmc_tem_fault'."""
        return self._hrrmc_tem_fault

    @hrrmc_tem_fault.setter
    def hrrmc_tem_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hrrmc_tem_fault' field must be of type 'bool'"
        self._hrrmc_tem_fault = value

    @builtins.property
    def hrrm_tem_fault(self):
        """Message field 'hrrm_tem_fault'."""
        return self._hrrm_tem_fault

    @hrrm_tem_fault.setter
    def hrrm_tem_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hrrm_tem_fault' field must be of type 'bool'"
        self._hrrm_tem_fault = value

    @builtins.property
    def hflmc_network_fault(self):
        """Message field 'hflmc_network_fault'."""
        return self._hflmc_network_fault

    @hflmc_network_fault.setter
    def hflmc_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hflmc_network_fault' field must be of type 'bool'"
        self._hflmc_network_fault = value

    @builtins.property
    def hfrmc_network_fault(self):
        """Message field 'hfrmc_network_fault'."""
        return self._hfrmc_network_fault

    @hfrmc_network_fault.setter
    def hfrmc_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hfrmc_network_fault' field must be of type 'bool'"
        self._hfrmc_network_fault = value

    @builtins.property
    def hrlmc_network_fault(self):
        """Message field 'hrlmc_network_fault'."""
        return self._hrlmc_network_fault

    @hrlmc_network_fault.setter
    def hrlmc_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hrlmc_network_fault' field must be of type 'bool'"
        self._hrlmc_network_fault = value

    @builtins.property
    def hrrmc_network_fault(self):
        """Message field 'hrrmc_network_fault'."""
        return self._hrrmc_network_fault

    @hrrmc_network_fault.setter
    def hrrmc_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hrrmc_network_fault' field must be of type 'bool'"
        self._hrrmc_network_fault = value

    @builtins.property
    def hfsteer_hardware_fault(self):
        """Message field 'hfsteer_hardware_fault'."""
        return self._hfsteer_hardware_fault

    @hfsteer_hardware_fault.setter
    def hfsteer_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hfsteer_hardware_fault' field must be of type 'bool'"
        self._hfsteer_hardware_fault = value

    @builtins.property
    def hrsteer_hardware_fault(self):
        """Message field 'hrsteer_hardware_fault'."""
        return self._hrsteer_hardware_fault

    @hrsteer_hardware_fault.setter
    def hrsteer_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hrsteer_hardware_fault' field must be of type 'bool'"
        self._hrsteer_hardware_fault = value

    @builtins.property
    def hfsteer_network_fault(self):
        """Message field 'hfsteer_network_fault'."""
        return self._hfsteer_network_fault

    @hfsteer_network_fault.setter
    def hfsteer_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hfsteer_network_fault' field must be of type 'bool'"
        self._hfsteer_network_fault = value

    @builtins.property
    def hrsteer_network_fault(self):
        """Message field 'hrsteer_network_fault'."""
        return self._hrsteer_network_fault

    @hrsteer_network_fault.setter
    def hrsteer_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hrsteer_network_fault' field must be of type 'bool'"
        self._hrsteer_network_fault = value

    @builtins.property
    def hbrake_hardware_fault(self):
        """Message field 'hbrake_hardware_fault'."""
        return self._hbrake_hardware_fault

    @hbrake_hardware_fault.setter
    def hbrake_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbrake_hardware_fault' field must be of type 'bool'"
        self._hbrake_hardware_fault = value

    @builtins.property
    def hbrake_high_tem_fault(self):
        """Message field 'hbrake_high_tem_fault'."""
        return self._hbrake_high_tem_fault

    @hbrake_high_tem_fault.setter
    def hbrake_high_tem_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbrake_high_tem_fault' field must be of type 'bool'"
        self._hbrake_high_tem_fault = value

    @builtins.property
    def hbrake_luid_level_low(self):
        """Message field 'hbrake_luid_level_low'."""
        return self._hbrake_luid_level_low

    @hbrake_luid_level_low.setter
    def hbrake_luid_level_low(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbrake_luid_level_low' field must be of type 'bool'"
        self._hbrake_luid_level_low = value

    @builtins.property
    def hbrake_network_fault(self):
        """Message field 'hbrake_network_fault'."""
        return self._hbrake_network_fault

    @hbrake_network_fault.setter
    def hbrake_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbrake_network_fault' field must be of type 'bool'"
        self._hbrake_network_fault = value

    @builtins.property
    def hpark_hardware_fault(self):
        """Message field 'hpark_hardware_fault'."""
        return self._hpark_hardware_fault

    @hpark_hardware_fault.setter
    def hpark_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hpark_hardware_fault' field must be of type 'bool'"
        self._hpark_hardware_fault = value

    @builtins.property
    def hpark_network_fault(self):
        """Message field 'hpark_network_fault'."""
        return self._hpark_network_fault

    @hpark_network_fault.setter
    def hpark_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hpark_network_fault' field must be of type 'bool'"
        self._hpark_network_fault = value

    @builtins.property
    def hrcu_network_fault(self):
        """Message field 'hrcu_network_fault'."""
        return self._hrcu_network_fault

    @hrcu_network_fault.setter
    def hrcu_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hrcu_network_fault' field must be of type 'bool'"
        self._hrcu_network_fault = value

    @builtins.property
    def hrcu_weak_signal(self):
        """Message field 'hrcu_weak_signal'."""
        return self._hrcu_weak_signal

    @hrcu_weak_signal.setter
    def hrcu_weak_signal(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hrcu_weak_signal' field must be of type 'bool'"
        self._hrcu_weak_signal = value

    @builtins.property
    def hrcu_elec_low_alarm(self):
        """Message field 'hrcu_elec_low_alarm'."""
        return self._hrcu_elec_low_alarm

    @hrcu_elec_low_alarm.setter
    def hrcu_elec_low_alarm(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hrcu_elec_low_alarm' field must be of type 'bool'"
        self._hrcu_elec_low_alarm = value

    @builtins.property
    def hbms_network_fault(self):
        """Message field 'hbms_network_fault'."""
        return self._hbms_network_fault

    @hbms_network_fault.setter
    def hbms_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_network_fault' field must be of type 'bool'"
        self._hbms_network_fault = value

    @builtins.property
    def hbms_insulationfault(self):
        """Message field 'hbms_insulationfault'."""
        return self._hbms_insulationfault

    @hbms_insulationfault.setter
    def hbms_insulationfault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_insulationfault' field must be of type 'bool'"
        self._hbms_insulationfault = value

    @builtins.property
    def hbms_ocv_cell(self):
        """Message field 'hbms_ocv_cell'."""
        return self._hbms_ocv_cell

    @hbms_ocv_cell.setter
    def hbms_ocv_cell(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_ocv_cell' field must be of type 'bool'"
        self._hbms_ocv_cell = value

    @builtins.property
    def hbms_odv_cell(self):
        """Message field 'hbms_odv_cell'."""
        return self._hbms_odv_cell

    @hbms_odv_cell.setter
    def hbms_odv_cell(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_odv_cell' field must be of type 'bool'"
        self._hbms_odv_cell = value

    @builtins.property
    def hbms_ocv_batt(self):
        """Message field 'hbms_ocv_batt'."""
        return self._hbms_ocv_batt

    @hbms_ocv_batt.setter
    def hbms_ocv_batt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_ocv_batt' field must be of type 'bool'"
        self._hbms_ocv_batt = value

    @builtins.property
    def hbms_odv_batt(self):
        """Message field 'hbms_odv_batt'."""
        return self._hbms_odv_batt

    @hbms_odv_batt.setter
    def hbms_odv_batt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_odv_batt' field must be of type 'bool'"
        self._hbms_odv_batt = value

    @builtins.property
    def hbms_cell_volt_diff(self):
        """Message field 'hbms_cell_volt_diff'."""
        return self._hbms_cell_volt_diff

    @hbms_cell_volt_diff.setter
    def hbms_cell_volt_diff(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_cell_volt_diff' field must be of type 'bool'"
        self._hbms_cell_volt_diff = value

    @builtins.property
    def hbms_temph(self):
        """Message field 'hbms_temph'."""
        return self._hbms_temph

    @hbms_temph.setter
    def hbms_temph(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_temph' field must be of type 'bool'"
        self._hbms_temph = value

    @builtins.property
    def hbms_temphl(self):
        """Message field 'hbms_temphl'."""
        return self._hbms_temphl

    @hbms_temphl.setter
    def hbms_temphl(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_temphl' field must be of type 'bool'"
        self._hbms_temphl = value

    @builtins.property
    def hbms_temph_diff(self):
        """Message field 'hbms_temph_diff'."""
        return self._hbms_temph_diff

    @hbms_temph_diff.setter
    def hbms_temph_diff(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_temph_diff' field must be of type 'bool'"
        self._hbms_temph_diff = value

    @builtins.property
    def hbms_warchg_overcurrent(self):
        """Message field 'hbms_warchg_overcurrent'."""
        return self._hbms_warchg_overcurrent

    @hbms_warchg_overcurrent.setter
    def hbms_warchg_overcurrent(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_warchg_overcurrent' field must be of type 'bool'"
        self._hbms_warchg_overcurrent = value

    @builtins.property
    def hbms_soch(self):
        """Message field 'hbms_soch'."""
        return self._hbms_soch

    @hbms_soch.setter
    def hbms_soch(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_soch' field must be of type 'bool'"
        self._hbms_soch = value

    @builtins.property
    def hbms_socl(self):
        """Message field 'hbms_socl'."""
        return self._hbms_socl

    @hbms_socl.setter
    def hbms_socl(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_socl' field must be of type 'bool'"
        self._hbms_socl = value

    @builtins.property
    def hbms_time_of_heating_too_long(self):
        """Message field 'hbms_time_of_heating_too_long'."""
        return self._hbms_time_of_heating_too_long

    @hbms_time_of_heating_too_long.setter
    def hbms_time_of_heating_too_long(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_time_of_heating_too_long' field must be of type 'bool'"
        self._hbms_time_of_heating_too_long = value

    @builtins.property
    def hbms_soc_break(self):
        """Message field 'hbms_soc_break'."""
        return self._hbms_soc_break

    @hbms_soc_break.setter
    def hbms_soc_break(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_soc_break' field must be of type 'bool'"
        self._hbms_soc_break = value

    @builtins.property
    def hbms_dis_char_over_cur(self):
        """Message field 'hbms_dis_char_over_cur'."""
        return self._hbms_dis_char_over_cur

    @hbms_dis_char_over_cur.setter
    def hbms_dis_char_over_cur(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_dis_char_over_cur' field must be of type 'bool'"
        self._hbms_dis_char_over_cur = value

    @builtins.property
    def hbms_char_over_cur_slow(self):
        """Message field 'hbms_char_over_cur_slow'."""
        return self._hbms_char_over_cur_slow

    @hbms_char_over_cur_slow.setter
    def hbms_char_over_cur_slow(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_char_over_cur_slow' field must be of type 'bool'"
        self._hbms_char_over_cur_slow = value

    @builtins.property
    def hbmsfast_char_over_cur(self):
        """Message field 'hbmsfast_char_over_cur'."""
        return self._hbmsfast_char_over_cur

    @hbmsfast_char_over_cur.setter
    def hbmsfast_char_over_cur(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbmsfast_char_over_cur' field must be of type 'bool'"
        self._hbmsfast_char_over_cur = value

    @builtins.property
    def hbms_alm_sense_cell(self):
        """Message field 'hbms_alm_sense_cell'."""
        return self._hbms_alm_sense_cell

    @hbms_alm_sense_cell.setter
    def hbms_alm_sense_cell(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_alm_sense_cell' field must be of type 'bool'"
        self._hbms_alm_sense_cell = value

    @builtins.property
    def hbms_alm_sense_temp(self):
        """Message field 'hbms_alm_sense_temp'."""
        return self._hbms_alm_sense_temp

    @hbms_alm_sense_temp.setter
    def hbms_alm_sense_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_alm_sense_temp' field must be of type 'bool'"
        self._hbms_alm_sense_temp = value

    @builtins.property
    def hbms_alm_sense_curr(self):
        """Message field 'hbms_alm_sense_curr'."""
        return self._hbms_alm_sense_curr

    @hbms_alm_sense_curr.setter
    def hbms_alm_sense_curr(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_alm_sense_curr' field must be of type 'bool'"
        self._hbms_alm_sense_curr = value

    @builtins.property
    def hbms_hvil(self):
        """Message field 'hbms_hvil'."""
        return self._hbms_hvil

    @hbms_hvil.setter
    def hbms_hvil(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_hvil' field must be of type 'bool'"
        self._hbms_hvil = value

    @builtins.property
    def hbms_war_incan_fault(self):
        """Message field 'hbms_war_incan_fault'."""
        return self._hbms_war_incan_fault

    @hbms_war_incan_fault.setter
    def hbms_war_incan_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_war_incan_fault' field must be of type 'bool'"
        self._hbms_war_incan_fault = value

    @builtins.property
    def hbms_lst_com_withobc(self):
        """Message field 'hbms_lst_com_withobc'."""
        return self._hbms_lst_com_withobc

    @hbms_lst_com_withobc.setter
    def hbms_lst_com_withobc(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_lst_com_withobc' field must be of type 'bool'"
        self._hbms_lst_com_withobc = value

    @builtins.property
    def hbms_lst_com_with_vcu(self):
        """Message field 'hbms_lst_com_with_vcu'."""
        return self._hbms_lst_com_with_vcu

    @hbms_lst_com_with_vcu.setter
    def hbms_lst_com_with_vcu(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_lst_com_with_vcu' field must be of type 'bool'"
        self._hbms_lst_com_with_vcu = value

    @builtins.property
    def hbms_precharger_fault(self):
        """Message field 'hbms_precharger_fault'."""
        return self._hbms_precharger_fault

    @hbms_precharger_fault.setter
    def hbms_precharger_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_precharger_fault' field must be of type 'bool'"
        self._hbms_precharger_fault = value

    @builtins.property
    def hbmspos_relayconglutination(self):
        """Message field 'hbmspos_relayconglutination'."""
        return self._hbmspos_relayconglutination

    @hbmspos_relayconglutination.setter
    def hbmspos_relayconglutination(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbmspos_relayconglutination' field must be of type 'bool'"
        self._hbmspos_relayconglutination = value

    @builtins.property
    def hbms_neg_relay_conglutination(self):
        """Message field 'hbms_neg_relay_conglutination'."""
        return self._hbms_neg_relay_conglutination

    @hbms_neg_relay_conglutination.setter
    def hbms_neg_relay_conglutination(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbms_neg_relay_conglutination' field must be of type 'bool'"
        self._hbms_neg_relay_conglutination = value

    @builtins.property
    def hdcdc_high_tem_alarm(self):
        """Message field 'hdcdc_high_tem_alarm'."""
        return self._hdcdc_high_tem_alarm

    @hdcdc_high_tem_alarm.setter
    def hdcdc_high_tem_alarm(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hdcdc_high_tem_alarm' field must be of type 'bool'"
        self._hdcdc_high_tem_alarm = value

    @builtins.property
    def hdcdc_hardware_fault(self):
        """Message field 'hdcdc_hardware_fault'."""
        return self._hdcdc_hardware_fault

    @hdcdc_hardware_fault.setter
    def hdcdc_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hdcdc_hardware_fault' field must be of type 'bool'"
        self._hdcdc_hardware_fault = value

    @builtins.property
    def hdcdc_network_fault(self):
        """Message field 'hdcdc_network_fault'."""
        return self._hdcdc_network_fault

    @hdcdc_network_fault.setter
    def hdcdc_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hdcdc_network_fault' field must be of type 'bool'"
        self._hdcdc_network_fault = value
