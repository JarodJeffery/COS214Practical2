#include "Contract.h"
#include "Negotiation.h" // Include the header for the Negotiation class

#include "State.h"

Contract::Contract(const std::string &name) : contractName(name), currentState(new Negotiation()) {}

void Contract::addCondition(const std::string &conditionDetails)
{
    if (currentState)
    {
        currentState->addCondition(this, conditionDetails);
    }
}

void Contract::removeCondition(const std::string &conditionDetails)
{
    if (currentState)
    {
        currentState->removeCondition(this, conditionDetails);
    }
}

void Contract::acceptContract()
{
    if (currentState)
    {
        currentState->acceptContract(this);
    }
}

void Contract::rejectContract()
{
    if (currentState)
    {
        currentState->rejectContract(this);
    }
}

void Contract::completeContract()
{
    if (currentState)
    {
        currentState->completeContract(this);
    }
}

std::string Contract::toString() const
{
    std::string result = "Contract " + contractName + ":\n";

    result += "State: " + currentState->toString() + "\n";

    if (currentState->toString() == "TENTATIVELY ACCEPTED" || currentState->toString() == "ACCEPTED")
    {
        result += "Votes:\n";
        for (int i = 0; i < conditions.size(); i++)
        {
            result += conditions[i] + "\n";
        }
        return result;
    }

    result += "Conditions:\n";
    for (int i = 0; i < conditions.size(); i++)
    {
        result += conditions[i] + "\n";
    }

    return result;
}

void Contract::setCurrentState(State *newState)
{
    delete currentState; // Deallocate the old state
    currentState = newState;
}
