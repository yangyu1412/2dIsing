add_executable(run_tests Test.cpp)
target_link_libraries(run_tests PUBLIC lib_ising gtest_main)

include(GoogleTest)
gtest_discover_tests(run_tests)

