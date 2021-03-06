cmake_minimum_required(VERSION 3.9)
project(report CXX)

set(REPORT_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set (
	REPORT_SRCS
	EventAirplaneArrival.cpp
	EventAirplaneArrivalRequest.cpp
	EventAirplaneCapacityExcess.cpp
	EventAirplaneDeparture.cpp
	EventAirplaneDepartureRequest.cpp
	EventAirplaneDepartureRequestExcess.cpp
	EventAirplaneOnHoldExcess.cpp
	EventAirplaneToAnotherAirport.cpp
	EventRunwayNowFree.cpp
	EventWindShift.cpp
	ReportCriticalSituations.cpp
	ReportLandedSoFar.cpp
	ReportPlanesOnGround.cpp
	ReportPlanesOnHold.cpp
	ReportTotalPassengers.cpp
	ReportWindShift.cpp
	LogEvents.cpp
)

set (
	REPORT_HEADERS
	Events.h
	LogEvents.h
	Reports.h
	EventAirplaneArrival.h
	EventAirplaneArrivalRequest.h
	EventAirplaneCapacityExcess.h
	EventAirplaneDeparture.h
	EventAirplaneDepartureRequest.h
	EventAirplaneDepartureRequestExcess.h
	EventAirplaneOnHoldExcess.h
	EventAirplaneToAnotherAirport.h
	EventRunwayNowFree.h
	EventWindShift.h
	ReportCriticalSituations.h
	ReportLandedSoFar.h
	ReportPlanesOnGround.h
	ReportPlanesOnHold.h
	ReportTotalPassengers.h
	ReportWindShift.h
)

add_library(report STATIC ${REPORT_SRCS} ${REPORT_HEADERS})

include_directories(${utilities})
include_directories(${domain})

target_include_directories(report PUBLIC ${REPORT_SRC_DIR})

target_link_libraries(report domain)
target_link_libraries(report utilities)
target_link_libraries(report view)