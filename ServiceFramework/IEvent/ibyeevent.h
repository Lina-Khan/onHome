#ifndef IBYEEVENT
#define IBYEEVENT

#include "ServiceFramework/IEvent/ievent.h"

class IByeEvent : public IEvent
{
public:

    virtual EventID getEventId()
    {
        return IEvent::BYE;
    }

    virtual std::string getEventName()
    {
        return mEventNames.at(IEvent::BYE);
    }
};

#endif // IBYEEVENT

