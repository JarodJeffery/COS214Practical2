#include "testBed.h"
#include "test.h"
#include "testDecorator.h"
#include "beforeTest.h"
#include "afterTest.h"

test testBed::getTest()
{
    return test1;
}

void testBed::setTest(test test1)
{
    this->test1=test1;
}

bool testBed::runTest()
{
    return test1.executeTest();
}
