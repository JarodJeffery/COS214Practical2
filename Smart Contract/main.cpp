#include "Contract.h"
#include "Negotiation.h"
#include "TentativelyAccepted.h"
#include "Accepted.h"
#include "Completed.h"
#include "Rejected.h"
#include "Contract.h"
#include <iostream>
using namespace std;
int main()
{

    Contract contract("Sample Contract");
    contract.addCondition("Ben");
    cout << contract.conditions[0] << endl;
    cout << contract.currentState->toString() << endl;

    contract.acceptContract();
    cout << contract.currentState->toString() << endl;
    contract.addCondition("Ben");
    contract.acceptContract();
    contract.addCondition("Ben");

    cout << contract.currentState->toString() << endl;
    contract.addCondition("Ben");

    cout << contract.toString() << endl;

    // Perform actions and transitions here

    return 0;
}
