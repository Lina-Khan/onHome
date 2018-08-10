#ifndef MYFACTORY_H
#define MYFACTORY_H

#include "ServiceFramework/iservicefactory.h"
#include "ServiceFramework/myservice.h"

class MyFactory: public IServiceFactory{
private:
    MyFactory();
    MyFactory(const MyFactory&);
    MyFactory& operator = (const MyFactory&);
    static IServiceFactory* inc;
public:
    IService* createService();
    static IServiceFactory* getFactory();
    ~MyFactory();

};


#endif // MYFACTORY_H
