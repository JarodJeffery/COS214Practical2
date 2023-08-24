#ifndef BEFORETEST_H
#define BEFORETEST_H
#include <string>
#include<iostream>
#include"testDecorator.h"
#include"testBed.h"

using namespace std;
class beforeTest : public testDecorator{
    public:
        beforeTest(){};
        beforeTest(testBed internalTestBed);
    private:
        testBed before;
};
#endif