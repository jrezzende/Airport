cmake_minimum_required(VERSION 3.9)
project(airplane CXX)

set(AIRPLANE_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set (
	AIRPLANE_SRCS
	Airplane.cpp
)

set (
	AIRPLANE_HEADERS
	Airplane.h
)

include_directories(${google_test_include_dirs})

add_executable(airplane ${AIRPLANE_HEADERS} ${AIRPLANE_SRCS})

target_include_directories(airplane PUBLIC ${AIRPLANE_SRC_DIR})

target_link_libraries(airplane google-test)