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

TEST(TwoNumbersStorySuite, product){
    TwoNumbersStory num(30,10);
    auto product = num.product();
    EXPECT_EQ(product, 300);
}

TEST(TwoNumbersStorySuite, productExceeds500){
    TwoNumbersStory num(50,11);
    EXPECT_THROW(num.product(), std::invalid_argument);
}

TEST(TwoNumbersStorySuite, division){
    TwoNumbersStory num(40,10);
    auto quotient = num.division();
    EXPECT_EQ(quotient, 4.0F);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}