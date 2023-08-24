#ifndef BOOLEANCALCULATOR_H
#define BOOLEANCALCULATOR_H
#include <string>
#include<iostream>
#include"calculator.h"

using namespace std;
class booleanCalculator: public calculator{
    public:
        booleanCalculator();
        string performCalculation();
};
#endif