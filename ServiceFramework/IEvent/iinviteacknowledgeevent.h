#ifndef IINVITEACKNOWLEDGEEVENT
#define IINVITEACKNOWLEDGEEVENT

#include "ServiceFramework/IEvent/ievent.h"

class IInviteAcknowledgeEvent : public IEvent
{
public:

    virtual EventID getEventId()
    {
        return IEvent::INVITE_ACKNOWLEDGE;
    }

    virtual std::string getEventName()
    {
        return mEventNames.at(IEvent::INVITE_ACKNOWLEDGE);
    }
};

#endif // IINVITEACKNOWLEDGEEVENT

