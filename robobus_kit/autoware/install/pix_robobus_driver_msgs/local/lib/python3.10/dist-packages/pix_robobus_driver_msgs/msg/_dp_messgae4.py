# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pix_robobus_driver_msgs:msg/DpMessgae4.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DpMessgae4(type):
    """Metaclass of message 'DpMessgae4'."""

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
                'pix_robobus_driver_msgs.msg.DpMessgae4')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dp_messgae4
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dp_messgae4
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dp_messgae4
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dp_messgae4
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dp_messgae4

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


class DpMessgae4(metaclass=Metaclass_DpMessgae4):
    """Message class 'DpMessgae4'."""

    __slots__ = [
        '_header',
        '_pdu_total_cur',
        '_dp_lowbat_vol',
        '_pd_temp',
        '_auto_current1',
        '_dp_errorcode',
        '_on_sta',
        '_auto_current2',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'pdu_total_cur': 'int32',
        'dp_lowbat_vol': 'float',
        'pd_temp': 'int32',
        'auto_current1': 'int32',
        'dp_errorcode': 'int32',
        'on_sta': 'int32',
        'auto_current2': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.pdu_total_cur = kwargs.get('pdu_total_cur', int())
        self.dp_lowbat_vol = kwargs.get('dp_lowbat_vol', float())
        self.pd_temp = kwargs.get('pd_temp', int())
        self.auto_current1 = kwargs.get('auto_current1', int())
        self.dp_errorcode = kwargs.get('dp_errorcode', int())
        self.on_sta = kwargs.get('on_sta', int())
        self.auto_current2 = kwargs.get('auto_current2', int())

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
        if self.pdu_total_cur != other.pdu_total_cur:
            return False
        if self.dp_lowbat_vol != other.dp_lowbat_vol:
            return False
        if self.pd_temp != other.pd_temp:
            return False
        if self.auto_current1 != other.auto_current1:
            return False
        if self.dp_errorcode != other.dp_errorcode:
            return False
        if self.on_sta != other.on_sta:
            return False
        if self.auto_current2 != other.auto_current2:
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
    def pdu_total_cur(self):
        """Message field 'pdu_total_cur'."""
        return self._pdu_total_cur

    @pdu_total_cur.setter
    def pdu_total_cur(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pdu_total_cur' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pdu_total_cur' field must be an integer in [-2147483648, 2147483647]"
        self._pdu_total_cur = value

    @builtins.property
    def dp_lowbat_vol(self):
        """Message field 'dp_lowbat_vol'."""
        return self._dp_lowbat_vol

    @dp_lowbat_vol.setter
    def dp_lowbat_vol(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dp_lowbat_vol' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dp_lowbat_vol' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dp_lowbat_vol = value

    @builtins.property
    def pd_temp(self):
        """Message field 'pd_temp'."""
        return self._pd_temp

    @pd_temp.setter
    def pd_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pd_temp' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pd_temp' field must be an integer in [-2147483648, 2147483647]"
        self._pd_temp = value

    @builtins.property
    def auto_current1(self):
        """Message field 'auto_current1'."""
        return self._auto_current1

    @auto_current1.setter
    def auto_current1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'auto_current1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'auto_current1' field must be an integer in [-2147483648, 2147483647]"
        self._auto_current1 = value

    @builtins.property
    def dp_errorcode(self):
        """Message field 'dp_errorcode'."""
        return self._dp_errorcode

    @dp_errorcode.setter
    def dp_errorcode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dp_errorcode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'dp_errorcode' field must be an integer in [-2147483648, 2147483647]"
        self._dp_errorcode = value

    @builtins.property
    def on_sta(self):
        """Message field 'on_sta'."""
        return self._on_sta

    @on_sta.setter
    def on_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'on_sta' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'on_sta' field must be an integer in [-2147483648, 2147483647]"
        self._on_sta = value

    @builtins.property
    def auto_current2(self):
        """Message field 'auto_current2'."""
        return self._auto_current2

    @auto_current2.setter
    def auto_current2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'auto_current2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'auto_current2' field must be an integer in [-2147483648, 2147483647]"
        self._auto_current2 = value
