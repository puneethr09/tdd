#include "twoNumbersStory.hpp"
#include <stdexcept>

TwoNumbersStory::TwoNumbersStory(int a, int b) : a(a), b(b) {
    if((a < 0) || (b < 0))
        throw std::invalid_argument("The number/s are negative");
    if(a < b)
        throw std::invalid_argument("Numbers not ordered");
}

int TwoNumbersStory::add() {
    int sum = a + b;
    if(sum > 100) {
        throw std::invalid_argument("exceeds maximum value for addition");
        return 0;
    } 
    return sum;
}