TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    ServiceFramework/IEvent/ievent.cpp \
    ServiceFramework/State/callcancelledbyservicestate.cpp \
    ServiceFramework/State/guardstate.cpp \
    ServiceFramework/State/idlestate.cpp \
    ServiceFramework/State/waitfinalresponsestate.cpp \
    ServiceFramework/myfactory.cpp \
    ServiceFramework/myservice.cpp

HEADERS += \
    ServiceFramework/IEvent/ibyeacceptevent.h \
    ServiceFramework/IEvent/ibyeevent.h \
    ServiceFramework/IEvent/icancelacceptevent.h \
    ServiceFramework/IEvent/icancelevent.h \
    ServiceFramework/IEvent/icancelrejectevent.h \
    ServiceFramework/IEvent/ievent.h \
    ServiceFramework/IEvent/iinviteacceptevent.h \
    ServiceFramework/IEvent/iinviteacknowledgeevent.h \
    ServiceFramework/IEvent/inviteevent.h \
    ServiceFramework/IEvent/inviteregectevent.h \
    ServiceFramework/IEvent/iprovisionalresponseevent.h \
    ServiceFramework/State/basestate.h \
    ServiceFramework/State/callcancelledbyservicestate.h \
    ServiceFramework/State/guardstate.h \
    ServiceFramework/State/idlestate.h \
    ServiceFramework/State/waitfinalresponse.h \
    ServiceFramework/iservice.h \
    ServiceFramework/iservicefactory.h \
    ServiceFramework/myfactory.h \
    ServiceFramework/myservice.h

