cmake_minimum_required(VERSION 3.19)

project(2dIsing)
# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(src)

# Testing framework
option(BUILD_TESTS "Build test programs" ON)

if(BUILD_TESTS)
  add_subdirectory(${CMAKE_SOURCE_DIR}/lib/googletest)
  enable_testing()
  add_subdirectory(test)
endif()
