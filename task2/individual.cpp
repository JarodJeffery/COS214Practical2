#include "individual.h"
#include <string>
#include<iostream>

using namespace std;

individual::individual(double m)
{
    amount =m;
}

void individual::print()
{
    cout<<"The amount is "<<to_string(amount);
}

double individual::getExpenditureByCostCenter()
{
    return amount;
}
