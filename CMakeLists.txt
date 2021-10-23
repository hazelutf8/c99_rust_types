cmake_minimum_required(VERSION 3.18)

project(rust_types
    VERSION 0.1.0
    LANGUAGES C)
set(CMAKE_C_STANDARD 99)

add_library(rust_types INTERFACE)
target_include_directories(rust_types INTERFACE "${PROJECT_SOURCE_DIR}/src")
