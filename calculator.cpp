#include "calculator.h"

calculator::calculator(string input)
{
    inputString = input;
}

string calculator::getInputString()
{
    return inputString;
}

void calculator::setInputString(string input)
{
    inputString = input;
}

calculator::~calculator()
{
}
