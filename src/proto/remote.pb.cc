// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: remote.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "remote.pb.h"

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

const ::google::protobuf::Descriptor* Error_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Error_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Error_Code_descriptor_ = NULL;
const ::google::protobuf::Descriptor* Execute_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Execute_reflection_ = NULL;
const ::google::protobuf::Descriptor* Universal_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Universal_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_remote_2eproto() {
  protobuf_AddDesc_remote_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "remote.proto");
  GOOGLE_CHECK(file != NULL);
  Error_descriptor_ = file->message_type(0);
  static const int Error_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Error, code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Error, description_),
  };
  Error_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Error_descriptor_,
      Error::default_instance_,
      Error_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Error, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Error, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Error));
  Error_Code_descriptor_ = Error_descriptor_->enum_type(0);
  Execute_descriptor_ = file->message_type(1);
  static const int Execute_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Execute, current_dir_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Execute, executable_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Execute, args_),
  };
  Execute_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Execute_descriptor_,
      Execute::default_instance_,
      Execute_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Execute, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Execute, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Execute));
  Universal_descriptor_ = file->message_type(2);
  static const int Universal_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Universal, error_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Universal, execute_),
  };
  Universal_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Universal_descriptor_,
      Universal::default_instance_,
      Universal_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Universal, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Universal, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Universal));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_remote_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Error_descriptor_, &Error::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Execute_descriptor_, &Execute::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Universal_descriptor_, &Universal::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_remote_2eproto() {
  delete Error::default_instance_;
  delete Error_reflection_;
  delete Execute::default_instance_;
  delete Execute_reflection_;
  delete Universal::default_instance_;
  delete Universal_reflection_;
}

void protobuf_AddDesc_remote_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014remote.proto\022\020dist_clang.proto\"\237\001\n\005Err"
    "or\022.\n\004code\030\001 \002(\0162\034.dist_clang.proto.Erro"
    "r.Code:\002OK\022\023\n\013description\030\002 \001(\t\"Q\n\004Code\022"
    "\006\n\002OK\020\000\022\020\n\014INCONSEQUENT\020\001\022\013\n\007NETWORK\020\002\022\017"
    "\n\013BAD_MESSAGE\020\003\022\021\n\rEMPTY_MESSAGE\020\004\"@\n\007Ex"
    "ecute\022\023\n\013current_dir\030\001 \002(\t\022\022\n\nexecutable"
    "\030\002 \001(\t\022\014\n\004args\030\003 \003(\t\"_\n\tUniversal\022&\n\005err"
    "or\030\001 \001(\0132\027.dist_clang.proto.Error\022*\n\007exe"
    "cute\030\002 \001(\0132\031.dist_clang.proto.Execute", 357);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "remote.proto", &protobuf_RegisterTypes);
  Error::default_instance_ = new Error();
  Execute::default_instance_ = new Execute();
  Universal::default_instance_ = new Universal();
  Error::default_instance_->InitAsDefaultInstance();
  Execute::default_instance_->InitAsDefaultInstance();
  Universal::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_remote_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_remote_2eproto {
  StaticDescriptorInitializer_remote_2eproto() {
    protobuf_AddDesc_remote_2eproto();
  }
} static_descriptor_initializer_remote_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* Error_Code_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Error_Code_descriptor_;
}
bool Error_Code_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Error_Code Error::OK;
const Error_Code Error::INCONSEQUENT;
const Error_Code Error::NETWORK;
const Error_Code Error::BAD_MESSAGE;
const Error_Code Error::EMPTY_MESSAGE;
const Error_Code Error::Code_MIN;
const Error_Code Error::Code_MAX;
const int Error::Code_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Error::kCodeFieldNumber;
const int Error::kDescriptionFieldNumber;
#endif  // !_MSC_VER

Error::Error()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Error::InitAsDefaultInstance() {
}

Error::Error(const Error& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Error::SharedCtor() {
  _cached_size_ = 0;
  code_ = 0;
  description_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Error::~Error() {
  SharedDtor();
}

void Error::SharedDtor() {
  if (description_ != &::google::protobuf::internal::kEmptyString) {
    delete description_;
  }
  if (this != default_instance_) {
  }
}

void Error::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Error::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Error_descriptor_;
}

const Error& Error::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_remote_2eproto();
  return *default_instance_;
}

Error* Error::default_instance_ = NULL;

Error* Error::New() const {
  return new Error;
}

void Error::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    code_ = 0;
    if (has_description()) {
      if (description_ != &::google::protobuf::internal::kEmptyString) {
        description_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Error::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .dist_clang.proto.Error.Code code = 1 [default = OK];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::dist_clang::proto::Error_Code_IsValid(value)) {
            set_code(static_cast< ::dist_clang::proto::Error_Code >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_description;
        break;
      }

      // optional string description = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_description:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_description()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->description().data(), this->description().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
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

void Error::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .dist_clang.proto.Error.Code code = 1 [default = OK];
  if (has_code()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->code(), output);
  }

  // optional string description = 2;
  if (has_description()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->description().data(), this->description().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->description(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Error::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .dist_clang.proto.Error.Code code = 1 [default = OK];
  if (has_code()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->code(), target);
  }

  // optional string description = 2;
  if (has_description()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->description().data(), this->description().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->description(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Error::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .dist_clang.proto.Error.Code code = 1 [default = OK];
    if (has_code()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->code());
    }

    // optional string description = 2;
    if (has_description()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->description());
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

void Error::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Error* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Error*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Error::MergeFrom(const Error& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_code()) {
      set_code(from.code());
    }
    if (from.has_description()) {
      set_description(from.description());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Error::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Error::CopyFrom(const Error& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Error::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void Error::Swap(Error* other) {
  if (other != this) {
    std::swap(code_, other->code_);
    std::swap(description_, other->description_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Error::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Error_descriptor_;
  metadata.reflection = Error_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Execute::kCurrentDirFieldNumber;
const int Execute::kExecutableFieldNumber;
const int Execute::kArgsFieldNumber;
#endif  // !_MSC_VER

Execute::Execute()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Execute::InitAsDefaultInstance() {
}

Execute::Execute(const Execute& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Execute::SharedCtor() {
  _cached_size_ = 0;
  current_dir_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  executable_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Execute::~Execute() {
  SharedDtor();
}

void Execute::SharedDtor() {
  if (current_dir_ != &::google::protobuf::internal::kEmptyString) {
    delete current_dir_;
  }
  if (executable_ != &::google::protobuf::internal::kEmptyString) {
    delete executable_;
  }
  if (this != default_instance_) {
  }
}

void Execute::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Execute::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Execute_descriptor_;
}

const Execute& Execute::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_remote_2eproto();
  return *default_instance_;
}

Execute* Execute::default_instance_ = NULL;

Execute* Execute::New() const {
  return new Execute;
}

void Execute::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_current_dir()) {
      if (current_dir_ != &::google::protobuf::internal::kEmptyString) {
        current_dir_->clear();
      }
    }
    if (has_executable()) {
      if (executable_ != &::google::protobuf::internal::kEmptyString) {
        executable_->clear();
      }
    }
  }
  args_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Execute::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string current_dir = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_current_dir()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->current_dir().data(), this->current_dir().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_executable;
        break;
      }

      // optional string executable = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_executable:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_executable()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->executable().data(), this->executable().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_args;
        break;
      }

      // repeated string args = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_args:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_args()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->args(this->args_size() - 1).data(),
            this->args(this->args_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_args;
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

void Execute::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string current_dir = 1;
  if (has_current_dir()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->current_dir().data(), this->current_dir().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->current_dir(), output);
  }

  // optional string executable = 2;
  if (has_executable()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->executable().data(), this->executable().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->executable(), output);
  }

  // repeated string args = 3;
  for (int i = 0; i < this->args_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8String(
    this->args(i).data(), this->args(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->args(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Execute::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string current_dir = 1;
  if (has_current_dir()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->current_dir().data(), this->current_dir().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->current_dir(), target);
  }

  // optional string executable = 2;
  if (has_executable()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->executable().data(), this->executable().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->executable(), target);
  }

  // repeated string args = 3;
  for (int i = 0; i < this->args_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->args(i).data(), this->args(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(3, this->args(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Execute::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string current_dir = 1;
    if (has_current_dir()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->current_dir());
    }

    // optional string executable = 2;
    if (has_executable()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->executable());
    }

  }
  // repeated string args = 3;
  total_size += 1 * this->args_size();
  for (int i = 0; i < this->args_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->args(i));
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

void Execute::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Execute* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Execute*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Execute::MergeFrom(const Execute& from) {
  GOOGLE_CHECK_NE(&from, this);
  args_.MergeFrom(from.args_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_current_dir()) {
      set_current_dir(from.current_dir());
    }
    if (from.has_executable()) {
      set_executable(from.executable());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Execute::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Execute::CopyFrom(const Execute& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Execute::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void Execute::Swap(Execute* other) {
  if (other != this) {
    std::swap(current_dir_, other->current_dir_);
    std::swap(executable_, other->executable_);
    args_.Swap(&other->args_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Execute::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Execute_descriptor_;
  metadata.reflection = Execute_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Universal::kErrorFieldNumber;
const int Universal::kExecuteFieldNumber;
#endif  // !_MSC_VER

Universal::Universal()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Universal::InitAsDefaultInstance() {
  error_ = const_cast< ::dist_clang::proto::Error*>(&::dist_clang::proto::Error::default_instance());
  execute_ = const_cast< ::dist_clang::proto::Execute*>(&::dist_clang::proto::Execute::default_instance());
}

Universal::Universal(const Universal& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Universal::SharedCtor() {
  _cached_size_ = 0;
  error_ = NULL;
  execute_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Universal::~Universal() {
  SharedDtor();
}

void Universal::SharedDtor() {
  if (this != default_instance_) {
    delete error_;
    delete execute_;
  }
}

void Universal::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Universal::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Universal_descriptor_;
}

const Universal& Universal::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_remote_2eproto();
  return *default_instance_;
}

Universal* Universal::default_instance_ = NULL;

Universal* Universal::New() const {
  return new Universal;
}

void Universal::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_error()) {
      if (error_ != NULL) error_->::dist_clang::proto::Error::Clear();
    }
    if (has_execute()) {
      if (execute_ != NULL) execute_->::dist_clang::proto::Execute::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Universal::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .dist_clang.proto.Error error = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_error()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_execute;
        break;
      }

      // optional .dist_clang.proto.Execute execute = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_execute:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_execute()));
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

void Universal::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .dist_clang.proto.Error error = 1;
  if (has_error()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->error(), output);
  }

  // optional .dist_clang.proto.Execute execute = 2;
  if (has_execute()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->execute(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Universal::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional .dist_clang.proto.Error error = 1;
  if (has_error()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->error(), target);
  }

  // optional .dist_clang.proto.Execute execute = 2;
  if (has_execute()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->execute(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Universal::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .dist_clang.proto.Error error = 1;
    if (has_error()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->error());
    }

    // optional .dist_clang.proto.Execute execute = 2;
    if (has_execute()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->execute());
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

void Universal::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Universal* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Universal*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Universal::MergeFrom(const Universal& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_error()) {
      mutable_error()->::dist_clang::proto::Error::MergeFrom(from.error());
    }
    if (from.has_execute()) {
      mutable_execute()->::dist_clang::proto::Execute::MergeFrom(from.execute());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Universal::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Universal::CopyFrom(const Universal& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Universal::IsInitialized() const {

  if (has_error()) {
    if (!this->error().IsInitialized()) return false;
  }
  if (has_execute()) {
    if (!this->execute().IsInitialized()) return false;
  }
  return true;
}

void Universal::Swap(Universal* other) {
  if (other != this) {
    std::swap(error_, other->error_);
    std::swap(execute_, other->execute_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Universal::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Universal_descriptor_;
  metadata.reflection = Universal_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace dist_clang

// @@protoc_insertion_point(global_scope)