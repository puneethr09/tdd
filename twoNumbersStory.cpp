#include "twoNumbersStory.hpp"
#include <stdexcept>

TwoNumbersStory::TwoNumbersStory(int a, int b) : a(a), b(b) {
    if((a < 0) || (b < 0))
        throw std::invalid_argument("The number/s are negative");
}