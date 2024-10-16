#include <string>
#include <optional>

#include "grpcpp/support/status.h"
#include "grpcpp/impl/codegen/server_context.h"

#include "kv_server_impl.h"

::grpc::Status
KvServerImpl::Get(::grpc::ServerContext *context,
                  const ::KvStore::GetRequest *request,
                  ::KvStore::GetResponse *response) {
    const std::string& key = request->key();
    std::optional<std::string> result = store.get(key);
    if (result.has_value()) {
        response->set_exists(true);
        response->set_value(result.value());
    } else {
        response->set_exists(false);
    }
    return ::grpc::Status::OK;
}

::grpc::Status
KvServerImpl::Set(::grpc::ServerContext* context,
                  const ::KvStore::SetRequest* request,
                  ::KvStore::SetResponse* response) {
    const std::string& key = request->key();
    const std::string& value = request->value();
    store.set(key, value);
    response->set_success(true);
    return ::grpc::Status::OK;
}
