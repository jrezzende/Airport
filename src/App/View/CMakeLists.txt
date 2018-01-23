cmake_minimum_required(VERSION 3.9)
project(view CXX)

set(VIEW_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set (
	VIEW_SRCS
	UserI.cpp
)

set (
	VIEW_HEADERS
	UserI.h
)

add_library(view STATIC ${VIEW_SRCS} ${VIEW_HEADERS})

target_include_directories(view PUBLIC ${VIEW_SRC_DIR})