#ifndef BASESTATE
#define BASESTATE

#include "ServiceFramework/iservice.h"

class BaseState{
public:
    IService::PRIMITIVE handleEvent(IEvent& event, IService* inc){
        event.getEventName();
        return inc->PRIMITIVE::CONTINUE;
    }

    virtual void changeState(BaseState* newState, IService* inc) = 0;
};


#endif // BASESTATE

