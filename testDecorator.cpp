#include "testDecorator.h"
#include "testBed.h"

using namespace std;

testDecorator::testDecorator(test internalTestBed)
{
}

testDecorator::testDecorator()
{
}

testBed testDecorator::getInternalTestBed()
{
    return internalTestBed;
}

void testDecorator::setInternalTestBed(testBed internalTestBed)
{
    this->internalTestBed = internalTestBed;
}
