#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
#include <string>
#include<iostream>
#include "component.h"

using namespace std;
class individual :public component{
    public:
        individual(double m);
        void print();
        double getExpenditureByCostCenter();
    private: 
        double amount;
};
#endif