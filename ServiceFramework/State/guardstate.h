#ifndef GUARDSTATE_H
#define GUARDSTATE_H

#include "ServiceFramework/State/basestate.h"

class GuardState: public BaseState
{
public:
    void changeState(BaseState* newState, IService* inc);

};

#endif // GUARDSTATE_H
