#include "Rejected.h"
#include "Contract.h"

void Rejected::addCondition(Contract *contract, const std::string &conditionDetails)
{
}

void Rejected::removeCondition(Contract *contract, const std::string &conditionDetails)
{
}

void Rejected::acceptContract(Contract *contract)
{
}

void Rejected::rejectContract(Contract *contract)
{

}

void Rejected::completeContract(Contract *contract)
{

}

std::string Rejected::toString() const
{
    return "State: REJECTED\n";
}
