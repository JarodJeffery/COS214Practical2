#ifndef TESTBED_H
#define TESTBED_H
#include <string>
#include<iostream>
#include"testBed.h"
#include"test.h"
#include "testDecorator.h"
#include "beforeTest.h"
#include "afterTest.h"

using namespace std;
class testBed{
    public:
        testBed();
        testBed(test test1, int h, double w, float b);
        test getTest();
        void setTest(test test1);
        bool runTest();
        int height;
        double weight;
        float bend; 
    private: 
        test test1;
        beforeTest bt(); 
        afterTest at();
};

#endif