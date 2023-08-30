#ifndef TESTBED_H
#define TESTBED_H
#include <string>
#include<iostream>
#include "test.h"
#include "testable.h"

using namespace std;
class testBed : public testable{
    public:
        test getTest();
        void setTest(test test1);
        bool runTest();
    private: 
        test test1;
};

#endif