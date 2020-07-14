/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Barometer
//!	Generated Date	: Tue, 14, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Barometer.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Barometer.h"
//## auto_generated
#include "Controller.h"
//#[ ignore
#define Default_Barometer_Barometer_SERIALIZE OM_NO_OP

#define Default_Barometer_funcAb_SERIALIZE OM_NO_OP

#define Default_Barometer_getDescription_SERIALIZE OM_NO_OP

#define Default_Barometer_getId_SERIALIZE OM_NO_OP

#define Default_Barometer_odczytajDane_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Barometer
Barometer::Barometer(IOxfActive* theActiveContext) : description("barometer"), id(10) {
    NOTIFY_ACTIVE_CONSTRUCTOR(Barometer, Barometer(), 0, Default_Barometer_Barometer_SERIALIZE);
    setActiveContext(this, true);
    itsController = NULL;
    initStatechart();
}

Barometer::~Barometer() {
    NOTIFY_DESTRUCTOR(~Barometer, false);
    cleanUpRelations();
}

void Barometer::funcAb() {
    NOTIFY_OPERATION(funcAb, funcAb(), 0, Default_Barometer_funcAb_SERIALIZE);
    //#[ operation funcAb()
    //#]
}

std::string Barometer::getDescription() {
    NOTIFY_OPERATION(getDescription, getDescription(), 0, Default_Barometer_getDescription_SERIALIZE);
    //#[ operation getDescription()
    return description;
    //#]
}

int Barometer::getId() {
    NOTIFY_OPERATION(getId, getId(), 0, Default_Barometer_getId_SERIALIZE);
    //#[ operation getId()
    return id;
    //#]
}

void Barometer::odczytajDane() {
    NOTIFY_OPERATION(odczytajDane, odczytajDane(), 0, Default_Barometer_odczytajDane_SERIALIZE);
    //#[ operation odczytajDane()
    recentValue=2.1;
    //#]
}

Controller* Barometer::getItsController() const {
    return itsController;
}

void Barometer::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

bool Barometer::startBehavior() {
    bool done = false;
    done = Sensor::startBehavior();
    return done;
}

void Barometer::setDescription(std::string p_description) {
    description = p_description;
}

void Barometer::setId(int p_id) {
    id = p_id;
}

void Barometer::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Barometer::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

void Barometer::__setItsController(Controller* p_Controller) {
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

void Barometer::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void Barometer::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

void Barometer::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.OczekiwanieSensor");
        rootState_subState = OczekiwanieSensor;
        rootState_active = OczekiwanieSensor;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Barometer::rootState_processEvent() {
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
void OMAnimatedBarometer::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("id", x2String(myReal->id));
    aomsAttributes->addAttribute("description", UNKNOWN2STRING(myReal->description));
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedBarometer::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
    OMAnimatedSensor::serializeRelations(aomsRelations);
}

void OMAnimatedBarometer::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Barometer::OczekiwanieSensor:
        {
            OczekiwanieSensor_serializeStates(aomsState);
        }
        break;
        case Barometer::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedBarometer::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_7");
}

void OMAnimatedBarometer::OczekiwanieSensor_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.OczekiwanieSensor");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(Barometer, Default, false, Sensor, OMAnimatedSensor, OMAnimatedBarometer)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Barometer.cpp
*********************************************************************/
