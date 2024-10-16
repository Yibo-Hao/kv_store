// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: kvservice.proto

#include "kvservice.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace KvStore {
constexpr GetRequest::GetRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : key_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct GetRequestDefaultTypeInternal {
  constexpr GetRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~GetRequestDefaultTypeInternal() {}
  union {
    GetRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT GetRequestDefaultTypeInternal _GetRequest_default_instance_;
constexpr GetResponse::GetResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : value_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , exists_(false){}
struct GetResponseDefaultTypeInternal {
  constexpr GetResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~GetResponseDefaultTypeInternal() {}
  union {
    GetResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT GetResponseDefaultTypeInternal _GetResponse_default_instance_;
constexpr SetRequest::SetRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : key_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , value_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct SetRequestDefaultTypeInternal {
  constexpr SetRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~SetRequestDefaultTypeInternal() {}
  union {
    SetRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT SetRequestDefaultTypeInternal _SetRequest_default_instance_;
constexpr SetResponse::SetResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : success_(false){}
struct SetResponseDefaultTypeInternal {
  constexpr SetResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~SetResponseDefaultTypeInternal() {}
  union {
    SetResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT SetResponseDefaultTypeInternal _SetResponse_default_instance_;
}  // namespace KvStore
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_kvservice_2eproto[4];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_kvservice_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_kvservice_2eproto = nullptr;

const uint32_t TableStruct_kvservice_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::KvStore::GetRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::KvStore::GetRequest, key_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::KvStore::GetResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::KvStore::GetResponse, exists_),
  PROTOBUF_FIELD_OFFSET(::KvStore::GetResponse, value_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::KvStore::SetRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::KvStore::SetRequest, key_),
  PROTOBUF_FIELD_OFFSET(::KvStore::SetRequest, value_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::KvStore::SetResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::KvStore::SetResponse, success_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::KvStore::GetRequest)},
  { 7, -1, -1, sizeof(::KvStore::GetResponse)},
  { 15, -1, -1, sizeof(::KvStore::SetRequest)},
  { 23, -1, -1, sizeof(::KvStore::SetResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::KvStore::_GetRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::KvStore::_GetResponse_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::KvStore::_SetRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::KvStore::_SetResponse_default_instance_),
};

const char descriptor_table_protodef_kvservice_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017kvservice.proto\022\007KvStore\"\031\n\nGetRequest"
  "\022\013\n\003key\030\001 \001(\t\",\n\013GetResponse\022\016\n\006exists\030\001"
  " \001(\010\022\r\n\005value\030\002 \001(\t\"(\n\nSetRequest\022\013\n\003key"
  "\030\001 \001(\t\022\r\n\005value\030\002 \001(\t\"\036\n\013SetResponse\022\017\n\007"
  "success\030\001 \001(\0102o\n\tKvService\0220\n\003Get\022\023.KvSt"
  "ore.GetRequest\032\024.KvStore.GetResponse\0220\n\003"
  "Set\022\023.KvStore.SetRequest\032\024.KvStore.SetRe"
  "sponseb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_kvservice_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_kvservice_2eproto = {
  false, false, 294, descriptor_table_protodef_kvservice_2eproto, "kvservice.proto", 
  &descriptor_table_kvservice_2eproto_once, nullptr, 0, 4,
  schemas, file_default_instances, TableStruct_kvservice_2eproto::offsets,
  file_level_metadata_kvservice_2eproto, file_level_enum_descriptors_kvservice_2eproto, file_level_service_descriptors_kvservice_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_kvservice_2eproto_getter() {
  return &descriptor_table_kvservice_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_kvservice_2eproto(&descriptor_table_kvservice_2eproto);
namespace KvStore {

// ===================================================================

class GetRequest::_Internal {
 public:
};

GetRequest::GetRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:KvStore.GetRequest)
}
GetRequest::GetRequest(const GetRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  key_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    key_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_key().empty()) {
    key_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_key(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:KvStore.GetRequest)
}

inline void GetRequest::SharedCtor() {
key_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  key_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

GetRequest::~GetRequest() {
  // @@protoc_insertion_point(destructor:KvStore.GetRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void GetRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  key_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void GetRequest::ArenaDtor(void* object) {
  GetRequest* _this = reinterpret_cast< GetRequest* >(object);
  (void)_this;
}
void GetRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void GetRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void GetRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:KvStore.GetRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  key_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GetRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string key = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_key();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "KvStore.GetRequest.key"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* GetRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:KvStore.GetRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string key = 1;
  if (!this->_internal_key().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_key().data(), static_cast<int>(this->_internal_key().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "KvStore.GetRequest.key");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_key(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:KvStore.GetRequest)
  return target;
}

size_t GetRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:KvStore.GetRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string key = 1;
  if (!this->_internal_key().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_key());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GetRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    GetRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetRequest::GetClassData() const { return &_class_data_; }

void GetRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<GetRequest *>(to)->MergeFrom(
      static_cast<const GetRequest &>(from));
}


void GetRequest::MergeFrom(const GetRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:KvStore.GetRequest)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_key().empty()) {
    _internal_set_key(from._internal_key());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GetRequest::CopyFrom(const GetRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:KvStore.GetRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetRequest::IsInitialized() const {
  return true;
}

void GetRequest::InternalSwap(GetRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &key_, lhs_arena,
      &other->key_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata GetRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_kvservice_2eproto_getter, &descriptor_table_kvservice_2eproto_once,
      file_level_metadata_kvservice_2eproto[0]);
}

// ===================================================================

class GetResponse::_Internal {
 public:
};

GetResponse::GetResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:KvStore.GetResponse)
}
GetResponse::GetResponse(const GetResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    value_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_value().empty()) {
    value_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_value(), 
      GetArenaForAllocation());
  }
  exists_ = from.exists_;
  // @@protoc_insertion_point(copy_constructor:KvStore.GetResponse)
}

inline void GetResponse::SharedCtor() {
value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  value_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
exists_ = false;
}

GetResponse::~GetResponse() {
  // @@protoc_insertion_point(destructor:KvStore.GetResponse)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void GetResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  value_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void GetResponse::ArenaDtor(void* object) {
  GetResponse* _this = reinterpret_cast< GetResponse* >(object);
  (void)_this;
}
void GetResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void GetResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void GetResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:KvStore.GetResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  value_.ClearToEmpty();
  exists_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GetResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bool exists = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          exists_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string value = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_value();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "KvStore.GetResponse.value"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* GetResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:KvStore.GetResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bool exists = 1;
  if (this->_internal_exists() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_exists(), target);
  }

  // string value = 2;
  if (!this->_internal_value().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_value().data(), static_cast<int>(this->_internal_value().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "KvStore.GetResponse.value");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:KvStore.GetResponse)
  return target;
}

size_t GetResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:KvStore.GetResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string value = 2;
  if (!this->_internal_value().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_value());
  }

  // bool exists = 1;
  if (this->_internal_exists() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GetResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    GetResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetResponse::GetClassData() const { return &_class_data_; }

void GetResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<GetResponse *>(to)->MergeFrom(
      static_cast<const GetResponse &>(from));
}


void GetResponse::MergeFrom(const GetResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:KvStore.GetResponse)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_value().empty()) {
    _internal_set_value(from._internal_value());
  }
  if (from._internal_exists() != 0) {
    _internal_set_exists(from._internal_exists());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GetResponse::CopyFrom(const GetResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:KvStore.GetResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetResponse::IsInitialized() const {
  return true;
}

void GetResponse::InternalSwap(GetResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &value_, lhs_arena,
      &other->value_, rhs_arena
  );
  swap(exists_, other->exists_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GetResponse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_kvservice_2eproto_getter, &descriptor_table_kvservice_2eproto_once,
      file_level_metadata_kvservice_2eproto[1]);
}

// ===================================================================

class SetRequest::_Internal {
 public:
};

SetRequest::SetRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:KvStore.SetRequest)
}
SetRequest::SetRequest(const SetRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  key_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    key_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_key().empty()) {
    key_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_key(), 
      GetArenaForAllocation());
  }
  value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    value_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_value().empty()) {
    value_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_value(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:KvStore.SetRequest)
}

inline void SetRequest::SharedCtor() {
key_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  key_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  value_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

SetRequest::~SetRequest() {
  // @@protoc_insertion_point(destructor:KvStore.SetRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void SetRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  key_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  value_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void SetRequest::ArenaDtor(void* object) {
  SetRequest* _this = reinterpret_cast< SetRequest* >(object);
  (void)_this;
}
void SetRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SetRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void SetRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:KvStore.SetRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  key_.ClearToEmpty();
  value_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SetRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string key = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_key();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "KvStore.SetRequest.key"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string value = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_value();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "KvStore.SetRequest.value"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SetRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:KvStore.SetRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string key = 1;
  if (!this->_internal_key().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_key().data(), static_cast<int>(this->_internal_key().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "KvStore.SetRequest.key");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_key(), target);
  }

  // string value = 2;
  if (!this->_internal_value().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_value().data(), static_cast<int>(this->_internal_value().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "KvStore.SetRequest.value");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:KvStore.SetRequest)
  return target;
}

size_t SetRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:KvStore.SetRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string key = 1;
  if (!this->_internal_key().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_key());
  }

  // string value = 2;
  if (!this->_internal_value().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_value());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SetRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    SetRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SetRequest::GetClassData() const { return &_class_data_; }

void SetRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<SetRequest *>(to)->MergeFrom(
      static_cast<const SetRequest &>(from));
}


void SetRequest::MergeFrom(const SetRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:KvStore.SetRequest)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_key().empty()) {
    _internal_set_key(from._internal_key());
  }
  if (!from._internal_value().empty()) {
    _internal_set_value(from._internal_value());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SetRequest::CopyFrom(const SetRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:KvStore.SetRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SetRequest::IsInitialized() const {
  return true;
}

void SetRequest::InternalSwap(SetRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &key_, lhs_arena,
      &other->key_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &value_, lhs_arena,
      &other->value_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata SetRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_kvservice_2eproto_getter, &descriptor_table_kvservice_2eproto_once,
      file_level_metadata_kvservice_2eproto[2]);
}

// ===================================================================

class SetResponse::_Internal {
 public:
};

SetResponse::SetResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:KvStore.SetResponse)
}
SetResponse::SetResponse(const SetResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  success_ = from.success_;
  // @@protoc_insertion_point(copy_constructor:KvStore.SetResponse)
}

inline void SetResponse::SharedCtor() {
success_ = false;
}

SetResponse::~SetResponse() {
  // @@protoc_insertion_point(destructor:KvStore.SetResponse)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void SetResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void SetResponse::ArenaDtor(void* object) {
  SetResponse* _this = reinterpret_cast< SetResponse* >(object);
  (void)_this;
}
void SetResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SetResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void SetResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:KvStore.SetResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  success_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SetResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bool success = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          success_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SetResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:KvStore.SetResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bool success = 1;
  if (this->_internal_success() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_success(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:KvStore.SetResponse)
  return target;
}

size_t SetResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:KvStore.SetResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bool success = 1;
  if (this->_internal_success() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SetResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    SetResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SetResponse::GetClassData() const { return &_class_data_; }

void SetResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<SetResponse *>(to)->MergeFrom(
      static_cast<const SetResponse &>(from));
}


void SetResponse::MergeFrom(const SetResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:KvStore.SetResponse)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_success() != 0) {
    _internal_set_success(from._internal_success());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SetResponse::CopyFrom(const SetResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:KvStore.SetResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SetResponse::IsInitialized() const {
  return true;
}

void SetResponse::InternalSwap(SetResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(success_, other->success_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SetResponse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_kvservice_2eproto_getter, &descriptor_table_kvservice_2eproto_once,
      file_level_metadata_kvservice_2eproto[3]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace KvStore
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::KvStore::GetRequest* Arena::CreateMaybeMessage< ::KvStore::GetRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::KvStore::GetRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::KvStore::GetResponse* Arena::CreateMaybeMessage< ::KvStore::GetResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::KvStore::GetResponse >(arena);
}
template<> PROTOBUF_NOINLINE ::KvStore::SetRequest* Arena::CreateMaybeMessage< ::KvStore::SetRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::KvStore::SetRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::KvStore::SetResponse* Arena::CreateMaybeMessage< ::KvStore::SetResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::KvStore::SetResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>