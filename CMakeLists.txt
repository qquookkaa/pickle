## GENERAL INFORMATION

cmake_minimum_required(VERSION 3.12)                         # CLARIFY_NEED

project(
    pickle
    VERSION         0.0
    DESCRIPTION     "Console text visualizer library"
    HOMEPAGE_URL    https://github.com/qquookkaa/pickle
    LANGUAGES       CXX
)

## OPTIONS

option(FLAT_TEXT "Flat color for output text" OFF)          # NOT_USED

## ADDING DEFINITIONS

if (FLAT_TEXT)
    add_compile_definitions(-DFLAT_TEXT)
endif()

## SETTING VARIABLES

#set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -pedantic")

## INCLUDE DIRECTORIES

include_directories(logger)
include_directories(imaginator)

## ADD SUBDIRECTORIES

add_subdirectory(logger)                                    # NOT_USED
add_subdirectory(imaginator)                                # NOT_USED

## LINK LIBRARIES

# TODO:
#target_link_libraries(pickle)


## TESTING

# TODO:
# enable_testing()
# add_subdirectory(test)


## TEMPORARY LINES

add_executable(test-job "test/test_job.cpp")