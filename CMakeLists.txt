cmake_minimum_required(VERSION 3.29)

project(DistributedFileSystem)

set(CMAKE_CXX_STANDARD 17)

# Include the directory where the header files are located
include_directories(include)

# Add executable target with source files
file(GLOB SOURCES "src/*.cc")
add_executable(dfs ${SOURCES})
