#ifndef BOOLEANTEST_H
#define BOOLEANTEST_H
#include <string>
#include<iostream>
#include"test.h"
#include"booleanCalculator.h"

using namespace std;
class booleanTest : public test{
    public:
        booleanTest(booleanCalculator bc);
        bool executeTest();
    private: 
         booleanCalculator nc;
};

#endif