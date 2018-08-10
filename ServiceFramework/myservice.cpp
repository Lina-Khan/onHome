#include "ServiceFramework/myservice.h"


MyService::MyService() {
    this->mcurrentState = new IdleState ();
}

IService::PRIMITIVE MyService::handleMessage(IEvent& event){
    return this->mcurrentState->handleEvent(event,this);
}



