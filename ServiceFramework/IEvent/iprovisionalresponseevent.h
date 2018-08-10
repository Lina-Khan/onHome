#ifndef IPROVISIONALRESPONSEEVENT
#define IPROVISIONALRESPONSEEVENT

#include "ServiceFramework/IEvent/ievent.h"

class IProvisionalResponseEvent : public IEvent
{
public:

    virtual EventID getEventId()
    {
        return IEvent::PROVISIONAL_RESPONSE;
    }

    virtual std::string getEventName()
    {
        return mEventNames.at(IEvent::PROVISIONAL_RESPONSE);
    }
};

#endif // IPROVISIONALRESPONSEEVENT

