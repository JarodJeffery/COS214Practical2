#include <string>
#include<iostream>
#include "component.h"
#include <list>
#include "orgStructure.h"

using namespace std;

orgStructure::orgStructure()
{
}

void orgStructure::print()
{
    for(auto i: leafs){
        i->print();
    }
    cout<<"The total is "<< getTotalExpenditure();
}

double orgStructure::getTotalExpenditure()
{
    double total =0.0;
    for(auto i: leafs){
        total += i->getExpenditureByCostCenter();
    }
    return total;
}

void orgStructure::addComp(component *c)
{
    list<component*>::iterator it = leafs.begin();
    leafs.insert(it, 0);
}

void orgStructure::removeC(component *c)
{
    leafs.remove(c);
}
