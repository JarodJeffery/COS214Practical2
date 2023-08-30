#ifndef BOOLEANCALCULATOR_H
#define BOOLEANCALCULATOR_H
#include <string>
#include<iostream>
#include <list>
#include"calculator.h"

using namespace std;
class booleanCalculator: public calculator{
    public:
        booleanCalculator();
        booleanCalculator(string input);
        string performCalculation();
};
#endif