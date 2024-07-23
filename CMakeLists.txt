cmake_minimum_required(VERSION 3.10)
project(TDD)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

# Add the executable for the main application
add_executable(TwoNumbersStory main.cpp twoNumbersStory.cpp)

# Enable testing
enable_testing()

# Find GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add the executable for the tests
add_executable(TestTwoNumbersStory test_twoNumbersStory.cpp twoNumbersStory.cpp)

# Link the test executable against gtest and pthread
target_link_libraries(TestTwoNumbersStory ${GTEST_LIBRARIES} pthread)

# Add tests to CTest
add_test(NAME TestTwoNumbersStory COMMAND TestTwoNumbersStory)