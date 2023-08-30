#include "booleanTest.h"

booleanTest::booleanTest(booleanCalculator bc)
{
    nc =bc;
}

bool booleanTest::executeTest()
{
    if(nc.performCalculation() == "true"){
        return true;
    }
    return false;
}