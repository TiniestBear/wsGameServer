cmake_minimum_required (VERSION 3.16)

project ("wsGameServer")

find_package(Protobuf REQUIRED)
include_directories(${Protobuf_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_definitions(-DASIO_STANDALONE)
add_definitions(-D_WEBSOCKETPP_CPP11_STRICT_)
include_directories(SYSTEM "${PROJECT_SOURCE_DIR}/websocket" "${PROJECT_SOURCE_DIR}/protobuf")

file(GLOB Main "*.h" "*.cpp")
file(GLOB Protobuf "protobuf/*.h" "protobuf/*.cc")

if(NOT "${CMAKE_CXX_STANDARD}")
  set(CMAKE_CXX_STANDARD 17)
endif()

# Add source to this project's executable.
add_executable (wsGameServer ${Main} ${Protobuf})
target_link_libraries(wsGameServer ${Protobuf_LIBRARIES})