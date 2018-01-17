cmake_minimum_required(VERSION 3.7)
project(main CXX)

set(MAIN_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set(
MAIN_HEADERS
App.h
)

set(
MAIN_SRCS
App.cpp
AirportMain.cpp
)

add_executable(main ${MAIN_HEADERS} ${MAIN_SRCS})

target_include_directories(main
	PUBLIC ${MAIN_SRC_DIR})
	
target_link_libraries(main domain view controller model)