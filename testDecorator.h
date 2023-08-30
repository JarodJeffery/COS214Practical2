#ifndef TESTDECORATOR_H
#define TESTDECORATOR_H
#include <string>
#include<iostream>
#include"testable.h"
#include"testBed.h"

using namespace std;

class testDecorator : public testable{
    public:
        testDecorator();
        testDecorator(test internalTestBed);
        testBed getInternalTestBed();
        void setInternalTestBed(testBed internalTestBed);
    private: 
        testBed internalTestBed;
};

#endif