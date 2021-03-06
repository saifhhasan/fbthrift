/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/ParamService.h"

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/ParamService.tcc"

#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace some { namespace valid { namespace ns {

std::unique_ptr<apache::thrift::AsyncProcessor> ParamServiceSvIf::getProcessor() {
  return std::make_unique<ParamServiceAsyncProcessor>(this);
}

void ParamServiceSvIf::void_i16_param(int16_t /*param1*/) {
  throw apache::thrift::TApplicationException("Function void_i16_param is unimplemented");
}

folly::Future<folly::Unit> ParamServiceSvIf::future_void_i16_param(int16_t param1) {
  return apache::thrift::detail::si::future([&] { return void_i16_param(param1); });
}

void ParamServiceSvIf::async_tm_void_i16_param(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int16_t param1) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_void_i16_param(param1); });
}

void ParamServiceSvIf::void_i32_i64_param(int32_t /*param1*/, int64_t /*param2*/) {
  throw apache::thrift::TApplicationException("Function void_i32_i64_param is unimplemented");
}

folly::Future<folly::Unit> ParamServiceSvIf::future_void_i32_i64_param(int32_t param1, int64_t param2) {
  return apache::thrift::detail::si::future([&] { return void_i32_i64_param(param1, param2); });
}

void ParamServiceSvIf::async_tm_void_i32_i64_param(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int32_t param1, int64_t param2) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_void_i32_i64_param(param1, param2); });
}

void ParamServiceSvNull::void_i16_param(int16_t /*param1*/) {}

void ParamServiceSvNull::void_i32_i64_param(int32_t /*param1*/, int64_t /*param2*/) {}

const char* ParamServiceAsyncProcessor::getServiceName() {
  return "ParamService";
}

folly::Optional<std::string> ParamServiceAsyncProcessor::getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) {
  return apache::thrift::detail::ap::get_cache_key(buf, protType, cacheKeyMap_);
}

void ParamServiceAsyncProcessor::process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(buf), protType, context, eb, tm);
}

bool ParamServiceAsyncProcessor::isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) {
  return apache::thrift::detail::ap::is_oneway_method(buf, header, onewayMethods_);
}

std::unordered_set<std::string> ParamServiceAsyncProcessor::onewayMethods_ {};
std::unordered_map<std::string, int16_t> ParamServiceAsyncProcessor::cacheKeyMap_ {};
const ParamServiceAsyncProcessor::BinaryProtocolProcessMap& ParamServiceAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const ParamServiceAsyncProcessor::BinaryProtocolProcessMap ParamServiceAsyncProcessor::binaryProcessMap_ {
  {"void_i16_param", &ParamServiceAsyncProcessor::_processInThread_void_i16_param<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"void_i32_i64_param", &ParamServiceAsyncProcessor::_processInThread_void_i32_i64_param<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const ParamServiceAsyncProcessor::CompactProtocolProcessMap& ParamServiceAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const ParamServiceAsyncProcessor::CompactProtocolProcessMap ParamServiceAsyncProcessor::compactProcessMap_ {
  {"void_i16_param", &ParamServiceAsyncProcessor::_processInThread_void_i16_param<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"void_i32_i64_param", &ParamServiceAsyncProcessor::_processInThread_void_i32_i64_param<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

}}} // some::valid::ns
namespace apache { namespace thrift {

}} // apache::thrift
