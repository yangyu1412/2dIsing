add_library(lib_ising  Ising_2d.hpp Ising_2d.cpp)

target_include_directories(lib_ising  INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
