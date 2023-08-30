#include "booleanCalculator.h"
#include <list>

booleanCalculator::booleanCalculator()
{
}

booleanCalculator::booleanCalculator(string input)
{
    setInputString(input);
}

string booleanCalculator::performCalculation()
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
    bool answer = false;
    if(ele == "true"){
        answer = true;
    }
    while( equ.size() != 0){ 
        ele = equ.front();
        equ.pop_front();
        string next =equ.front();
        equ.pop_front();
        bool nextb = false;
        if(next == "true"){
            nextb = true;
        }
        if(ele == "AND"){
            if(answer && nextb){
                answer = true;
            }else{
                answer = false;
            }
        }else if(ele == "OR"){
            if(answer || nextb){
                answer = true;
            }else{
                answer = false;
            }
        }else{
            if(answer != nextb){
                answer = true;
            }else{
                answer = false;
            }
        }
    }
    if(answer){
        return "true";
    }else{
        return "false";
    }
}