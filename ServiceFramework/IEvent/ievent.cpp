#include "ServiceFramework/IEvent/ievent.h"

std::map<IEvent::EventID, std::string> IEvent::mEventNames =
{
    {IEvent::INVITE, "INVITE"},
    {IEvent::INVITE_ACCEPT, "INVITE_ACCEPT"},
    {IEvent::INVITE_REJECT, "INVITE_REJECT"},
    {IEvent::INVITE_ACKNOWLEDGE, "INVITE_ACKNOWLEDGE"},
    {IEvent::CANCEL, "CANCEL"},
    {IEvent::CANCEL_ACCEPT, "CANCEL_ACCEPT"},
    {IEvent::CANCEL_REJECT, "CANCEL_REJECT"},
    {IEvent::PROVISIONAL_RESPONSE, "PROVISIONAL_RESPONSE"},
    {IEvent::BYE, "BYE"},
    {IEvent::BYE_ACCEPT, "BYE_ACCEPT"}
};



