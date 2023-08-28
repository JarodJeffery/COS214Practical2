#ifndef COMPONENT_H
#define COMPONENT_H
#include <string>
#include<iostream>

using namespace std;
class component{
    public:
        virtual void print();
        virtual double getTotalExpenditure();
        virtual double getExpenditureByCostCenter();
        virtual ~component();
};
#endif