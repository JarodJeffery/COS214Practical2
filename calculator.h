#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <string>
#include<iostream>

using namespace std;
class calculator{
    public:
        calculator(string input);
        string getInputString();
        void setInputString(string input);
        virtual string performCalculation() const =0;
    private: 
        string inputString;
};
#endif