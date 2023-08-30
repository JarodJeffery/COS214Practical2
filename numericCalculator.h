#ifndef NUMERICCALCULATOR_H
#define NUMERICCALCULATOR_H
#include <string>
#include<iostream>
#include <list>
#include"calculator.h"

using namespace std;
class numericCalculator: public calculator{
    public:
        numericCalculator();
        numericCalculator(string input);
        string performCalculation();
};
#endif