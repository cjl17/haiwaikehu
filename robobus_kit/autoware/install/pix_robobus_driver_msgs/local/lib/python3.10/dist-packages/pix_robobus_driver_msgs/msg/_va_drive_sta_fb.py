# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pix_robobus_driver_msgs:msg/VaDriveStaFb.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VaDriveStaFb(type):
    """Metaclass of message 'VaDriveStaFb'."""

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
                'pix_robobus_driver_msgs.msg.VaDriveStaFb')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__va_drive_sta_fb
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__va_drive_sta_fb
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__va_drive_sta_fb
            cls._TYPE_SUPPORT = module.type_support_msg__msg__va_drive_sta_fb
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__va_drive_sta_fb

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


class VaDriveStaFb(metaclass=Metaclass_VaDriveStaFb):
    """Message class 'VaDriveStaFb'."""

    __slots__ = [
        '_header',
        '_vcu_chassis_driver_en_sta',
        '_vcu_chassis_diver_slopover',
        '_vcu_chassis_driver_mode_sta',
        '_vcu_chassis_gear_fb',
        '_vcu_chassis4_wd_mode_fb',
        '_vcu_chassis_speed_fb',
        '_vcu_chassis_throttle_pald_fb',
        '_vcu_chassis_throttle_pedal_req_fb',
        '_vcu_chassis_acceleration_fb',
        '_vcu_drive_life',
        '_vcu_drive_check_sta',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'vcu_chassis_driver_en_sta': 'boolean',
        'vcu_chassis_diver_slopover': 'boolean',
        'vcu_chassis_driver_mode_sta': 'int32',
        'vcu_chassis_gear_fb': 'int32',
        'vcu_chassis4_wd_mode_fb': 'int32',
        'vcu_chassis_speed_fb': 'float',
        'vcu_chassis_throttle_pald_fb': 'float',
        'vcu_chassis_throttle_pedal_req_fb': 'boolean',
        'vcu_chassis_acceleration_fb': 'float',
        'vcu_drive_life': 'int32',
        'vcu_drive_check_sta': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.vcu_chassis_driver_en_sta = kwargs.get('vcu_chassis_driver_en_sta', bool())
        self.vcu_chassis_diver_slopover = kwargs.get('vcu_chassis_diver_slopover', bool())
        self.vcu_chassis_driver_mode_sta = kwargs.get('vcu_chassis_driver_mode_sta', int())
        self.vcu_chassis_gear_fb = kwargs.get('vcu_chassis_gear_fb', int())
        self.vcu_chassis4_wd_mode_fb = kwargs.get('vcu_chassis4_wd_mode_fb', int())
        self.vcu_chassis_speed_fb = kwargs.get('vcu_chassis_speed_fb', float())
        self.vcu_chassis_throttle_pald_fb = kwargs.get('vcu_chassis_throttle_pald_fb', float())
        self.vcu_chassis_throttle_pedal_req_fb = kwargs.get('vcu_chassis_throttle_pedal_req_fb', bool())
        self.vcu_chassis_acceleration_fb = kwargs.get('vcu_chassis_acceleration_fb', float())
        self.vcu_drive_life = kwargs.get('vcu_drive_life', int())
        self.vcu_drive_check_sta = kwargs.get('vcu_drive_check_sta', bool())

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
        if self.vcu_chassis_driver_en_sta != other.vcu_chassis_driver_en_sta:
            return False
        if self.vcu_chassis_diver_slopover != other.vcu_chassis_diver_slopover:
            return False
        if self.vcu_chassis_driver_mode_sta != other.vcu_chassis_driver_mode_sta:
            return False
        if self.vcu_chassis_gear_fb != other.vcu_chassis_gear_fb:
            return False
        if self.vcu_chassis4_wd_mode_fb != other.vcu_chassis4_wd_mode_fb:
            return False
        if self.vcu_chassis_speed_fb != other.vcu_chassis_speed_fb:
            return False
        if self.vcu_chassis_throttle_pald_fb != other.vcu_chassis_throttle_pald_fb:
            return False
        if self.vcu_chassis_throttle_pedal_req_fb != other.vcu_chassis_throttle_pedal_req_fb:
            return False
        if self.vcu_chassis_acceleration_fb != other.vcu_chassis_acceleration_fb:
            return False
        if self.vcu_drive_life != other.vcu_drive_life:
            return False
        if self.vcu_drive_check_sta != other.vcu_drive_check_sta:
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
    def vcu_chassis_driver_en_sta(self):
        """Message field 'vcu_chassis_driver_en_sta'."""
        return self._vcu_chassis_driver_en_sta

    @vcu_chassis_driver_en_sta.setter
    def vcu_chassis_driver_en_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_chassis_driver_en_sta' field must be of type 'bool'"
        self._vcu_chassis_driver_en_sta = value

    @builtins.property
    def vcu_chassis_diver_slopover(self):
        """Message field 'vcu_chassis_diver_slopover'."""
        return self._vcu_chassis_diver_slopover

    @vcu_chassis_diver_slopover.setter
    def vcu_chassis_diver_slopover(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_chassis_diver_slopover' field must be of type 'bool'"
        self._vcu_chassis_diver_slopover = value

    @builtins.property
    def vcu_chassis_driver_mode_sta(self):
        """Message field 'vcu_chassis_driver_mode_sta'."""
        return self._vcu_chassis_driver_mode_sta

    @vcu_chassis_driver_mode_sta.setter
    def vcu_chassis_driver_mode_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_chassis_driver_mode_sta' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_chassis_driver_mode_sta' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_chassis_driver_mode_sta = value

    @builtins.property
    def vcu_chassis_gear_fb(self):
        """Message field 'vcu_chassis_gear_fb'."""
        return self._vcu_chassis_gear_fb

    @vcu_chassis_gear_fb.setter
    def vcu_chassis_gear_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_chassis_gear_fb' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_chassis_gear_fb' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_chassis_gear_fb = value

    @builtins.property
    def vcu_chassis4_wd_mode_fb(self):
        """Message field 'vcu_chassis4_wd_mode_fb'."""
        return self._vcu_chassis4_wd_mode_fb

    @vcu_chassis4_wd_mode_fb.setter
    def vcu_chassis4_wd_mode_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_chassis4_wd_mode_fb' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_chassis4_wd_mode_fb' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_chassis4_wd_mode_fb = value

    @builtins.property
    def vcu_chassis_speed_fb(self):
        """Message field 'vcu_chassis_speed_fb'."""
        return self._vcu_chassis_speed_fb

    @vcu_chassis_speed_fb.setter
    def vcu_chassis_speed_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vcu_chassis_speed_fb' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vcu_chassis_speed_fb' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vcu_chassis_speed_fb = value

    @builtins.property
    def vcu_chassis_throttle_pald_fb(self):
        """Message field 'vcu_chassis_throttle_pald_fb'."""
        return self._vcu_chassis_throttle_pald_fb

    @vcu_chassis_throttle_pald_fb.setter
    def vcu_chassis_throttle_pald_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vcu_chassis_throttle_pald_fb' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vcu_chassis_throttle_pald_fb' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vcu_chassis_throttle_pald_fb = value

    @builtins.property
    def vcu_chassis_throttle_pedal_req_fb(self):
        """Message field 'vcu_chassis_throttle_pedal_req_fb'."""
        return self._vcu_chassis_throttle_pedal_req_fb

    @vcu_chassis_throttle_pedal_req_fb.setter
    def vcu_chassis_throttle_pedal_req_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_chassis_throttle_pedal_req_fb' field must be of type 'bool'"
        self._vcu_chassis_throttle_pedal_req_fb = value

    @builtins.property
    def vcu_chassis_acceleration_fb(self):
        """Message field 'vcu_chassis_acceleration_fb'."""
        return self._vcu_chassis_acceleration_fb

    @vcu_chassis_acceleration_fb.setter
    def vcu_chassis_acceleration_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vcu_chassis_acceleration_fb' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vcu_chassis_acceleration_fb' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vcu_chassis_acceleration_fb = value

    @builtins.property
    def vcu_drive_life(self):
        """Message field 'vcu_drive_life'."""
        return self._vcu_drive_life

    @vcu_drive_life.setter
    def vcu_drive_life(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_drive_life' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_drive_life' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_drive_life = value

    @builtins.property
    def vcu_drive_check_sta(self):
        """Message field 'vcu_drive_check_sta'."""
        return self._vcu_drive_check_sta

    @vcu_drive_check_sta.setter
    def vcu_drive_check_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_drive_check_sta' field must be of type 'bool'"
        self._vcu_drive_check_sta = value
