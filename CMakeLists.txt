cmake_minimum_required(VERSION 3.9)
project(weirdpassreqcomplgen C)

set(CMAKE_C_STANDARD 11)

add_executable(weirdpassreqcomplgen main.c randomgenerator.c randomgenerator.h)

enable_testing()
add_subdirectory(tests)

add_custom_target(check ${CMAKE_COMMAND} -E env CTEST_OUTPUT_ON_FAILURE=1
                  ${CMAKE_CTEST_COMMAND} -C $<CONFIG> --verbose
                  WORKING_DIRECTORY ${CMAKE_BINARY_DIR})