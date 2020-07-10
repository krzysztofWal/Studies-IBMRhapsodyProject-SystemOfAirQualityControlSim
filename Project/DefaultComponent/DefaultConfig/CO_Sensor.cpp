/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CO_Sensor
//!	Generated Date	: Fri, 10, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\CO_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "CO_Sensor.h"
//## auto_generated
#include "Controller.h"
//#[ ignore
#define Default_CO_Sensor_CO_Sensor_SERIALIZE OM_NO_OP

#define Default_CO_Sensor_funcAb_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class CO_Sensor
CO_Sensor::CO_Sensor(IOxfActive* theActiveContext) {
    NOTIFY_ACTIVE_CONSTRUCTOR(CO_Sensor, CO_Sensor(), 0, Default_CO_Sensor_CO_Sensor_SERIALIZE);
    setActiveContext(this, true);
    itsController = NULL;
    initStatechart();
}

CO_Sensor::~CO_Sensor() {
    NOTIFY_DESTRUCTOR(~CO_Sensor, false);
    cleanUpRelations();
}

void CO_Sensor::funcAb() {
    NOTIFY_OPERATION(funcAb, funcAb(), 0, Default_CO_Sensor_funcAb_SERIALIZE);
    //#[ operation funcAb()
    //#]
}

Controller* CO_Sensor::getItsController() const {
    return itsController;
}

void CO_Sensor::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

bool CO_Sensor::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void CO_Sensor::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void CO_Sensor::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

void CO_Sensor::__setItsController(Controller* p_Controller) {
    itsController = p_Controller;
    if(p_Controller != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsController", p_Controller, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsController");
        }
}

void CO_Sensor::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void CO_Sensor::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

void CO_Sensor::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Oczekiwanie_CO");
        rootState_subState = Oczekiwanie_CO;
        rootState_active = Oczekiwanie_CO;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus CO_Sensor::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Oczekiwanie_CO
        case Oczekiwanie_CO:
        {
            if(IS_EVENT_TYPE_OF(readCO_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Oczekiwanie_CO");
                    //#[ transition 1 
                    odczytajDane();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_7");
                    pushNullTransition();
                    rootState_subState = sendaction_7;
                    rootState_active = sendaction_7;
                    //#[ state sendaction_7.(Entry) 
                    itsController->GEN(wyslijDane(recentValue));
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
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
                    NOTIFY_STATE_ENTERED("ROOT.Oczekiwanie_CO");
                    rootState_subState = Oczekiwanie_CO;
                    rootState_active = Oczekiwanie_CO;
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
void OMAnimatedCO_Sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedCO_Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
    OMAnimatedSensor::serializeRelations(aomsRelations);
}

void OMAnimatedCO_Sensor::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case CO_Sensor::Oczekiwanie_CO:
        {
            Oczekiwanie_CO_serializeStates(aomsState);
        }
        break;
        case CO_Sensor::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedCO_Sensor::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_7");
}

void OMAnimatedCO_Sensor::Oczekiwanie_CO_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Oczekiwanie_CO");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(CO_Sensor, Default, false, Sensor, OMAnimatedSensor, OMAnimatedCO_Sensor)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CO_Sensor.cpp
*********************************************************************/
