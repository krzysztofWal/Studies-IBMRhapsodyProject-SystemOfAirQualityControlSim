/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Hygrometer
//!	Generated Date	: Tue, 14, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Hygrometer.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Hygrometer.h"
//## auto_generated
#include "Controller.h"
//#[ ignore
#define Default_Hygrometer_Hygrometer_SERIALIZE OM_NO_OP

#define Default_Hygrometer_funcAb_SERIALIZE OM_NO_OP

#define Default_Hygrometer_getDescription_SERIALIZE OM_NO_OP

#define Default_Hygrometer_getId_SERIALIZE OM_NO_OP

#define Default_Hygrometer_odczytajDane_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Hygrometer
Hygrometer::Hygrometer(IOxfActive* theActiveContext) : description("hygrometer"), id(9) {
    NOTIFY_ACTIVE_CONSTRUCTOR(Hygrometer, Hygrometer(), 0, Default_Hygrometer_Hygrometer_SERIALIZE);
    setActiveContext(this, true);
    itsController = NULL;
    initStatechart();
}

Hygrometer::~Hygrometer() {
    NOTIFY_DESTRUCTOR(~Hygrometer, false);
    cleanUpRelations();
}

void Hygrometer::funcAb() {
    NOTIFY_OPERATION(funcAb, funcAb(), 0, Default_Hygrometer_funcAb_SERIALIZE);
    //#[ operation funcAb()
    //#]
}

std::string Hygrometer::getDescription() {
    NOTIFY_OPERATION(getDescription, getDescription(), 0, Default_Hygrometer_getDescription_SERIALIZE);
    //#[ operation getDescription()
    return description;
    //#]
}

int Hygrometer::getId() {
    NOTIFY_OPERATION(getId, getId(), 0, Default_Hygrometer_getId_SERIALIZE);
    //#[ operation getId()
    return id;
    //#]
}

void Hygrometer::odczytajDane() {
    NOTIFY_OPERATION(odczytajDane, odczytajDane(), 0, Default_Hygrometer_odczytajDane_SERIALIZE);
    //#[ operation odczytajDane()
    recentValue=1.4;
    //#]
}

Controller* Hygrometer::getItsController() const {
    return itsController;
}

void Hygrometer::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

bool Hygrometer::startBehavior() {
    bool done = false;
    done = Sensor::startBehavior();
    return done;
}

void Hygrometer::setDescription(std::string p_description) {
    description = p_description;
}

void Hygrometer::setId(int p_id) {
    id = p_id;
}

void Hygrometer::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Hygrometer::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

void Hygrometer::__setItsController(Controller* p_Controller) {
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

void Hygrometer::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void Hygrometer::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

void Hygrometer::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.OczekiwanieSensor");
        rootState_subState = OczekiwanieSensor;
        rootState_active = OczekiwanieSensor;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Hygrometer::rootState_processEvent() {
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
void OMAnimatedHygrometer::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("description", UNKNOWN2STRING(myReal->description));
    aomsAttributes->addAttribute("id", x2String(myReal->id));
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedHygrometer::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
    OMAnimatedSensor::serializeRelations(aomsRelations);
}

void OMAnimatedHygrometer::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Hygrometer::OczekiwanieSensor:
        {
            OczekiwanieSensor_serializeStates(aomsState);
        }
        break;
        case Hygrometer::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedHygrometer::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_7");
}

void OMAnimatedHygrometer::OczekiwanieSensor_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.OczekiwanieSensor");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(Hygrometer, Default, false, Sensor, OMAnimatedSensor, OMAnimatedHygrometer)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Hygrometer.cpp
*********************************************************************/
