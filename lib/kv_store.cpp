
#include <string>
#include <optional>
#include <unordered_map>

#include "kv_store.h"

void KvStore::set(const std::string &key, const std::string &value) {
    data[key] = value;
}

std::optional<std::string> KvStore::get(const std::string &key) {
    auto iter = data.find(key);
    if (iter == data.end()) {
        return {std::nullopt};
    }
    return {iter->second};
}

bool KvStore::exists (const std::string &key) {
    auto iter = data.find(key);
    return iter != data.end();
}
