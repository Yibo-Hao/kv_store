#ifndef KV_STORE_KV_STORE_H
#define KV_STORE_KV_STORE_H

#include <string>
#include <optional>
#include <unordered_map>

class KvStoreLib{
public:
    void set(const std::string &key, const std::string &value);

    std::optional<std::string> get(const std::string &key);

    bool exists (const std::string &key);
private:
    std::unordered_map<std::string, std::string> data;
};

#endif //KV_STORE_KV_STORE_H
