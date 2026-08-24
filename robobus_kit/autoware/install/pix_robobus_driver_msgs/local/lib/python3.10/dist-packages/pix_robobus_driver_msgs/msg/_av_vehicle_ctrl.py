# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pix_robobus_driver_msgs:msg/AvVehicleCtrl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AvVehicleCtrl(type):
    """Metaclass of message 'AvVehicleCtrl'."""

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
                'pix_robobus_driver_msgs.msg.AvVehicleCtrl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__av_vehicle_ctrl
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__av_vehicle_ctrl
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__av_vehicle_ctrl
            cls._TYPE_SUPPORT = module.type_support_msg__msg__av_vehicle_ctrl
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__av_vehicle_ctrl

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


class AvVehicleCtrl(metaclass=Metaclass_AvVehicleCtrl):
    """Message class 'AvVehicleCtrl'."""

    __slots__ = [
        '_header',
        '_acu_vehicle_pos_lamp_ctrl',
        '_acu_vehicle_head_lamp_ctrl',
        '_acu_vehicle_left_lamp_ctrl',
        '_acu_vehicle_right_lamp_ctrl',
        '_acu_vehicle_high_beam_ctrl',
        '_acu_vehicle_fog_lamp_ctrl',
        '_acu_vehicle_body_light_ctrl',
        '_acu_vehicle_read_light_ctrl',
        '_acu_vehicle_voice',
        '_acu_vehicle_wipers_ctrl',
        '_acu_vehicle_door_ctrl',
        '_acu_vehicle_window_ctrl',
        '_acu_chassis_speed_limite_mode',
        '_acu_vehicle_horn_ctrl',
        '_acu_vehicle_spray_ctrl',
        '_acu_chassis_speed_limite_val',
        '_acu_check_sum_en',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'acu_vehicle_pos_lamp_ctrl': 'boolean',
        'acu_vehicle_head_lamp_ctrl': 'boolean',
        'acu_vehicle_left_lamp_ctrl': 'boolean',
        'acu_vehicle_right_lamp_ctrl': 'boolean',
        'acu_vehicle_high_beam_ctrl': 'boolean',
        'acu_vehicle_fog_lamp_ctrl': 'boolean',
        'acu_vehicle_body_light_ctrl': 'boolean',
        'acu_vehicle_read_light_ctrl': 'boolean',
        'acu_vehicle_voice': 'int32',
        'acu_vehicle_wipers_ctrl': 'int32',
        'acu_vehicle_door_ctrl': 'int32',
        'acu_vehicle_window_ctrl': 'int32',
        'acu_chassis_speed_limite_mode': 'boolean',
        'acu_vehicle_horn_ctrl': 'boolean',
        'acu_vehicle_spray_ctrl': 'boolean',
        'acu_chassis_speed_limite_val': 'float',
        'acu_check_sum_en': 'boolean',
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
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.acu_vehicle_pos_lamp_ctrl = kwargs.get('acu_vehicle_pos_lamp_ctrl', bool())
        self.acu_vehicle_head_lamp_ctrl = kwargs.get('acu_vehicle_head_lamp_ctrl', bool())
        self.acu_vehicle_left_lamp_ctrl = kwargs.get('acu_vehicle_left_lamp_ctrl', bool())
        self.acu_vehicle_right_lamp_ctrl = kwargs.get('acu_vehicle_right_lamp_ctrl', bool())
        self.acu_vehicle_high_beam_ctrl = kwargs.get('acu_vehicle_high_beam_ctrl', bool())
        self.acu_vehicle_fog_lamp_ctrl = kwargs.get('acu_vehicle_fog_lamp_ctrl', bool())
        self.acu_vehicle_body_light_ctrl = kwargs.get('acu_vehicle_body_light_ctrl', bool())
        self.acu_vehicle_read_light_ctrl = kwargs.get('acu_vehicle_read_light_ctrl', bool())
        self.acu_vehicle_voice = kwargs.get('acu_vehicle_voice', int())
        self.acu_vehicle_wipers_ctrl = kwargs.get('acu_vehicle_wipers_ctrl', int())
        self.acu_vehicle_door_ctrl = kwargs.get('acu_vehicle_door_ctrl', int())
        self.acu_vehicle_window_ctrl = kwargs.get('acu_vehicle_window_ctrl', int())
        self.acu_chassis_speed_limite_mode = kwargs.get('acu_chassis_speed_limite_mode', bool())
        self.acu_vehicle_horn_ctrl = kwargs.get('acu_vehicle_horn_ctrl', bool())
        self.acu_vehicle_spray_ctrl = kwargs.get('acu_vehicle_spray_ctrl', bool())
        self.acu_chassis_speed_limite_val = kwargs.get('acu_chassis_speed_limite_val', float())
        self.acu_check_sum_en = kwargs.get('acu_check_sum_en', bool())

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
        if self.acu_vehicle_pos_lamp_ctrl != other.acu_vehicle_pos_lamp_ctrl:
            return False
        if self.acu_vehicle_head_lamp_ctrl != other.acu_vehicle_head_lamp_ctrl:
            return False
        if self.acu_vehicle_left_lamp_ctrl != other.acu_vehicle_left_lamp_ctrl:
            return False
        if self.acu_vehicle_right_lamp_ctrl != other.acu_vehicle_right_lamp_ctrl:
            return False
        if self.acu_vehicle_high_beam_ctrl != other.acu_vehicle_high_beam_ctrl:
            return False
        if self.acu_vehicle_fog_lamp_ctrl != other.acu_vehicle_fog_lamp_ctrl:
            return False
        if self.acu_vehicle_body_light_ctrl != other.acu_vehicle_body_light_ctrl:
            return False
        if self.acu_vehicle_read_light_ctrl != other.acu_vehicle_read_light_ctrl:
            return False
        if self.acu_vehicle_voice != other.acu_vehicle_voice:
            return False
        if self.acu_vehicle_wipers_ctrl != other.acu_vehicle_wipers_ctrl:
            return False
        if self.acu_vehicle_door_ctrl != other.acu_vehicle_door_ctrl:
            return False
        if self.acu_vehicle_window_ctrl != other.acu_vehicle_window_ctrl:
            return False
        if self.acu_chassis_speed_limite_mode != other.acu_chassis_speed_limite_mode:
            return False
        if self.acu_vehicle_horn_ctrl != other.acu_vehicle_horn_ctrl:
            return False
        if self.acu_vehicle_spray_ctrl != other.acu_vehicle_spray_ctrl:
            return False
        if self.acu_chassis_speed_limite_val != other.acu_chassis_speed_limite_val:
            return False
        if self.acu_check_sum_en != other.acu_check_sum_en:
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
    def acu_vehicle_pos_lamp_ctrl(self):
        """Message field 'acu_vehicle_pos_lamp_ctrl'."""
        return self._acu_vehicle_pos_lamp_ctrl

    @acu_vehicle_pos_lamp_ctrl.setter
    def acu_vehicle_pos_lamp_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'acu_vehicle_pos_lamp_ctrl' field must be of type 'bool'"
        self._acu_vehicle_pos_lamp_ctrl = value

    @builtins.property
    def acu_vehicle_head_lamp_ctrl(self):
        """Message field 'acu_vehicle_head_lamp_ctrl'."""
        return self._acu_vehicle_head_lamp_ctrl

    @acu_vehicle_head_lamp_ctrl.setter
    def acu_vehicle_head_lamp_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'acu_vehicle_head_lamp_ctrl' field must be of type 'bool'"
        self._acu_vehicle_head_lamp_ctrl = value

    @builtins.property
    def acu_vehicle_left_lamp_ctrl(self):
        """Message field 'acu_vehicle_left_lamp_ctrl'."""
        return self._acu_vehicle_left_lamp_ctrl

    @acu_vehicle_left_lamp_ctrl.setter
    def acu_vehicle_left_lamp_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'acu_vehicle_left_lamp_ctrl' field must be of type 'bool'"
        self._acu_vehicle_left_lamp_ctrl = value

    @builtins.property
    def acu_vehicle_right_lamp_ctrl(self):
        """Message field 'acu_vehicle_right_lamp_ctrl'."""
        return self._acu_vehicle_right_lamp_ctrl

    @acu_vehicle_right_lamp_ctrl.setter
    def acu_vehicle_right_lamp_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'acu_vehicle_right_lamp_ctrl' field must be of type 'bool'"
        self._acu_vehicle_right_lamp_ctrl = value

    @builtins.property
    def acu_vehicle_high_beam_ctrl(self):
        """Message field 'acu_vehicle_high_beam_ctrl'."""
        return self._acu_vehicle_high_beam_ctrl

    @acu_vehicle_high_beam_ctrl.setter
    def acu_vehicle_high_beam_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'acu_vehicle_high_beam_ctrl' field must be of type 'bool'"
        self._acu_vehicle_high_beam_ctrl = value

    @builtins.property
    def acu_vehicle_fog_lamp_ctrl(self):
        """Message field 'acu_vehicle_fog_lamp_ctrl'."""
        return self._acu_vehicle_fog_lamp_ctrl

    @acu_vehicle_fog_lamp_ctrl.setter
    def acu_vehicle_fog_lamp_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'acu_vehicle_fog_lamp_ctrl' field must be of type 'bool'"
        self._acu_vehicle_fog_lamp_ctrl = value

    @builtins.property
    def acu_vehicle_body_light_ctrl(self):
        """Message field 'acu_vehicle_body_light_ctrl'."""
        return self._acu_vehicle_body_light_ctrl

    @acu_vehicle_body_light_ctrl.setter
    def acu_vehicle_body_light_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'acu_vehicle_body_light_ctrl' field must be of type 'bool'"
        self._acu_vehicle_body_light_ctrl = value

    @builtins.property
    def acu_vehicle_read_light_ctrl(self):
        """Message field 'acu_vehicle_read_light_ctrl'."""
        return self._acu_vehicle_read_light_ctrl

    @acu_vehicle_read_light_ctrl.setter
    def acu_vehicle_read_light_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'acu_vehicle_read_light_ctrl' field must be of type 'bool'"
        self._acu_vehicle_read_light_ctrl = value

    @builtins.property
    def acu_vehicle_voice(self):
        """Message field 'acu_vehicle_voice'."""
        return self._acu_vehicle_voice

    @acu_vehicle_voice.setter
    def acu_vehicle_voice(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acu_vehicle_voice' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'acu_vehicle_voice' field must be an integer in [-2147483648, 2147483647]"
        self._acu_vehicle_voice = value

    @builtins.property
    def acu_vehicle_wipers_ctrl(self):
        """Message field 'acu_vehicle_wipers_ctrl'."""
        return self._acu_vehicle_wipers_ctrl

    @acu_vehicle_wipers_ctrl.setter
    def acu_vehicle_wipers_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acu_vehicle_wipers_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'acu_vehicle_wipers_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._acu_vehicle_wipers_ctrl = value

    @builtins.property
    def acu_vehicle_door_ctrl(self):
        """Message field 'acu_vehicle_door_ctrl'."""
        return self._acu_vehicle_door_ctrl

    @acu_vehicle_door_ctrl.setter
    def acu_vehicle_door_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acu_vehicle_door_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'acu_vehicle_door_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._acu_vehicle_door_ctrl = value

    @builtins.property
    def acu_vehicle_window_ctrl(self):
        """Message field 'acu_vehicle_window_ctrl'."""
        return self._acu_vehicle_window_ctrl

    @acu_vehicle_window_ctrl.setter
    def acu_vehicle_window_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acu_vehicle_window_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'acu_vehicle_window_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._acu_vehicle_window_ctrl = value

    @builtins.property
    def acu_chassis_speed_limite_mode(self):
        """Message field 'acu_chassis_speed_limite_mode'."""
        return self._acu_chassis_speed_limite_mode

    @acu_chassis_speed_limite_mode.setter
    def acu_chassis_speed_limite_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'acu_chassis_speed_limite_mode' field must be of type 'bool'"
        self._acu_chassis_speed_limite_mode = value

    @builtins.property
    def acu_vehicle_horn_ctrl(self):
        """Message field 'acu_vehicle_horn_ctrl'."""
        return self._acu_vehicle_horn_ctrl

    @acu_vehicle_horn_ctrl.setter
    def acu_vehicle_horn_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'acu_vehicle_horn_ctrl' field must be of type 'bool'"
        self._acu_vehicle_horn_ctrl = value

    @builtins.property
    def acu_vehicle_spray_ctrl(self):
        """Message field 'acu_vehicle_spray_ctrl'."""
        return self._acu_vehicle_spray_ctrl

    @acu_vehicle_spray_ctrl.setter
    def acu_vehicle_spray_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'acu_vehicle_spray_ctrl' field must be of type 'bool'"
        self._acu_vehicle_spray_ctrl = value

    @builtins.property
    def acu_chassis_speed_limite_val(self):
        """Message field 'acu_chassis_speed_limite_val'."""
        return self._acu_chassis_speed_limite_val

    @acu_chassis_speed_limite_val.setter
    def acu_chassis_speed_limite_val(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acu_chassis_speed_limite_val' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'acu_chassis_speed_limite_val' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._acu_chassis_speed_limite_val = value

    @builtins.property
    def acu_check_sum_en(self):
        """Message field 'acu_check_sum_en'."""
        return self._acu_check_sum_en

    @acu_check_sum_en.setter
    def acu_check_sum_en(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'acu_check_sum_en' field must be of type 'bool'"
        self._acu_check_sum_en = value
