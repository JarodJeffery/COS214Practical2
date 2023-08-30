#ifndef NUMERICTEST_H
#define NUMERICTEST_H
#include <string>
#include<iostream>
#include"test.h"
#include"numericCalculator.h"

using namespace std;
class numericTest : public test{
    public:
        numericTest(numericCalculator nc);
        bool executeTest();

    private: 
        numericCalculator nc;
};

#endif