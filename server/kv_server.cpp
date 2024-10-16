#include <string>
#include <iostream>
#include <memory>

#include "grpcpp/security/server_credentials.h"
#include "grpcpp/server_builder.h"

#include "kv_server_impl.h"

void RunServer() {
    std::string server_address("0.0.0.0:50051");
    KvServerImpl service;
    grpc::ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
    std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << server_address << std::endl;
    server->Wait();
}

int main() {
    RunServer();
    return 0;
}