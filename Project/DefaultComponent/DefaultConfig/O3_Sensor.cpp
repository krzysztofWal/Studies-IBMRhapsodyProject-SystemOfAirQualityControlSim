/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: O3_Sensor
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\O3_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "O3_Sensor.h"
//## auto_generated
#include "Controller.h"
//#[ ignore
#define Default_O3_Sensor_O3_Sensor_SERIALIZE OM_NO_OP

#define Default_O3_Sensor_funcAb_SERIALIZE OM_NO_OP

#define Default_O3_Sensor_odczytajDane_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class O3_Sensor
O3_Sensor::O3_Sensor(IOxfActive* theActiveContext) {
    NOTIFY_ACTIVE_CONSTRUCTOR(O3_Sensor, O3_Sensor(), 0, Default_O3_Sensor_O3_Sensor_SERIALIZE);
    setActiveContext(this, true);
    itsController = NULL;
    initStatechart();
}

O3_Sensor::~O3_Sensor() {
    NOTIFY_DESTRUCTOR(~O3_Sensor, false);
    cleanUpRelations();
}

void O3_Sensor::funcAb() {
    NOTIFY_OPERATION(funcAb, funcAb(), 0, Default_O3_Sensor_funcAb_SERIALIZE);
    //#[ operation funcAb()
    //#]
}

void O3_Sensor::odczytajDane() {
    NOTIFY_OPERATION(odczytajDane, odczytajDane(), 0, Default_O3_Sensor_odczytajDane_SERIALIZE);
    //#[ operation odczytajDane()
    recentValue=0.5;
    //#]
}

Controller* O3_Sensor::getItsController() const {
    return itsController;
}

void O3_Sensor::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

bool O3_Sensor::startBehavior() {
    bool done = false;
    done = Sensor::startBehavior();
    return done;
}

void O3_Sensor::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void O3_Sensor::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

void O3_Sensor::__setItsController(Controller* p_Controller) {
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

void O3_Sensor::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void O3_Sensor::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

void O3_Sensor::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.OczekiwanieSensor");
        rootState_subState = OczekiwanieSensor;
        rootState_active = OczekiwanieSensor;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus O3_Sensor::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State OczekiwanieSensor
        case OczekiwanieSensor:
        {
            if(IS_EVENT_TYPE_OF(czytajCzujniki_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.OczekiwanieSensor");
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
                    NOTIFY_STATE_ENTERED("ROOT.OczekiwanieSensor");
                    rootState_subState = OczekiwanieSensor;
                    rootState_active = OczekiwanieSensor;
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
void OMAnimatedO3_Sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedO3_Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
    OMAnimatedSensor::serializeRelations(aomsRelations);
}

void OMAnimatedO3_Sensor::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case O3_Sensor::OczekiwanieSensor:
        {
            OczekiwanieSensor_serializeStates(aomsState);
        }
        break;
        case O3_Sensor::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedO3_Sensor::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_7");
}

void OMAnimatedO3_Sensor::OczekiwanieSensor_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.OczekiwanieSensor");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(O3_Sensor, Default, false, Sensor, OMAnimatedSensor, OMAnimatedO3_Sensor)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\O3_Sensor.cpp
*********************************************************************/
