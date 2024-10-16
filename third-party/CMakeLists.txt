include(FetchContent)

set(ENV{https_proxy} "http://127.0.0.1:7897")

FetchContent_Declare(
		github_grpc
		GIT_REPOSITORY https://github.com/grpc/grpc.git
		GIT_TAG v1.47.1
)

FetchContent_MakeAvailable(github_grpc)