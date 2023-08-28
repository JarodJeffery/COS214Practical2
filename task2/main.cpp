#include <string>
#include<iostream>
#include "component.h"
#include "orgStructure.h"
#include "individual.h"

using namespace std;

int main() {
    orgStructure test;
    component* l1 = new individual(15.55);
    component* l2 = new individual(7.55);
    l1->print();
    cout<<endl;
    l2->print();
    cout<<endl;

    test.addComp(l1);
    test.addComp(l2);
    test.print();
    return 0;
}