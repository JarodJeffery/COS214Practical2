#include <string>
#include<iostream>
#include"testDecorator.h"
#include"testBed.h"
#include "beforeTest.h"


beforeTest::beforeTest(testBed internalTestBed)
{
    before = internalTestBed;
}
