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

int TwoNumbersStory::product() {
    int product = a * b;
    if(product > 500) {
        throw std::invalid_argument("exceeds maximum value for multiplication");
        return 0;
    }
    return product;
}

float TwoNumbersStory::division(){
    float quotient = a/b;
    if(quotient > 20.0F){
        throw std::invalid_argument("Larger number is more than 20 times higher than smaller number");
        return 0;
    }
    return quotient;
}