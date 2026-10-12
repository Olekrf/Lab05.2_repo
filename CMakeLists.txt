cmake_minimum_required(VERSION 3.14)
project(lab05_2)

set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(lab05_2 lab05_2.cpp
        test.cpp)

enable_testing()
add_executable(unit_tests test.cpp)
target_link_libraries(unit_tests gtest_main)

include(GoogleTest)
gtest_discover_tests(unit_tests)
