cmake_minimum_required(VERSION 3.9)
project(timer CXX)

set(TIMER_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set (
	TIMER_SRCS
	Timer.cpp
)

set (
	TIMER_HEADERS
	Timer.h
)

add_library(timer STATIC ${TIMER_HEADERS} ${TIMER_SRCS})

target_include_directories(timer PUBLIC ${TIMER_SRC_DIR})