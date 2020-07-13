/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PM2_5Sensor
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\PM2_5Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "PM2_5Sensor.h"
//## auto_generated
#include "Controller.h"
//#[ ignore
#define Default_PM2_5Sensor_PM2_5Sensor_SERIALIZE OM_NO_OP

#define Default_PM2_5Sensor_funcAb_SERIALIZE OM_NO_OP

#define Default_PM2_5Sensor_odczytajDane_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class PM2_5Sensor
PM2_5Sensor::PM2_5Sensor(IOxfActive* theActiveContext) {
    NOTIFY_ACTIVE_CONSTRUCTOR(PM2_5Sensor, PM2_5Sensor(), 0, Default_PM2_5Sensor_PM2_5Sensor_SERIALIZE);
    setActiveContext(this, true);
    itsController = NULL;
    initStatechart();
    //#[ operation PM2_5Sensor()
    std::cout << "Constructed PM2.5 sensor" << this << std::endl;
    //#]
}

PM2_5Sensor::~PM2_5Sensor() {
    NOTIFY_DESTRUCTOR(~PM2_5Sensor, false);
    cleanUpRelations();
}

void PM2_5Sensor::funcAb() {
    NOTIFY_OPERATION(funcAb, funcAb(), 0, Default_PM2_5Sensor_funcAb_SERIALIZE);
    //#[ operation funcAb()
    //#]
}

void PM2_5Sensor::odczytajDane() {
    NOTIFY_OPERATION(odczytajDane, odczytajDane(), 0, Default_PM2_5Sensor_odczytajDane_SERIALIZE);
    //#[ operation odczytajDane()
    recentValue=1.2;
    //#]
}

Controller* PM2_5Sensor::getItsController() const {
    return itsController;
}

void PM2_5Sensor::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

bool PM2_5Sensor::startBehavior() {
    bool done = false;
    done = Sensor::startBehavior();
    return done;
}

void PM2_5Sensor::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void PM2_5Sensor::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

void PM2_5Sensor::__setItsController(Controller* p_Controller) {
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

void PM2_5Sensor::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void PM2_5Sensor::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

void PM2_5Sensor::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.OczekiwanieSensor");
        rootState_subState = OczekiwanieSensor;
        rootState_active = OczekiwanieSensor;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus PM2_5Sensor::rootState_processEvent() {
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
void OMAnimatedPM2_5Sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedPM2_5Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
    OMAnimatedSensor::serializeRelations(aomsRelations);
}

void OMAnimatedPM2_5Sensor::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case PM2_5Sensor::OczekiwanieSensor:
        {
            OczekiwanieSensor_serializeStates(aomsState);
        }
        break;
        case PM2_5Sensor::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPM2_5Sensor::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_7");
}

void OMAnimatedPM2_5Sensor::OczekiwanieSensor_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.OczekiwanieSensor");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(PM2_5Sensor, Default, false, Sensor, OMAnimatedSensor, OMAnimatedPM2_5Sensor)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PM2_5Sensor.cpp
*********************************************************************/
