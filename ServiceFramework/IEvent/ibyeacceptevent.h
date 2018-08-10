#ifndef IBYEACCEPTEVENT
#define IBYEACCEPTEVENT


#include "ServiceFramework/IEvent/ievent.h"

class IByeAcceptEvent : public IEvent
{
public:

    virtual EventID getEventId()
    {
        return IEvent::BYE_ACCEPT;
    }

    virtual std::string getEventName()
    {
        return mEventNames.at(IEvent::BYE_ACCEPT);
    }
};



#endif // IBYEACCEPTEVENT

