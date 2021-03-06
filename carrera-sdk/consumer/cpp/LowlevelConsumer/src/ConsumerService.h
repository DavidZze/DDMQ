/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef ConsumerService_H
#define ConsumerService_H

#include <thrift/TDispatchProcessor.h>
#include "consumerProxy_types.h"

namespace CarreraConsumer {

class ConsumerServiceIf {
 public:
  virtual ~ConsumerServiceIf() {}
  virtual void fetch(FetchResponse& _return, const FetchRequest& request) = 0;
  virtual bool ack(const AckResult& result) = 0;
};

class ConsumerServiceIfFactory {
 public:
  typedef ConsumerServiceIf Handler;

  virtual ~ConsumerServiceIfFactory() {}

  virtual ConsumerServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(ConsumerServiceIf* /* handler */) = 0;
};

class ConsumerServiceIfSingletonFactory : virtual public ConsumerServiceIfFactory {
 public:
  ConsumerServiceIfSingletonFactory(const boost::shared_ptr<ConsumerServiceIf>& iface) : iface_(iface) {}
  virtual ~ConsumerServiceIfSingletonFactory() {}

  virtual ConsumerServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(ConsumerServiceIf* /* handler */) {}

 protected:
  boost::shared_ptr<ConsumerServiceIf> iface_;
};

class ConsumerServiceNull : virtual public ConsumerServiceIf {
 public:
  virtual ~ConsumerServiceNull() {}
  void fetch(FetchResponse& /* _return */, const FetchRequest& /* request */) {
    return;
  }
  bool ack(const AckResult& /* result */) {
    bool _return = false;
    return _return;
  }
};

typedef struct _ConsumerService_fetch_args__isset {
  _ConsumerService_fetch_args__isset() : request(false) {}
  bool request :1;
} _ConsumerService_fetch_args__isset;

class ConsumerService_fetch_args {
 public:

  static const char* ascii_fingerprint; // = "30DBBED6F85B09E05B682610CA601D7D";
  static const uint8_t binary_fingerprint[16]; // = {0x30,0xDB,0xBE,0xD6,0xF8,0x5B,0x09,0xE0,0x5B,0x68,0x26,0x10,0xCA,0x60,0x1D,0x7D};

  ConsumerService_fetch_args(const ConsumerService_fetch_args&);
  ConsumerService_fetch_args& operator=(const ConsumerService_fetch_args&);
  ConsumerService_fetch_args() {
  }

  virtual ~ConsumerService_fetch_args() throw();
  FetchRequest request;

  _ConsumerService_fetch_args__isset __isset;

  void __set_request(const FetchRequest& val);

  bool operator == (const ConsumerService_fetch_args & rhs) const
  {
    if (!(request == rhs.request))
      return false;
    return true;
  }
  bool operator != (const ConsumerService_fetch_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ConsumerService_fetch_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const ConsumerService_fetch_args& obj);
};


class ConsumerService_fetch_pargs {
 public:

  static const char* ascii_fingerprint; // = "30DBBED6F85B09E05B682610CA601D7D";
  static const uint8_t binary_fingerprint[16]; // = {0x30,0xDB,0xBE,0xD6,0xF8,0x5B,0x09,0xE0,0x5B,0x68,0x26,0x10,0xCA,0x60,0x1D,0x7D};


  virtual ~ConsumerService_fetch_pargs() throw();
  const FetchRequest* request;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const ConsumerService_fetch_pargs& obj);
};

typedef struct _ConsumerService_fetch_result__isset {
  _ConsumerService_fetch_result__isset() : success(false) {}
  bool success :1;
} _ConsumerService_fetch_result__isset;

class ConsumerService_fetch_result {
 public:

  static const char* ascii_fingerprint; // = "679A865D3F9652C564835D6C964844CD";
  static const uint8_t binary_fingerprint[16]; // = {0x67,0x9A,0x86,0x5D,0x3F,0x96,0x52,0xC5,0x64,0x83,0x5D,0x6C,0x96,0x48,0x44,0xCD};

  ConsumerService_fetch_result(const ConsumerService_fetch_result&);
  ConsumerService_fetch_result& operator=(const ConsumerService_fetch_result&);
  ConsumerService_fetch_result() {
  }

  virtual ~ConsumerService_fetch_result() throw();
  FetchResponse success;

  _ConsumerService_fetch_result__isset __isset;

  void __set_success(const FetchResponse& val);

  bool operator == (const ConsumerService_fetch_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const ConsumerService_fetch_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ConsumerService_fetch_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const ConsumerService_fetch_result& obj);
};

typedef struct _ConsumerService_fetch_presult__isset {
  _ConsumerService_fetch_presult__isset() : success(false) {}
  bool success :1;
} _ConsumerService_fetch_presult__isset;

class ConsumerService_fetch_presult {
 public:

  static const char* ascii_fingerprint; // = "679A865D3F9652C564835D6C964844CD";
  static const uint8_t binary_fingerprint[16]; // = {0x67,0x9A,0x86,0x5D,0x3F,0x96,0x52,0xC5,0x64,0x83,0x5D,0x6C,0x96,0x48,0x44,0xCD};


  virtual ~ConsumerService_fetch_presult() throw();
  FetchResponse* success;

  _ConsumerService_fetch_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

  friend std::ostream& operator<<(std::ostream& out, const ConsumerService_fetch_presult& obj);
};

typedef struct _ConsumerService_ack_args__isset {
  _ConsumerService_ack_args__isset() : result(false) {}
  bool result :1;
} _ConsumerService_ack_args__isset;

class ConsumerService_ack_args {
 public:

  static const char* ascii_fingerprint; // = "0E24DAE79AE1CFEE353862E7671305BE";
  static const uint8_t binary_fingerprint[16]; // = {0x0E,0x24,0xDA,0xE7,0x9A,0xE1,0xCF,0xEE,0x35,0x38,0x62,0xE7,0x67,0x13,0x05,0xBE};

  ConsumerService_ack_args(const ConsumerService_ack_args&);
  ConsumerService_ack_args& operator=(const ConsumerService_ack_args&);
  ConsumerService_ack_args() {
  }

  virtual ~ConsumerService_ack_args() throw();
  AckResult result;

  _ConsumerService_ack_args__isset __isset;

  void __set_result(const AckResult& val);

  bool operator == (const ConsumerService_ack_args & rhs) const
  {
    if (!(result == rhs.result))
      return false;
    return true;
  }
  bool operator != (const ConsumerService_ack_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ConsumerService_ack_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const ConsumerService_ack_args& obj);
};


class ConsumerService_ack_pargs {
 public:

  static const char* ascii_fingerprint; // = "0E24DAE79AE1CFEE353862E7671305BE";
  static const uint8_t binary_fingerprint[16]; // = {0x0E,0x24,0xDA,0xE7,0x9A,0xE1,0xCF,0xEE,0x35,0x38,0x62,0xE7,0x67,0x13,0x05,0xBE};


  virtual ~ConsumerService_ack_pargs() throw();
  const AckResult* result;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const ConsumerService_ack_pargs& obj);
};

typedef struct _ConsumerService_ack_result__isset {
  _ConsumerService_ack_result__isset() : success(false) {}
  bool success :1;
} _ConsumerService_ack_result__isset;

class ConsumerService_ack_result {
 public:

  static const char* ascii_fingerprint; // = "D9D3B4421B1F23CB4063C80B484E7909";
  static const uint8_t binary_fingerprint[16]; // = {0xD9,0xD3,0xB4,0x42,0x1B,0x1F,0x23,0xCB,0x40,0x63,0xC8,0x0B,0x48,0x4E,0x79,0x09};

  ConsumerService_ack_result(const ConsumerService_ack_result&);
  ConsumerService_ack_result& operator=(const ConsumerService_ack_result&);
  ConsumerService_ack_result() : success(0) {
  }

  virtual ~ConsumerService_ack_result() throw();
  bool success;

  _ConsumerService_ack_result__isset __isset;

  void __set_success(const bool val);

  bool operator == (const ConsumerService_ack_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const ConsumerService_ack_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ConsumerService_ack_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const ConsumerService_ack_result& obj);
};

typedef struct _ConsumerService_ack_presult__isset {
  _ConsumerService_ack_presult__isset() : success(false) {}
  bool success :1;
} _ConsumerService_ack_presult__isset;

class ConsumerService_ack_presult {
 public:

  static const char* ascii_fingerprint; // = "D9D3B4421B1F23CB4063C80B484E7909";
  static const uint8_t binary_fingerprint[16]; // = {0xD9,0xD3,0xB4,0x42,0x1B,0x1F,0x23,0xCB,0x40,0x63,0xC8,0x0B,0x48,0x4E,0x79,0x09};


  virtual ~ConsumerService_ack_presult() throw();
  bool* success;

  _ConsumerService_ack_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

  friend std::ostream& operator<<(std::ostream& out, const ConsumerService_ack_presult& obj);
};

class ConsumerServiceClient : virtual public ConsumerServiceIf {
 public:
  ConsumerServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  ConsumerServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void fetch(FetchResponse& _return, const FetchRequest& request);
  void send_fetch(const FetchRequest& request);
  void recv_fetch(FetchResponse& _return);
  bool ack(const AckResult& result);
  void send_ack(const AckResult& result);
  bool recv_ack();
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class ConsumerServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<ConsumerServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (ConsumerServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_fetch(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_ack(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  ConsumerServiceProcessor(boost::shared_ptr<ConsumerServiceIf> iface) :
    iface_(iface) {
    processMap_["fetch"] = &ConsumerServiceProcessor::process_fetch;
    processMap_["ack"] = &ConsumerServiceProcessor::process_ack;
  }

  virtual ~ConsumerServiceProcessor() {}
};

class ConsumerServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  ConsumerServiceProcessorFactory(const ::boost::shared_ptr< ConsumerServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< ConsumerServiceIfFactory > handlerFactory_;
};

class ConsumerServiceMultiface : virtual public ConsumerServiceIf {
 public:
  ConsumerServiceMultiface(std::vector<boost::shared_ptr<ConsumerServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~ConsumerServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<ConsumerServiceIf> > ifaces_;
  ConsumerServiceMultiface() {}
  void add(boost::shared_ptr<ConsumerServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void fetch(FetchResponse& _return, const FetchRequest& request) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->fetch(_return, request);
    }
    ifaces_[i]->fetch(_return, request);
    return;
  }

  bool ack(const AckResult& result) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->ack(result);
    }
    return ifaces_[i]->ack(result);
  }

};

} // namespace

#endif
