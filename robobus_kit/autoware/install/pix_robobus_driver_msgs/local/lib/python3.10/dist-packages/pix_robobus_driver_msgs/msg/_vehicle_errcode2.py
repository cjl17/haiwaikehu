# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pix_robobus_driver_msgs:msg/VehicleErrcode2.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleErrcode2(type):
    """Metaclass of message 'VehicleErrcode2'."""

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
                'pix_robobus_driver_msgs.msg.VehicleErrcode2')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_errcode2
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_errcode2
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_errcode2
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_errcode2
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_errcode2

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


class VehicleErrcode2(metaclass=Metaclass_VehicleErrcode2):
    """Message class 'VehicleErrcode2'."""

    __slots__ = [
        '_header',
        '_obc_network_fault',
        '_obc_hardware_fault',
        '_vcu_reserve1',
        '_dp_hardware_fault',
        '_dp_network_fault',
        '_vcu_reserve5',
        '_bcm_hardware_fault',
        '_bcm_network_fault',
        '_vcu_reserve11',
        '_dcu_network_fault',
        '_dcu_hardware_fault',
        '_vcu_reserve17',
        '_avas_network_fault',
        '_avas_hardware_fault',
        '_vcu_reserve18',
        '_vcu_reserve19',
        '_iis_hardware_fault',
        '_iis_network_fault',
        '_vcu_reserve20',
        '_vcu_reserve26',
        '_ac_hardware_fault',
        '_ac_network_fault',
        '_vcu_reserve32',
        '_lv_battery_low_voltage_fault',
        '_lv_battery_high_voltage_fault',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'obc_network_fault': 'boolean',
        'obc_hardware_fault': 'boolean',
        'vcu_reserve1': 'boolean',
        'dp_hardware_fault': 'boolean',
        'dp_network_fault': 'boolean',
        'vcu_reserve5': 'boolean',
        'bcm_hardware_fault': 'boolean',
        'bcm_network_fault': 'boolean',
        'vcu_reserve11': 'boolean',
        'dcu_network_fault': 'boolean',
        'dcu_hardware_fault': 'boolean',
        'vcu_reserve17': 'boolean',
        'avas_network_fault': 'boolean',
        'avas_hardware_fault': 'boolean',
        'vcu_reserve18': 'boolean',
        'vcu_reserve19': 'boolean',
        'iis_hardware_fault': 'boolean',
        'iis_network_fault': 'boolean',
        'vcu_reserve20': 'boolean',
        'vcu_reserve26': 'boolean',
        'ac_hardware_fault': 'boolean',
        'ac_network_fault': 'boolean',
        'vcu_reserve32': 'boolean',
        'lv_battery_low_voltage_fault': 'boolean',
        'lv_battery_high_voltage_fault': 'boolean',
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.obc_network_fault = kwargs.get('obc_network_fault', bool())
        self.obc_hardware_fault = kwargs.get('obc_hardware_fault', bool())
        self.vcu_reserve1 = kwargs.get('vcu_reserve1', bool())
        self.dp_hardware_fault = kwargs.get('dp_hardware_fault', bool())
        self.dp_network_fault = kwargs.get('dp_network_fault', bool())
        self.vcu_reserve5 = kwargs.get('vcu_reserve5', bool())
        self.bcm_hardware_fault = kwargs.get('bcm_hardware_fault', bool())
        self.bcm_network_fault = kwargs.get('bcm_network_fault', bool())
        self.vcu_reserve11 = kwargs.get('vcu_reserve11', bool())
        self.dcu_network_fault = kwargs.get('dcu_network_fault', bool())
        self.dcu_hardware_fault = kwargs.get('dcu_hardware_fault', bool())
        self.vcu_reserve17 = kwargs.get('vcu_reserve17', bool())
        self.avas_network_fault = kwargs.get('avas_network_fault', bool())
        self.avas_hardware_fault = kwargs.get('avas_hardware_fault', bool())
        self.vcu_reserve18 = kwargs.get('vcu_reserve18', bool())
        self.vcu_reserve19 = kwargs.get('vcu_reserve19', bool())
        self.iis_hardware_fault = kwargs.get('iis_hardware_fault', bool())
        self.iis_network_fault = kwargs.get('iis_network_fault', bool())
        self.vcu_reserve20 = kwargs.get('vcu_reserve20', bool())
        self.vcu_reserve26 = kwargs.get('vcu_reserve26', bool())
        self.ac_hardware_fault = kwargs.get('ac_hardware_fault', bool())
        self.ac_network_fault = kwargs.get('ac_network_fault', bool())
        self.vcu_reserve32 = kwargs.get('vcu_reserve32', bool())
        self.lv_battery_low_voltage_fault = kwargs.get('lv_battery_low_voltage_fault', bool())
        self.lv_battery_high_voltage_fault = kwargs.get('lv_battery_high_voltage_fault', bool())

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
        if self.obc_network_fault != other.obc_network_fault:
            return False
        if self.obc_hardware_fault != other.obc_hardware_fault:
            return False
        if self.vcu_reserve1 != other.vcu_reserve1:
            return False
        if self.dp_hardware_fault != other.dp_hardware_fault:
            return False
        if self.dp_network_fault != other.dp_network_fault:
            return False
        if self.vcu_reserve5 != other.vcu_reserve5:
            return False
        if self.bcm_hardware_fault != other.bcm_hardware_fault:
            return False
        if self.bcm_network_fault != other.bcm_network_fault:
            return False
        if self.vcu_reserve11 != other.vcu_reserve11:
            return False
        if self.dcu_network_fault != other.dcu_network_fault:
            return False
        if self.dcu_hardware_fault != other.dcu_hardware_fault:
            return False
        if self.vcu_reserve17 != other.vcu_reserve17:
            return False
        if self.avas_network_fault != other.avas_network_fault:
            return False
        if self.avas_hardware_fault != other.avas_hardware_fault:
            return False
        if self.vcu_reserve18 != other.vcu_reserve18:
            return False
        if self.vcu_reserve19 != other.vcu_reserve19:
            return False
        if self.iis_hardware_fault != other.iis_hardware_fault:
            return False
        if self.iis_network_fault != other.iis_network_fault:
            return False
        if self.vcu_reserve20 != other.vcu_reserve20:
            return False
        if self.vcu_reserve26 != other.vcu_reserve26:
            return False
        if self.ac_hardware_fault != other.ac_hardware_fault:
            return False
        if self.ac_network_fault != other.ac_network_fault:
            return False
        if self.vcu_reserve32 != other.vcu_reserve32:
            return False
        if self.lv_battery_low_voltage_fault != other.lv_battery_low_voltage_fault:
            return False
        if self.lv_battery_high_voltage_fault != other.lv_battery_high_voltage_fault:
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
    def obc_network_fault(self):
        """Message field 'obc_network_fault'."""
        return self._obc_network_fault

    @obc_network_fault.setter
    def obc_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'obc_network_fault' field must be of type 'bool'"
        self._obc_network_fault = value

    @builtins.property
    def obc_hardware_fault(self):
        """Message field 'obc_hardware_fault'."""
        return self._obc_hardware_fault

    @obc_hardware_fault.setter
    def obc_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'obc_hardware_fault' field must be of type 'bool'"
        self._obc_hardware_fault = value

    @builtins.property
    def vcu_reserve1(self):
        """Message field 'vcu_reserve1'."""
        return self._vcu_reserve1

    @vcu_reserve1.setter
    def vcu_reserve1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_reserve1' field must be of type 'bool'"
        self._vcu_reserve1 = value

    @builtins.property
    def dp_hardware_fault(self):
        """Message field 'dp_hardware_fault'."""
        return self._dp_hardware_fault

    @dp_hardware_fault.setter
    def dp_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dp_hardware_fault' field must be of type 'bool'"
        self._dp_hardware_fault = value

    @builtins.property
    def dp_network_fault(self):
        """Message field 'dp_network_fault'."""
        return self._dp_network_fault

    @dp_network_fault.setter
    def dp_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dp_network_fault' field must be of type 'bool'"
        self._dp_network_fault = value

    @builtins.property
    def vcu_reserve5(self):
        """Message field 'vcu_reserve5'."""
        return self._vcu_reserve5

    @vcu_reserve5.setter
    def vcu_reserve5(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_reserve5' field must be of type 'bool'"
        self._vcu_reserve5 = value

    @builtins.property
    def bcm_hardware_fault(self):
        """Message field 'bcm_hardware_fault'."""
        return self._bcm_hardware_fault

    @bcm_hardware_fault.setter
    def bcm_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bcm_hardware_fault' field must be of type 'bool'"
        self._bcm_hardware_fault = value

    @builtins.property
    def bcm_network_fault(self):
        """Message field 'bcm_network_fault'."""
        return self._bcm_network_fault

    @bcm_network_fault.setter
    def bcm_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bcm_network_fault' field must be of type 'bool'"
        self._bcm_network_fault = value

    @builtins.property
    def vcu_reserve11(self):
        """Message field 'vcu_reserve11'."""
        return self._vcu_reserve11

    @vcu_reserve11.setter
    def vcu_reserve11(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_reserve11' field must be of type 'bool'"
        self._vcu_reserve11 = value

    @builtins.property
    def dcu_network_fault(self):
        """Message field 'dcu_network_fault'."""
        return self._dcu_network_fault

    @dcu_network_fault.setter
    def dcu_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dcu_network_fault' field must be of type 'bool'"
        self._dcu_network_fault = value

    @builtins.property
    def dcu_hardware_fault(self):
        """Message field 'dcu_hardware_fault'."""
        return self._dcu_hardware_fault

    @dcu_hardware_fault.setter
    def dcu_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dcu_hardware_fault' field must be of type 'bool'"
        self._dcu_hardware_fault = value

    @builtins.property
    def vcu_reserve17(self):
        """Message field 'vcu_reserve17'."""
        return self._vcu_reserve17

    @vcu_reserve17.setter
    def vcu_reserve17(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_reserve17' field must be of type 'bool'"
        self._vcu_reserve17 = value

    @builtins.property
    def avas_network_fault(self):
        """Message field 'avas_network_fault'."""
        return self._avas_network_fault

    @avas_network_fault.setter
    def avas_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'avas_network_fault' field must be of type 'bool'"
        self._avas_network_fault = value

    @builtins.property
    def avas_hardware_fault(self):
        """Message field 'avas_hardware_fault'."""
        return self._avas_hardware_fault

    @avas_hardware_fault.setter
    def avas_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'avas_hardware_fault' field must be of type 'bool'"
        self._avas_hardware_fault = value

    @builtins.property
    def vcu_reserve18(self):
        """Message field 'vcu_reserve18'."""
        return self._vcu_reserve18

    @vcu_reserve18.setter
    def vcu_reserve18(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_reserve18' field must be of type 'bool'"
        self._vcu_reserve18 = value

    @builtins.property
    def vcu_reserve19(self):
        """Message field 'vcu_reserve19'."""
        return self._vcu_reserve19

    @vcu_reserve19.setter
    def vcu_reserve19(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_reserve19' field must be of type 'bool'"
        self._vcu_reserve19 = value

    @builtins.property
    def iis_hardware_fault(self):
        """Message field 'iis_hardware_fault'."""
        return self._iis_hardware_fault

    @iis_hardware_fault.setter
    def iis_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'iis_hardware_fault' field must be of type 'bool'"
        self._iis_hardware_fault = value

    @builtins.property
    def iis_network_fault(self):
        """Message field 'iis_network_fault'."""
        return self._iis_network_fault

    @iis_network_fault.setter
    def iis_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'iis_network_fault' field must be of type 'bool'"
        self._iis_network_fault = value

    @builtins.property
    def vcu_reserve20(self):
        """Message field 'vcu_reserve20'."""
        return self._vcu_reserve20

    @vcu_reserve20.setter
    def vcu_reserve20(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_reserve20' field must be of type 'bool'"
        self._vcu_reserve20 = value

    @builtins.property
    def vcu_reserve26(self):
        """Message field 'vcu_reserve26'."""
        return self._vcu_reserve26

    @vcu_reserve26.setter
    def vcu_reserve26(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_reserve26' field must be of type 'bool'"
        self._vcu_reserve26 = value

    @builtins.property
    def ac_hardware_fault(self):
        """Message field 'ac_hardware_fault'."""
        return self._ac_hardware_fault

    @ac_hardware_fault.setter
    def ac_hardware_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ac_hardware_fault' field must be of type 'bool'"
        self._ac_hardware_fault = value

    @builtins.property
    def ac_network_fault(self):
        """Message field 'ac_network_fault'."""
        return self._ac_network_fault

    @ac_network_fault.setter
    def ac_network_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ac_network_fault' field must be of type 'bool'"
        self._ac_network_fault = value

    @builtins.property
    def vcu_reserve32(self):
        """Message field 'vcu_reserve32'."""
        return self._vcu_reserve32

    @vcu_reserve32.setter
    def vcu_reserve32(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_reserve32' field must be of type 'bool'"
        self._vcu_reserve32 = value

    @builtins.property
    def lv_battery_low_voltage_fault(self):
        """Message field 'lv_battery_low_voltage_fault'."""
        return self._lv_battery_low_voltage_fault

    @lv_battery_low_voltage_fault.setter
    def lv_battery_low_voltage_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lv_battery_low_voltage_fault' field must be of type 'bool'"
        self._lv_battery_low_voltage_fault = value

    @builtins.property
    def lv_battery_high_voltage_fault(self):
        """Message field 'lv_battery_high_voltage_fault'."""
        return self._lv_battery_high_voltage_fault

    @lv_battery_high_voltage_fault.setter
    def lv_battery_high_voltage_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lv_battery_high_voltage_fault' field must be of type 'bool'"
        self._lv_battery_high_voltage_fault = value
