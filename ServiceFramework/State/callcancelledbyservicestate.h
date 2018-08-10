#ifndef CALLCANCELLEDBYSERVICESTATE_H
#define CALLCANCELLEDBYSERVICESTATE_H

#include "ServiceFramework/State/basestate.h"

class CallCancelledByServiceState: public BaseState
{
public:
    void changeState(BaseState* newState, IService* inc);

};

#endif // CALLCANCELLEDBYSERVICESTATE_H
