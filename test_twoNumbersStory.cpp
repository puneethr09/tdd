#include <gtest/gtest.h>
#include "twoNumbersStory.hpp"

TEST(TwoNumbersStorySuite, positiveNumbers){
    //TwoNumbersStory num(-10,5);
    EXPECT_THROW(TwoNumbersStory(-10, 5), std::invalid_argument);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}