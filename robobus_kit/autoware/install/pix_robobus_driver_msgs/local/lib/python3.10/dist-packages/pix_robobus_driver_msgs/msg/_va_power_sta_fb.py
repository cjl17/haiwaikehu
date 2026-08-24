# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pix_robobus_driver_msgs:msg/VaPowerStaFb.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VaPowerStaFb(type):
    """Metaclass of message 'VaPowerStaFb'."""

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
                'pix_robobus_driver_msgs.msg.VaPowerStaFb')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__va_power_sta_fb
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__va_power_sta_fb
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__va_power_sta_fb
            cls._TYPE_SUPPORT = module.type_support_msg__msg__va_power_sta_fb
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__va_power_sta_fb

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


class VaPowerStaFb(metaclass=Metaclass_VaPowerStaFb):
    """Message class 'VaPowerStaFb'."""

    __slots__ = [
        '_header',
        '_vcu_chassis_bms_reserved1',
        '_vcu_chassis_power_charge_sta',
        '_vcu_chassis_power_charge_sock_sta',
        '_vcu_chassis_power_soc_fb',
        '_vcu_chassis_power_volt_fb',
        '_vcu_chassis_power_curr_fb',
        '_vcu_chassis_bms_max_temp',
        '_vcu_chassis_bms_reserved2',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'vcu_chassis_bms_reserved1': 'int32',
        'vcu_chassis_power_charge_sta': 'int32',
        'vcu_chassis_power_charge_sock_sta': 'boolean',
        'vcu_chassis_power_soc_fb': 'int32',
        'vcu_chassis_power_volt_fb': 'float',
        'vcu_chassis_power_curr_fb': 'float',
        'vcu_chassis_bms_max_temp': 'int32',
        'vcu_chassis_bms_reserved2': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.vcu_chassis_bms_reserved1 = kwargs.get('vcu_chassis_bms_reserved1', int())
        self.vcu_chassis_power_charge_sta = kwargs.get('vcu_chassis_power_charge_sta', int())
        self.vcu_chassis_power_charge_sock_sta = kwargs.get('vcu_chassis_power_charge_sock_sta', bool())
        self.vcu_chassis_power_soc_fb = kwargs.get('vcu_chassis_power_soc_fb', int())
        self.vcu_chassis_power_volt_fb = kwargs.get('vcu_chassis_power_volt_fb', float())
        self.vcu_chassis_power_curr_fb = kwargs.get('vcu_chassis_power_curr_fb', float())
        self.vcu_chassis_bms_max_temp = kwargs.get('vcu_chassis_bms_max_temp', int())
        self.vcu_chassis_bms_reserved2 = kwargs.get('vcu_chassis_bms_reserved2', int())

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
        if self.vcu_chassis_bms_reserved1 != other.vcu_chassis_bms_reserved1:
            return False
        if self.vcu_chassis_power_charge_sta != other.vcu_chassis_power_charge_sta:
            return False
        if self.vcu_chassis_power_charge_sock_sta != other.vcu_chassis_power_charge_sock_sta:
            return False
        if self.vcu_chassis_power_soc_fb != other.vcu_chassis_power_soc_fb:
            return False
        if self.vcu_chassis_power_volt_fb != other.vcu_chassis_power_volt_fb:
            return False
        if self.vcu_chassis_power_curr_fb != other.vcu_chassis_power_curr_fb:
            return False
        if self.vcu_chassis_bms_max_temp != other.vcu_chassis_bms_max_temp:
            return False
        if self.vcu_chassis_bms_reserved2 != other.vcu_chassis_bms_reserved2:
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
    def vcu_chassis_bms_reserved1(self):
        """Message field 'vcu_chassis_bms_reserved1'."""
        return self._vcu_chassis_bms_reserved1

    @vcu_chassis_bms_reserved1.setter
    def vcu_chassis_bms_reserved1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_chassis_bms_reserved1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_chassis_bms_reserved1' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_chassis_bms_reserved1 = value

    @builtins.property
    def vcu_chassis_power_charge_sta(self):
        """Message field 'vcu_chassis_power_charge_sta'."""
        return self._vcu_chassis_power_charge_sta

    @vcu_chassis_power_charge_sta.setter
    def vcu_chassis_power_charge_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_chassis_power_charge_sta' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_chassis_power_charge_sta' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_chassis_power_charge_sta = value

    @builtins.property
    def vcu_chassis_power_charge_sock_sta(self):
        """Message field 'vcu_chassis_power_charge_sock_sta'."""
        return self._vcu_chassis_power_charge_sock_sta

    @vcu_chassis_power_charge_sock_sta.setter
    def vcu_chassis_power_charge_sock_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_chassis_power_charge_sock_sta' field must be of type 'bool'"
        self._vcu_chassis_power_charge_sock_sta = value

    @builtins.property
    def vcu_chassis_power_soc_fb(self):
        """Message field 'vcu_chassis_power_soc_fb'."""
        return self._vcu_chassis_power_soc_fb

    @vcu_chassis_power_soc_fb.setter
    def vcu_chassis_power_soc_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_chassis_power_soc_fb' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_chassis_power_soc_fb' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_chassis_power_soc_fb = value

    @builtins.property
    def vcu_chassis_power_volt_fb(self):
        """Message field 'vcu_chassis_power_volt_fb'."""
        return self._vcu_chassis_power_volt_fb

    @vcu_chassis_power_volt_fb.setter
    def vcu_chassis_power_volt_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vcu_chassis_power_volt_fb' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vcu_chassis_power_volt_fb' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vcu_chassis_power_volt_fb = value

    @builtins.property
    def vcu_chassis_power_curr_fb(self):
        """Message field 'vcu_chassis_power_curr_fb'."""
        return self._vcu_chassis_power_curr_fb

    @vcu_chassis_power_curr_fb.setter
    def vcu_chassis_power_curr_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vcu_chassis_power_curr_fb' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vcu_chassis_power_curr_fb' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vcu_chassis_power_curr_fb = value

    @builtins.property
    def vcu_chassis_bms_max_temp(self):
        """Message field 'vcu_chassis_bms_max_temp'."""
        return self._vcu_chassis_bms_max_temp

    @vcu_chassis_bms_max_temp.setter
    def vcu_chassis_bms_max_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_chassis_bms_max_temp' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_chassis_bms_max_temp' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_chassis_bms_max_temp = value

    @builtins.property
    def vcu_chassis_bms_reserved2(self):
        """Message field 'vcu_chassis_bms_reserved2'."""
        return self._vcu_chassis_bms_reserved2

    @vcu_chassis_bms_reserved2.setter
    def vcu_chassis_bms_reserved2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_chassis_bms_reserved2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_chassis_bms_reserved2' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_chassis_bms_reserved2 = value
