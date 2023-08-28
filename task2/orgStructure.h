#ifndef ORGSTRUCTURE_H
#define ORGSTRUCTURE_H
#include <string>
#include<iostream>
#include "component.h"
#include <list>

using namespace std;
class orgStructure :public component{
    public:
        orgStructure();
        void print();
        double getTotalExpenditure();
        void addComp(component* c);
        void removeC(component* c);
        list<component*> leafs;
};
#endif