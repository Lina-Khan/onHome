#ifndef ISERVICE
#define ISERVICE



class IMessage;
class IEvent;
class BaseState;

class IService
{
public:
     BaseState* mcurrentState;
    enum PRIMITIVE
    {
        CONTINUE,    // Pass IEvent to next service
        PROCESSING,  // Hold the event without final verdict. Continue handling after processing
        REJECT,      // Rejects the event
        STOP         // Stops the event
    };

    virtual IService::PRIMITIVE handleMessage(IEvent& event) = 0;
};



#endif // ISERVICE

