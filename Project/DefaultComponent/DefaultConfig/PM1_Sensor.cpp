/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PM1_Sensor
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\PM1_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "PM1_Sensor.h"
//## auto_generated
#include "Controller.h"
//#[ ignore
#define Default_PM1_Sensor_PM1_Sensor_SERIALIZE OM_NO_OP

#define Default_PM1_Sensor_funcAb_SERIALIZE OM_NO_OP

#define Default_PM1_Sensor_odczytajDane_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class PM1_Sensor
PM1_Sensor::PM1_Sensor(IOxfActive* theActiveContext) {
    NOTIFY_ACTIVE_CONSTRUCTOR(PM1_Sensor, PM1_Sensor(), 0, Default_PM1_Sensor_PM1_Sensor_SERIALIZE);
    setActiveContext(this, true);
    itsController = NULL;
    initStatechart();
    //#[ operation PM1_Sensor()
    std::cout << "Constructed PM1 sensor" << this << std::endl;
    //#]
}

PM1_Sensor::~PM1_Sensor() {
    NOTIFY_DESTRUCTOR(~PM1_Sensor, false);
    cleanUpRelations();
}

void PM1_Sensor::funcAb() {
    NOTIFY_OPERATION(funcAb, funcAb(), 0, Default_PM1_Sensor_funcAb_SERIALIZE);
    //#[ operation funcAb()
    //#]
}

void PM1_Sensor::odczytajDane() {
    NOTIFY_OPERATION(odczytajDane, odczytajDane(), 0, Default_PM1_Sensor_odczytajDane_SERIALIZE);
    //#[ operation odczytajDane()
    recentValue=0.6;
    //#]
}

Controller* PM1_Sensor::getItsController() const {
    return itsController;
}

void PM1_Sensor::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

bool PM1_Sensor::startBehavior() {
    bool done = false;
    done = Sensor::startBehavior();
    return done;
}

void PM1_Sensor::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void PM1_Sensor::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

void PM1_Sensor::__setItsController(Controller* p_Controller) {
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

void PM1_Sensor::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void PM1_Sensor::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

void PM1_Sensor::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.OczekiwanieSensor");
        rootState_subState = OczekiwanieSensor;
        rootState_active = OczekiwanieSensor;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus PM1_Sensor::rootState_processEvent() {
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
void OMAnimatedPM1_Sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedPM1_Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
    OMAnimatedSensor::serializeRelations(aomsRelations);
}

void OMAnimatedPM1_Sensor::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case PM1_Sensor::OczekiwanieSensor:
        {
            OczekiwanieSensor_serializeStates(aomsState);
        }
        break;
        case PM1_Sensor::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPM1_Sensor::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_7");
}

void OMAnimatedPM1_Sensor::OczekiwanieSensor_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.OczekiwanieSensor");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(PM1_Sensor, Default, false, Sensor, OMAnimatedSensor, OMAnimatedPM1_Sensor)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PM1_Sensor.cpp
*********************************************************************/
