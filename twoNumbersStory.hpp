#ifndef TWONUMBERSSTORY_HPP
#define TWONUMBERSSTORY_HPP

#include <iostream> 

class TwoNumbersStory{
public:
    TwoNumbersStory(int a, int b);

    int sum();
    int product();
    float quotient();

private:
    int a,b;
};

#endif
