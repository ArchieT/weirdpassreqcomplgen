cmake_minimum_required(VERSION 3.9)
project(weirdpassreqcomplgen C)

set(CMAKE_C_STANDARD 11)

add_executable(weirdpassreqcomplgen main.c randomgenerator.c randomgenerator.h)

enable_testing()
add_subdirectory(tests)