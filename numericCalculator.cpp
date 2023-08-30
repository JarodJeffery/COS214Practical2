#include <string>
#include<iostream>
#include "calculator.h"
#include "numericCalculator.h"
#include <list>

using namespace std;

numericCalculator::numericCalculator()
{
}

numericCalculator::numericCalculator(string input)
{
    setInputString(input);
}

string numericCalculator::performCalculation()
{
    string temp = getInputString();
    cout<<temp<<endl;
    string w = "";
    list<string> equ;
    for (auto x : temp) 
    {
        if (x == ' ')
        {
            equ.push_front(w);
            w = "";
        }
        else {
            w = w + x;
        }
    }
    
    string ele = equ.front();
    equ.pop_front();
    int answer=stoi(ele);
    while( equ.size() != 0){ 
        ele = equ.front();
        equ.pop_front();
        if(ele =="*"){
            ele = equ.front();
            equ.pop_front();
            answer *=stoi(ele);
        }else if(ele == "/"){
            ele = equ.front();
            equ.pop_front();
            answer /=stoi(ele);
        }else if(ele == "+"){
            ele = equ.front();
            equ.pop_front();
            answer +=stoi(ele);
        }else if(ele == "-"){
            ele = equ.front();
            equ.pop_front();
            answer -=stoi(ele);
        }
    }
    string temp1 = to_string(answer)+"\n";
    return  temp1;
}

