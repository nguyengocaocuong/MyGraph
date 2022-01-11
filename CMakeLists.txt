cmake_minimum_required(VERSION 3.10.2)
project(GRAPH)

set(CMAKE_CXX_STANDARD 98)

add_subdirectory(libfdr)
include_directories(${CMAKE_SOURCE_DIR} ${CMAKE_SOURCE_DIR}/libfdr)
include_directories(MyIgraph/include)
file(GLOB SOURCE "MyIgraph/src/*.c")
add_executable(GRAPH ${SOURCE}  TEST/bai2.c)
target_link_libraries(GRAPH fdr)