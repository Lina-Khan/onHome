#ifndef IDLESTATE_H
#define IDLESTATE_H

#include "ServiceFramework/State/basestate.h"

class IdleState : public BaseState
{

public:
    void changeState(BaseState* newState, IService* inc);

};

#endif // IDLESTATE_H
