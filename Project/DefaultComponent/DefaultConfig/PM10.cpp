/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PM10
//!	Generated Date	: Wed, 8, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\PM10.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "PM10.h"
//## auto_generated
#include "Station.h"
//#[ ignore
#define Default_PM10_PM10_SERIALIZE OM_NO_OP

#define Default_PM10_odczytajDane_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class TopLevel::PM10
PM10_C::PM10_C(IOxfActive* theActiveContext) {
    NOTIFY_ACTIVE_CONSTRUCTOR_OBJECT(PM10, PM10(), 0, Default_PM10_PM10_SERIALIZE, PM10_C);
    setActiveContext(this, true);
    initStatechart();
    //#[ operation PM10()
    std::cout << "Constructed PM1 sensor" << this << std::endl;
    //#]
}

PM10_C::~PM10_C() {
    NOTIFY_DESTRUCTOR(~PM10, false);
}

void PM10_C::odczytajDane() {
    NOTIFY_OPERATION(odczytajDane, odczytajDane(), 0, Default_PM10_odczytajDane_SERIALIZE);
    //#[ operation odczytajDane()
    //#]
}

bool PM10_C::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void PM10_C::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void PM10_C::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
    }
}

IOxfReactive::TakeEventStatus PM10_C::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPM10_C::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedPMSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedPM10_C::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedPMSensor::serializeRelations(aomsRelations);
}

void OMAnimatedPM10_C::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
}
//#]

IMPLEMENT_REACTIVE_META_S_OBJECT_P(PM10, PM10_C, Default, false, PMSensor, OMAnimatedPMSensor, OMAnimatedPM10_C)

OMINIT_SUPERCLASS(PMSensor, OMAnimatedPMSensor)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PM10.cpp
*********************************************************************/
