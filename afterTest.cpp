#include <string>
#include<iostream>
#include"testDecorator.h"
#include"testBed.h"
#include "afterTest.h"


afterTest::afterTest(testBed internalTestBed)
{
    after = internalTestBed;
}
