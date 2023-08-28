#include "TentativelyAccepted.h"
#include "Contract.h"
#include "Accepted.h"
#include "Negotiation.h"
#include "Rejected.h"
using namespace std;

void TentativelyAccepted::addCondition(Contract *contract, const std::string &conditionDetails)
{
    contract->conditions.clear();
    contract->conditions.push_back(conditionDetails);
    contract->setCurrentState(new Negotiation());
}

void TentativelyAccepted::removeCondition(Contract *contract, const std::string &conditionDetails)
{
    contract->conditions.clear();
    contract->setCurrentState(new Negotiation());
}

void TentativelyAccepted::acceptContract(Contract *contract)
{
    contract->setCurrentState(new Accepted());
}

void TentativelyAccepted::rejectContract(Contract *contract)
{
    contract->setCurrentState(new Rejected());
}

void TentativelyAccepted::completeContract(Contract *contract)
{
    cout << "Only accepted contracts can complete" << endl;
}

std::string TentativelyAccepted::toString() const
{
    return "State: TENTATIVELY ACCEPTED\n";
}
