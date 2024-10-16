add_library(KvStoreLib kv_store.cpp)
target_include_directories(KvStoreLib
		PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

add_library(KvServerImpl kv_server_impl.cpp)
target_link_libraries(KvServerImpl
		kv_protocol
		grpc++
		KvStoreLib
)
target_include_directories(KvServerImpl
		PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

add_executable(KvServer kv_server.cpp)
target_link_libraries(KvServer
		KvServerImpl
		grpc++
)
