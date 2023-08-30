#include <string>
#include <iostream>
#include "test.h"
#include "numericCalculator.h"
#include "numericTest.h"

numericTest::numericTest(numericCalculator nc)
{
    this->nc = nc;
}

bool numericTest::executeTest()
{
    string result = nc.performCalculation();
    if(result == "true"){
        return true;
    }
    return false;
}