#include "testDecorator.h"
#include "testBed.h"

using namespace std;

testDecorator::testDecorator(test internalTestBed, int h, double w, float b)
{
    testBed tb(internalTestBed, h, w, b);
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
