// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BasePROTO.proto

#ifndef PROTOBUF_BasePROTO_2eproto__INCLUDED
#define PROTOBUF_BasePROTO_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace tutorial {
class BaseMessage;
class BaseMessageDefaultTypeInternal;
extern BaseMessageDefaultTypeInternal _BaseMessage_default_instance_;
class ContainerMessage;
class ContainerMessageDefaultTypeInternal;
extern ContainerMessageDefaultTypeInternal _ContainerMessage_default_instance_;
class ServerInfoMessage;
class ServerInfoMessageDefaultTypeInternal;
extern ServerInfoMessageDefaultTypeInternal _ServerInfoMessage_default_instance_;
class UserInfo;
class UserInfoDefaultTypeInternal;
extern UserInfoDefaultTypeInternal _UserInfo_default_instance_;
}  // namespace tutorial

namespace tutorial {

namespace protobuf_BasePROTO_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_BasePROTO_2eproto

// ===================================================================

class UserInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tutorial.UserInfo) */ {
 public:
  UserInfo();
  virtual ~UserInfo();

  UserInfo(const UserInfo& from);

  inline UserInfo& operator=(const UserInfo& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const UserInfo& default_instance();

  static inline const UserInfo* internal_default_instance() {
    return reinterpret_cast<const UserInfo*>(
               &_UserInfo_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(UserInfo* other);

  // implements Message ----------------------------------------------

  inline UserInfo* New() const PROTOBUF_FINAL { return New(NULL); }

  UserInfo* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const UserInfo& from);
  void MergeFrom(const UserInfo& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(UserInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 userid = 1;
  void clear_userid();
  static const int kUseridFieldNumber = 1;
  ::google::protobuf::int32 userid() const;
  void set_userid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:tutorial.UserInfo)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 userid_;
  mutable int _cached_size_;
  friend struct protobuf_BasePROTO_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class BaseMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tutorial.BaseMessage) */ {
 public:
  BaseMessage();
  virtual ~BaseMessage();

  BaseMessage(const BaseMessage& from);

  inline BaseMessage& operator=(const BaseMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BaseMessage& default_instance();

  static inline const BaseMessage* internal_default_instance() {
    return reinterpret_cast<const BaseMessage*>(
               &_BaseMessage_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(BaseMessage* other);

  // implements Message ----------------------------------------------

  inline BaseMessage* New() const PROTOBUF_FINAL { return New(NULL); }

  BaseMessage* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const BaseMessage& from);
  void MergeFrom(const BaseMessage& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(BaseMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string message = 2;
  void clear_message();
  static const int kMessageFieldNumber = 2;
  const ::std::string& message() const;
  void set_message(const ::std::string& value);
  #if LANG_CXX11
  void set_message(::std::string&& value);
  #endif
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  ::std::string* mutable_message();
  ::std::string* release_message();
  void set_allocated_message(::std::string* message);

  // int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:tutorial.BaseMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr message_;
  ::google::protobuf::int32 id_;
  mutable int _cached_size_;
  friend struct protobuf_BasePROTO_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ServerInfoMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tutorial.ServerInfoMessage) */ {
 public:
  ServerInfoMessage();
  virtual ~ServerInfoMessage();

  ServerInfoMessage(const ServerInfoMessage& from);

  inline ServerInfoMessage& operator=(const ServerInfoMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ServerInfoMessage& default_instance();

  static inline const ServerInfoMessage* internal_default_instance() {
    return reinterpret_cast<const ServerInfoMessage*>(
               &_ServerInfoMessage_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(ServerInfoMessage* other);

  // implements Message ----------------------------------------------

  inline ServerInfoMessage* New() const PROTOBUF_FINAL { return New(NULL); }

  ServerInfoMessage* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ServerInfoMessage& from);
  void MergeFrom(const ServerInfoMessage& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ServerInfoMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string ip = 3;
  void clear_ip();
  static const int kIpFieldNumber = 3;
  const ::std::string& ip() const;
  void set_ip(const ::std::string& value);
  #if LANG_CXX11
  void set_ip(::std::string&& value);
  #endif
  void set_ip(const char* value);
  void set_ip(const char* value, size_t size);
  ::std::string* mutable_ip();
  ::std::string* release_ip();
  void set_allocated_ip(::std::string* ip);

  // .tutorial.BaseMessage result = 1;
  bool has_result() const;
  void clear_result();
  static const int kResultFieldNumber = 1;
  const ::tutorial::BaseMessage& result() const;
  ::tutorial::BaseMessage* mutable_result();
  ::tutorial::BaseMessage* release_result();
  void set_allocated_result(::tutorial::BaseMessage* result);

  // int32 id = 2;
  void clear_id();
  static const int kIdFieldNumber = 2;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // int32 port = 4;
  void clear_port();
  static const int kPortFieldNumber = 4;
  ::google::protobuf::int32 port() const;
  void set_port(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:tutorial.ServerInfoMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr ip_;
  ::tutorial::BaseMessage* result_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 port_;
  mutable int _cached_size_;
  friend struct protobuf_BasePROTO_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ContainerMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tutorial.ContainerMessage) */ {
 public:
  ContainerMessage();
  virtual ~ContainerMessage();

  ContainerMessage(const ContainerMessage& from);

  inline ContainerMessage& operator=(const ContainerMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ContainerMessage& default_instance();

  static inline const ContainerMessage* internal_default_instance() {
    return reinterpret_cast<const ContainerMessage*>(
               &_ContainerMessage_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(ContainerMessage* other);

  // implements Message ----------------------------------------------

  inline ContainerMessage* New() const PROTOBUF_FINAL { return New(NULL); }

  ContainerMessage* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ContainerMessage& from);
  void MergeFrom(const ContainerMessage& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ContainerMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes buf = 3;
  void clear_buf();
  static const int kBufFieldNumber = 3;
  const ::std::string& buf() const;
  void set_buf(const ::std::string& value);
  #if LANG_CXX11
  void set_buf(::std::string&& value);
  #endif
  void set_buf(const char* value);
  void set_buf(const void* value, size_t size);
  ::std::string* mutable_buf();
  ::std::string* release_buf();
  void set_allocated_buf(::std::string* buf);

  // int32 msgid = 1;
  void clear_msgid();
  static const int kMsgidFieldNumber = 1;
  ::google::protobuf::int32 msgid() const;
  void set_msgid(::google::protobuf::int32 value);

  // int32 msgsize = 2;
  void clear_msgsize();
  static const int kMsgsizeFieldNumber = 2;
  ::google::protobuf::int32 msgsize() const;
  void set_msgsize(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:tutorial.ContainerMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr buf_;
  ::google::protobuf::int32 msgid_;
  ::google::protobuf::int32 msgsize_;
  mutable int _cached_size_;
  friend struct protobuf_BasePROTO_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// UserInfo

// int32 userid = 1;
inline void UserInfo::clear_userid() {
  userid_ = 0;
}
inline ::google::protobuf::int32 UserInfo::userid() const {
  // @@protoc_insertion_point(field_get:tutorial.UserInfo.userid)
  return userid_;
}
inline void UserInfo::set_userid(::google::protobuf::int32 value) {
  
  userid_ = value;
  // @@protoc_insertion_point(field_set:tutorial.UserInfo.userid)
}

// -------------------------------------------------------------------

// BaseMessage

// int32 id = 1;
inline void BaseMessage::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 BaseMessage::id() const {
  // @@protoc_insertion_point(field_get:tutorial.BaseMessage.id)
  return id_;
}
inline void BaseMessage::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:tutorial.BaseMessage.id)
}

// string message = 2;
inline void BaseMessage::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& BaseMessage::message() const {
  // @@protoc_insertion_point(field_get:tutorial.BaseMessage.message)
  return message_.GetNoArena();
}
inline void BaseMessage::set_message(const ::std::string& value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.BaseMessage.message)
}
#if LANG_CXX11
inline void BaseMessage::set_message(::std::string&& value) {
  
  message_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tutorial.BaseMessage.message)
}
#endif
inline void BaseMessage::set_message(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.BaseMessage.message)
}
inline void BaseMessage::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.BaseMessage.message)
}
inline ::std::string* BaseMessage::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:tutorial.BaseMessage.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BaseMessage::release_message() {
  // @@protoc_insertion_point(field_release:tutorial.BaseMessage.message)
  
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BaseMessage::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:tutorial.BaseMessage.message)
}

// -------------------------------------------------------------------

// ServerInfoMessage

// .tutorial.BaseMessage result = 1;
inline bool ServerInfoMessage::has_result() const {
  return this != internal_default_instance() && result_ != NULL;
}
inline void ServerInfoMessage::clear_result() {
  if (GetArenaNoVirtual() == NULL && result_ != NULL) delete result_;
  result_ = NULL;
}
inline const ::tutorial::BaseMessage& ServerInfoMessage::result() const {
  // @@protoc_insertion_point(field_get:tutorial.ServerInfoMessage.result)
  return result_ != NULL ? *result_
                         : *::tutorial::BaseMessage::internal_default_instance();
}
inline ::tutorial::BaseMessage* ServerInfoMessage::mutable_result() {
  
  if (result_ == NULL) {
    result_ = new ::tutorial::BaseMessage;
  }
  // @@protoc_insertion_point(field_mutable:tutorial.ServerInfoMessage.result)
  return result_;
}
inline ::tutorial::BaseMessage* ServerInfoMessage::release_result() {
  // @@protoc_insertion_point(field_release:tutorial.ServerInfoMessage.result)
  
  ::tutorial::BaseMessage* temp = result_;
  result_ = NULL;
  return temp;
}
inline void ServerInfoMessage::set_allocated_result(::tutorial::BaseMessage* result) {
  delete result_;
  result_ = result;
  if (result) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tutorial.ServerInfoMessage.result)
}

// int32 id = 2;
inline void ServerInfoMessage::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 ServerInfoMessage::id() const {
  // @@protoc_insertion_point(field_get:tutorial.ServerInfoMessage.id)
  return id_;
}
inline void ServerInfoMessage::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:tutorial.ServerInfoMessage.id)
}

// string ip = 3;
inline void ServerInfoMessage::clear_ip() {
  ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ServerInfoMessage::ip() const {
  // @@protoc_insertion_point(field_get:tutorial.ServerInfoMessage.ip)
  return ip_.GetNoArena();
}
inline void ServerInfoMessage::set_ip(const ::std::string& value) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.ServerInfoMessage.ip)
}
#if LANG_CXX11
inline void ServerInfoMessage::set_ip(::std::string&& value) {
  
  ip_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tutorial.ServerInfoMessage.ip)
}
#endif
inline void ServerInfoMessage::set_ip(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.ServerInfoMessage.ip)
}
inline void ServerInfoMessage::set_ip(const char* value, size_t size) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.ServerInfoMessage.ip)
}
inline ::std::string* ServerInfoMessage::mutable_ip() {
  
  // @@protoc_insertion_point(field_mutable:tutorial.ServerInfoMessage.ip)
  return ip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ServerInfoMessage::release_ip() {
  // @@protoc_insertion_point(field_release:tutorial.ServerInfoMessage.ip)
  
  return ip_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ServerInfoMessage::set_allocated_ip(::std::string* ip) {
  if (ip != NULL) {
    
  } else {
    
  }
  ip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ip);
  // @@protoc_insertion_point(field_set_allocated:tutorial.ServerInfoMessage.ip)
}

// int32 port = 4;
inline void ServerInfoMessage::clear_port() {
  port_ = 0;
}
inline ::google::protobuf::int32 ServerInfoMessage::port() const {
  // @@protoc_insertion_point(field_get:tutorial.ServerInfoMessage.port)
  return port_;
}
inline void ServerInfoMessage::set_port(::google::protobuf::int32 value) {
  
  port_ = value;
  // @@protoc_insertion_point(field_set:tutorial.ServerInfoMessage.port)
}

// -------------------------------------------------------------------

// ContainerMessage

// int32 msgid = 1;
inline void ContainerMessage::clear_msgid() {
  msgid_ = 0;
}
inline ::google::protobuf::int32 ContainerMessage::msgid() const {
  // @@protoc_insertion_point(field_get:tutorial.ContainerMessage.msgid)
  return msgid_;
}
inline void ContainerMessage::set_msgid(::google::protobuf::int32 value) {
  
  msgid_ = value;
  // @@protoc_insertion_point(field_set:tutorial.ContainerMessage.msgid)
}

// int32 msgsize = 2;
inline void ContainerMessage::clear_msgsize() {
  msgsize_ = 0;
}
inline ::google::protobuf::int32 ContainerMessage::msgsize() const {
  // @@protoc_insertion_point(field_get:tutorial.ContainerMessage.msgsize)
  return msgsize_;
}
inline void ContainerMessage::set_msgsize(::google::protobuf::int32 value) {
  
  msgsize_ = value;
  // @@protoc_insertion_point(field_set:tutorial.ContainerMessage.msgsize)
}

// bytes buf = 3;
inline void ContainerMessage::clear_buf() {
  buf_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ContainerMessage::buf() const {
  // @@protoc_insertion_point(field_get:tutorial.ContainerMessage.buf)
  return buf_.GetNoArena();
}
inline void ContainerMessage::set_buf(const ::std::string& value) {
  
  buf_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.ContainerMessage.buf)
}
#if LANG_CXX11
inline void ContainerMessage::set_buf(::std::string&& value) {
  
  buf_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tutorial.ContainerMessage.buf)
}
#endif
inline void ContainerMessage::set_buf(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  buf_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.ContainerMessage.buf)
}
inline void ContainerMessage::set_buf(const void* value, size_t size) {
  
  buf_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.ContainerMessage.buf)
}
inline ::std::string* ContainerMessage::mutable_buf() {
  
  // @@protoc_insertion_point(field_mutable:tutorial.ContainerMessage.buf)
  return buf_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ContainerMessage::release_buf() {
  // @@protoc_insertion_point(field_release:tutorial.ContainerMessage.buf)
  
  return buf_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ContainerMessage::set_allocated_buf(::std::string* buf) {
  if (buf != NULL) {
    
  } else {
    
  }
  buf_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), buf);
  // @@protoc_insertion_point(field_set_allocated:tutorial.ContainerMessage.buf)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace tutorial

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_BasePROTO_2eproto__INCLUDED