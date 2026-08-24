# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pix_robobus_driver_msgs:msg/BcmMessage4.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BcmMessage4(type):
    """Metaclass of message 'BcmMessage4'."""

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
                'pix_robobus_driver_msgs.msg.BcmMessage4')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bcm_message4
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bcm_message4
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bcm_message4
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bcm_message4
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bcm_message4

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


class BcmMessage4(metaclass=Metaclass_BcmMessage4):
    """Message class 'BcmMessage4'."""

    __slots__ = [
        '_header',
        '_ltemp',
        '_ntemp',
        '_safe_belt_sta1',
        '_safe_belt_sta2',
        '_safe_belt_sta3',
        '_safe_belt_sta4',
        '_safe_belt_sta5',
        '_safe_belt_sta6',
        '_seat_sta1',
        '_seat_sta2',
        '_seat_sta3',
        '_seat_sta4',
        '_seat_sta5',
        '_seat_sta6',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ltemp': 'int32',
        'ntemp': 'int32',
        'safe_belt_sta1': 'boolean',
        'safe_belt_sta2': 'boolean',
        'safe_belt_sta3': 'boolean',
        'safe_belt_sta4': 'boolean',
        'safe_belt_sta5': 'boolean',
        'safe_belt_sta6': 'boolean',
        'seat_sta1': 'boolean',
        'seat_sta2': 'boolean',
        'seat_sta3': 'boolean',
        'seat_sta4': 'boolean',
        'seat_sta5': 'boolean',
        'seat_sta6': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
        self.ltemp = kwargs.get('ltemp', int())
        self.ntemp = kwargs.get('ntemp', int())
        self.safe_belt_sta1 = kwargs.get('safe_belt_sta1', bool())
        self.safe_belt_sta2 = kwargs.get('safe_belt_sta2', bool())
        self.safe_belt_sta3 = kwargs.get('safe_belt_sta3', bool())
        self.safe_belt_sta4 = kwargs.get('safe_belt_sta4', bool())
        self.safe_belt_sta5 = kwargs.get('safe_belt_sta5', bool())
        self.safe_belt_sta6 = kwargs.get('safe_belt_sta6', bool())
        self.seat_sta1 = kwargs.get('seat_sta1', bool())
        self.seat_sta2 = kwargs.get('seat_sta2', bool())
        self.seat_sta3 = kwargs.get('seat_sta3', bool())
        self.seat_sta4 = kwargs.get('seat_sta4', bool())
        self.seat_sta5 = kwargs.get('seat_sta5', bool())
        self.seat_sta6 = kwargs.get('seat_sta6', bool())

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
        if self.ltemp != other.ltemp:
            return False
        if self.ntemp != other.ntemp:
            return False
        if self.safe_belt_sta1 != other.safe_belt_sta1:
            return False
        if self.safe_belt_sta2 != other.safe_belt_sta2:
            return False
        if self.safe_belt_sta3 != other.safe_belt_sta3:
            return False
        if self.safe_belt_sta4 != other.safe_belt_sta4:
            return False
        if self.safe_belt_sta5 != other.safe_belt_sta5:
            return False
        if self.safe_belt_sta6 != other.safe_belt_sta6:
            return False
        if self.seat_sta1 != other.seat_sta1:
            return False
        if self.seat_sta2 != other.seat_sta2:
            return False
        if self.seat_sta3 != other.seat_sta3:
            return False
        if self.seat_sta4 != other.seat_sta4:
            return False
        if self.seat_sta5 != other.seat_sta5:
            return False
        if self.seat_sta6 != other.seat_sta6:
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
    def ltemp(self):
        """Message field 'ltemp'."""
        return self._ltemp

    @ltemp.setter
    def ltemp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ltemp' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ltemp' field must be an integer in [-2147483648, 2147483647]"
        self._ltemp = value

    @builtins.property
    def ntemp(self):
        """Message field 'ntemp'."""
        return self._ntemp

    @ntemp.setter
    def ntemp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ntemp' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ntemp' field must be an integer in [-2147483648, 2147483647]"
        self._ntemp = value

    @builtins.property
    def safe_belt_sta1(self):
        """Message field 'safe_belt_sta1'."""
        return self._safe_belt_sta1

    @safe_belt_sta1.setter
    def safe_belt_sta1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'safe_belt_sta1' field must be of type 'bool'"
        self._safe_belt_sta1 = value

    @builtins.property
    def safe_belt_sta2(self):
        """Message field 'safe_belt_sta2'."""
        return self._safe_belt_sta2

    @safe_belt_sta2.setter
    def safe_belt_sta2(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'safe_belt_sta2' field must be of type 'bool'"
        self._safe_belt_sta2 = value

    @builtins.property
    def safe_belt_sta3(self):
        """Message field 'safe_belt_sta3'."""
        return self._safe_belt_sta3

    @safe_belt_sta3.setter
    def safe_belt_sta3(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'safe_belt_sta3' field must be of type 'bool'"
        self._safe_belt_sta3 = value

    @builtins.property
    def safe_belt_sta4(self):
        """Message field 'safe_belt_sta4'."""
        return self._safe_belt_sta4

    @safe_belt_sta4.setter
    def safe_belt_sta4(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'safe_belt_sta4' field must be of type 'bool'"
        self._safe_belt_sta4 = value

    @builtins.property
    def safe_belt_sta5(self):
        """Message field 'safe_belt_sta5'."""
        return self._safe_belt_sta5

    @safe_belt_sta5.setter
    def safe_belt_sta5(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'safe_belt_sta5' field must be of type 'bool'"
        self._safe_belt_sta5 = value

    @builtins.property
    def safe_belt_sta6(self):
        """Message field 'safe_belt_sta6'."""
        return self._safe_belt_sta6

    @safe_belt_sta6.setter
    def safe_belt_sta6(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'safe_belt_sta6' field must be of type 'bool'"
        self._safe_belt_sta6 = value

    @builtins.property
    def seat_sta1(self):
        """Message field 'seat_sta1'."""
        return self._seat_sta1

    @seat_sta1.setter
    def seat_sta1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'seat_sta1' field must be of type 'bool'"
        self._seat_sta1 = value

    @builtins.property
    def seat_sta2(self):
        """Message field 'seat_sta2'."""
        return self._seat_sta2

    @seat_sta2.setter
    def seat_sta2(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'seat_sta2' field must be of type 'bool'"
        self._seat_sta2 = value

    @builtins.property
    def seat_sta3(self):
        """Message field 'seat_sta3'."""
        return self._seat_sta3

    @seat_sta3.setter
    def seat_sta3(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'seat_sta3' field must be of type 'bool'"
        self._seat_sta3 = value

    @builtins.property
    def seat_sta4(self):
        """Message field 'seat_sta4'."""
        return self._seat_sta4

    @seat_sta4.setter
    def seat_sta4(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'seat_sta4' field must be of type 'bool'"
        self._seat_sta4 = value

    @builtins.property
    def seat_sta5(self):
        """Message field 'seat_sta5'."""
        return self._seat_sta5

    @seat_sta5.setter
    def seat_sta5(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'seat_sta5' field must be of type 'bool'"
        self._seat_sta5 = value

    @builtins.property
    def seat_sta6(self):
        """Message field 'seat_sta6'."""
        return self._seat_sta6

    @seat_sta6.setter
    def seat_sta6(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'seat_sta6' field must be of type 'bool'"
        self._seat_sta6 = value
