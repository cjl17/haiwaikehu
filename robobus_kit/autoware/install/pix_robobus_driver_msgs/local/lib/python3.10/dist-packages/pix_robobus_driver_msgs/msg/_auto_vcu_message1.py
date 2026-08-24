# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pix_robobus_driver_msgs:msg/AutoVcuMessage1.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AutoVcuMessage1(type):
    """Metaclass of message 'AutoVcuMessage1'."""

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
                'pix_robobus_driver_msgs.msg.AutoVcuMessage1')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__auto_vcu_message1
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__auto_vcu_message1
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__auto_vcu_message1
            cls._TYPE_SUPPORT = module.type_support_msg__msg__auto_vcu_message1
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__auto_vcu_message1

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


class AutoVcuMessage1(metaclass=Metaclass_AutoVcuMessage1):
    """Message class 'AutoVcuMessage1'."""

    __slots__ = [
        '_header',
        '_defrost_ctrl',
        '_air_cod_ctrl',
        '_air_cod_gear_ctrl',
        '_air_cod_mod_ctrl',
        '_air_cod_temp_ctrl',
        '_in_loop_mod_ctrl',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'defrost_ctrl': 'int32',
        'air_cod_ctrl': 'int32',
        'air_cod_gear_ctrl': 'int32',
        'air_cod_mod_ctrl': 'int32',
        'air_cod_temp_ctrl': 'int32',
        'in_loop_mod_ctrl': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
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
        self.defrost_ctrl = kwargs.get('defrost_ctrl', int())
        self.air_cod_ctrl = kwargs.get('air_cod_ctrl', int())
        self.air_cod_gear_ctrl = kwargs.get('air_cod_gear_ctrl', int())
        self.air_cod_mod_ctrl = kwargs.get('air_cod_mod_ctrl', int())
        self.air_cod_temp_ctrl = kwargs.get('air_cod_temp_ctrl', int())
        self.in_loop_mod_ctrl = kwargs.get('in_loop_mod_ctrl', int())

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
        if self.defrost_ctrl != other.defrost_ctrl:
            return False
        if self.air_cod_ctrl != other.air_cod_ctrl:
            return False
        if self.air_cod_gear_ctrl != other.air_cod_gear_ctrl:
            return False
        if self.air_cod_mod_ctrl != other.air_cod_mod_ctrl:
            return False
        if self.air_cod_temp_ctrl != other.air_cod_temp_ctrl:
            return False
        if self.in_loop_mod_ctrl != other.in_loop_mod_ctrl:
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
    def defrost_ctrl(self):
        """Message field 'defrost_ctrl'."""
        return self._defrost_ctrl

    @defrost_ctrl.setter
    def defrost_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'defrost_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'defrost_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._defrost_ctrl = value

    @builtins.property
    def air_cod_ctrl(self):
        """Message field 'air_cod_ctrl'."""
        return self._air_cod_ctrl

    @air_cod_ctrl.setter
    def air_cod_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'air_cod_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'air_cod_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._air_cod_ctrl = value

    @builtins.property
    def air_cod_gear_ctrl(self):
        """Message field 'air_cod_gear_ctrl'."""
        return self._air_cod_gear_ctrl

    @air_cod_gear_ctrl.setter
    def air_cod_gear_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'air_cod_gear_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'air_cod_gear_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._air_cod_gear_ctrl = value

    @builtins.property
    def air_cod_mod_ctrl(self):
        """Message field 'air_cod_mod_ctrl'."""
        return self._air_cod_mod_ctrl

    @air_cod_mod_ctrl.setter
    def air_cod_mod_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'air_cod_mod_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'air_cod_mod_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._air_cod_mod_ctrl = value

    @builtins.property
    def air_cod_temp_ctrl(self):
        """Message field 'air_cod_temp_ctrl'."""
        return self._air_cod_temp_ctrl

    @air_cod_temp_ctrl.setter
    def air_cod_temp_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'air_cod_temp_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'air_cod_temp_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._air_cod_temp_ctrl = value

    @builtins.property
    def in_loop_mod_ctrl(self):
        """Message field 'in_loop_mod_ctrl'."""
        return self._in_loop_mod_ctrl

    @in_loop_mod_ctrl.setter
    def in_loop_mod_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'in_loop_mod_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'in_loop_mod_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._in_loop_mod_ctrl = value
