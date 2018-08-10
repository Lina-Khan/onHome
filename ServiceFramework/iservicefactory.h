#ifndef ISERVICEFACTORY
#define ISERVICEFACTORY

#include "ServiceFramework/iservice.h"

class IServiceFactory{

public:
    virtual IService* createService () = 0;

};

#endif // ISERVICEFACTORY

