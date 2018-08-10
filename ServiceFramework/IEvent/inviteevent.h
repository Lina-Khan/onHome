#ifndef INVITEEVENT
#define INVITEEVENT

#include "ServiceFramework/IEvent/ievent.h"

class IInviteEvent : public IEvent
{
public:

    virtual EventID getEventId()
    {
        return IEvent::INVITE;
    }

    virtual std::string getEventName()
    {
        return mEventNames.at(IEvent::INVITE);
    }
};

#endif // INVITEEVENT

