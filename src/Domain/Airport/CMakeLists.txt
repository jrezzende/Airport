cmake_minimum_required(VERSION 3.9)
project(domain CXX)

set(DOMAIN_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set (
	DOMAIN_SRCS
	Airplane.cpp
	Airport.cpp
	AirportRunway.cpp
	Directions.cpp
	Wind.cpp
	WindController.cpp
	ControlTower.cpp
	AirplaneController.cpp
)

set (
	DOMAIN_HEADERS
	Airplane.h
	Airport.h
	AirportRunway.h
	Directions.h
	Wind.h
	WindController.h
	ControlTower.h
	AirplaneController.h
)

add_library(domain STATIC ${DOMAIN_SRCS} ${DOMAIN_HEADERS})

include_directories(${utilities})

target_include_directories(domain PUBLIC ${DOMAIN_SRC_DIR})

target_link_libraries(domain utilities)
target_link_libraries(domain model)
target_link_libraries(domain report)