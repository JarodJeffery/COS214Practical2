#include "Accepted.h"
#include "Contract.h"
#include "Completed.h"
using namespace std;

void Accepted::addCondition(Contract *contract, const std::string &conditionDetails)
{
    cout << "Contract is already accepted" << endl;
}

void Accepted::removeCondition(Contract *contract, const std::string &conditionDetails)
{
    cout << "Contract is already accepted" << endl;
}

void Accepted::acceptContract(Contract *contract)
{
    cout << "Contract is already accepted" << endl;
}

void Accepted::rejectContract(Contract *contract)
{
    cout << "Contract is already accepted" << endl;
}

void Accepted::completeContract(Contract *contract)
{

    contract->setCurrentState(new Completed());
}

std::string Accepted::toString() const
{
    return "State: ACCEPTED\n";
}
