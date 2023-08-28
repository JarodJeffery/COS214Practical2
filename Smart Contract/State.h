#ifndef STATE_H
#define STATE_H

#include <string>
class Contract;  // Forward declaration

class State {
public:
    virtual ~State() {}
    virtual void addCondition(Contract* contract, const std::string& conditionDetails) = 0;
    virtual void removeCondition(Contract* contract, const std::string& conditionDetails) = 0;
    virtual void acceptContract(Contract* contract) = 0;
    virtual void rejectContract(Contract* contract) = 0;
    virtual void completeContract(Contract* contract) = 0;
    virtual std::string toString() const = 0;
};

#endif
