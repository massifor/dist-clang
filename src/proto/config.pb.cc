// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "config.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace dist_clang {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* Configuration_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Configuration_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_config_2eproto() {
  protobuf_AddDesc_config_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "config.proto");
  GOOGLE_CHECK(file != NULL);
  Configuration_descriptor_ = file->message_type(0);
  static const int Configuration_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Configuration, socket_path_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Configuration, pool_capacity_),
  };
  Configuration_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Configuration_descriptor_,
      Configuration::default_instance_,
      Configuration_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Configuration, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Configuration, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Configuration));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_config_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Configuration_descriptor_, &Configuration::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_config_2eproto() {
  delete Configuration::default_instance_;
  delete Configuration_reflection_;
}

void protobuf_AddDesc_config_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014config.proto\022\020dist_clang.proto\"@\n\rConf"
    "iguration\022\023\n\013socket_path\030\001 \002(\t\022\032\n\rpool_c"
    "apacity\030\002 \001(\r:\003128", 98);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "config.proto", &protobuf_RegisterTypes);
  Configuration::default_instance_ = new Configuration();
  Configuration::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_config_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_config_2eproto {
  StaticDescriptorInitializer_config_2eproto() {
    protobuf_AddDesc_config_2eproto();
  }
} static_descriptor_initializer_config_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Configuration::kSocketPathFieldNumber;
const int Configuration::kPoolCapacityFieldNumber;
#endif  // !_MSC_VER

Configuration::Configuration()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Configuration::InitAsDefaultInstance() {
}

Configuration::Configuration(const Configuration& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Configuration::SharedCtor() {
  _cached_size_ = 0;
  socket_path_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  pool_capacity_ = 128u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Configuration::~Configuration() {
  SharedDtor();
}

void Configuration::SharedDtor() {
  if (socket_path_ != &::google::protobuf::internal::kEmptyString) {
    delete socket_path_;
  }
  if (this != default_instance_) {
  }
}

void Configuration::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Configuration::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Configuration_descriptor_;
}

const Configuration& Configuration::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_config_2eproto();
  return *default_instance_;
}

Configuration* Configuration::default_instance_ = NULL;

Configuration* Configuration::New() const {
  return new Configuration;
}

void Configuration::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_socket_path()) {
      if (socket_path_ != &::google::protobuf::internal::kEmptyString) {
        socket_path_->clear();
      }
    }
    pool_capacity_ = 128u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Configuration::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string socket_path = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_socket_path()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->socket_path().data(), this->socket_path().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_pool_capacity;
        break;
      }

      // optional uint32 pool_capacity = 2 [default = 128];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_pool_capacity:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &pool_capacity_)));
          set_has_pool_capacity();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Configuration::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string socket_path = 1;
  if (has_socket_path()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->socket_path().data(), this->socket_path().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->socket_path(), output);
  }

  // optional uint32 pool_capacity = 2 [default = 128];
  if (has_pool_capacity()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->pool_capacity(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Configuration::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string socket_path = 1;
  if (has_socket_path()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->socket_path().data(), this->socket_path().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->socket_path(), target);
  }

  // optional uint32 pool_capacity = 2 [default = 128];
  if (has_pool_capacity()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->pool_capacity(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Configuration::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string socket_path = 1;
    if (has_socket_path()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->socket_path());
    }

    // optional uint32 pool_capacity = 2 [default = 128];
    if (has_pool_capacity()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->pool_capacity());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Configuration::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Configuration* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Configuration*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Configuration::MergeFrom(const Configuration& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_socket_path()) {
      set_socket_path(from.socket_path());
    }
    if (from.has_pool_capacity()) {
      set_pool_capacity(from.pool_capacity());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Configuration::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Configuration::CopyFrom(const Configuration& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Configuration::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void Configuration::Swap(Configuration* other) {
  if (other != this) {
    std::swap(socket_path_, other->socket_path_);
    std::swap(pool_capacity_, other->pool_capacity_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Configuration::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Configuration_descriptor_;
  metadata.reflection = Configuration_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace dist_clang

// @@protoc_insertion_point(global_scope)
