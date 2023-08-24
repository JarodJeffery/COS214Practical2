#ifndef AFTERTEST_H
#define AFTERTEST_H
#include <string>
#include<iostream>
#include"testDecorator.h"
#include"testBed.h"

using namespace std;
class afterTest : public testDecorator{
    public:
        afterTest(testBed internalTestBed);
    private:
        testBed after;
};
#endif