# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pix_robobus_driver_msgs:msg/HistoricalVehiclefailures2.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HistoricalVehiclefailures2(type):
    """Metaclass of message 'HistoricalVehiclefailures2'."""

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
                'pix_robobus_driver_msgs.msg.HistoricalVehiclefailures2')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__historical_vehiclefailures2
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__historical_vehiclefailures2
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__historical_vehiclefailures2
            cls._TYPE_SUPPORT = module.type_support_msg__msg__historical_vehiclefailures2
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__historical_vehiclefailures2

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


class HistoricalVehiclefailures2(metaclass=Metaclass_HistoricalVehiclefailures2):
    """Message class 'HistoricalVehiclefailures2'."""

    __slots__ = [
        '_header',
        '_hobc_network_fault',
        '_hobc_hardware_fault',
        '_hdp_hardware_fault',
        '_hdp_network_fault',
        '_hbcm_hardware_fault',
        '_hbcm_network_fault',
        '_hdcu_network_fault',
        '_hdcu_hardware_fault',
        '_havas_network_fault',
        '_havas_hardware_fault',
        '_hlis_hardware_fault',
        '_h_iis_network_fault',
        '_hac_hardware_fault',
        '_hac_network_fault',
        '_h_iv_battery_low_voltage_fault',
        '_h_iv_battery_high_voltage_fault',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'hobc_network_fault': 'boolean',
        'hobc_hardware_fault': 'boolean',
        'hdp_hardware_fault': 'boolean',
        'hdp_network_fault': 'boolean',
        'hbcm_hardware_fault': 'boolean',
        'hbcm_network_fault': 'boolean',
        'hdcu_network_fault': 'boolean',
        'hdcu_hardware_fault': 'boolean',
        'havas_network_fault': 'boolean',
        'havas_hardware_fault': 'boolean',
        'hlis_hardware_fault': 'boolean',
        'h_iis_network_fault': 'boolean',
        'hac_hardware_fault': 'boolean',
        'hac_network_fault': 'boolean',
        'h_iv_battery_low_voltage_fault': 'boolean',
        'h_iv_battery_high_voltage_fault': 'boolean',
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.hobc_network_fault = kwargs.get('hobc_network_fault', bool())
        self.hobc_hardware_fault = kwargs.get('hobc_hardware_fault', bool())
        self.hdp_hardware_fault = kwargs.get('hdp_hardware_fault', bool())
        self.hdp_network_fault = kwargs.get('hdp_network_fault', bool())
        self.hbcm_hardware_fault = kwargs.get('hbcm_hardware_fault', bool())
        self.hbcm_network_fault = kwargs.get('hbcm_network_fault', bool())
        self.hdcu_network_fault = kwargs.get('hdcu_network_fault', bool())
        self.hdcu_hardware_fault = kwargs.get('hdcu_hardware_fault', bool())
        self.havas_network_fault = kwargs.get('havas_network_fault', bool())
        self.havas_hardware_fault = kwargs.get('havas_hardware_fault', bool())
        self.hlis_hardware_fault = kwargs.get('hlis_hardware_fault', bool())
        self.h_iis_network_fault = kwargs.get('h_iis_network_fault', bool())
        self.hac_hardware_fault = kwargs.get('hac_hardware_fault', bool())
        self.hac_network_fault = kwargs.get('hac_network_fault', bool())
        self.h_iv_battery_low_voltage_fault = kwargs.get('h_iv_battery_low_voltage_fault', bool())
        self.h_iv_battery_high_voltage_fault = kwargs.get('h_iv_battery_high_voltage_fault', bool())

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
        if self.hobc_network_fault != other.hobc_network_fault:
            return False
        if self.hobc_hardware_fault != other.hobc_hardware_fault:
            return False
        if self.hdp_hardware_fault != other.hdp_hardware_fault:
            return False
        if self.hdp_network_fault != other.hdp_network_fault:
            return False
        if self.hbcm_hardware_fault != other.hbcm_hardware_fault:
            return False
        if self.hbcm_network_fault != other.hbcm_network_fault:
            return False
        if self.hdcu_network_fault != other.hdcu_network_fault:
            return False
        if self.hdcu_hardware_fault != other.hdcu_hardware_fault:
            return False
        if self.havas_network_fault != other.havas_network_fault:
            return False
        if self.havas_hardware_fault != other.havas_hardware_fault:
            return False
        if self.hlis_hardware_fault != other.hlis_hardware_fault:
            return False
        if self.h_iis_network_fault != other.h_iis_network_fault:
            return False
        if self.hac_hardware_fault != other.hac_hardware_fault:
            return False
        if self.hac_network_fault != other.hac_network_fault:
            return False
        if self.h_iv_battery_low_voltage_fault != other.h_iv_battery_low_voltage_fault:
            return False
        if self.h_iv_battery_high_voltage_fault != other.h_iv_battery_high_voltage_fault:
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
    def hobc_network_fault(self):
        """Message field 'hobc_network_fault'."""
        return self._hobc_network_fault

    @hobc_network_fault.setter
    def hobc_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hobc_network_fault' field must be of type 'bool'"
        self._hobc_network_fault = value

    @builtins.property
    def hobc_hardware_fault(self):
        """Message field 'hobc_hardware_fault'."""
        return self._hobc_hardware_fault

    @hobc_hardware_fault.setter
    def hobc_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hobc_hardware_fault' field must be of type 'bool'"
        self._hobc_hardware_fault = value

    @builtins.property
    def hdp_hardware_fault(self):
        """Message field 'hdp_hardware_fault'."""
        return self._hdp_hardware_fault

    @hdp_hardware_fault.setter
    def hdp_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hdp_hardware_fault' field must be of type 'bool'"
        self._hdp_hardware_fault = value

    @builtins.property
    def hdp_network_fault(self):
        """Message field 'hdp_network_fault'."""
        return self._hdp_network_fault

    @hdp_network_fault.setter
    def hdp_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hdp_network_fault' field must be of type 'bool'"
        self._hdp_network_fault = value

    @builtins.property
    def hbcm_hardware_fault(self):
        """Message field 'hbcm_hardware_fault'."""
        return self._hbcm_hardware_fault

    @hbcm_hardware_fault.setter
    def hbcm_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbcm_hardware_fault' field must be of type 'bool'"
        self._hbcm_hardware_fault = value

    @builtins.property
    def hbcm_network_fault(self):
        """Message field 'hbcm_network_fault'."""
        return self._hbcm_network_fault

    @hbcm_network_fault.setter
    def hbcm_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hbcm_network_fault' field must be of type 'bool'"
        self._hbcm_network_fault = value

    @builtins.property
    def hdcu_network_fault(self):
        """Message field 'hdcu_network_fault'."""
        return self._hdcu_network_fault

    @hdcu_network_fault.setter
    def hdcu_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hdcu_network_fault' field must be of type 'bool'"
        self._hdcu_network_fault = value

    @builtins.property
    def hdcu_hardware_fault(self):
        """Message field 'hdcu_hardware_fault'."""
        return self._hdcu_hardware_fault

    @hdcu_hardware_fault.setter
    def hdcu_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hdcu_hardware_fault' field must be of type 'bool'"
        self._hdcu_hardware_fault = value

    @builtins.property
    def havas_network_fault(self):
        """Message field 'havas_network_fault'."""
        return self._havas_network_fault

    @havas_network_fault.setter
    def havas_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'havas_network_fault' field must be of type 'bool'"
        self._havas_network_fault = value

    @builtins.property
    def havas_hardware_fault(self):
        """Message field 'havas_hardware_fault'."""
        return self._havas_hardware_fault

    @havas_hardware_fault.setter
    def havas_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'havas_hardware_fault' field must be of type 'bool'"
        self._havas_hardware_fault = value

    @builtins.property
    def hlis_hardware_fault(self):
        """Message field 'hlis_hardware_fault'."""
        return self._hlis_hardware_fault

    @hlis_hardware_fault.setter
    def hlis_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hlis_hardware_fault' field must be of type 'bool'"
        self._hlis_hardware_fault = value

    @builtins.property
    def h_iis_network_fault(self):
        """Message field 'h_iis_network_fault'."""
        return self._h_iis_network_fault

    @h_iis_network_fault.setter
    def h_iis_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'h_iis_network_fault' field must be of type 'bool'"
        self._h_iis_network_fault = value

    @builtins.property
    def hac_hardware_fault(self):
        """Message field 'hac_hardware_fault'."""
        return self._hac_hardware_fault

    @hac_hardware_fault.setter
    def hac_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hac_hardware_fault' field must be of type 'bool'"
        self._hac_hardware_fault = value

    @builtins.property
    def hac_network_fault(self):
        """Message field 'hac_network_fault'."""
        return self._hac_network_fault

    @hac_network_fault.setter
    def hac_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hac_network_fault' field must be of type 'bool'"
        self._hac_network_fault = value

    @builtins.property
    def h_iv_battery_low_voltage_fault(self):
        """Message field 'h_iv_battery_low_voltage_fault'."""
        return self._h_iv_battery_low_voltage_fault

    @h_iv_battery_low_voltage_fault.setter
    def h_iv_battery_low_voltage_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'h_iv_battery_low_voltage_fault' field must be of type 'bool'"
        self._h_iv_battery_low_voltage_fault = value

    @builtins.property
    def h_iv_battery_high_voltage_fault(self):
        """Message field 'h_iv_battery_high_voltage_fault'."""
        return self._h_iv_battery_high_voltage_fault

    @h_iv_battery_high_voltage_fault.setter
    def h_iv_battery_high_voltage_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'h_iv_battery_high_voltage_fault' field must be of type 'bool'"
        self._h_iv_battery_high_voltage_fault = value
