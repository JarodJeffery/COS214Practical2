#include "Negotiation.h"
#include "Contract.h"
#include "TentativelyAccepted.h"
#include "Rejected.h"
using namespace std;

void Negotiation::addCondition(Contract *contract, const std::string &conditionDetails)
{
    contract->conditions.push_back(conditionDetails);
}

void Negotiation::removeCondition(Contract *contract, const std::string &conditionDetails)
{
    int pos = 0;
    for (int i = 0; i < contract->conditions.size(); i++)
    {
        if (contract->conditions[i] == conditionDetails)
        {
            pos = i;
        }
    }

    contract->conditions.erase(contract->conditions.begin() + pos);
}

void Negotiation::acceptContract(Contract *contract)
{
    contract->setCurrentState(new TentativelyAccepted());
}

void Negotiation::rejectContract(Contract *contract)
{
    contract->setCurrentState(new Rejected());
}

void Negotiation::completeContract(Contract *contract)
{
    cout << "Only Accepted Contracts can complete" << endl;
}

std::string Negotiation::toString() const
{
    return "State: NEGOTIATION\n";
}
