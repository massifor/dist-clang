# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: daemon/configuration.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import proto.base_pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='daemon/configuration.proto',
  package='dist_clang.proto',
  serialized_pb=_b('\n\x1a\x64\x61\x65mon/configuration.proto\x12\x10\x64ist_clang.proto\x1a\x10proto/base.proto\"j\n\x04Host\x12\x0c\n\x04host\x18\x01 \x02(\t\x12\x12\n\x04port\x18\x02 \x01(\r:\x04\x36\x30\x30\x30\x12\x12\n\x07threads\x18\x03 \x01(\r:\x01\x32\x12\x17\n\x08\x64isabled\x18\x04 \x01(\x08:\x05\x66\x61lse\x12\x13\n\x04ipv6\x18\x05 \x01(\x08:\x05\x66\x61lse\"|\n\tVerbosity\x12\x16\n\nerror_mark\x18\x01 \x01(\r:\x02\x32\x30\x12\x31\n\x06levels\x18\x02 \x03(\x0b\x32!.dist_clang.proto.Verbosity.Range\x1a$\n\x05Range\x12\r\n\x05right\x18\x01 \x02(\r\x12\x0c\n\x04left\x18\x02 \x01(\r\"\xf6\x06\n\rConfiguration\x12\x38\n\x07\x65mitter\x18\x01 \x01(\x0b\x32\'.dist_clang.proto.Configuration.Emitter\x12:\n\x08\x61\x62sorber\x18\x02 \x01(\x0b\x32(.dist_clang.proto.Configuration.Absorber\x12<\n\tcollector\x18\x03 \x01(\x0b\x32).dist_clang.proto.Configuration.Collector\x12\x19\n\rpool_capacity\x18\x04 \x01(\r:\x02\x31\x36\x12,\n\x08versions\x18\x05 \x03(\x0b\x32\x1a.dist_clang.proto.Compiler\x12.\n\tverbosity\x18\x06 \x01(\x0b\x32\x1b.dist_clang.proto.Verbosity\x12\x0f\n\x07user_id\x18\x07 \x01(\r\x12\x13\n\x0b\x63onfig_path\x18\x08 \x01(\t\x12\x34\n\x05\x63\x61\x63he\x18\t \x01(\x0b\x32%.dist_clang.proto.Configuration.Cache\x12\x18\n\x0cread_timeout\x18\n \x01(\r:\x02\x36\x30\x12\x17\n\x0csend_timeout\x18\x0b \x01(\r:\x01\x35\x12\x18\n\x0cread_minimum\x18\x0c \x01(\r:\x02\x33\x32\x1a\xae\x01\n\x05\x43\x61\x63he\x12\x0c\n\x04path\x18\x01 \x02(\t\x12\x0f\n\x04size\x18\x02 \x01(\x04:\x01\x30\x12\x15\n\x06\x64irect\x18\x04 \x01(\x08:\x05\x66\x61lse\x12\x14\n\x05mtime\x18\x05 \x01(\x08:\x05\x66\x61lse\x12\x17\n\x08\x64isabled\x18\x06 \x01(\x08:\x05\x66\x61lse\x12\x14\n\x06snappy\x18\x07 \x01(\x08:\x04true\x12\x0f\n\x07threads\x18\x08 \x01(\r\x12\x19\n\x0c\x63lean_period\x18\t \x01(\r:\x03\x36\x30\x30\x1aw\n\x07\x45mitter\x12\x13\n\x0bsocket_path\x18\x01 \x02(\t\x12\'\n\x07remotes\x18\x02 \x03(\x0b\x32\x16.dist_clang.proto.Host\x12\x12\n\x07threads\x18\x03 \x01(\r:\x01\x32\x12\x1a\n\x0bonly_failed\x18\x04 \x01(\x08:\x05\x66\x61lse\x1a\x31\n\x08\x41\x62sorber\x12%\n\x05local\x18\x01 \x02(\x0b\x32\x16.dist_clang.proto.Host\x1a\x32\n\tCollector\x12%\n\x05local\x18\x01 \x02(\x0b\x32\x16.dist_clang.proto.Host')
  ,
  dependencies=[proto.base_pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_HOST = _descriptor.Descriptor(
  name='Host',
  full_name='dist_clang.proto.Host',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='host', full_name='dist_clang.proto.Host.host', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='port', full_name='dist_clang.proto.Host.port', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=True, default_value=6000,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='threads', full_name='dist_clang.proto.Host.threads', index=2,
      number=3, type=13, cpp_type=3, label=1,
      has_default_value=True, default_value=2,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='disabled', full_name='dist_clang.proto.Host.disabled', index=3,
      number=4, type=8, cpp_type=7, label=1,
      has_default_value=True, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ipv6', full_name='dist_clang.proto.Host.ipv6', index=4,
      number=5, type=8, cpp_type=7, label=1,
      has_default_value=True, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=66,
  serialized_end=172,
)


_VERBOSITY_RANGE = _descriptor.Descriptor(
  name='Range',
  full_name='dist_clang.proto.Verbosity.Range',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='right', full_name='dist_clang.proto.Verbosity.Range.right', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='left', full_name='dist_clang.proto.Verbosity.Range.left', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=262,
  serialized_end=298,
)

_VERBOSITY = _descriptor.Descriptor(
  name='Verbosity',
  full_name='dist_clang.proto.Verbosity',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='error_mark', full_name='dist_clang.proto.Verbosity.error_mark', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=True, default_value=20,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='levels', full_name='dist_clang.proto.Verbosity.levels', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_VERBOSITY_RANGE, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=174,
  serialized_end=298,
)


_CONFIGURATION_CACHE = _descriptor.Descriptor(
  name='Cache',
  full_name='dist_clang.proto.Configuration.Cache',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='path', full_name='dist_clang.proto.Configuration.Cache.path', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='size', full_name='dist_clang.proto.Configuration.Cache.size', index=1,
      number=2, type=4, cpp_type=4, label=1,
      has_default_value=True, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='direct', full_name='dist_clang.proto.Configuration.Cache.direct', index=2,
      number=4, type=8, cpp_type=7, label=1,
      has_default_value=True, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='mtime', full_name='dist_clang.proto.Configuration.Cache.mtime', index=3,
      number=5, type=8, cpp_type=7, label=1,
      has_default_value=True, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='disabled', full_name='dist_clang.proto.Configuration.Cache.disabled', index=4,
      number=6, type=8, cpp_type=7, label=1,
      has_default_value=True, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='snappy', full_name='dist_clang.proto.Configuration.Cache.snappy', index=5,
      number=7, type=8, cpp_type=7, label=1,
      has_default_value=True, default_value=True,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='threads', full_name='dist_clang.proto.Configuration.Cache.threads', index=6,
      number=8, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='clean_period', full_name='dist_clang.proto.Configuration.Cache.clean_period', index=7,
      number=9, type=13, cpp_type=3, label=1,
      has_default_value=True, default_value=600,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=789,
  serialized_end=963,
)

_CONFIGURATION_EMITTER = _descriptor.Descriptor(
  name='Emitter',
  full_name='dist_clang.proto.Configuration.Emitter',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='socket_path', full_name='dist_clang.proto.Configuration.Emitter.socket_path', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='remotes', full_name='dist_clang.proto.Configuration.Emitter.remotes', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='threads', full_name='dist_clang.proto.Configuration.Emitter.threads', index=2,
      number=3, type=13, cpp_type=3, label=1,
      has_default_value=True, default_value=2,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='only_failed', full_name='dist_clang.proto.Configuration.Emitter.only_failed', index=3,
      number=4, type=8, cpp_type=7, label=1,
      has_default_value=True, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=965,
  serialized_end=1084,
)

_CONFIGURATION_ABSORBER = _descriptor.Descriptor(
  name='Absorber',
  full_name='dist_clang.proto.Configuration.Absorber',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='local', full_name='dist_clang.proto.Configuration.Absorber.local', index=0,
      number=1, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1086,
  serialized_end=1135,
)

_CONFIGURATION_COLLECTOR = _descriptor.Descriptor(
  name='Collector',
  full_name='dist_clang.proto.Configuration.Collector',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='local', full_name='dist_clang.proto.Configuration.Collector.local', index=0,
      number=1, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1137,
  serialized_end=1187,
)

_CONFIGURATION = _descriptor.Descriptor(
  name='Configuration',
  full_name='dist_clang.proto.Configuration',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='emitter', full_name='dist_clang.proto.Configuration.emitter', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='absorber', full_name='dist_clang.proto.Configuration.absorber', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='collector', full_name='dist_clang.proto.Configuration.collector', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pool_capacity', full_name='dist_clang.proto.Configuration.pool_capacity', index=3,
      number=4, type=13, cpp_type=3, label=1,
      has_default_value=True, default_value=16,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='versions', full_name='dist_clang.proto.Configuration.versions', index=4,
      number=5, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='verbosity', full_name='dist_clang.proto.Configuration.verbosity', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='user_id', full_name='dist_clang.proto.Configuration.user_id', index=6,
      number=7, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='config_path', full_name='dist_clang.proto.Configuration.config_path', index=7,
      number=8, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='cache', full_name='dist_clang.proto.Configuration.cache', index=8,
      number=9, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='read_timeout', full_name='dist_clang.proto.Configuration.read_timeout', index=9,
      number=10, type=13, cpp_type=3, label=1,
      has_default_value=True, default_value=60,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='send_timeout', full_name='dist_clang.proto.Configuration.send_timeout', index=10,
      number=11, type=13, cpp_type=3, label=1,
      has_default_value=True, default_value=5,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='read_minimum', full_name='dist_clang.proto.Configuration.read_minimum', index=11,
      number=12, type=13, cpp_type=3, label=1,
      has_default_value=True, default_value=32,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_CONFIGURATION_CACHE, _CONFIGURATION_EMITTER, _CONFIGURATION_ABSORBER, _CONFIGURATION_COLLECTOR, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=301,
  serialized_end=1187,
)

_VERBOSITY_RANGE.containing_type = _VERBOSITY
_VERBOSITY.fields_by_name['levels'].message_type = _VERBOSITY_RANGE
_CONFIGURATION_CACHE.containing_type = _CONFIGURATION
_CONFIGURATION_EMITTER.fields_by_name['remotes'].message_type = _HOST
_CONFIGURATION_EMITTER.containing_type = _CONFIGURATION
_CONFIGURATION_ABSORBER.fields_by_name['local'].message_type = _HOST
_CONFIGURATION_ABSORBER.containing_type = _CONFIGURATION
_CONFIGURATION_COLLECTOR.fields_by_name['local'].message_type = _HOST
_CONFIGURATION_COLLECTOR.containing_type = _CONFIGURATION
_CONFIGURATION.fields_by_name['emitter'].message_type = _CONFIGURATION_EMITTER
_CONFIGURATION.fields_by_name['absorber'].message_type = _CONFIGURATION_ABSORBER
_CONFIGURATION.fields_by_name['collector'].message_type = _CONFIGURATION_COLLECTOR
_CONFIGURATION.fields_by_name['versions'].message_type = proto.base_pb2._COMPILER
_CONFIGURATION.fields_by_name['verbosity'].message_type = _VERBOSITY
_CONFIGURATION.fields_by_name['cache'].message_type = _CONFIGURATION_CACHE
DESCRIPTOR.message_types_by_name['Host'] = _HOST
DESCRIPTOR.message_types_by_name['Verbosity'] = _VERBOSITY
DESCRIPTOR.message_types_by_name['Configuration'] = _CONFIGURATION

Host = _reflection.GeneratedProtocolMessageType('Host', (_message.Message,), dict(
  DESCRIPTOR = _HOST,
  __module__ = 'daemon.configuration_pb2'
  # @@protoc_insertion_point(class_scope:dist_clang.proto.Host)
  ))
_sym_db.RegisterMessage(Host)

Verbosity = _reflection.GeneratedProtocolMessageType('Verbosity', (_message.Message,), dict(

  Range = _reflection.GeneratedProtocolMessageType('Range', (_message.Message,), dict(
    DESCRIPTOR = _VERBOSITY_RANGE,
    __module__ = 'daemon.configuration_pb2'
    # @@protoc_insertion_point(class_scope:dist_clang.proto.Verbosity.Range)
    ))
  ,
  DESCRIPTOR = _VERBOSITY,
  __module__ = 'daemon.configuration_pb2'
  # @@protoc_insertion_point(class_scope:dist_clang.proto.Verbosity)
  ))
_sym_db.RegisterMessage(Verbosity)
_sym_db.RegisterMessage(Verbosity.Range)

Configuration = _reflection.GeneratedProtocolMessageType('Configuration', (_message.Message,), dict(

  Cache = _reflection.GeneratedProtocolMessageType('Cache', (_message.Message,), dict(
    DESCRIPTOR = _CONFIGURATION_CACHE,
    __module__ = 'daemon.configuration_pb2'
    # @@protoc_insertion_point(class_scope:dist_clang.proto.Configuration.Cache)
    ))
  ,

  Emitter = _reflection.GeneratedProtocolMessageType('Emitter', (_message.Message,), dict(
    DESCRIPTOR = _CONFIGURATION_EMITTER,
    __module__ = 'daemon.configuration_pb2'
    # @@protoc_insertion_point(class_scope:dist_clang.proto.Configuration.Emitter)
    ))
  ,

  Absorber = _reflection.GeneratedProtocolMessageType('Absorber', (_message.Message,), dict(
    DESCRIPTOR = _CONFIGURATION_ABSORBER,
    __module__ = 'daemon.configuration_pb2'
    # @@protoc_insertion_point(class_scope:dist_clang.proto.Configuration.Absorber)
    ))
  ,

  Collector = _reflection.GeneratedProtocolMessageType('Collector', (_message.Message,), dict(
    DESCRIPTOR = _CONFIGURATION_COLLECTOR,
    __module__ = 'daemon.configuration_pb2'
    # @@protoc_insertion_point(class_scope:dist_clang.proto.Configuration.Collector)
    ))
  ,
  DESCRIPTOR = _CONFIGURATION,
  __module__ = 'daemon.configuration_pb2'
  # @@protoc_insertion_point(class_scope:dist_clang.proto.Configuration)
  ))
_sym_db.RegisterMessage(Configuration)
_sym_db.RegisterMessage(Configuration.Cache)
_sym_db.RegisterMessage(Configuration.Emitter)
_sym_db.RegisterMessage(Configuration.Absorber)
_sym_db.RegisterMessage(Configuration.Collector)


# @@protoc_insertion_point(module_scope)
