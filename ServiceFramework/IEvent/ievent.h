#ifndef IEVENT_H
#define IEVENT_H
#include <string>
#include <map>

class IEvent
{
public:
    enum EventID
       {
           INVITE,
           INVITE_ACCEPT,
           INVITE_REJECT,
           INVITE_ACKNOWLEDGE,
           CANCEL,
           CANCEL_ACCEPT,
           CANCEL_REJECT,
           PROVISIONAL_RESPONSE,
           BYE,
           BYE_ACCEPT
       };


    virtual EventID getEventId() = 0;

    virtual std::string getEventName() = 0;

    virtual ~IEvent() {}

protected:

    static std::map<EventID, std::string> mEventNames;
};

#endif // IEVENT_H
