// Read-eval-print loop

#include <iostream>
#include <sstream>
#include <string>
#include <optional>

#include "kv_store.h"

int main() {
    KvStore store;
    std::string line;
    while(true) {
        std::getline(std::cin, line);
        std::istringstream in(line);
        std::string cmd;
        in >> cmd;

        if (cmd == "get") {
            std::string key;
            in >> key;
            std::optional<std::string> value = store.get(key);
            if (value.has_value()) {
                std::cout << '\t' << value.value() << std::endl;
            } else {
                std::cout << "Key not found" << std::endl;
            }
        } else if (cmd == "set") {
            std::string key, value;
            in >> key >> value;
            store.set(key, value);
        } else if (cmd == "quit") {
            break;
        } else {
            std::cout << "Unknown command: " << cmd << std::endl;
        }
    }
}