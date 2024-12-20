// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: kvservice.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_kvservice_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_kvservice_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_kvservice_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_kvservice_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_kvservice_2eproto;
namespace KvStore {
class GetRequest;
struct GetRequestDefaultTypeInternal;
extern GetRequestDefaultTypeInternal _GetRequest_default_instance_;
class GetResponse;
struct GetResponseDefaultTypeInternal;
extern GetResponseDefaultTypeInternal _GetResponse_default_instance_;
class SetRequest;
struct SetRequestDefaultTypeInternal;
extern SetRequestDefaultTypeInternal _SetRequest_default_instance_;
class SetResponse;
struct SetResponseDefaultTypeInternal;
extern SetResponseDefaultTypeInternal _SetResponse_default_instance_;
}  // namespace KvStore
PROTOBUF_NAMESPACE_OPEN
template<> ::KvStore::GetRequest* Arena::CreateMaybeMessage<::KvStore::GetRequest>(Arena*);
template<> ::KvStore::GetResponse* Arena::CreateMaybeMessage<::KvStore::GetResponse>(Arena*);
template<> ::KvStore::SetRequest* Arena::CreateMaybeMessage<::KvStore::SetRequest>(Arena*);
template<> ::KvStore::SetResponse* Arena::CreateMaybeMessage<::KvStore::SetResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace KvStore {

// ===================================================================

class GetRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:KvStore.GetRequest) */ {
 public:
  inline GetRequest() : GetRequest(nullptr) {}
  ~GetRequest() override;
  explicit constexpr GetRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GetRequest(const GetRequest& from);
  GetRequest(GetRequest&& from) noexcept
    : GetRequest() {
    *this = ::std::move(from);
  }

  inline GetRequest& operator=(const GetRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline GetRequest& operator=(GetRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const GetRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const GetRequest* internal_default_instance() {
    return reinterpret_cast<const GetRequest*>(
               &_GetRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GetRequest& a, GetRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(GetRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GetRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GetRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GetRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GetRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const GetRequest& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "KvStore.GetRequest";
  }
  protected:
  explicit GetRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kKeyFieldNumber = 1,
  };
  // string key = 1;
  void clear_key();
  const std::string& key() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_key(ArgT0&& arg0, ArgT... args);
  std::string* mutable_key();
  PROTOBUF_NODISCARD std::string* release_key();
  void set_allocated_key(std::string* key);
  private:
  const std::string& _internal_key() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_key(const std::string& value);
  std::string* _internal_mutable_key();
  public:

  // @@protoc_insertion_point(class_scope:KvStore.GetRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr key_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_kvservice_2eproto;
};
// -------------------------------------------------------------------

class GetResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:KvStore.GetResponse) */ {
 public:
  inline GetResponse() : GetResponse(nullptr) {}
  ~GetResponse() override;
  explicit constexpr GetResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GetResponse(const GetResponse& from);
  GetResponse(GetResponse&& from) noexcept
    : GetResponse() {
    *this = ::std::move(from);
  }

  inline GetResponse& operator=(const GetResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline GetResponse& operator=(GetResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const GetResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const GetResponse* internal_default_instance() {
    return reinterpret_cast<const GetResponse*>(
               &_GetResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(GetResponse& a, GetResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(GetResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GetResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GetResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GetResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GetResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const GetResponse& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "KvStore.GetResponse";
  }
  protected:
  explicit GetResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kValueFieldNumber = 2,
    kExistsFieldNumber = 1,
  };
  // string value = 2;
  void clear_value();
  const std::string& value() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_value(ArgT0&& arg0, ArgT... args);
  std::string* mutable_value();
  PROTOBUF_NODISCARD std::string* release_value();
  void set_allocated_value(std::string* value);
  private:
  const std::string& _internal_value() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_value(const std::string& value);
  std::string* _internal_mutable_value();
  public:

  // bool exists = 1;
  void clear_exists();
  bool exists() const;
  void set_exists(bool value);
  private:
  bool _internal_exists() const;
  void _internal_set_exists(bool value);
  public:

  // @@protoc_insertion_point(class_scope:KvStore.GetResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr value_;
  bool exists_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_kvservice_2eproto;
};
// -------------------------------------------------------------------

class SetRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:KvStore.SetRequest) */ {
 public:
  inline SetRequest() : SetRequest(nullptr) {}
  ~SetRequest() override;
  explicit constexpr SetRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SetRequest(const SetRequest& from);
  SetRequest(SetRequest&& from) noexcept
    : SetRequest() {
    *this = ::std::move(from);
  }

  inline SetRequest& operator=(const SetRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline SetRequest& operator=(SetRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SetRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const SetRequest* internal_default_instance() {
    return reinterpret_cast<const SetRequest*>(
               &_SetRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(SetRequest& a, SetRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(SetRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SetRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SetRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SetRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SetRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const SetRequest& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SetRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "KvStore.SetRequest";
  }
  protected:
  explicit SetRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kKeyFieldNumber = 1,
    kValueFieldNumber = 2,
  };
  // string key = 1;
  void clear_key();
  const std::string& key() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_key(ArgT0&& arg0, ArgT... args);
  std::string* mutable_key();
  PROTOBUF_NODISCARD std::string* release_key();
  void set_allocated_key(std::string* key);
  private:
  const std::string& _internal_key() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_key(const std::string& value);
  std::string* _internal_mutable_key();
  public:

  // string value = 2;
  void clear_value();
  const std::string& value() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_value(ArgT0&& arg0, ArgT... args);
  std::string* mutable_value();
  PROTOBUF_NODISCARD std::string* release_value();
  void set_allocated_value(std::string* value);
  private:
  const std::string& _internal_value() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_value(const std::string& value);
  std::string* _internal_mutable_value();
  public:

  // @@protoc_insertion_point(class_scope:KvStore.SetRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr key_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr value_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_kvservice_2eproto;
};
// -------------------------------------------------------------------

class SetResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:KvStore.SetResponse) */ {
 public:
  inline SetResponse() : SetResponse(nullptr) {}
  ~SetResponse() override;
  explicit constexpr SetResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SetResponse(const SetResponse& from);
  SetResponse(SetResponse&& from) noexcept
    : SetResponse() {
    *this = ::std::move(from);
  }

  inline SetResponse& operator=(const SetResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline SetResponse& operator=(SetResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SetResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const SetResponse* internal_default_instance() {
    return reinterpret_cast<const SetResponse*>(
               &_SetResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(SetResponse& a, SetResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(SetResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SetResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SetResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SetResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SetResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const SetResponse& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SetResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "KvStore.SetResponse";
  }
  protected:
  explicit SetResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSuccessFieldNumber = 1,
  };
  // bool success = 1;
  void clear_success();
  bool success() const;
  void set_success(bool value);
  private:
  bool _internal_success() const;
  void _internal_set_success(bool value);
  public:

  // @@protoc_insertion_point(class_scope:KvStore.SetResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  bool success_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_kvservice_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GetRequest

// string key = 1;
inline void GetRequest::clear_key() {
  key_.ClearToEmpty();
}
inline const std::string& GetRequest::key() const {
  // @@protoc_insertion_point(field_get:KvStore.GetRequest.key)
  return _internal_key();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GetRequest::set_key(ArgT0&& arg0, ArgT... args) {
 
 key_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:KvStore.GetRequest.key)
}
inline std::string* GetRequest::mutable_key() {
  std::string* _s = _internal_mutable_key();
  // @@protoc_insertion_point(field_mutable:KvStore.GetRequest.key)
  return _s;
}
inline const std::string& GetRequest::_internal_key() const {
  return key_.Get();
}
inline void GetRequest::_internal_set_key(const std::string& value) {
  
  key_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* GetRequest::_internal_mutable_key() {
  
  return key_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* GetRequest::release_key() {
  // @@protoc_insertion_point(field_release:KvStore.GetRequest.key)
  return key_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void GetRequest::set_allocated_key(std::string* key) {
  if (key != nullptr) {
    
  } else {
    
  }
  key_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), key,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (key_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    key_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:KvStore.GetRequest.key)
}

// -------------------------------------------------------------------

// GetResponse

// bool exists = 1;
inline void GetResponse::clear_exists() {
  exists_ = false;
}
inline bool GetResponse::_internal_exists() const {
  return exists_;
}
inline bool GetResponse::exists() const {
  // @@protoc_insertion_point(field_get:KvStore.GetResponse.exists)
  return _internal_exists();
}
inline void GetResponse::_internal_set_exists(bool value) {
  
  exists_ = value;
}
inline void GetResponse::set_exists(bool value) {
  _internal_set_exists(value);
  // @@protoc_insertion_point(field_set:KvStore.GetResponse.exists)
}

// string value = 2;
inline void GetResponse::clear_value() {
  value_.ClearToEmpty();
}
inline const std::string& GetResponse::value() const {
  // @@protoc_insertion_point(field_get:KvStore.GetResponse.value)
  return _internal_value();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GetResponse::set_value(ArgT0&& arg0, ArgT... args) {
 
 value_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:KvStore.GetResponse.value)
}
inline std::string* GetResponse::mutable_value() {
  std::string* _s = _internal_mutable_value();
  // @@protoc_insertion_point(field_mutable:KvStore.GetResponse.value)
  return _s;
}
inline const std::string& GetResponse::_internal_value() const {
  return value_.Get();
}
inline void GetResponse::_internal_set_value(const std::string& value) {
  
  value_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* GetResponse::_internal_mutable_value() {
  
  return value_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* GetResponse::release_value() {
  // @@protoc_insertion_point(field_release:KvStore.GetResponse.value)
  return value_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void GetResponse::set_allocated_value(std::string* value) {
  if (value != nullptr) {
    
  } else {
    
  }
  value_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (value_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    value_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:KvStore.GetResponse.value)
}

// -------------------------------------------------------------------

// SetRequest

// string key = 1;
inline void SetRequest::clear_key() {
  key_.ClearToEmpty();
}
inline const std::string& SetRequest::key() const {
  // @@protoc_insertion_point(field_get:KvStore.SetRequest.key)
  return _internal_key();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SetRequest::set_key(ArgT0&& arg0, ArgT... args) {
 
 key_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:KvStore.SetRequest.key)
}
inline std::string* SetRequest::mutable_key() {
  std::string* _s = _internal_mutable_key();
  // @@protoc_insertion_point(field_mutable:KvStore.SetRequest.key)
  return _s;
}
inline const std::string& SetRequest::_internal_key() const {
  return key_.Get();
}
inline void SetRequest::_internal_set_key(const std::string& value) {
  
  key_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* SetRequest::_internal_mutable_key() {
  
  return key_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* SetRequest::release_key() {
  // @@protoc_insertion_point(field_release:KvStore.SetRequest.key)
  return key_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void SetRequest::set_allocated_key(std::string* key) {
  if (key != nullptr) {
    
  } else {
    
  }
  key_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), key,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (key_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    key_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:KvStore.SetRequest.key)
}

// string value = 2;
inline void SetRequest::clear_value() {
  value_.ClearToEmpty();
}
inline const std::string& SetRequest::value() const {
  // @@protoc_insertion_point(field_get:KvStore.SetRequest.value)
  return _internal_value();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SetRequest::set_value(ArgT0&& arg0, ArgT... args) {
 
 value_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:KvStore.SetRequest.value)
}
inline std::string* SetRequest::mutable_value() {
  std::string* _s = _internal_mutable_value();
  // @@protoc_insertion_point(field_mutable:KvStore.SetRequest.value)
  return _s;
}
inline const std::string& SetRequest::_internal_value() const {
  return value_.Get();
}
inline void SetRequest::_internal_set_value(const std::string& value) {
  
  value_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* SetRequest::_internal_mutable_value() {
  
  return value_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* SetRequest::release_value() {
  // @@protoc_insertion_point(field_release:KvStore.SetRequest.value)
  return value_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void SetRequest::set_allocated_value(std::string* value) {
  if (value != nullptr) {
    
  } else {
    
  }
  value_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (value_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    value_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:KvStore.SetRequest.value)
}

// -------------------------------------------------------------------

// SetResponse

// bool success = 1;
inline void SetResponse::clear_success() {
  success_ = false;
}
inline bool SetResponse::_internal_success() const {
  return success_;
}
inline bool SetResponse::success() const {
  // @@protoc_insertion_point(field_get:KvStore.SetResponse.success)
  return _internal_success();
}
inline void SetResponse::_internal_set_success(bool value) {
  
  success_ = value;
}
inline void SetResponse::set_success(bool value) {
  _internal_set_success(value);
  // @@protoc_insertion_point(field_set:KvStore.SetResponse.success)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace KvStore

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_kvservice_2eproto
