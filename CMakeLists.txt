cmake_minimum_required (VERSION 3.16)

project ("wsGameServer")

add_definitions(-DASIO_STANDALONE)
add_definitions(-D_WEBSOCKETPP_CPP11_STRICT_)
include_directories(SYSTEM "${PROJECT_SOURCE_DIR}/websocket")

file(GLOB Main "*.h" "*.cpp")

# Add source to this project's executable.
add_executable (wsGameServer ${Main})