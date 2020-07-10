/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SO2_Sensor
//!	Generated Date	: Fri, 10, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\SO2_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "SO2_Sensor.h"
//## auto_generated
#include "Controller.h"
//#[ ignore
#define Default_SO2_Sensor_SO2_Sensor_SERIALIZE OM_NO_OP

#define Default_SO2_Sensor_funcAb_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class SO2_Sensor
SO2_Sensor::SO2_Sensor(IOxfActive* theActiveContext) {
    NOTIFY_ACTIVE_CONSTRUCTOR(SO2_Sensor, SO2_Sensor(), 0, Default_SO2_Sensor_SO2_Sensor_SERIALIZE);
    setActiveContext(this, true);
    itsController = NULL;
    initStatechart();
}

SO2_Sensor::~SO2_Sensor() {
    NOTIFY_DESTRUCTOR(~SO2_Sensor, false);
    cleanUpRelations();
}

void SO2_Sensor::funcAb() {
    NOTIFY_OPERATION(funcAb, funcAb(), 0, Default_SO2_Sensor_funcAb_SERIALIZE);
    //#[ operation funcAb()
    //#]
}

Controller* SO2_Sensor::getItsController() const {
    return itsController;
}

void SO2_Sensor::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

bool SO2_Sensor::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void SO2_Sensor::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void SO2_Sensor::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

void SO2_Sensor::__setItsController(Controller* p_Controller) {
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

void SO2_Sensor::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void SO2_Sensor::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

void SO2_Sensor::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Oczekiwanie_SO2");
        rootState_subState = Oczekiwanie_SO2;
        rootState_active = Oczekiwanie_SO2;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus SO2_Sensor::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Oczekiwanie_SO2
        case Oczekiwanie_SO2:
        {
            if(IS_EVENT_TYPE_OF(readSO2_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Oczekiwanie_SO2");
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
                    NOTIFY_STATE_ENTERED("ROOT.Oczekiwanie_SO2");
                    rootState_subState = Oczekiwanie_SO2;
                    rootState_active = Oczekiwanie_SO2;
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
void OMAnimatedSO2_Sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedSO2_Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
    OMAnimatedSensor::serializeRelations(aomsRelations);
}

void OMAnimatedSO2_Sensor::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case SO2_Sensor::Oczekiwanie_SO2:
        {
            Oczekiwanie_SO2_serializeStates(aomsState);
        }
        break;
        case SO2_Sensor::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSO2_Sensor::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_7");
}

void OMAnimatedSO2_Sensor::Oczekiwanie_SO2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Oczekiwanie_SO2");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(SO2_Sensor, Default, false, Sensor, OMAnimatedSensor, OMAnimatedSO2_Sensor)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SO2_Sensor.cpp
*********************************************************************/
