#ifndef NUMERICCALCULATOR_H
#define NUMERICCALCULATOR_H
#include <string>
#include<iostream>
#include"calculator.h"

using namespace std;
class numericCalculator: public calculator{
    public:
        numericCalculator();
        int performCalculation();
};
#endif