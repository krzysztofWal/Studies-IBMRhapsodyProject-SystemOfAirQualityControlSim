/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PM1
//!	Generated Date	: Wed, 8, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\PM1.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "PM1.h"
//## auto_generated
#include "Station.h"
//#[ ignore
#define Default_PM1_PM1_SERIALIZE OM_NO_OP

#define Default_PM1_odczytajDane_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class PM1
PM1::PM1(IOxfActive* theActiveContext) {
    NOTIFY_ACTIVE_CONSTRUCTOR(PM1, PM1(), 0, Default_PM1_PM1_SERIALIZE);
    setActiveContext(this, true);
    initStatechart();
    //#[ operation PM1()
    std::cout << "Constructed PM1 sensor" << this << std::endl;
    //#]
}

PM1::~PM1() {
    NOTIFY_DESTRUCTOR(~PM1, false);
}

void PM1::odczytajDane() {
    NOTIFY_OPERATION(odczytajDane, odczytajDane(), 0, Default_PM1_odczytajDane_SERIALIZE);
    //#[ operation odczytajDane()
    //#]
}

bool PM1::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void PM1::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void PM1::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.state_2");
        rootState_subState = state_2;
        rootState_active = state_2;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus PM1::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPM1::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedPMSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedPM1::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedPMSensor::serializeRelations(aomsRelations);
}

void OMAnimatedPM1::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == PM1::state_2)
        {
            state_2_serializeStates(aomsState);
        }
}

void OMAnimatedPM1::state_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_2");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(PM1, Default, false, PMSensor, OMAnimatedPMSensor, OMAnimatedPM1)

OMINIT_SUPERCLASS(PMSensor, OMAnimatedPMSensor)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PM1.cpp
*********************************************************************/
