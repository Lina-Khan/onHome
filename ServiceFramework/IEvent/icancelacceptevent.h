#ifndef ICANCELACCEPTEVENT
#define ICANCELACCEPTEVENT

#include "ServiceFramework/IEvent/ievent.h"

class ICancelAcceptEvent : public IEvent
{
public:

    virtual EventID getEventId()
    {
        return IEvent::CANCEL_ACCEPT;
    }

    virtual std::string getEventName()
    {
        return mEventNames.at(IEvent::CANCEL_ACCEPT);
    }
};

#endif // ICANCELACCEPTEVENT

