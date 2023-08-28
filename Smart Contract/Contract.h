#ifndef CONTRACT_H
#define CONTRACT_H

#include <string>
#include <vector>
#include "State.h"

class Contract {
public:
    Contract(const std::string& name);
    void addCondition(const std::string& conditionDetails);
    void removeCondition(const std::string& conditionDetails);
    void acceptContract();
    void rejectContract();
    void completeContract();
    std::string toString() const;
    void setCurrentState(State* newState);

public:
    std::string contractName;
    State* currentState;
    std::vector<std::string> conditions;
    // You can add more attributes for voting and parties as needed
};

#endif
