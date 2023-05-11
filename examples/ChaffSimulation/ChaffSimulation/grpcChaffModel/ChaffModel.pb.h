// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ChaffModel.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ChaffModel_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ChaffModel_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021009 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ChaffModel_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ChaffModel_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ChaffModel_2eproto;
class ChaffCreateRequest;
struct ChaffCreateRequestDefaultTypeInternal;
extern ChaffCreateRequestDefaultTypeInternal _ChaffCreateRequest_default_instance_;
class ChaffInfo;
struct ChaffInfoDefaultTypeInternal;
extern ChaffInfoDefaultTypeInternal _ChaffInfo_default_instance_;
class ChaffInfoRequest;
struct ChaffInfoRequestDefaultTypeInternal;
extern ChaffInfoRequestDefaultTypeInternal _ChaffInfoRequest_default_instance_;
class ResponseMessage;
struct ResponseMessageDefaultTypeInternal;
extern ResponseMessageDefaultTypeInternal _ResponseMessage_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::ChaffCreateRequest* Arena::CreateMaybeMessage<::ChaffCreateRequest>(Arena*);
template<> ::ChaffInfo* Arena::CreateMaybeMessage<::ChaffInfo>(Arena*);
template<> ::ChaffInfoRequest* Arena::CreateMaybeMessage<::ChaffInfoRequest>(Arena*);
template<> ::ResponseMessage* Arena::CreateMaybeMessage<::ResponseMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class ChaffCreateRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ChaffCreateRequest) */ {
 public:
  inline ChaffCreateRequest() : ChaffCreateRequest(nullptr) {}
  ~ChaffCreateRequest() override;
  explicit PROTOBUF_CONSTEXPR ChaffCreateRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ChaffCreateRequest(const ChaffCreateRequest& from);
  ChaffCreateRequest(ChaffCreateRequest&& from) noexcept
    : ChaffCreateRequest() {
    *this = ::std::move(from);
  }

  inline ChaffCreateRequest& operator=(const ChaffCreateRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline ChaffCreateRequest& operator=(ChaffCreateRequest&& from) noexcept {
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
  static const ChaffCreateRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const ChaffCreateRequest* internal_default_instance() {
    return reinterpret_cast<const ChaffCreateRequest*>(
               &_ChaffCreateRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ChaffCreateRequest& a, ChaffCreateRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(ChaffCreateRequest* other) {
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
  void UnsafeArenaSwap(ChaffCreateRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ChaffCreateRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ChaffCreateRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ChaffCreateRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ChaffCreateRequest& from) {
    ChaffCreateRequest::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ChaffCreateRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ChaffCreateRequest";
  }
  protected:
  explicit ChaffCreateRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMaxRCSFieldNumber = 2,
    kTCFieldNumber = 3,
    kTIfFieldNumber = 4,
    kTEfFieldNumber = 5,
    kTTrendFieldNumber = 6,
    kCreationTimeFieldNumber = 7,
    kIdFieldNumber = 1,
  };
  // double maxRCS = 2;
  void clear_maxrcs();
  double maxrcs() const;
  void set_maxrcs(double value);
  private:
  double _internal_maxrcs() const;
  void _internal_set_maxrcs(double value);
  public:

  // double T_c = 3;
  void clear_t_c();
  double t_c() const;
  void set_t_c(double value);
  private:
  double _internal_t_c() const;
  void _internal_set_t_c(double value);
  public:

  // double T_if = 4;
  void clear_t_if();
  double t_if() const;
  void set_t_if(double value);
  private:
  double _internal_t_if() const;
  void _internal_set_t_if(double value);
  public:

  // double T_ef = 5;
  void clear_t_ef();
  double t_ef() const;
  void set_t_ef(double value);
  private:
  double _internal_t_ef() const;
  void _internal_set_t_ef(double value);
  public:

  // double T_trend = 6;
  void clear_t_trend();
  double t_trend() const;
  void set_t_trend(double value);
  private:
  double _internal_t_trend() const;
  void _internal_set_t_trend(double value);
  public:

  // double CreationTime = 7;
  void clear_creationtime();
  double creationtime() const;
  void set_creationtime(double value);
  private:
  double _internal_creationtime() const;
  void _internal_set_creationtime(double value);
  public:

  // int32 id = 1;
  void clear_id();
  int32_t id() const;
  void set_id(int32_t value);
  private:
  int32_t _internal_id() const;
  void _internal_set_id(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:ChaffCreateRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    double maxrcs_;
    double t_c_;
    double t_if_;
    double t_ef_;
    double t_trend_;
    double creationtime_;
    int32_t id_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ChaffModel_2eproto;
};
// -------------------------------------------------------------------

class ResponseMessage final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ResponseMessage) */ {
 public:
  inline ResponseMessage() : ResponseMessage(nullptr) {}
  ~ResponseMessage() override;
  explicit PROTOBUF_CONSTEXPR ResponseMessage(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ResponseMessage(const ResponseMessage& from);
  ResponseMessage(ResponseMessage&& from) noexcept
    : ResponseMessage() {
    *this = ::std::move(from);
  }

  inline ResponseMessage& operator=(const ResponseMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline ResponseMessage& operator=(ResponseMessage&& from) noexcept {
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
  static const ResponseMessage& default_instance() {
    return *internal_default_instance();
  }
  static inline const ResponseMessage* internal_default_instance() {
    return reinterpret_cast<const ResponseMessage*>(
               &_ResponseMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ResponseMessage& a, ResponseMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(ResponseMessage* other) {
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
  void UnsafeArenaSwap(ResponseMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ResponseMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ResponseMessage>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ResponseMessage& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ResponseMessage& from) {
    ResponseMessage::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ResponseMessage* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ResponseMessage";
  }
  protected:
  explicit ResponseMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResponseMessageFieldNumber = 1,
  };
  // string responseMessage = 1;
  void clear_responsemessage();
  const std::string& responsemessage() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_responsemessage(ArgT0&& arg0, ArgT... args);
  std::string* mutable_responsemessage();
  PROTOBUF_NODISCARD std::string* release_responsemessage();
  void set_allocated_responsemessage(std::string* responsemessage);
  private:
  const std::string& _internal_responsemessage() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_responsemessage(const std::string& value);
  std::string* _internal_mutable_responsemessage();
  public:

  // @@protoc_insertion_point(class_scope:ResponseMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr responsemessage_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ChaffModel_2eproto;
};
// -------------------------------------------------------------------

class ChaffInfoRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ChaffInfoRequest) */ {
 public:
  inline ChaffInfoRequest() : ChaffInfoRequest(nullptr) {}
  ~ChaffInfoRequest() override;
  explicit PROTOBUF_CONSTEXPR ChaffInfoRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ChaffInfoRequest(const ChaffInfoRequest& from);
  ChaffInfoRequest(ChaffInfoRequest&& from) noexcept
    : ChaffInfoRequest() {
    *this = ::std::move(from);
  }

  inline ChaffInfoRequest& operator=(const ChaffInfoRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline ChaffInfoRequest& operator=(ChaffInfoRequest&& from) noexcept {
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
  static const ChaffInfoRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const ChaffInfoRequest* internal_default_instance() {
    return reinterpret_cast<const ChaffInfoRequest*>(
               &_ChaffInfoRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(ChaffInfoRequest& a, ChaffInfoRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(ChaffInfoRequest* other) {
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
  void UnsafeArenaSwap(ChaffInfoRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ChaffInfoRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ChaffInfoRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ChaffInfoRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ChaffInfoRequest& from) {
    ChaffInfoRequest::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ChaffInfoRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ChaffInfoRequest";
  }
  protected:
  explicit ChaffInfoRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSimulationTimeFieldNumber = 2,
    kIdFieldNumber = 1,
  };
  // double SimulationTime = 2;
  void clear_simulationtime();
  double simulationtime() const;
  void set_simulationtime(double value);
  private:
  double _internal_simulationtime() const;
  void _internal_set_simulationtime(double value);
  public:

  // int32 id = 1;
  void clear_id();
  int32_t id() const;
  void set_id(int32_t value);
  private:
  int32_t _internal_id() const;
  void _internal_set_id(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:ChaffInfoRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    double simulationtime_;
    int32_t id_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ChaffModel_2eproto;
};
// -------------------------------------------------------------------

class ChaffInfo final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ChaffInfo) */ {
 public:
  inline ChaffInfo() : ChaffInfo(nullptr) {}
  ~ChaffInfo() override;
  explicit PROTOBUF_CONSTEXPR ChaffInfo(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ChaffInfo(const ChaffInfo& from);
  ChaffInfo(ChaffInfo&& from) noexcept
    : ChaffInfo() {
    *this = ::std::move(from);
  }

  inline ChaffInfo& operator=(const ChaffInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline ChaffInfo& operator=(ChaffInfo&& from) noexcept {
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
  static const ChaffInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const ChaffInfo* internal_default_instance() {
    return reinterpret_cast<const ChaffInfo*>(
               &_ChaffInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(ChaffInfo& a, ChaffInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(ChaffInfo* other) {
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
  void UnsafeArenaSwap(ChaffInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ChaffInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ChaffInfo>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ChaffInfo& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ChaffInfo& from) {
    ChaffInfo::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ChaffInfo* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ChaffInfo";
  }
  protected:
  explicit ChaffInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRCSFieldNumber = 1,
  };
  // double RCS = 1;
  void clear_rcs();
  double rcs() const;
  void set_rcs(double value);
  private:
  double _internal_rcs() const;
  void _internal_set_rcs(double value);
  public:

  // @@protoc_insertion_point(class_scope:ChaffInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    double rcs_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ChaffModel_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ChaffCreateRequest

// int32 id = 1;
inline void ChaffCreateRequest::clear_id() {
  _impl_.id_ = 0;
}
inline int32_t ChaffCreateRequest::_internal_id() const {
  return _impl_.id_;
}
inline int32_t ChaffCreateRequest::id() const {
  // @@protoc_insertion_point(field_get:ChaffCreateRequest.id)
  return _internal_id();
}
inline void ChaffCreateRequest::_internal_set_id(int32_t value) {
  
  _impl_.id_ = value;
}
inline void ChaffCreateRequest::set_id(int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:ChaffCreateRequest.id)
}

// double maxRCS = 2;
inline void ChaffCreateRequest::clear_maxrcs() {
  _impl_.maxrcs_ = 0;
}
inline double ChaffCreateRequest::_internal_maxrcs() const {
  return _impl_.maxrcs_;
}
inline double ChaffCreateRequest::maxrcs() const {
  // @@protoc_insertion_point(field_get:ChaffCreateRequest.maxRCS)
  return _internal_maxrcs();
}
inline void ChaffCreateRequest::_internal_set_maxrcs(double value) {
  
  _impl_.maxrcs_ = value;
}
inline void ChaffCreateRequest::set_maxrcs(double value) {
  _internal_set_maxrcs(value);
  // @@protoc_insertion_point(field_set:ChaffCreateRequest.maxRCS)
}

// double T_c = 3;
inline void ChaffCreateRequest::clear_t_c() {
  _impl_.t_c_ = 0;
}
inline double ChaffCreateRequest::_internal_t_c() const {
  return _impl_.t_c_;
}
inline double ChaffCreateRequest::t_c() const {
  // @@protoc_insertion_point(field_get:ChaffCreateRequest.T_c)
  return _internal_t_c();
}
inline void ChaffCreateRequest::_internal_set_t_c(double value) {
  
  _impl_.t_c_ = value;
}
inline void ChaffCreateRequest::set_t_c(double value) {
  _internal_set_t_c(value);
  // @@protoc_insertion_point(field_set:ChaffCreateRequest.T_c)
}

// double T_if = 4;
inline void ChaffCreateRequest::clear_t_if() {
  _impl_.t_if_ = 0;
}
inline double ChaffCreateRequest::_internal_t_if() const {
  return _impl_.t_if_;
}
inline double ChaffCreateRequest::t_if() const {
  // @@protoc_insertion_point(field_get:ChaffCreateRequest.T_if)
  return _internal_t_if();
}
inline void ChaffCreateRequest::_internal_set_t_if(double value) {
  
  _impl_.t_if_ = value;
}
inline void ChaffCreateRequest::set_t_if(double value) {
  _internal_set_t_if(value);
  // @@protoc_insertion_point(field_set:ChaffCreateRequest.T_if)
}

// double T_ef = 5;
inline void ChaffCreateRequest::clear_t_ef() {
  _impl_.t_ef_ = 0;
}
inline double ChaffCreateRequest::_internal_t_ef() const {
  return _impl_.t_ef_;
}
inline double ChaffCreateRequest::t_ef() const {
  // @@protoc_insertion_point(field_get:ChaffCreateRequest.T_ef)
  return _internal_t_ef();
}
inline void ChaffCreateRequest::_internal_set_t_ef(double value) {
  
  _impl_.t_ef_ = value;
}
inline void ChaffCreateRequest::set_t_ef(double value) {
  _internal_set_t_ef(value);
  // @@protoc_insertion_point(field_set:ChaffCreateRequest.T_ef)
}

// double T_trend = 6;
inline void ChaffCreateRequest::clear_t_trend() {
  _impl_.t_trend_ = 0;
}
inline double ChaffCreateRequest::_internal_t_trend() const {
  return _impl_.t_trend_;
}
inline double ChaffCreateRequest::t_trend() const {
  // @@protoc_insertion_point(field_get:ChaffCreateRequest.T_trend)
  return _internal_t_trend();
}
inline void ChaffCreateRequest::_internal_set_t_trend(double value) {
  
  _impl_.t_trend_ = value;
}
inline void ChaffCreateRequest::set_t_trend(double value) {
  _internal_set_t_trend(value);
  // @@protoc_insertion_point(field_set:ChaffCreateRequest.T_trend)
}

// double CreationTime = 7;
inline void ChaffCreateRequest::clear_creationtime() {
  _impl_.creationtime_ = 0;
}
inline double ChaffCreateRequest::_internal_creationtime() const {
  return _impl_.creationtime_;
}
inline double ChaffCreateRequest::creationtime() const {
  // @@protoc_insertion_point(field_get:ChaffCreateRequest.CreationTime)
  return _internal_creationtime();
}
inline void ChaffCreateRequest::_internal_set_creationtime(double value) {
  
  _impl_.creationtime_ = value;
}
inline void ChaffCreateRequest::set_creationtime(double value) {
  _internal_set_creationtime(value);
  // @@protoc_insertion_point(field_set:ChaffCreateRequest.CreationTime)
}

// -------------------------------------------------------------------

// ResponseMessage

// string responseMessage = 1;
inline void ResponseMessage::clear_responsemessage() {
  _impl_.responsemessage_.ClearToEmpty();
}
inline const std::string& ResponseMessage::responsemessage() const {
  // @@protoc_insertion_point(field_get:ResponseMessage.responseMessage)
  return _internal_responsemessage();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ResponseMessage::set_responsemessage(ArgT0&& arg0, ArgT... args) {
 
 _impl_.responsemessage_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:ResponseMessage.responseMessage)
}
inline std::string* ResponseMessage::mutable_responsemessage() {
  std::string* _s = _internal_mutable_responsemessage();
  // @@protoc_insertion_point(field_mutable:ResponseMessage.responseMessage)
  return _s;
}
inline const std::string& ResponseMessage::_internal_responsemessage() const {
  return _impl_.responsemessage_.Get();
}
inline void ResponseMessage::_internal_set_responsemessage(const std::string& value) {
  
  _impl_.responsemessage_.Set(value, GetArenaForAllocation());
}
inline std::string* ResponseMessage::_internal_mutable_responsemessage() {
  
  return _impl_.responsemessage_.Mutable(GetArenaForAllocation());
}
inline std::string* ResponseMessage::release_responsemessage() {
  // @@protoc_insertion_point(field_release:ResponseMessage.responseMessage)
  return _impl_.responsemessage_.Release();
}
inline void ResponseMessage::set_allocated_responsemessage(std::string* responsemessage) {
  if (responsemessage != nullptr) {
    
  } else {
    
  }
  _impl_.responsemessage_.SetAllocated(responsemessage, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.responsemessage_.IsDefault()) {
    _impl_.responsemessage_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:ResponseMessage.responseMessage)
}

// -------------------------------------------------------------------

// ChaffInfoRequest

// int32 id = 1;
inline void ChaffInfoRequest::clear_id() {
  _impl_.id_ = 0;
}
inline int32_t ChaffInfoRequest::_internal_id() const {
  return _impl_.id_;
}
inline int32_t ChaffInfoRequest::id() const {
  // @@protoc_insertion_point(field_get:ChaffInfoRequest.id)
  return _internal_id();
}
inline void ChaffInfoRequest::_internal_set_id(int32_t value) {
  
  _impl_.id_ = value;
}
inline void ChaffInfoRequest::set_id(int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:ChaffInfoRequest.id)
}

// double SimulationTime = 2;
inline void ChaffInfoRequest::clear_simulationtime() {
  _impl_.simulationtime_ = 0;
}
inline double ChaffInfoRequest::_internal_simulationtime() const {
  return _impl_.simulationtime_;
}
inline double ChaffInfoRequest::simulationtime() const {
  // @@protoc_insertion_point(field_get:ChaffInfoRequest.SimulationTime)
  return _internal_simulationtime();
}
inline void ChaffInfoRequest::_internal_set_simulationtime(double value) {
  
  _impl_.simulationtime_ = value;
}
inline void ChaffInfoRequest::set_simulationtime(double value) {
  _internal_set_simulationtime(value);
  // @@protoc_insertion_point(field_set:ChaffInfoRequest.SimulationTime)
}

// -------------------------------------------------------------------

// ChaffInfo

// double RCS = 1;
inline void ChaffInfo::clear_rcs() {
  _impl_.rcs_ = 0;
}
inline double ChaffInfo::_internal_rcs() const {
  return _impl_.rcs_;
}
inline double ChaffInfo::rcs() const {
  // @@protoc_insertion_point(field_get:ChaffInfo.RCS)
  return _internal_rcs();
}
inline void ChaffInfo::_internal_set_rcs(double value) {
  
  _impl_.rcs_ = value;
}
inline void ChaffInfo::set_rcs(double value) {
  _internal_set_rcs(value);
  // @@protoc_insertion_point(field_set:ChaffInfo.RCS)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ChaffModel_2eproto