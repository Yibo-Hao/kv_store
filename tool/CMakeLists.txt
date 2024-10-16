add_executable(repl repl.cpp)

target_link_libraries(repl kv_store)
target_include_directories(repl PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../lib)