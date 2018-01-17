cmake_minimum_required(VERSION 3.9)
project(report CXX)

set(REPORT_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})

#set (
#	REPORT_SRCS
#)

set (
	REPORT_HEADERS
	LogPersistance.h
)

add_library(report STATIC ${REPORT_SRCS} ${REPORT_HEADERS})

include_directories(${utilities})
include_directories(${domain})

target_include_directories(report PUBLIC ${REPORT_SRC_DIR})

target_link_libraries(report domain)
target_link_libraries(report utilities)