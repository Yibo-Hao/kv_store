// Read-eval-print loop

#include <iostream>
#include <sstream>
#include <string>
#include <memory>

#include "grpcpp/create_channel.h"
#include "grpcpp/security/credentials.h"

#include "kvservice.grpc.pb.h"
#include "kvservice.pb.h"

int main() {
    const std::shared_ptr<grpc::Channel> channel = grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials());
    const std::unique_ptr<KvStore::KvService::Stub> &stub = KvStore::KvService::NewStub(channel);

    std::string line;
    while(true) {
        std::getline(std::cin, line);
        std::istringstream in(line);
        std::string cmd;
        in >> cmd;

        if (cmd == "get") {
            std::string key;
            in >> key;
            grpc::ClientContext context;
            KvStore::GetRequest request;
            request.set_key(key);
            KvStore::GetResponse response;
            stub->Get(&context, request, &response);
            if (response.exists()) {
                std::cout << key << ':' << '\t' << response.value() << std::endl;
            } else {
                std::cout << "Key not found" << std::endl;
            }
        } else if (cmd == "set") {
            std::string key, value;
            in >> key >> value;
            grpc::ClientContext context;
            KvStore::SetRequest request;
            request.set_key(key);
            request.set_value(value);
            KvStore::SetResponse response;
            stub->Set(&context, request, &response);
            if (response.success()) {
                std::cout << "Key set" << std::endl;
            } else {
                std::cout << "Failed to set key" << std::endl;
            }
        } else if (cmd == "quit") {
            break;
        } else if (cmd.empty()) {
            continue;
        } else {
            std::cout << "Unknown command: " << cmd << std::endl;
        }
    }
}