#ifndef MYSERVICE_H
#define MYSERVICE_H

#include "ServiceFramework/iservice.h"
#include "ServiceFramework/State/callcancelledbyservicestate.h"
#include "ServiceFramework/State/guardstate.h"
#include "ServiceFramework/State/idlestate.h"
#include "ServiceFramework/State/waitfinalresponse.h"




class MyService: public IService
{

public:
    MyService();
    IService::PRIMITIVE handleMessage(IEvent& event);

};

#endif // MYSERVICE_H
