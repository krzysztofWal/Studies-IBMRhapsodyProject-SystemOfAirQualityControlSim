/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PM2_5
//!	Generated Date	: Wed, 8, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\PM2_5.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "PM2_5.h"
//## auto_generated
#include "Station.h"
//#[ ignore
#define Default_PM2_5_PM2_5_SERIALIZE OM_NO_OP

#define Default_PM2_5_odczytajDane_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class PM2_5
PM2_5::PM2_5(IOxfActive* theActiveContext) {
    NOTIFY_ACTIVE_CONSTRUCTOR(PM2_5, PM2_5(), 0, Default_PM2_5_PM2_5_SERIALIZE);
    setActiveContext(this, true);
    initStatechart();
    //#[ operation PM2_5()
    std::cout << "Constructed PM2.5 sensor" << this << std::endl;
    //#]
}

PM2_5::~PM2_5() {
    NOTIFY_DESTRUCTOR(~PM2_5, false);
}

void PM2_5::odczytajDane() {
    NOTIFY_OPERATION(odczytajDane, odczytajDane(), 0, Default_PM2_5_odczytajDane_SERIALIZE);
    //#[ operation odczytajDane()
    //#]
}

bool PM2_5::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void PM2_5::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void PM2_5::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
    }
}

IOxfReactive::TakeEventStatus PM2_5::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPM2_5::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedPMSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedPM2_5::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedPMSensor::serializeRelations(aomsRelations);
}

void OMAnimatedPM2_5::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(PM2_5, Default, false, PMSensor, OMAnimatedPMSensor, OMAnimatedPM2_5)

OMINIT_SUPERCLASS(PMSensor, OMAnimatedPMSensor)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PM2_5.cpp
*********************************************************************/
