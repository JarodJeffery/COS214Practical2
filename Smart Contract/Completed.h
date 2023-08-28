#ifndef COMPLETED_H
#define COMPLETED_H

#include "State.h"

class Completed : public State {
public:
    void addCondition(Contract* contract, const std::string& conditionDetails) override;
    void removeCondition(Contract* contract, const std::string& conditionDetails) override;
    void acceptContract(Contract* contract) override;
    void rejectContract(Contract* contract) override;
    void completeContract(Contract* contract) override;
    std::string toString() const override;
};

#endif
