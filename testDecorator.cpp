#include "testDecorator.h"
#include "testBed.h"

using namespace std;

testDecorator::testDecorator(test internalTestBed)
{
    testBed tb(internalTestBed);
    this->internalTestBed = tb;
}

testBed testDecorator::getInternalTestBed()
{
    return internalTestBed;
}

void testDecorator::setInternalTestBed(testBed internalTestBed)
{
    this->internalTestBed = internalTestBed;
}
