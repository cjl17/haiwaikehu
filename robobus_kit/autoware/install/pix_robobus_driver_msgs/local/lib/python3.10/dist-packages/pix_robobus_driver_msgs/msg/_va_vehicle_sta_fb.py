# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pix_robobus_driver_msgs:msg/VaVehicleStaFb.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VaVehicleStaFb(type):
    """Metaclass of message 'VaVehicleStaFb'."""

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
                'pix_robobus_driver_msgs.msg.VaVehicleStaFb')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__va_vehicle_sta_fb
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__va_vehicle_sta_fb
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__va_vehicle_sta_fb
            cls._TYPE_SUPPORT = module.type_support_msg__msg__va_vehicle_sta_fb
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__va_vehicle_sta_fb

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


class VaVehicleStaFb(metaclass=Metaclass_VaVehicleStaFb):
    """Message class 'VaVehicleStaFb'."""

    __slots__ = [
        '_header',
        '_vcu_vehicle_pos_lamp_fb',
        '_vcu_vehicle_head_lamp_fb',
        '_vcu_vehicle_left_lamp_fb',
        '_vcu_vehicle_right_lamp_fb',
        '_vcu_vehicle_high_beam_fb',
        '_vcu_vehicle_fog_lamp_fb',
        '_vcu_vehicle_hazard_war_lamp_fb',
        '_vcu_vehicle_body_lamp_fb',
        '_vcu_vehicle_read_lamp_fb',
        '_acu_vehicle_window_fb',
        '_vcu_vehicle_door_sta_fb',
        '_vcu_vehicle_wipers_sta_fb',
        '_vcu_vehicle_safety_belt1',
        '_vcu_vehicle_safety_belt2',
        '_vcu_vehicle_safety_belt3',
        '_vcu_vehicle_safety_belt4',
        '_vcu_vehicle_safety_belt5',
        '_vcu_vehicle_safety_belt6',
        '_vcu_vehicle_reserve_warning',
        '_vcu_vehicle_display_speed',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'vcu_vehicle_pos_lamp_fb': 'boolean',
        'vcu_vehicle_head_lamp_fb': 'boolean',
        'vcu_vehicle_left_lamp_fb': 'boolean',
        'vcu_vehicle_right_lamp_fb': 'boolean',
        'vcu_vehicle_high_beam_fb': 'boolean',
        'vcu_vehicle_fog_lamp_fb': 'boolean',
        'vcu_vehicle_hazard_war_lamp_fb': 'boolean',
        'vcu_vehicle_body_lamp_fb': 'boolean',
        'vcu_vehicle_read_lamp_fb': 'boolean',
        'acu_vehicle_window_fb': 'int32',
        'vcu_vehicle_door_sta_fb': 'int32',
        'vcu_vehicle_wipers_sta_fb': 'int32',
        'vcu_vehicle_safety_belt1': 'int32',
        'vcu_vehicle_safety_belt2': 'int32',
        'vcu_vehicle_safety_belt3': 'int32',
        'vcu_vehicle_safety_belt4': 'int32',
        'vcu_vehicle_safety_belt5': 'int32',
        'vcu_vehicle_safety_belt6': 'int32',
        'vcu_vehicle_reserve_warning': 'int32',
        'vcu_vehicle_display_speed': 'int32',
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
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
        self.vcu_vehicle_pos_lamp_fb = kwargs.get('vcu_vehicle_pos_lamp_fb', bool())
        self.vcu_vehicle_head_lamp_fb = kwargs.get('vcu_vehicle_head_lamp_fb', bool())
        self.vcu_vehicle_left_lamp_fb = kwargs.get('vcu_vehicle_left_lamp_fb', bool())
        self.vcu_vehicle_right_lamp_fb = kwargs.get('vcu_vehicle_right_lamp_fb', bool())
        self.vcu_vehicle_high_beam_fb = kwargs.get('vcu_vehicle_high_beam_fb', bool())
        self.vcu_vehicle_fog_lamp_fb = kwargs.get('vcu_vehicle_fog_lamp_fb', bool())
        self.vcu_vehicle_hazard_war_lamp_fb = kwargs.get('vcu_vehicle_hazard_war_lamp_fb', bool())
        self.vcu_vehicle_body_lamp_fb = kwargs.get('vcu_vehicle_body_lamp_fb', bool())
        self.vcu_vehicle_read_lamp_fb = kwargs.get('vcu_vehicle_read_lamp_fb', bool())
        self.acu_vehicle_window_fb = kwargs.get('acu_vehicle_window_fb', int())
        self.vcu_vehicle_door_sta_fb = kwargs.get('vcu_vehicle_door_sta_fb', int())
        self.vcu_vehicle_wipers_sta_fb = kwargs.get('vcu_vehicle_wipers_sta_fb', int())
        self.vcu_vehicle_safety_belt1 = kwargs.get('vcu_vehicle_safety_belt1', int())
        self.vcu_vehicle_safety_belt2 = kwargs.get('vcu_vehicle_safety_belt2', int())
        self.vcu_vehicle_safety_belt3 = kwargs.get('vcu_vehicle_safety_belt3', int())
        self.vcu_vehicle_safety_belt4 = kwargs.get('vcu_vehicle_safety_belt4', int())
        self.vcu_vehicle_safety_belt5 = kwargs.get('vcu_vehicle_safety_belt5', int())
        self.vcu_vehicle_safety_belt6 = kwargs.get('vcu_vehicle_safety_belt6', int())
        self.vcu_vehicle_reserve_warning = kwargs.get('vcu_vehicle_reserve_warning', int())
        self.vcu_vehicle_display_speed = kwargs.get('vcu_vehicle_display_speed', int())

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
        if self.vcu_vehicle_pos_lamp_fb != other.vcu_vehicle_pos_lamp_fb:
            return False
        if self.vcu_vehicle_head_lamp_fb != other.vcu_vehicle_head_lamp_fb:
            return False
        if self.vcu_vehicle_left_lamp_fb != other.vcu_vehicle_left_lamp_fb:
            return False
        if self.vcu_vehicle_right_lamp_fb != other.vcu_vehicle_right_lamp_fb:
            return False
        if self.vcu_vehicle_high_beam_fb != other.vcu_vehicle_high_beam_fb:
            return False
        if self.vcu_vehicle_fog_lamp_fb != other.vcu_vehicle_fog_lamp_fb:
            return False
        if self.vcu_vehicle_hazard_war_lamp_fb != other.vcu_vehicle_hazard_war_lamp_fb:
            return False
        if self.vcu_vehicle_body_lamp_fb != other.vcu_vehicle_body_lamp_fb:
            return False
        if self.vcu_vehicle_read_lamp_fb != other.vcu_vehicle_read_lamp_fb:
            return False
        if self.acu_vehicle_window_fb != other.acu_vehicle_window_fb:
            return False
        if self.vcu_vehicle_door_sta_fb != other.vcu_vehicle_door_sta_fb:
            return False
        if self.vcu_vehicle_wipers_sta_fb != other.vcu_vehicle_wipers_sta_fb:
            return False
        if self.vcu_vehicle_safety_belt1 != other.vcu_vehicle_safety_belt1:
            return False
        if self.vcu_vehicle_safety_belt2 != other.vcu_vehicle_safety_belt2:
            return False
        if self.vcu_vehicle_safety_belt3 != other.vcu_vehicle_safety_belt3:
            return False
        if self.vcu_vehicle_safety_belt4 != other.vcu_vehicle_safety_belt4:
            return False
        if self.vcu_vehicle_safety_belt5 != other.vcu_vehicle_safety_belt5:
            return False
        if self.vcu_vehicle_safety_belt6 != other.vcu_vehicle_safety_belt6:
            return False
        if self.vcu_vehicle_reserve_warning != other.vcu_vehicle_reserve_warning:
            return False
        if self.vcu_vehicle_display_speed != other.vcu_vehicle_display_speed:
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
    def vcu_vehicle_pos_lamp_fb(self):
        """Message field 'vcu_vehicle_pos_lamp_fb'."""
        return self._vcu_vehicle_pos_lamp_fb

    @vcu_vehicle_pos_lamp_fb.setter
    def vcu_vehicle_pos_lamp_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_vehicle_pos_lamp_fb' field must be of type 'bool'"
        self._vcu_vehicle_pos_lamp_fb = value

    @builtins.property
    def vcu_vehicle_head_lamp_fb(self):
        """Message field 'vcu_vehicle_head_lamp_fb'."""
        return self._vcu_vehicle_head_lamp_fb

    @vcu_vehicle_head_lamp_fb.setter
    def vcu_vehicle_head_lamp_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_vehicle_head_lamp_fb' field must be of type 'bool'"
        self._vcu_vehicle_head_lamp_fb = value

    @builtins.property
    def vcu_vehicle_left_lamp_fb(self):
        """Message field 'vcu_vehicle_left_lamp_fb'."""
        return self._vcu_vehicle_left_lamp_fb

    @vcu_vehicle_left_lamp_fb.setter
    def vcu_vehicle_left_lamp_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_vehicle_left_lamp_fb' field must be of type 'bool'"
        self._vcu_vehicle_left_lamp_fb = value

    @builtins.property
    def vcu_vehicle_right_lamp_fb(self):
        """Message field 'vcu_vehicle_right_lamp_fb'."""
        return self._vcu_vehicle_right_lamp_fb

    @vcu_vehicle_right_lamp_fb.setter
    def vcu_vehicle_right_lamp_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_vehicle_right_lamp_fb' field must be of type 'bool'"
        self._vcu_vehicle_right_lamp_fb = value

    @builtins.property
    def vcu_vehicle_high_beam_fb(self):
        """Message field 'vcu_vehicle_high_beam_fb'."""
        return self._vcu_vehicle_high_beam_fb

    @vcu_vehicle_high_beam_fb.setter
    def vcu_vehicle_high_beam_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_vehicle_high_beam_fb' field must be of type 'bool'"
        self._vcu_vehicle_high_beam_fb = value

    @builtins.property
    def vcu_vehicle_fog_lamp_fb(self):
        """Message field 'vcu_vehicle_fog_lamp_fb'."""
        return self._vcu_vehicle_fog_lamp_fb

    @vcu_vehicle_fog_lamp_fb.setter
    def vcu_vehicle_fog_lamp_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_vehicle_fog_lamp_fb' field must be of type 'bool'"
        self._vcu_vehicle_fog_lamp_fb = value

    @builtins.property
    def vcu_vehicle_hazard_war_lamp_fb(self):
        """Message field 'vcu_vehicle_hazard_war_lamp_fb'."""
        return self._vcu_vehicle_hazard_war_lamp_fb

    @vcu_vehicle_hazard_war_lamp_fb.setter
    def vcu_vehicle_hazard_war_lamp_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_vehicle_hazard_war_lamp_fb' field must be of type 'bool'"
        self._vcu_vehicle_hazard_war_lamp_fb = value

    @builtins.property
    def vcu_vehicle_body_lamp_fb(self):
        """Message field 'vcu_vehicle_body_lamp_fb'."""
        return self._vcu_vehicle_body_lamp_fb

    @vcu_vehicle_body_lamp_fb.setter
    def vcu_vehicle_body_lamp_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_vehicle_body_lamp_fb' field must be of type 'bool'"
        self._vcu_vehicle_body_lamp_fb = value

    @builtins.property
    def vcu_vehicle_read_lamp_fb(self):
        """Message field 'vcu_vehicle_read_lamp_fb'."""
        return self._vcu_vehicle_read_lamp_fb

    @vcu_vehicle_read_lamp_fb.setter
    def vcu_vehicle_read_lamp_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_vehicle_read_lamp_fb' field must be of type 'bool'"
        self._vcu_vehicle_read_lamp_fb = value

    @builtins.property
    def acu_vehicle_window_fb(self):
        """Message field 'acu_vehicle_window_fb'."""
        return self._acu_vehicle_window_fb

    @acu_vehicle_window_fb.setter
    def acu_vehicle_window_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acu_vehicle_window_fb' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'acu_vehicle_window_fb' field must be an integer in [-2147483648, 2147483647]"
        self._acu_vehicle_window_fb = value

    @builtins.property
    def vcu_vehicle_door_sta_fb(self):
        """Message field 'vcu_vehicle_door_sta_fb'."""
        return self._vcu_vehicle_door_sta_fb

    @vcu_vehicle_door_sta_fb.setter
    def vcu_vehicle_door_sta_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_vehicle_door_sta_fb' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_vehicle_door_sta_fb' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_vehicle_door_sta_fb = value

    @builtins.property
    def vcu_vehicle_wipers_sta_fb(self):
        """Message field 'vcu_vehicle_wipers_sta_fb'."""
        return self._vcu_vehicle_wipers_sta_fb

    @vcu_vehicle_wipers_sta_fb.setter
    def vcu_vehicle_wipers_sta_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_vehicle_wipers_sta_fb' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_vehicle_wipers_sta_fb' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_vehicle_wipers_sta_fb = value

    @builtins.property
    def vcu_vehicle_safety_belt1(self):
        """Message field 'vcu_vehicle_safety_belt1'."""
        return self._vcu_vehicle_safety_belt1

    @vcu_vehicle_safety_belt1.setter
    def vcu_vehicle_safety_belt1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_vehicle_safety_belt1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_vehicle_safety_belt1' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_vehicle_safety_belt1 = value

    @builtins.property
    def vcu_vehicle_safety_belt2(self):
        """Message field 'vcu_vehicle_safety_belt2'."""
        return self._vcu_vehicle_safety_belt2

    @vcu_vehicle_safety_belt2.setter
    def vcu_vehicle_safety_belt2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_vehicle_safety_belt2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_vehicle_safety_belt2' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_vehicle_safety_belt2 = value

    @builtins.property
    def vcu_vehicle_safety_belt3(self):
        """Message field 'vcu_vehicle_safety_belt3'."""
        return self._vcu_vehicle_safety_belt3

    @vcu_vehicle_safety_belt3.setter
    def vcu_vehicle_safety_belt3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_vehicle_safety_belt3' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_vehicle_safety_belt3' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_vehicle_safety_belt3 = value

    @builtins.property
    def vcu_vehicle_safety_belt4(self):
        """Message field 'vcu_vehicle_safety_belt4'."""
        return self._vcu_vehicle_safety_belt4

    @vcu_vehicle_safety_belt4.setter
    def vcu_vehicle_safety_belt4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_vehicle_safety_belt4' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_vehicle_safety_belt4' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_vehicle_safety_belt4 = value

    @builtins.property
    def vcu_vehicle_safety_belt5(self):
        """Message field 'vcu_vehicle_safety_belt5'."""
        return self._vcu_vehicle_safety_belt5

    @vcu_vehicle_safety_belt5.setter
    def vcu_vehicle_safety_belt5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_vehicle_safety_belt5' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_vehicle_safety_belt5' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_vehicle_safety_belt5 = value

    @builtins.property
    def vcu_vehicle_safety_belt6(self):
        """Message field 'vcu_vehicle_safety_belt6'."""
        return self._vcu_vehicle_safety_belt6

    @vcu_vehicle_safety_belt6.setter
    def vcu_vehicle_safety_belt6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_vehicle_safety_belt6' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_vehicle_safety_belt6' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_vehicle_safety_belt6 = value

    @builtins.property
    def vcu_vehicle_reserve_warning(self):
        """Message field 'vcu_vehicle_reserve_warning'."""
        return self._vcu_vehicle_reserve_warning

    @vcu_vehicle_reserve_warning.setter
    def vcu_vehicle_reserve_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_vehicle_reserve_warning' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_vehicle_reserve_warning' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_vehicle_reserve_warning = value

    @builtins.property
    def vcu_vehicle_display_speed(self):
        """Message field 'vcu_vehicle_display_speed'."""
        return self._vcu_vehicle_display_speed

    @vcu_vehicle_display_speed.setter
    def vcu_vehicle_display_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_vehicle_display_speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_vehicle_display_speed' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_vehicle_display_speed = value
