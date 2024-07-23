cmake_minimum_required(VERSION 3.10)
project(TestTwoNumbersStory)

set(CMAKE_CXX_STANDARD 11)

# Find the Google Test package
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add the executable for the test
add_executable(TestTwoNumbersStory test_twoNumbersStory.cpp TwoNumbersStory.cpp)

# Link the test executable against Google Test
target_link_libraries(TestTwoNumbersStory ${GTEST_LIBRARIES} pthread)