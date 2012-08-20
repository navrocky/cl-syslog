set(TARGET clexcept)
set(SOURCES
    base_exception.h
    base_exception.cpp
    error.h
    error.cpp
    classert.h
    classert.cpp
)

add_library(${TARGET} STATIC ${SOURCES})

target_link_libraries(${TARGET} clsyslog)
 