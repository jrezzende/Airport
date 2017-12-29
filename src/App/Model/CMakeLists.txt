cmake_minimum_required(VERSION 3.9)
project(model CXX)

set(MODEL_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set (
	MODEL_SRCS
	Data.cpp
)

set (
	MODEL_HEADERS
	Data.h
)

add_library(model STATIC ${MODEL_SRCS} ${MODEL_HEADERS})

target_include_directories(model PUBLIC ${MODEL_SRC_DIR})