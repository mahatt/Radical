cmake_minimum_required(VERSION 3.2)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -O2 -ggdb3")

include_directories(${PROJECT_SOURCE_DIR}/include)
set(PROJECT_HEADER_DIR ${PROJECT_SOURCE_DIR}/include)
add_subdirectory(src)

