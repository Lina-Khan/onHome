#ifndef WAITFINALRESPONSE_H
#define WAITFINALRESPONSE_H

#include "ServiceFramework/State/basestate.h"

class WaitFinalResponseState: public BaseState{
public:
    void changeState(BaseState* newState, IService* inc);

};

#endif // WAITFINALRESPONSE_H
