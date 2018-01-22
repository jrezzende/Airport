cmake_minimum_required(VERSION 3.9)
project(controller CXX)

set(CONTROLLER_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set (
	CONTROLLER_SRCS
	CmdIdle.cpp
)

set (
	CONTROLLER_HEADERS
	Cmd.h
	CmdIdle.h
)

add_library(controller STATIC ${CONTROLLER_SRCS} ${CONTROLLER_HEADERS})

target_include_directories(controller PUBLIC ${CONTROLLER_SRC_DIR})