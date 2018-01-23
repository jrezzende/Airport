cmake_minimum_required(VERSION 3.9)
project(controller CXX)

set(CONTROLLER_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set (
	CONTROLLER_SRCS
	CommandIdle.cpp
	CommandReportCriticalSituations.cpp
	CommandReportLandedSoFar.cpp
	CommandReportPlanesOnGround.cpp
	CommandReportPlanesOnHold.cpp
	CommandReportTotalPassengers.cpp
	CommandReportWindShift.cpp
)

set (
	CONTROLLER_HEADERS
	Command.h
	CommandIdle.h
	CommandReportCriticalSituations.h
	CommandReportLandedSoFar.h
	CommandReportPlanesOnGround.h
	CommandReportPlanesOnHold.h
	CommandReportTotalPassengers.h
	CommandReportWindShift.h
)

add_library(controller STATIC ${CONTROLLER_SRCS} ${CONTROLLER_HEADERS})

target_include_directories(controller PUBLIC ${CONTROLLER_SRC_DIR})

target_link_libraries(controller report)