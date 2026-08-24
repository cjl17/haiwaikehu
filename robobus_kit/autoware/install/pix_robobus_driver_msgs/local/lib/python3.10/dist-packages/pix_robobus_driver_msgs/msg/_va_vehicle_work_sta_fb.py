# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pix_robobus_driver_msgs:msg/VaVehicleWorkStaFb.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VaVehicleWorkStaFb(type):
    """Metaclass of message 'VaVehicleWorkStaFb'."""

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
                'pix_robobus_driver_msgs.msg.VaVehicleWorkStaFb')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__va_vehicle_work_sta_fb
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__va_vehicle_work_sta_fb
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__va_vehicle_work_sta_fb
            cls._TYPE_SUPPORT = module.type_support_msg__msg__va_vehicle_work_sta_fb
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__va_vehicle_work_sta_fb

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


class VaVehicleWorkStaFb(metaclass=Metaclass_VaVehicleWorkStaFb):
    """Message class 'VaVehicleWorkStaFb'."""

    __slots__ = [
        '_header',
        '_vcu_driving_mode_fb',
        '_vcu_chassis_power_sta_fb',
        '_vcu_chassis_power_dc_sta',
        '_vcu_remote_connecte_sta',
        '_vcu_acu_connect_sta',
        '_vcu_chassis_speed_limited_mode_fb',
        '_vcu_chassis_power_limite_sta',
        '_vcu_sys_eco_mode',
        '_vcu_chassis_speed_limited_val_fb',
        '_vcu_chassis_low_power_volt_sta',
        '_vcu_chassis_e_stop_sta_fb',
        '_vcu_crash_front_sta',
        '_vcu_crash_rear_sta',
        '_vcu_crash_left_sta',
        '_vcu_crash_right_sta',
        '_vcu_life',
        '_vcu_check_sum',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'vcu_driving_mode_fb': 'int32',
        'vcu_chassis_power_sta_fb': 'int32',
        'vcu_chassis_power_dc_sta': 'int32',
        'vcu_remote_connecte_sta': 'boolean',
        'vcu_acu_connect_sta': 'boolean',
        'vcu_chassis_speed_limited_mode_fb': 'boolean',
        'vcu_chassis_power_limite_sta': 'boolean',
        'vcu_sys_eco_mode': 'int32',
        'vcu_chassis_speed_limited_val_fb': 'float',
        'vcu_chassis_low_power_volt_sta': 'float',
        'vcu_chassis_e_stop_sta_fb': 'int32',
        'vcu_crash_front_sta': 'boolean',
        'vcu_crash_rear_sta': 'boolean',
        'vcu_crash_left_sta': 'boolean',
        'vcu_crash_right_sta': 'boolean',
        'vcu_life': 'int32',
        'vcu_check_sum': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.vcu_driving_mode_fb = kwargs.get('vcu_driving_mode_fb', int())
        self.vcu_chassis_power_sta_fb = kwargs.get('vcu_chassis_power_sta_fb', int())
        self.vcu_chassis_power_dc_sta = kwargs.get('vcu_chassis_power_dc_sta', int())
        self.vcu_remote_connecte_sta = kwargs.get('vcu_remote_connecte_sta', bool())
        self.vcu_acu_connect_sta = kwargs.get('vcu_acu_connect_sta', bool())
        self.vcu_chassis_speed_limited_mode_fb = kwargs.get('vcu_chassis_speed_limited_mode_fb', bool())
        self.vcu_chassis_power_limite_sta = kwargs.get('vcu_chassis_power_limite_sta', bool())
        self.vcu_sys_eco_mode = kwargs.get('vcu_sys_eco_mode', int())
        self.vcu_chassis_speed_limited_val_fb = kwargs.get('vcu_chassis_speed_limited_val_fb', float())
        self.vcu_chassis_low_power_volt_sta = kwargs.get('vcu_chassis_low_power_volt_sta', float())
        self.vcu_chassis_e_stop_sta_fb = kwargs.get('vcu_chassis_e_stop_sta_fb', int())
        self.vcu_crash_front_sta = kwargs.get('vcu_crash_front_sta', bool())
        self.vcu_crash_rear_sta = kwargs.get('vcu_crash_rear_sta', bool())
        self.vcu_crash_left_sta = kwargs.get('vcu_crash_left_sta', bool())
        self.vcu_crash_right_sta = kwargs.get('vcu_crash_right_sta', bool())
        self.vcu_life = kwargs.get('vcu_life', int())
        self.vcu_check_sum = kwargs.get('vcu_check_sum', int())

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
        if self.vcu_driving_mode_fb != other.vcu_driving_mode_fb:
            return False
        if self.vcu_chassis_power_sta_fb != other.vcu_chassis_power_sta_fb:
            return False
        if self.vcu_chassis_power_dc_sta != other.vcu_chassis_power_dc_sta:
            return False
        if self.vcu_remote_connecte_sta != other.vcu_remote_connecte_sta:
            return False
        if self.vcu_acu_connect_sta != other.vcu_acu_connect_sta:
            return False
        if self.vcu_chassis_speed_limited_mode_fb != other.vcu_chassis_speed_limited_mode_fb:
            return False
        if self.vcu_chassis_power_limite_sta != other.vcu_chassis_power_limite_sta:
            return False
        if self.vcu_sys_eco_mode != other.vcu_sys_eco_mode:
            return False
        if self.vcu_chassis_speed_limited_val_fb != other.vcu_chassis_speed_limited_val_fb:
            return False
        if self.vcu_chassis_low_power_volt_sta != other.vcu_chassis_low_power_volt_sta:
            return False
        if self.vcu_chassis_e_stop_sta_fb != other.vcu_chassis_e_stop_sta_fb:
            return False
        if self.vcu_crash_front_sta != other.vcu_crash_front_sta:
            return False
        if self.vcu_crash_rear_sta != other.vcu_crash_rear_sta:
            return False
        if self.vcu_crash_left_sta != other.vcu_crash_left_sta:
            return False
        if self.vcu_crash_right_sta != other.vcu_crash_right_sta:
            return False
        if self.vcu_life != other.vcu_life:
            return False
        if self.vcu_check_sum != other.vcu_check_sum:
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
    def vcu_driving_mode_fb(self):
        """Message field 'vcu_driving_mode_fb'."""
        return self._vcu_driving_mode_fb

    @vcu_driving_mode_fb.setter
    def vcu_driving_mode_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_driving_mode_fb' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_driving_mode_fb' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_driving_mode_fb = value

    @builtins.property
    def vcu_chassis_power_sta_fb(self):
        """Message field 'vcu_chassis_power_sta_fb'."""
        return self._vcu_chassis_power_sta_fb

    @vcu_chassis_power_sta_fb.setter
    def vcu_chassis_power_sta_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_chassis_power_sta_fb' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_chassis_power_sta_fb' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_chassis_power_sta_fb = value

    @builtins.property
    def vcu_chassis_power_dc_sta(self):
        """Message field 'vcu_chassis_power_dc_sta'."""
        return self._vcu_chassis_power_dc_sta

    @vcu_chassis_power_dc_sta.setter
    def vcu_chassis_power_dc_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_chassis_power_dc_sta' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_chassis_power_dc_sta' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_chassis_power_dc_sta = value

    @builtins.property
    def vcu_remote_connecte_sta(self):
        """Message field 'vcu_remote_connecte_sta'."""
        return self._vcu_remote_connecte_sta

    @vcu_remote_connecte_sta.setter
    def vcu_remote_connecte_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_remote_connecte_sta' field must be of type 'bool'"
        self._vcu_remote_connecte_sta = value

    @builtins.property
    def vcu_acu_connect_sta(self):
        """Message field 'vcu_acu_connect_sta'."""
        return self._vcu_acu_connect_sta

    @vcu_acu_connect_sta.setter
    def vcu_acu_connect_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_acu_connect_sta' field must be of type 'bool'"
        self._vcu_acu_connect_sta = value

    @builtins.property
    def vcu_chassis_speed_limited_mode_fb(self):
        """Message field 'vcu_chassis_speed_limited_mode_fb'."""
        return self._vcu_chassis_speed_limited_mode_fb

    @vcu_chassis_speed_limited_mode_fb.setter
    def vcu_chassis_speed_limited_mode_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_chassis_speed_limited_mode_fb' field must be of type 'bool'"
        self._vcu_chassis_speed_limited_mode_fb = value

    @builtins.property
    def vcu_chassis_power_limite_sta(self):
        """Message field 'vcu_chassis_power_limite_sta'."""
        return self._vcu_chassis_power_limite_sta

    @vcu_chassis_power_limite_sta.setter
    def vcu_chassis_power_limite_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_chassis_power_limite_sta' field must be of type 'bool'"
        self._vcu_chassis_power_limite_sta = value

    @builtins.property
    def vcu_sys_eco_mode(self):
        """Message field 'vcu_sys_eco_mode'."""
        return self._vcu_sys_eco_mode

    @vcu_sys_eco_mode.setter
    def vcu_sys_eco_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_sys_eco_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_sys_eco_mode' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_sys_eco_mode = value

    @builtins.property
    def vcu_chassis_speed_limited_val_fb(self):
        """Message field 'vcu_chassis_speed_limited_val_fb'."""
        return self._vcu_chassis_speed_limited_val_fb

    @vcu_chassis_speed_limited_val_fb.setter
    def vcu_chassis_speed_limited_val_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vcu_chassis_speed_limited_val_fb' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vcu_chassis_speed_limited_val_fb' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vcu_chassis_speed_limited_val_fb = value

    @builtins.property
    def vcu_chassis_low_power_volt_sta(self):
        """Message field 'vcu_chassis_low_power_volt_sta'."""
        return self._vcu_chassis_low_power_volt_sta

    @vcu_chassis_low_power_volt_sta.setter
    def vcu_chassis_low_power_volt_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vcu_chassis_low_power_volt_sta' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vcu_chassis_low_power_volt_sta' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vcu_chassis_low_power_volt_sta = value

    @builtins.property
    def vcu_chassis_e_stop_sta_fb(self):
        """Message field 'vcu_chassis_e_stop_sta_fb'."""
        return self._vcu_chassis_e_stop_sta_fb

    @vcu_chassis_e_stop_sta_fb.setter
    def vcu_chassis_e_stop_sta_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_chassis_e_stop_sta_fb' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_chassis_e_stop_sta_fb' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_chassis_e_stop_sta_fb = value

    @builtins.property
    def vcu_crash_front_sta(self):
        """Message field 'vcu_crash_front_sta'."""
        return self._vcu_crash_front_sta

    @vcu_crash_front_sta.setter
    def vcu_crash_front_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_crash_front_sta' field must be of type 'bool'"
        self._vcu_crash_front_sta = value

    @builtins.property
    def vcu_crash_rear_sta(self):
        """Message field 'vcu_crash_rear_sta'."""
        return self._vcu_crash_rear_sta

    @vcu_crash_rear_sta.setter
    def vcu_crash_rear_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_crash_rear_sta' field must be of type 'bool'"
        self._vcu_crash_rear_sta = value

    @builtins.property
    def vcu_crash_left_sta(self):
        """Message field 'vcu_crash_left_sta'."""
        return self._vcu_crash_left_sta

    @vcu_crash_left_sta.setter
    def vcu_crash_left_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_crash_left_sta' field must be of type 'bool'"
        self._vcu_crash_left_sta = value

    @builtins.property
    def vcu_crash_right_sta(self):
        """Message field 'vcu_crash_right_sta'."""
        return self._vcu_crash_right_sta

    @vcu_crash_right_sta.setter
    def vcu_crash_right_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_crash_right_sta' field must be of type 'bool'"
        self._vcu_crash_right_sta = value

    @builtins.property
    def vcu_life(self):
        """Message field 'vcu_life'."""
        return self._vcu_life

    @vcu_life.setter
    def vcu_life(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_life' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_life' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_life = value

    @builtins.property
    def vcu_check_sum(self):
        """Message field 'vcu_check_sum'."""
        return self._vcu_check_sum

    @vcu_check_sum.setter
    def vcu_check_sum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_check_sum' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_check_sum' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_check_sum = value
