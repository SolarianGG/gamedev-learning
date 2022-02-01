cmake_minimum_required(VERSION 3.18)

project(first-hw CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_library(lib_hello_static STATIC
    ${PROJECT_SOURCE_DIR}/src/lib_hello.cxx
    ${PROJECT_SOURCE_DIR}/src/lib_hello.hxx
    )

add_library(lib_hello_dynamic SHARED
    ${PROJECT_SOURCE_DIR}/src/lib_hello.cxx
    ${PROJECT_SOURCE_DIR}/src/lib_hello.hxx
    )

add_executable(hello_static
    ${PROJECT_SOURCE_DIR}/src/hello.cxx
    )

add_executable(hello_dynamic
    ${PROJECT_SOURCE_DIR}/src/hello.cxx
    )

target_link_libraries(hello_static PUBLIC lib_hello_static -static)
target_link_libraries(hello_dynamic PUBLIC lib_hello_dynamic)
