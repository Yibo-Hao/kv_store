
#include <string>
#include <optional>
#include <unordered_map>

#include "kv_store.h"

void KvStoreLib::set(const std::string &key, const std::string &value) {
    data[key] = value;
}

std::optional<std::string> KvStoreLib::get(const std::string &key) {
    auto iter = data.find(key);
    if (iter == data.end()) {
        return {std::nullopt};
    }
    return {iter->second};
}

bool KvStoreLib::exists (const std::string &key) {
    auto iter = data.find(key);
    return iter != data.end();
}
