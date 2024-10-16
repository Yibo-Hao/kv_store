add_library(kv_store kv_store.cpp)

target_link_directories(kv_store PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(kv_store PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})