cmake_minimum_required(VERSION 3.9)
project(weirdpassreqcomplgen C)

set(CMAKE_C_STANDARD 11)

set(LOGARITHMS logarithms.c logarithms.h)

add_executable(weirdpassreqcomplgen main.c)

enable_testing()

add_executable(test_log2 tests/test_log2.c ${LOGARITHMS})
add_test(log2 test_log2)

add_subdirectory(tests)

add_custom_target(check ${CMAKE_COMMAND} -E env CTEST_OUTPUT_ON_FAILURE=1
                  ${CMAKE_CTEST_COMMAND} -C $<CONFIG> #--verbose
                  WORKING_DIRECTORY ${CMAKE_BINARY_DIR})