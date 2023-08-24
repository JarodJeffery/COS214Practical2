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
        testBed(test test1, int h, double w, float b);
        test getTest();
        void setTest(test test1);
        int height;
        double weight;
        float bend; 
    private: 
        test test1;
};

#endif