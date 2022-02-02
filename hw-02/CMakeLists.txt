cmake_minimum_required(VERSION 3.18)

project(second-hw CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

find_package(SDL2 REQUIRED)

add_executable(sdl_hello_dynamic
    ${PROJECT_SOURCE_DIR}/src/hello.cxx
    )


add_executable(sdl_hello_static
    ${PROJECT_SOURCE_DIR}/src/hello.cxx
    )

target_link_libraries(sdl_hello_dynamic PRIVATE SDL2::SDL2)
target_link_libraries(sdl_hello_static PRIVATE SDL2::SDL2-static)
