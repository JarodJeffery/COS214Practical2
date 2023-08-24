#ifndef TEST_H
#define TEST_H
#include <string>
#include<iostream>
#include"testBed.h"
#include"test.h"

using namespace std;
class test{
    public:
        test();
        test(int h, double w, float b);
        int height;
        double weight;
        float bend; 
        virtual bool executeTest();
};

#endif