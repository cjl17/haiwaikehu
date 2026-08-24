# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pix_robobus_driver_msgs:msg/AvAebCtrl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AvAebCtrl(type):
    """Metaclass of message 'AvAebCtrl'."""

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
                'pix_robobus_driver_msgs.msg.AvAebCtrl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__av_aeb_ctrl
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__av_aeb_ctrl
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__av_aeb_ctrl
            cls._TYPE_SUPPORT = module.type_support_msg__msg__av_aeb_ctrl
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__av_aeb_ctrl

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


class AvAebCtrl(metaclass=Metaclass_AvAebCtrl):
    """Message class 'AvAebCtrl'."""

    __slots__ = [
        '_header',
        '_acu_aeb_work_sta',
        '_acu_aeb_active_request',
        '_acu_fcw_active_request',
        '_acu_aeb_brake_en',
        '_acu_aeb_brake_pedal_target',
        '_acu_aeb_brake_life_sig',
        '_acu_check_sum121',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'acu_aeb_work_sta': 'int32',
        'acu_aeb_active_request': 'boolean',
        'acu_fcw_active_request': 'boolean',
        'acu_aeb_brake_en': 'boolean',
        'acu_aeb_brake_pedal_target': 'int32',
        'acu_aeb_brake_life_sig': 'int32',
        'acu_check_sum121': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.acu_aeb_work_sta = kwargs.get('acu_aeb_work_sta', int())
        self.acu_aeb_active_request = kwargs.get('acu_aeb_active_request', bool())
        self.acu_fcw_active_request = kwargs.get('acu_fcw_active_request', bool())
        self.acu_aeb_brake_en = kwargs.get('acu_aeb_brake_en', bool())
        self.acu_aeb_brake_pedal_target = kwargs.get('acu_aeb_brake_pedal_target', int())
        self.acu_aeb_brake_life_sig = kwargs.get('acu_aeb_brake_life_sig', int())
        self.acu_check_sum121 = kwargs.get('acu_check_sum121', int())

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
        if self.acu_aeb_work_sta != other.acu_aeb_work_sta:
            return False
        if self.acu_aeb_active_request != other.acu_aeb_active_request:
            return False
        if self.acu_fcw_active_request != other.acu_fcw_active_request:
            return False
        if self.acu_aeb_brake_en != other.acu_aeb_brake_en:
            return False
        if self.acu_aeb_brake_pedal_target != other.acu_aeb_brake_pedal_target:
            return False
        if self.acu_aeb_brake_life_sig != other.acu_aeb_brake_life_sig:
            return False
        if self.acu_check_sum121 != other.acu_check_sum121:
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
    def acu_aeb_work_sta(self):
        """Message field 'acu_aeb_work_sta'."""
        return self._acu_aeb_work_sta

    @acu_aeb_work_sta.setter
    def acu_aeb_work_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acu_aeb_work_sta' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'acu_aeb_work_sta' field must be an integer in [-2147483648, 2147483647]"
        self._acu_aeb_work_sta = value

    @builtins.property
    def acu_aeb_active_request(self):
        """Message field 'acu_aeb_active_request'."""
        return self._acu_aeb_active_request

    @acu_aeb_active_request.setter
    def acu_aeb_active_request(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'acu_aeb_active_request' field must be of type 'bool'"
        self._acu_aeb_active_request = value

    @builtins.property
    def acu_fcw_active_request(self):
        """Message field 'acu_fcw_active_request'."""
        return self._acu_fcw_active_request

    @acu_fcw_active_request.setter
    def acu_fcw_active_request(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'acu_fcw_active_request' field must be of type 'bool'"
        self._acu_fcw_active_request = value

    @builtins.property
    def acu_aeb_brake_en(self):
        """Message field 'acu_aeb_brake_en'."""
        return self._acu_aeb_brake_en

    @acu_aeb_brake_en.setter
    def acu_aeb_brake_en(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'acu_aeb_brake_en' field must be of type 'bool'"
        self._acu_aeb_brake_en = value

    @builtins.property
    def acu_aeb_brake_pedal_target(self):
        """Message field 'acu_aeb_brake_pedal_target'."""
        return self._acu_aeb_brake_pedal_target

    @acu_aeb_brake_pedal_target.setter
    def acu_aeb_brake_pedal_target(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acu_aeb_brake_pedal_target' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'acu_aeb_brake_pedal_target' field must be an integer in [-2147483648, 2147483647]"
        self._acu_aeb_brake_pedal_target = value

    @builtins.property
    def acu_aeb_brake_life_sig(self):
        """Message field 'acu_aeb_brake_life_sig'."""
        return self._acu_aeb_brake_life_sig

    @acu_aeb_brake_life_sig.setter
    def acu_aeb_brake_life_sig(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acu_aeb_brake_life_sig' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'acu_aeb_brake_life_sig' field must be an integer in [-2147483648, 2147483647]"
        self._acu_aeb_brake_life_sig = value

    @builtins.property
    def acu_check_sum121(self):
        """Message field 'acu_check_sum121'."""
        return self._acu_check_sum121

    @acu_check_sum121.setter
    def acu_check_sum121(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acu_check_sum121' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'acu_check_sum121' field must be an integer in [-2147483648, 2147483647]"
        self._acu_check_sum121 = value
