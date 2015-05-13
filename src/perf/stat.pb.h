// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perf/stat.proto

#ifndef PROTOBUF_perf_2fstat_2eproto__INCLUDED
#define PROTOBUF_perf_2fstat_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace dist_clang {
namespace perf {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_perf_2fstat_2eproto();
void protobuf_AssignDesc_perf_2fstat_2eproto();
void protobuf_ShutdownFile_perf_2fstat_2eproto();

class Metric;

enum Metric_Name {
  Metric_Name_DIRECT_CACHE_HIT = 1,
  Metric_Name_DIRECT_CACHE_MISS = 2,
  Metric_Name_SIMPLE_CACHE_HIT = 3,
  Metric_Name_SIMPLE_CACHE_MISS = 4
};
bool Metric_Name_IsValid(int value);
const Metric_Name Metric_Name_Name_MIN = Metric_Name_DIRECT_CACHE_HIT;
const Metric_Name Metric_Name_Name_MAX = Metric_Name_SIMPLE_CACHE_MISS;
const int Metric_Name_Name_ARRAYSIZE = Metric_Name_Name_MAX + 1;

const ::google::protobuf::EnumDescriptor* Metric_Name_descriptor();
inline const ::std::string& Metric_Name_Name(Metric_Name value) {
  return ::google::protobuf::internal::NameOfEnum(
    Metric_Name_descriptor(), value);
}
inline bool Metric_Name_Parse(
    const ::std::string& name, Metric_Name* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Metric_Name>(
    Metric_Name_descriptor(), name, value);
}
// ===================================================================

class Metric : public ::google::protobuf::Message {
 public:
  Metric();
  virtual ~Metric();

  Metric(const Metric& from);

  inline Metric& operator=(const Metric& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Metric& default_instance();

  void Swap(Metric* other);

  // implements Message ----------------------------------------------

  Metric* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Metric& from);
  void MergeFrom(const Metric& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Metric_Name Name;
  static const Name DIRECT_CACHE_HIT = Metric_Name_DIRECT_CACHE_HIT;
  static const Name DIRECT_CACHE_MISS = Metric_Name_DIRECT_CACHE_MISS;
  static const Name SIMPLE_CACHE_HIT = Metric_Name_SIMPLE_CACHE_HIT;
  static const Name SIMPLE_CACHE_MISS = Metric_Name_SIMPLE_CACHE_MISS;
  static inline bool Name_IsValid(int value) {
    return Metric_Name_IsValid(value);
  }
  static const Name Name_MIN =
    Metric_Name_Name_MIN;
  static const Name Name_MAX =
    Metric_Name_Name_MAX;
  static const int Name_ARRAYSIZE =
    Metric_Name_Name_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Name_descriptor() {
    return Metric_Name_descriptor();
  }
  static inline const ::std::string& Name_Name(Name value) {
    return Metric_Name_Name(value);
  }
  static inline bool Name_Parse(const ::std::string& name,
      Name* value) {
    return Metric_Name_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .dist_clang.perf.proto.Metric.Name name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline ::dist_clang::perf::proto::Metric_Name name() const;
  inline void set_name(::dist_clang::perf::proto::Metric_Name value);

  // optional uint64 value = 2;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 2;
  inline ::google::protobuf::uint64 value() const;
  inline void set_value(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:dist_clang.perf.proto.Metric)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_value();
  inline void clear_has_value();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 value_;
  int name_;
  friend void  protobuf_AddDesc_perf_2fstat_2eproto();
  friend void protobuf_AssignDesc_perf_2fstat_2eproto();
  friend void protobuf_ShutdownFile_perf_2fstat_2eproto();

  void InitAsDefaultInstance();
  static Metric* default_instance_;
};
// ===================================================================


// ===================================================================

// Metric

// required .dist_clang.perf.proto.Metric.Name name = 1;
inline bool Metric::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Metric::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Metric::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Metric::clear_name() {
  name_ = 1;
  clear_has_name();
}
inline ::dist_clang::perf::proto::Metric_Name Metric::name() const {
  // @@protoc_insertion_point(field_get:dist_clang.perf.proto.Metric.name)
  return static_cast< ::dist_clang::perf::proto::Metric_Name >(name_);
}
inline void Metric::set_name(::dist_clang::perf::proto::Metric_Name value) {
  assert(::dist_clang::perf::proto::Metric_Name_IsValid(value));
  set_has_name();
  name_ = value;
  // @@protoc_insertion_point(field_set:dist_clang.perf.proto.Metric.name)
}

// optional uint64 value = 2;
inline bool Metric::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Metric::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Metric::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Metric::clear_value() {
  value_ = GOOGLE_ULONGLONG(0);
  clear_has_value();
}
inline ::google::protobuf::uint64 Metric::value() const {
  // @@protoc_insertion_point(field_get:dist_clang.perf.proto.Metric.value)
  return value_;
}
inline void Metric::set_value(::google::protobuf::uint64 value) {
  set_has_value();
  value_ = value;
  // @@protoc_insertion_point(field_set:dist_clang.perf.proto.Metric.value)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace perf
}  // namespace dist_clang

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::dist_clang::perf::proto::Metric_Name> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::dist_clang::perf::proto::Metric_Name>() {
  return ::dist_clang::perf::proto::Metric_Name_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_perf_2fstat_2eproto__INCLUDED
