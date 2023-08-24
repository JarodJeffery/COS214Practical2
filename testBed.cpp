#include "testBed.h"
#include "test.h"

testBed::testBed()
{
}

testBed::testBed(test test1, int h, double w, float b)
{
    this->test1 = test1;
    height = h;
    weight = w;
    bend = b;
}

test testBed::getTest()
{
    return test1;
}

void testBed::setTest(test test1)
{
    this->test1=test1;
}
