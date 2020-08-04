// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: xrecorder/protobuf/DataRecord.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "shared/xrecorder/protobuf/DataRecord.pb.h"

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

namespace mixr {
namespace xrecorder {
namespace pb {

namespace {

const ::google::protobuf::Descriptor* MyDataMsg_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MyDataMsg_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_xrecorder_2fprotobuf_2fDataRecord_2eproto() {
  protobuf_AddDesc_xrecorder_2fprotobuf_2fDataRecord_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "xrecorder/protobuf/DataRecord.proto");
  GOOGLE_CHECK(file != NULL);
  MyDataMsg_descriptor_ = file->message_type(0);
  static const int MyDataMsg_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MyDataMsg, fee_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MyDataMsg, fi_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MyDataMsg, fo_),
  };
  MyDataMsg_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MyDataMsg_descriptor_,
      MyDataMsg::default_instance_,
      MyDataMsg_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MyDataMsg, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MyDataMsg, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MyDataMsg));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_xrecorder_2fprotobuf_2fDataRecord_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MyDataMsg_descriptor_, &MyDataMsg::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_xrecorder_2fprotobuf_2fDataRecord_2eproto() {
  delete MyDataMsg::default_instance_;
  delete MyDataMsg_reflection_;
}

void protobuf_AddDesc_xrecorder_2fprotobuf_2fDataRecord_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::mixr::recorder::pb::protobuf_AddDesc_mixr_2frecorder_2fprotobuf_2fDataRecord_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n#xrecorder/protobuf/DataRecord.proto\022\021m"
    "ixr.xrecorder.pb\032\'mixr/recorder/protobuf"
    "/DataRecord.proto\"0\n\tMyDataMsg\022\013\n\003fee\030\001 "
    "\002(\r\022\n\n\002fi\030\002 \002(\r\022\n\n\002fo\030\003 \002(\r:P\n\013my_data_m"
    "sg\022\034.mixr.recorder.pb.DataRecord\030\350\007 \001(\0132"
    "\034.mixr.xrecorder.pb.MyDataMsg:(\n\003foo\022\033.m"
    "ixr.recorder.pb.MarkerMsg\030d \001(\r", 271);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "xrecorder/protobuf/DataRecord.proto", &protobuf_RegisterTypes);
  MyDataMsg::default_instance_ = new MyDataMsg();
  ::google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
    &::mixr::recorder::pb::DataRecord::default_instance(),
    1000, 11, false, false,
    &::mixr::xrecorder::pb::MyDataMsg::default_instance());
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::mixr::recorder::pb::MarkerMsg::default_instance(),
    100, 13, false, false);
  MyDataMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_xrecorder_2fprotobuf_2fDataRecord_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_xrecorder_2fprotobuf_2fDataRecord_2eproto {
  StaticDescriptorInitializer_xrecorder_2fprotobuf_2fDataRecord_2eproto() {
    protobuf_AddDesc_xrecorder_2fprotobuf_2fDataRecord_2eproto();
  }
} static_descriptor_initializer_xrecorder_2fprotobuf_2fDataRecord_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MyDataMsg::kFeeFieldNumber;
const int MyDataMsg::kFiFieldNumber;
const int MyDataMsg::kFoFieldNumber;
#endif  // !_MSC_VER

MyDataMsg::MyDataMsg()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mixr.xrecorder.pb.MyDataMsg)
}

void MyDataMsg::InitAsDefaultInstance() {
}

MyDataMsg::MyDataMsg(const MyDataMsg& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:mixr.xrecorder.pb.MyDataMsg)
}

void MyDataMsg::SharedCtor() {
  _cached_size_ = 0;
  fee_ = 0u;
  fi_ = 0u;
  fo_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MyDataMsg::~MyDataMsg() {
  // @@protoc_insertion_point(destructor:mixr.xrecorder.pb.MyDataMsg)
  SharedDtor();
}

void MyDataMsg::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MyDataMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MyDataMsg::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MyDataMsg_descriptor_;
}

const MyDataMsg& MyDataMsg::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_xrecorder_2fprotobuf_2fDataRecord_2eproto();
  return *default_instance_;
}

MyDataMsg* MyDataMsg::default_instance_ = NULL;

MyDataMsg* MyDataMsg::New() const {
  return new MyDataMsg;
}

void MyDataMsg::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<MyDataMsg*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(fee_, fo_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MyDataMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:mixr.xrecorder.pb.MyDataMsg)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 fee = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &fee_)));
          set_has_fee();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_fi;
        break;
      }

      // required uint32 fi = 2;
      case 2: {
        if (tag == 16) {
         parse_fi:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &fi_)));
          set_has_fi();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_fo;
        break;
      }

      // required uint32 fo = 3;
      case 3: {
        if (tag == 24) {
         parse_fo:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &fo_)));
          set_has_fo();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:mixr.xrecorder.pb.MyDataMsg)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:mixr.xrecorder.pb.MyDataMsg)
  return false;
#undef DO_
}

void MyDataMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:mixr.xrecorder.pb.MyDataMsg)
  // required uint32 fee = 1;
  if (has_fee()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->fee(), output);
  }

  // required uint32 fi = 2;
  if (has_fi()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->fi(), output);
  }

  // required uint32 fo = 3;
  if (has_fo()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->fo(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:mixr.xrecorder.pb.MyDataMsg)
}

::google::protobuf::uint8* MyDataMsg::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:mixr.xrecorder.pb.MyDataMsg)
  // required uint32 fee = 1;
  if (has_fee()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->fee(), target);
  }

  // required uint32 fi = 2;
  if (has_fi()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->fi(), target);
  }

  // required uint32 fo = 3;
  if (has_fo()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->fo(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mixr.xrecorder.pb.MyDataMsg)
  return target;
}

int MyDataMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 fee = 1;
    if (has_fee()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->fee());
    }

    // required uint32 fi = 2;
    if (has_fi()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->fi());
    }

    // required uint32 fo = 3;
    if (has_fo()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->fo());
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

void MyDataMsg::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MyDataMsg* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MyDataMsg*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MyDataMsg::MergeFrom(const MyDataMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_fee()) {
      set_fee(from.fee());
    }
    if (from.has_fi()) {
      set_fi(from.fi());
    }
    if (from.has_fo()) {
      set_fo(from.fo());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MyDataMsg::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MyDataMsg::CopyFrom(const MyDataMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MyDataMsg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void MyDataMsg::Swap(MyDataMsg* other) {
  if (other != this) {
    std::swap(fee_, other->fee_);
    std::swap(fi_, other->fi_);
    std::swap(fo_, other->fo_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MyDataMsg::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MyDataMsg_descriptor_;
  metadata.reflection = MyDataMsg_reflection_;
  return metadata;
}

::google::protobuf::internal::ExtensionIdentifier< ::mixr::recorder::pb::DataRecord,
    ::google::protobuf::internal::MessageTypeTraits< ::mixr::xrecorder::pb::MyDataMsg >, 11, false >
  my_data_msg(kMyDataMsgFieldNumber, ::mixr::xrecorder::pb::MyDataMsg::default_instance());
::google::protobuf::internal::ExtensionIdentifier< ::mixr::recorder::pb::MarkerMsg,
    ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::uint32 >, 13, false >
  foo(kFooFieldNumber, 0u);

// @@protoc_insertion_point(namespace_scope)

}  // namespace pb
}  // namespace xrecorder
}  // namespace mixr

// @@protoc_insertion_point(global_scope)