cmake_minimum_required(VERSION 3.9)
project(airplane CXX)

set(AIRPLANE_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set (
	AIRPLANE_SRCS
	abcdef.cpp
)

set (
	AIRPLANE_HEADERS
	abcdef.h
)

add_library(airplane STATIC ${AIRPLANE_SRCS} ${AIRPLANE_HEADERS})

target_include_directories(airplane PUBLIC ${AIRPLANE_SRC_DIR})