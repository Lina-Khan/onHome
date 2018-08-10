#ifndef ICANCELEVENT
#define ICANCELEVENT

#include "ServiceFramework/IEvent/ievent.h"

class ICancelRejectEvent : public IEvent
{
public:

    virtual EventID getEventId()
    {
        return IEvent::CANCEL_REJECT;
    }

    virtual std::string getEventName()
    {
        return mEventNames.at(IEvent::CANCEL_REJECT);
    }
};


#endif // ICANCELEVENT

