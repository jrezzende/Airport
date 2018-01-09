cmake_minimum_required(VERSION 3.9)
project(domain CXX)

set(DOMAIN_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set (
	DOMAIN_SRCS
	Airplane.cpp
	AirplaneMain.cpp
	Airport.cpp
	AirportRunway.cpp
	Directions.cpp
	Wind.cpp
	WindController.cpp
)

set (
	DOMAIN_HEADERS
	Airplane.h
	Airport.h
	AirportRunway.h
	Directions.h
	Wind.h
	WindController.h
)

include_directories(${utilities})

add_executable(domain ${DOMAIN_HEADERS} ${DOMAIN_SRCS})

target_include_directories(domain PUBLIC ${DOMAIN_SRC_DIR})

target_link_libraries(domain utilities)