#ifndef TWONUMBERSSTORY_HPP
#define TWONUMBERSSTORY_HPP

#include <iostream> 

class TwoNumbersStory{
public:
    TwoNumbersStory(int a, int b);

    int add();
    int product();
    float division();

private:
    int a,b;
};

#endif
