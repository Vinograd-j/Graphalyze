cmake_minimum_required(VERSION 3.25)
project(Graphalyze)

set(CMAKE_CXX_STANDARD 11)
include_directories(include)

add_executable(Graphalyze WIN32 main.cpp include/interface.h src/interface.cpp include/server.h include/client.h include/file-manager.h src/client.cpp src/server.cpp src/file-manager.cpp)
