add_library(kv_protocol
		kvservice.grpc.pb.cc
		kvservice.pb.cc
)
target_include_directories(kv_protocol PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(kv_protocol
		grpc++
)