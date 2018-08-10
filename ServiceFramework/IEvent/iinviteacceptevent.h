#ifndef IINVITEACCEPTEVENT
#define IINVITEACCEPTEVENT
#include "ServiceFramework/IEvent/ievent.h"

class IInviteAcceptEvent : public IEvent
{
public:

    virtual EventID getEventId()
    {
        return IEvent::INVITE_ACCEPT;
    }

    virtual std::string getEventName()
    {
        return mEventNames.at(IEvent::INVITE_ACCEPT);
    }
};

#endif // IINVITEACCEPTEVENT

