#ifndef TESTBED_H
#define TESTBED_H
#include <string>
#include<iostream>
#include"testBed.h"
#include"test.h"

using namespace std;
class testBed{
    public:
        testBed();
        testBed(test test1);
        test getTest();
        void setTest(test test1);
    private: 
        test test1;
};

#endif