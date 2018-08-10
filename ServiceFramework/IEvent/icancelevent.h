#ifndef ICANCELEVENT
#define ICANCELEVENT

#include "ServiceFramework/IEvent/ievent.h"

class ICancelEvent : public IEvent
{
public:

    virtual EventID getEventId()
    {
        return IEvent::CANCEL;
    }

    virtual std::string getEventName()
    {
        return mEventNames.at(IEvent::CANCEL);
    }
};

#endif // ICANCELEVENT

