#ifndef INVITEREGECTEVENT
#define INVITEREGECTEVENT

#include "ServiceFramework/IEvent/ievent.h"

class IInviteRejectEvent : public IEvent
{
public:

    virtual EventID getEventId()
    {
        return IEvent::INVITE_REJECT;
    }

    virtual std::string getEventName()
    {
        return mEventNames.at(IEvent::INVITE_REJECT);
    }
};

#endif // INVITEREGECTEVENT

