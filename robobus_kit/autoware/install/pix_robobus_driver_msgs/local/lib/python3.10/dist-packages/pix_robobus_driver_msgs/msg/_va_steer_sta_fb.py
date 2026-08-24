# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pix_robobus_driver_msgs:msg/VaSteerStaFb.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VaSteerStaFb(type):
    """Metaclass of message 'VaSteerStaFb'."""

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
                'pix_robobus_driver_msgs.msg.VaSteerStaFb')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__va_steer_sta_fb
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__va_steer_sta_fb
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__va_steer_sta_fb
            cls._TYPE_SUPPORT = module.type_support_msg__msg__va_steer_sta_fb
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__va_steer_sta_fb

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


class VaSteerStaFb(metaclass=Metaclass_VaSteerStaFb):
    """Message class 'VaSteerStaFb'."""

    __slots__ = [
        '_header',
        '_vcu_chassis_steer_en_sta',
        '_vcu_chassis_steer_slopover',
        '_vcu_chassis_steer_work_mode',
        '_vcu_chassis_steer_mode_fb',
        '_vcu_chassis_steer_communication_lost',
        '_vcu_chassis_steer_angle_fb',
        '_vcu_chassis_steer_angle_rear_fb',
        '_vcu_chassis_steer_angle_speed_fb',
        '_vcu_steer_life',
        '_vcu_steer_check_sta',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'vcu_chassis_steer_en_sta': 'boolean',
        'vcu_chassis_steer_slopover': 'boolean',
        'vcu_chassis_steer_work_mode': 'int32',
        'vcu_chassis_steer_mode_fb': 'int32',
        'vcu_chassis_steer_communication_lost': 'boolean',
        'vcu_chassis_steer_angle_fb': 'int32',
        'vcu_chassis_steer_angle_rear_fb': 'int32',
        'vcu_chassis_steer_angle_speed_fb': 'float',
        'vcu_steer_life': 'int32',
        'vcu_steer_check_sta': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.vcu_chassis_steer_en_sta = kwargs.get('vcu_chassis_steer_en_sta', bool())
        self.vcu_chassis_steer_slopover = kwargs.get('vcu_chassis_steer_slopover', bool())
        self.vcu_chassis_steer_work_mode = kwargs.get('vcu_chassis_steer_work_mode', int())
        self.vcu_chassis_steer_mode_fb = kwargs.get('vcu_chassis_steer_mode_fb', int())
        self.vcu_chassis_steer_communication_lost = kwargs.get('vcu_chassis_steer_communication_lost', bool())
        self.vcu_chassis_steer_angle_fb = kwargs.get('vcu_chassis_steer_angle_fb', int())
        self.vcu_chassis_steer_angle_rear_fb = kwargs.get('vcu_chassis_steer_angle_rear_fb', int())
        self.vcu_chassis_steer_angle_speed_fb = kwargs.get('vcu_chassis_steer_angle_speed_fb', float())
        self.vcu_steer_life = kwargs.get('vcu_steer_life', int())
        self.vcu_steer_check_sta = kwargs.get('vcu_steer_check_sta', bool())

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
        if self.vcu_chassis_steer_en_sta != other.vcu_chassis_steer_en_sta:
            return False
        if self.vcu_chassis_steer_slopover != other.vcu_chassis_steer_slopover:
            return False
        if self.vcu_chassis_steer_work_mode != other.vcu_chassis_steer_work_mode:
            return False
        if self.vcu_chassis_steer_mode_fb != other.vcu_chassis_steer_mode_fb:
            return False
        if self.vcu_chassis_steer_communication_lost != other.vcu_chassis_steer_communication_lost:
            return False
        if self.vcu_chassis_steer_angle_fb != other.vcu_chassis_steer_angle_fb:
            return False
        if self.vcu_chassis_steer_angle_rear_fb != other.vcu_chassis_steer_angle_rear_fb:
            return False
        if self.vcu_chassis_steer_angle_speed_fb != other.vcu_chassis_steer_angle_speed_fb:
            return False
        if self.vcu_steer_life != other.vcu_steer_life:
            return False
        if self.vcu_steer_check_sta != other.vcu_steer_check_sta:
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
    def vcu_chassis_steer_en_sta(self):
        """Message field 'vcu_chassis_steer_en_sta'."""
        return self._vcu_chassis_steer_en_sta

    @vcu_chassis_steer_en_sta.setter
    def vcu_chassis_steer_en_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_chassis_steer_en_sta' field must be of type 'bool'"
        self._vcu_chassis_steer_en_sta = value

    @builtins.property
    def vcu_chassis_steer_slopover(self):
        """Message field 'vcu_chassis_steer_slopover'."""
        return self._vcu_chassis_steer_slopover

    @vcu_chassis_steer_slopover.setter
    def vcu_chassis_steer_slopover(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_chassis_steer_slopover' field must be of type 'bool'"
        self._vcu_chassis_steer_slopover = value

    @builtins.property
    def vcu_chassis_steer_work_mode(self):
        """Message field 'vcu_chassis_steer_work_mode'."""
        return self._vcu_chassis_steer_work_mode

    @vcu_chassis_steer_work_mode.setter
    def vcu_chassis_steer_work_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_chassis_steer_work_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_chassis_steer_work_mode' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_chassis_steer_work_mode = value

    @builtins.property
    def vcu_chassis_steer_mode_fb(self):
        """Message field 'vcu_chassis_steer_mode_fb'."""
        return self._vcu_chassis_steer_mode_fb

    @vcu_chassis_steer_mode_fb.setter
    def vcu_chassis_steer_mode_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_chassis_steer_mode_fb' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_chassis_steer_mode_fb' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_chassis_steer_mode_fb = value

    @builtins.property
    def vcu_chassis_steer_communication_lost(self):
        """Message field 'vcu_chassis_steer_communication_lost'."""
        return self._vcu_chassis_steer_communication_lost

    @vcu_chassis_steer_communication_lost.setter
    def vcu_chassis_steer_communication_lost(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_chassis_steer_communication_lost' field must be of type 'bool'"
        self._vcu_chassis_steer_communication_lost = value

    @builtins.property
    def vcu_chassis_steer_angle_fb(self):
        """Message field 'vcu_chassis_steer_angle_fb'."""
        return self._vcu_chassis_steer_angle_fb

    @vcu_chassis_steer_angle_fb.setter
    def vcu_chassis_steer_angle_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_chassis_steer_angle_fb' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_chassis_steer_angle_fb' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_chassis_steer_angle_fb = value

    @builtins.property
    def vcu_chassis_steer_angle_rear_fb(self):
        """Message field 'vcu_chassis_steer_angle_rear_fb'."""
        return self._vcu_chassis_steer_angle_rear_fb

    @vcu_chassis_steer_angle_rear_fb.setter
    def vcu_chassis_steer_angle_rear_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_chassis_steer_angle_rear_fb' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_chassis_steer_angle_rear_fb' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_chassis_steer_angle_rear_fb = value

    @builtins.property
    def vcu_chassis_steer_angle_speed_fb(self):
        """Message field 'vcu_chassis_steer_angle_speed_fb'."""
        return self._vcu_chassis_steer_angle_speed_fb

    @vcu_chassis_steer_angle_speed_fb.setter
    def vcu_chassis_steer_angle_speed_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vcu_chassis_steer_angle_speed_fb' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vcu_chassis_steer_angle_speed_fb' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vcu_chassis_steer_angle_speed_fb = value

    @builtins.property
    def vcu_steer_life(self):
        """Message field 'vcu_steer_life'."""
        return self._vcu_steer_life

    @vcu_steer_life.setter
    def vcu_steer_life(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_steer_life' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_steer_life' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_steer_life = value

    @builtins.property
    def vcu_steer_check_sta(self):
        """Message field 'vcu_steer_check_sta'."""
        return self._vcu_steer_check_sta

    @vcu_steer_check_sta.setter
    def vcu_steer_check_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_steer_check_sta' field must be of type 'bool'"
        self._vcu_steer_check_sta = value
