cmake_minimum_required(VERSION 3.9)
project(utilities CXX)

set(UTILITIES_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set (
	UTILITIES_SRCS
	Timer.cpp
	RandomGen.cpp
)

set (
	UTILITIES_HEADERS
	Timer.h
	RandomGen.h
)

add_library(utilities STATIC ${UTILITIES_HEADERS} ${UTILITIES_SRCS})

target_include_directories(utilities PUBLIC ${UTILITIES_SRC_DIR})

target_link_libraries(utilities view)