# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pix_robobus_driver_msgs:msg/DpMessgae5.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DpMessgae5(type):
    """Metaclass of message 'DpMessgae5'."""

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
                'pix_robobus_driver_msgs.msg.DpMessgae5')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dp_messgae5
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dp_messgae5
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dp_messgae5
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dp_messgae5
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dp_messgae5

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


class DpMessgae5(metaclass=Metaclass_DpMessgae5):
    """Message class 'DpMessgae5'."""

    __slots__ = [
        '_header',
        '_pwn_red_sta',
        '_pwn_green_sta',
        '_pwn_blue_sta',
        '_atmospherelightbrightness',
        '_vcu_reserve33',
        '_vcu_reserve41',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'pwn_red_sta': 'int32',
        'pwn_green_sta': 'int32',
        'pwn_blue_sta': 'int32',
        'atmospherelightbrightness': 'int32',
        'vcu_reserve33': 'boolean',
        'vcu_reserve41': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.pwn_red_sta = kwargs.get('pwn_red_sta', int())
        self.pwn_green_sta = kwargs.get('pwn_green_sta', int())
        self.pwn_blue_sta = kwargs.get('pwn_blue_sta', int())
        self.atmospherelightbrightness = kwargs.get('atmospherelightbrightness', int())
        self.vcu_reserve33 = kwargs.get('vcu_reserve33', bool())
        self.vcu_reserve41 = kwargs.get('vcu_reserve41', bool())

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
        if self.pwn_red_sta != other.pwn_red_sta:
            return False
        if self.pwn_green_sta != other.pwn_green_sta:
            return False
        if self.pwn_blue_sta != other.pwn_blue_sta:
            return False
        if self.atmospherelightbrightness != other.atmospherelightbrightness:
            return False
        if self.vcu_reserve33 != other.vcu_reserve33:
            return False
        if self.vcu_reserve41 != other.vcu_reserve41:
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
    def pwn_red_sta(self):
        """Message field 'pwn_red_sta'."""
        return self._pwn_red_sta

    @pwn_red_sta.setter
    def pwn_red_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pwn_red_sta' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pwn_red_sta' field must be an integer in [-2147483648, 2147483647]"
        self._pwn_red_sta = value

    @builtins.property
    def pwn_green_sta(self):
        """Message field 'pwn_green_sta'."""
        return self._pwn_green_sta

    @pwn_green_sta.setter
    def pwn_green_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pwn_green_sta' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pwn_green_sta' field must be an integer in [-2147483648, 2147483647]"
        self._pwn_green_sta = value

    @builtins.property
    def pwn_blue_sta(self):
        """Message field 'pwn_blue_sta'."""
        return self._pwn_blue_sta

    @pwn_blue_sta.setter
    def pwn_blue_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pwn_blue_sta' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pwn_blue_sta' field must be an integer in [-2147483648, 2147483647]"
        self._pwn_blue_sta = value

    @builtins.property
    def atmospherelightbrightness(self):
        """Message field 'atmospherelightbrightness'."""
        return self._atmospherelightbrightness

    @atmospherelightbrightness.setter
    def atmospherelightbrightness(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'atmospherelightbrightness' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'atmospherelightbrightness' field must be an integer in [-2147483648, 2147483647]"
        self._atmospherelightbrightness = value

    @builtins.property
    def vcu_reserve33(self):
        """Message field 'vcu_reserve33'."""
        return self._vcu_reserve33

    @vcu_reserve33.setter
    def vcu_reserve33(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_reserve33' field must be of type 'bool'"
        self._vcu_reserve33 = value

    @builtins.property
    def vcu_reserve41(self):
        """Message field 'vcu_reserve41'."""
        return self._vcu_reserve41

    @vcu_reserve41.setter
    def vcu_reserve41(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_reserve41' field must be of type 'bool'"
        self._vcu_reserve41 = value
