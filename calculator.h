#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <string>
#include<iostream>

using namespace std;
class calculator{
    public:
        calculator(){};
        calculator(string input);
        string getInputString();
        void setInputString(string input);
        virtual string performCalculation() =0;
        virtual ~calculator();
    private: 
        string inputString;
};
#endif