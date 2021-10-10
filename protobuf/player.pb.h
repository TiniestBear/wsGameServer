// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: player.proto

#ifndef PROTOBUF_INCLUDED_player_2eproto
#define PROTOBUF_INCLUDED_player_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_player_2eproto 

namespace protobuf_player_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_player_2eproto
namespace player {
class PlayerPositions;
class PlayerPositionsDefaultTypeInternal;
extern PlayerPositionsDefaultTypeInternal _PlayerPositions_default_instance_;
class Position;
class PositionDefaultTypeInternal;
extern PositionDefaultTypeInternal _Position_default_instance_;
class Position_Quat;
class Position_QuatDefaultTypeInternal;
extern Position_QuatDefaultTypeInternal _Position_Quat_default_instance_;
class Position_Trans;
class Position_TransDefaultTypeInternal;
extern Position_TransDefaultTypeInternal _Position_Trans_default_instance_;
}  // namespace player
namespace google {
namespace protobuf {
template<> ::player::PlayerPositions* Arena::CreateMaybeMessage<::player::PlayerPositions>(Arena*);
template<> ::player::Position* Arena::CreateMaybeMessage<::player::Position>(Arena*);
template<> ::player::Position_Quat* Arena::CreateMaybeMessage<::player::Position_Quat>(Arena*);
template<> ::player::Position_Trans* Arena::CreateMaybeMessage<::player::Position_Trans>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace player {

// ===================================================================

class Position_Quat : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:player.Position.Quat) */ {
 public:
  Position_Quat();
  virtual ~Position_Quat();

  Position_Quat(const Position_Quat& from);

  inline Position_Quat& operator=(const Position_Quat& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Position_Quat(Position_Quat&& from) noexcept
    : Position_Quat() {
    *this = ::std::move(from);
  }

  inline Position_Quat& operator=(Position_Quat&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Position_Quat& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Position_Quat* internal_default_instance() {
    return reinterpret_cast<const Position_Quat*>(
               &_Position_Quat_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Position_Quat* other);
  friend void swap(Position_Quat& a, Position_Quat& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Position_Quat* New() const final {
    return CreateMaybeMessage<Position_Quat>(NULL);
  }

  Position_Quat* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Position_Quat>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Position_Quat& from);
  void MergeFrom(const Position_Quat& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Position_Quat* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required float x = 1;
  bool has_x() const;
  void clear_x();
  static const int kXFieldNumber = 1;
  float x() const;
  void set_x(float value);

  // required float y = 2;
  bool has_y() const;
  void clear_y();
  static const int kYFieldNumber = 2;
  float y() const;
  void set_y(float value);

  // required float z = 3;
  bool has_z() const;
  void clear_z();
  static const int kZFieldNumber = 3;
  float z() const;
  void set_z(float value);

  // required float w = 4;
  bool has_w() const;
  void clear_w();
  static const int kWFieldNumber = 4;
  float w() const;
  void set_w(float value);

  // @@protoc_insertion_point(class_scope:player.Position.Quat)
 private:
  void set_has_x();
  void clear_has_x();
  void set_has_y();
  void clear_has_y();
  void set_has_z();
  void clear_has_z();
  void set_has_w();
  void clear_has_w();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  float x_;
  float y_;
  float z_;
  float w_;
  friend struct ::protobuf_player_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Position_Trans : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:player.Position.Trans) */ {
 public:
  Position_Trans();
  virtual ~Position_Trans();

  Position_Trans(const Position_Trans& from);

  inline Position_Trans& operator=(const Position_Trans& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Position_Trans(Position_Trans&& from) noexcept
    : Position_Trans() {
    *this = ::std::move(from);
  }

  inline Position_Trans& operator=(Position_Trans&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Position_Trans& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Position_Trans* internal_default_instance() {
    return reinterpret_cast<const Position_Trans*>(
               &_Position_Trans_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Position_Trans* other);
  friend void swap(Position_Trans& a, Position_Trans& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Position_Trans* New() const final {
    return CreateMaybeMessage<Position_Trans>(NULL);
  }

  Position_Trans* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Position_Trans>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Position_Trans& from);
  void MergeFrom(const Position_Trans& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Position_Trans* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required float x = 1;
  bool has_x() const;
  void clear_x();
  static const int kXFieldNumber = 1;
  float x() const;
  void set_x(float value);

  // required float y = 2;
  bool has_y() const;
  void clear_y();
  static const int kYFieldNumber = 2;
  float y() const;
  void set_y(float value);

  // required float z = 3;
  bool has_z() const;
  void clear_z();
  static const int kZFieldNumber = 3;
  float z() const;
  void set_z(float value);

  // @@protoc_insertion_point(class_scope:player.Position.Trans)
 private:
  void set_has_x();
  void clear_has_x();
  void set_has_y();
  void clear_has_y();
  void set_has_z();
  void clear_has_z();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  float x_;
  float y_;
  float z_;
  friend struct ::protobuf_player_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Position : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:player.Position) */ {
 public:
  Position();
  virtual ~Position();

  Position(const Position& from);

  inline Position& operator=(const Position& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Position(Position&& from) noexcept
    : Position() {
    *this = ::std::move(from);
  }

  inline Position& operator=(Position&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Position& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Position* internal_default_instance() {
    return reinterpret_cast<const Position*>(
               &_Position_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(Position* other);
  friend void swap(Position& a, Position& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Position* New() const final {
    return CreateMaybeMessage<Position>(NULL);
  }

  Position* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Position>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Position& from);
  void MergeFrom(const Position& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Position* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Position_Quat Quat;
  typedef Position_Trans Trans;

  // accessors -------------------------------------------------------

  // required string id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // required .player.Position.Quat quat = 2;
  bool has_quat() const;
  void clear_quat();
  static const int kQuatFieldNumber = 2;
  private:
  const ::player::Position_Quat& _internal_quat() const;
  public:
  const ::player::Position_Quat& quat() const;
  ::player::Position_Quat* release_quat();
  ::player::Position_Quat* mutable_quat();
  void set_allocated_quat(::player::Position_Quat* quat);

  // required .player.Position.Trans trans = 3;
  bool has_trans() const;
  void clear_trans();
  static const int kTransFieldNumber = 3;
  private:
  const ::player::Position_Trans& _internal_trans() const;
  public:
  const ::player::Position_Trans& trans() const;
  ::player::Position_Trans* release_trans();
  ::player::Position_Trans* mutable_trans();
  void set_allocated_trans(::player::Position_Trans* trans);

  // @@protoc_insertion_point(class_scope:player.Position)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_quat();
  void clear_has_quat();
  void set_has_trans();
  void clear_has_trans();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::player::Position_Quat* quat_;
  ::player::Position_Trans* trans_;
  friend struct ::protobuf_player_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class PlayerPositions : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:player.PlayerPositions) */ {
 public:
  PlayerPositions();
  virtual ~PlayerPositions();

  PlayerPositions(const PlayerPositions& from);

  inline PlayerPositions& operator=(const PlayerPositions& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PlayerPositions(PlayerPositions&& from) noexcept
    : PlayerPositions() {
    *this = ::std::move(from);
  }

  inline PlayerPositions& operator=(PlayerPositions&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PlayerPositions& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PlayerPositions* internal_default_instance() {
    return reinterpret_cast<const PlayerPositions*>(
               &_PlayerPositions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(PlayerPositions* other);
  friend void swap(PlayerPositions& a, PlayerPositions& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PlayerPositions* New() const final {
    return CreateMaybeMessage<PlayerPositions>(NULL);
  }

  PlayerPositions* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<PlayerPositions>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const PlayerPositions& from);
  void MergeFrom(const PlayerPositions& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PlayerPositions* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .player.Position playerPositions = 1;
  int playerpositions_size() const;
  void clear_playerpositions();
  static const int kPlayerPositionsFieldNumber = 1;
  ::player::Position* mutable_playerpositions(int index);
  ::google::protobuf::RepeatedPtrField< ::player::Position >*
      mutable_playerpositions();
  const ::player::Position& playerpositions(int index) const;
  ::player::Position* add_playerpositions();
  const ::google::protobuf::RepeatedPtrField< ::player::Position >&
      playerpositions() const;

  // @@protoc_insertion_point(class_scope:player.PlayerPositions)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::player::Position > playerpositions_;
  friend struct ::protobuf_player_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Position_Quat

// required float x = 1;
inline bool Position_Quat::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Position_Quat::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Position_Quat::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Position_Quat::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline float Position_Quat::x() const {
  // @@protoc_insertion_point(field_get:player.Position.Quat.x)
  return x_;
}
inline void Position_Quat::set_x(float value) {
  set_has_x();
  x_ = value;
  // @@protoc_insertion_point(field_set:player.Position.Quat.x)
}

// required float y = 2;
inline bool Position_Quat::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Position_Quat::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Position_Quat::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Position_Quat::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline float Position_Quat::y() const {
  // @@protoc_insertion_point(field_get:player.Position.Quat.y)
  return y_;
}
inline void Position_Quat::set_y(float value) {
  set_has_y();
  y_ = value;
  // @@protoc_insertion_point(field_set:player.Position.Quat.y)
}

// required float z = 3;
inline bool Position_Quat::has_z() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Position_Quat::set_has_z() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Position_Quat::clear_has_z() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Position_Quat::clear_z() {
  z_ = 0;
  clear_has_z();
}
inline float Position_Quat::z() const {
  // @@protoc_insertion_point(field_get:player.Position.Quat.z)
  return z_;
}
inline void Position_Quat::set_z(float value) {
  set_has_z();
  z_ = value;
  // @@protoc_insertion_point(field_set:player.Position.Quat.z)
}

// required float w = 4;
inline bool Position_Quat::has_w() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Position_Quat::set_has_w() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Position_Quat::clear_has_w() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Position_Quat::clear_w() {
  w_ = 0;
  clear_has_w();
}
inline float Position_Quat::w() const {
  // @@protoc_insertion_point(field_get:player.Position.Quat.w)
  return w_;
}
inline void Position_Quat::set_w(float value) {
  set_has_w();
  w_ = value;
  // @@protoc_insertion_point(field_set:player.Position.Quat.w)
}

// -------------------------------------------------------------------

// Position_Trans

// required float x = 1;
inline bool Position_Trans::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Position_Trans::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Position_Trans::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Position_Trans::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline float Position_Trans::x() const {
  // @@protoc_insertion_point(field_get:player.Position.Trans.x)
  return x_;
}
inline void Position_Trans::set_x(float value) {
  set_has_x();
  x_ = value;
  // @@protoc_insertion_point(field_set:player.Position.Trans.x)
}

// required float y = 2;
inline bool Position_Trans::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Position_Trans::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Position_Trans::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Position_Trans::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline float Position_Trans::y() const {
  // @@protoc_insertion_point(field_get:player.Position.Trans.y)
  return y_;
}
inline void Position_Trans::set_y(float value) {
  set_has_y();
  y_ = value;
  // @@protoc_insertion_point(field_set:player.Position.Trans.y)
}

// required float z = 3;
inline bool Position_Trans::has_z() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Position_Trans::set_has_z() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Position_Trans::clear_has_z() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Position_Trans::clear_z() {
  z_ = 0;
  clear_has_z();
}
inline float Position_Trans::z() const {
  // @@protoc_insertion_point(field_get:player.Position.Trans.z)
  return z_;
}
inline void Position_Trans::set_z(float value) {
  set_has_z();
  z_ = value;
  // @@protoc_insertion_point(field_set:player.Position.Trans.z)
}

// -------------------------------------------------------------------

// Position

// required string id = 1;
inline bool Position::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Position::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Position::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Position::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
inline const ::std::string& Position::id() const {
  // @@protoc_insertion_point(field_get:player.Position.id)
  return id_.GetNoArena();
}
inline void Position::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:player.Position.id)
}
#if LANG_CXX11
inline void Position::set_id(::std::string&& value) {
  set_has_id();
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:player.Position.id)
}
#endif
inline void Position::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:player.Position.id)
}
inline void Position::set_id(const char* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:player.Position.id)
}
inline ::std::string* Position::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:player.Position.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Position::release_id() {
  // @@protoc_insertion_point(field_release:player.Position.id)
  if (!has_id()) {
    return NULL;
  }
  clear_has_id();
  return id_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Position::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:player.Position.id)
}

// required .player.Position.Quat quat = 2;
inline bool Position::has_quat() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Position::set_has_quat() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Position::clear_has_quat() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Position::clear_quat() {
  if (quat_ != NULL) quat_->Clear();
  clear_has_quat();
}
inline const ::player::Position_Quat& Position::_internal_quat() const {
  return *quat_;
}
inline const ::player::Position_Quat& Position::quat() const {
  const ::player::Position_Quat* p = quat_;
  // @@protoc_insertion_point(field_get:player.Position.quat)
  return p != NULL ? *p : *reinterpret_cast<const ::player::Position_Quat*>(
      &::player::_Position_Quat_default_instance_);
}
inline ::player::Position_Quat* Position::release_quat() {
  // @@protoc_insertion_point(field_release:player.Position.quat)
  clear_has_quat();
  ::player::Position_Quat* temp = quat_;
  quat_ = NULL;
  return temp;
}
inline ::player::Position_Quat* Position::mutable_quat() {
  set_has_quat();
  if (quat_ == NULL) {
    auto* p = CreateMaybeMessage<::player::Position_Quat>(GetArenaNoVirtual());
    quat_ = p;
  }
  // @@protoc_insertion_point(field_mutable:player.Position.quat)
  return quat_;
}
inline void Position::set_allocated_quat(::player::Position_Quat* quat) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete quat_;
  }
  if (quat) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      quat = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, quat, submessage_arena);
    }
    set_has_quat();
  } else {
    clear_has_quat();
  }
  quat_ = quat;
  // @@protoc_insertion_point(field_set_allocated:player.Position.quat)
}

// required .player.Position.Trans trans = 3;
inline bool Position::has_trans() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Position::set_has_trans() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Position::clear_has_trans() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Position::clear_trans() {
  if (trans_ != NULL) trans_->Clear();
  clear_has_trans();
}
inline const ::player::Position_Trans& Position::_internal_trans() const {
  return *trans_;
}
inline const ::player::Position_Trans& Position::trans() const {
  const ::player::Position_Trans* p = trans_;
  // @@protoc_insertion_point(field_get:player.Position.trans)
  return p != NULL ? *p : *reinterpret_cast<const ::player::Position_Trans*>(
      &::player::_Position_Trans_default_instance_);
}
inline ::player::Position_Trans* Position::release_trans() {
  // @@protoc_insertion_point(field_release:player.Position.trans)
  clear_has_trans();
  ::player::Position_Trans* temp = trans_;
  trans_ = NULL;
  return temp;
}
inline ::player::Position_Trans* Position::mutable_trans() {
  set_has_trans();
  if (trans_ == NULL) {
    auto* p = CreateMaybeMessage<::player::Position_Trans>(GetArenaNoVirtual());
    trans_ = p;
  }
  // @@protoc_insertion_point(field_mutable:player.Position.trans)
  return trans_;
}
inline void Position::set_allocated_trans(::player::Position_Trans* trans) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete trans_;
  }
  if (trans) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      trans = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, trans, submessage_arena);
    }
    set_has_trans();
  } else {
    clear_has_trans();
  }
  trans_ = trans;
  // @@protoc_insertion_point(field_set_allocated:player.Position.trans)
}

// -------------------------------------------------------------------

// PlayerPositions

// repeated .player.Position playerPositions = 1;
inline int PlayerPositions::playerpositions_size() const {
  return playerpositions_.size();
}
inline void PlayerPositions::clear_playerpositions() {
  playerpositions_.Clear();
}
inline ::player::Position* PlayerPositions::mutable_playerpositions(int index) {
  // @@protoc_insertion_point(field_mutable:player.PlayerPositions.playerPositions)
  return playerpositions_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::player::Position >*
PlayerPositions::mutable_playerpositions() {
  // @@protoc_insertion_point(field_mutable_list:player.PlayerPositions.playerPositions)
  return &playerpositions_;
}
inline const ::player::Position& PlayerPositions::playerpositions(int index) const {
  // @@protoc_insertion_point(field_get:player.PlayerPositions.playerPositions)
  return playerpositions_.Get(index);
}
inline ::player::Position* PlayerPositions::add_playerpositions() {
  // @@protoc_insertion_point(field_add:player.PlayerPositions.playerPositions)
  return playerpositions_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::player::Position >&
PlayerPositions::playerpositions() const {
  // @@protoc_insertion_point(field_list:player.PlayerPositions.playerPositions)
  return playerpositions_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace player

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_player_2eproto
