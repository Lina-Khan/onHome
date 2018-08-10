#include <iostream>
#include "ServiceFramework/myfactory.h"
#include "ServiceFramework/IEvent/inviteevent.h"

using namespace std;

int main()
{
    IServiceFactory* inc = MyFactory::getFactory();
    IService *s1 = inc->createService();

    IInviteEvent ev;

    s1->handleMessage(ev);

    return 0;
}

