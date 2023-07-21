cmake_minimum_required(VERSION 3.8)

project(logging LANGUAGES C)

add_library(logging STATIC)

target_sources(logging PRIVATE
    src/logging.c
)

target_include_directories(logging PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/include
)

target_link_libraries(logging
)
