#include <gtest/gtest.h>
#include "twoNumbersStory.hpp"

TEST(TwoNumbersStorySuite, positiveNumbers){
    EXPECT_THROW(TwoNumbersStory(-10, 5), std::invalid_argument);
}

TEST(TwoNumbersStorySuite, orderedNumbers){
    EXPECT_THROW(TwoNumbersStory(5, 10), std::invalid_argument);
}

TEST(TwoNumbersStorySuite, sum){
    TwoNumbersStory num(20,10);
    auto sum = num.add();
    EXPECT_EQ(sum, 30);
}

TEST(TwoNumbersStorySuite, sumExceeds100){
    TwoNumbersStory num(99,2);
    EXPECT_THROW(num.add(), std::invalid_argument);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}