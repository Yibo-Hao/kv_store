#ifndef KVSTORE_KV_SERVER_IMPL_H
#define KVSTORE_KV_SERVER_IMPL_H

#include <mutex>

#include "grpcpp/support/status.h"
#include "grpcpp/impl/codegen/server_context.h"

#include "proto/kvservice.grpc.pb.h"
#include "proto/kvservice.pb.h"
#include "kv_store.h"

class KvServerImpl : public KvStore::KvService::Service {
public:
    ::grpc::Status Get(::grpc::ServerContext*, const ::KvStore::GetRequest*, ::KvStore::GetResponse*) override;

    ::grpc::Status Set(::grpc::ServerContext*, const ::KvStore::SetRequest*, ::KvStore::SetResponse*) override;

private:
    std::mutex mutex_;
    KvStoreLib store;
};

#endif //KVSTORE_KV_SERVER_IMPL_H
