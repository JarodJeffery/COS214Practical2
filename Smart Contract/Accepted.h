#ifndef ACCEPTED_H
#define ACCEPTED_H

#include "State.h"
#include <iostream>

class Accepted : public State {
public:
    void addCondition(Contract* contract, const std::string& conditionDetails) override;
    void removeCondition(Contract* contract, const std::string& conditionDetails) override;
    void acceptContract(Contract* contract) override;
    void rejectContract(Contract* contract) override;
    void completeContract(Contract* contract) override;
    std::string toString() const override;
};

#endif
