#include<iostream>
#include<string>
#include"afterTest.h"
#include"beforeTest.h"
#include"testable.h"
#include"testBed.h"
#include"numericTest.h"
#include"booleanTest.h"
#include"booleanCalculator.h"
#include"numericCalculator.h"

int main(){
    numericCalculator nc("10 + 10 ");
    cout<<nc.performCalculation();
    booleanCalculator bc("true AND false ");
    cout<<bc.performCalculation();
    return 0;
}