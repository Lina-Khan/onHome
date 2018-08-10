#include "ServiceFramework/myfactory.h"

IServiceFactory* MyFactory::inc =0;

MyFactory::MyFactory(){ }

MyFactory::~MyFactory(){ }

IService* MyFactory::createService(){
    IService* ser = new MyService();
    return ser;
}

IServiceFactory* MyFactory::getFactory(){
    if(!inc){
        inc= new MyFactory();
    }
    return inc;
}
