project(clsyslog)

cmake_minimum_required(VERSION 2.6)

find_package( Boost REQUIRED COMPONENTS
    system
    thread
    filesystem
)
include_directories(${Boost_INCLUDE_DIRS})

find_package(Threads)

set(TARGET clsyslog)

set(HEADERS
    common.h
    message.h
    filter.h
    output.h
    manager.h
    syslog.h
    output_common.h
    output_stream.h
    output_file.h
    output_syslog.h
    scope_profile.h
)

set(SOURCES
    message.cpp
    output.cpp
    manager.cpp
    syslog.cpp
    output_common.cpp
    output_stream.cpp
    output_file.cpp
    output_syslog.cpp
    scope_profile.cpp
)

add_library(${TARGET} STATIC ${SOURCES})

target_link_libraries(${TARGET} ${Boost_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT})
