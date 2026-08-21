cmake_minimum_required(VERSION 3.10)
include_guard(GLOBAL)

project(logging LANGUAGES C)

set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -D_DEBUG")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_library(logging STATIC)
add_subdirectory(../threading ${CMAKE_BINARY_DIR}/threading_from_logging)
add_subdirectory(../string ${CMAKE_BINARY_DIR}/string_from_logging)

target_sources(logging PRIVATE
	logging.c
)

target_include_directories(logging PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(logging
	PUBLIC
		threading
		string
)
