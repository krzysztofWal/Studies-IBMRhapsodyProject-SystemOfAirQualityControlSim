/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: O3Sensor
//!	Generated Date	: Tue, 7, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\O3Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "O3Sensor.h"
//## auto_generated
#include "Station.h"
//#[ ignore
#define Default_O3Sensor_O3Sensor_SERIALIZE OM_NO_OP

#define Default_O3Sensor_odczytajDane_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class O3Sensor
O3Sensor::O3Sensor(IOxfActive* theActiveContext) {
    NOTIFY_ACTIVE_CONSTRUCTOR(O3Sensor, O3Sensor(), 0, Default_O3Sensor_O3Sensor_SERIALIZE);
    setActiveContext(this, true);
    itsStation_1 = NULL;
    initStatechart();
}

O3Sensor::~O3Sensor() {
    NOTIFY_DESTRUCTOR(~O3Sensor, false);
    cleanUpRelations();
    cancelTimeouts();
}

void O3Sensor::odczytajDane() {
    NOTIFY_OPERATION(odczytajDane, odczytajDane(), 0, Default_O3Sensor_odczytajDane_SERIALIZE);
    //#[ operation odczytajDane()
    recentValue += 0.5;
    
    //#]
}

Station* O3Sensor::getItsStation_1() const {
    return itsStation_1;
}

void O3Sensor::setItsStation_1(Station* p_Station) {
    _setItsStation_1(p_Station);
}

bool O3Sensor::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void O3Sensor::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void O3Sensor::cleanUpRelations() {
    if(itsStation_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStation_1");
            itsStation_1 = NULL;
        }
}

void O3Sensor::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool O3Sensor::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void O3Sensor::__setItsStation_1(Station* p_Station) {
    itsStation_1 = p_Station;
    if(p_Station != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsStation_1", p_Station, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsStation_1");
        }
}

void O3Sensor::_setItsStation_1(Station* p_Station) {
    __setItsStation_1(p_Station);
}

void O3Sensor::_clearItsStation_1() {
    NOTIFY_RELATION_CLEARED("itsStation_1");
    itsStation_1 = NULL;
}

void O3Sensor::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.state_4");
        rootState_subState = state_4;
        rootState_active = state_4;
        rootState_timeout = scheduleTimeout(1000, "ROOT.state_4");
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus O3Sensor::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State state_4
        case state_4:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_4");
                            //#[ transition 1 
                            odczytajDane();
                            //std::cout << getRecentValue() << std::endl;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_7");
                            pushNullTransition();
                            rootState_subState = sendaction_7;
                            rootState_active = sendaction_7;
                            //#[ state sendaction_7.(Entry) 
                            itsStation_1->GEN(wyslijDane(recentValue));
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_7
        case sendaction_7:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_7");
                    NOTIFY_STATE_ENTERED("ROOT.state_4");
                    rootState_subState = state_4;
                    rootState_active = state_4;
                    rootState_timeout = scheduleTimeout(1000, "ROOT.state_4");
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedO3Sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedO3Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsStation_1", false, true);
    if(myReal->itsStation_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsStation_1);
        }
    OMAnimatedSensor::serializeRelations(aomsRelations);
}

void OMAnimatedO3Sensor::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case O3Sensor::state_4:
        {
            state_4_serializeStates(aomsState);
        }
        break;
        case O3Sensor::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedO3Sensor::state_4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_4");
}

void OMAnimatedO3Sensor::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_7");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(O3Sensor, Default, false, Sensor, OMAnimatedSensor, OMAnimatedO3Sensor)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\O3Sensor.cpp
*********************************************************************/
