/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Thermometer
//!	Generated Date	: Tue, 14, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Thermometer.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Thermometer.h"
//## auto_generated
#include "Controller.h"
//#[ ignore
#define Default_Thermometer_Thermometer_SERIALIZE OM_NO_OP

#define Default_Thermometer_funcAb_SERIALIZE OM_NO_OP

#define Default_Thermometer_getDescription_SERIALIZE OM_NO_OP

#define Default_Thermometer_getId_SERIALIZE OM_NO_OP

#define Default_Thermometer_readSensorFunc_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Thermometer
Thermometer::Thermometer(IOxfActive* theActiveContext) : description("thermometer units: degrees C"), id(8) {
    NOTIFY_ACTIVE_CONSTRUCTOR(Thermometer, Thermometer(), 0, Default_Thermometer_Thermometer_SERIALIZE);
    setActiveContext(this, true);
    itsController = NULL;
    initStatechart();
}

Thermometer::~Thermometer() {
    NOTIFY_DESTRUCTOR(~Thermometer, false);
    cleanUpRelations();
}

void Thermometer::funcAb() {
    NOTIFY_OPERATION(funcAb, funcAb(), 0, Default_Thermometer_funcAb_SERIALIZE);
    //#[ operation funcAb()
    //#]
}

std::string Thermometer::getDescription() {
    NOTIFY_OPERATION(getDescription, getDescription(), 0, Default_Thermometer_getDescription_SERIALIZE);
    //#[ operation getDescription()
    return description;
    //#]
}

int Thermometer::getId() {
    NOTIFY_OPERATION(getId, getId(), 0, Default_Thermometer_getId_SERIALIZE);
    //#[ operation getId()
    return id;
    //#]
}

void Thermometer::readSensorFunc() {
    NOTIFY_OPERATION(readSensorFunc, readSensorFunc(), 0, Default_Thermometer_readSensorFunc_SERIALIZE);
    //#[ operation readSensorFunc()
    recentValue=Sensor::gen(3,30,itsController->giveGenTime());
    //#]
}

Controller* Thermometer::getItsController() const {
    return itsController;
}

void Thermometer::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

bool Thermometer::startBehavior() {
    bool done = false;
    done = Sensor::startBehavior();
    return done;
}

void Thermometer::setDescription(std::string p_description) {
    description = p_description;
}

void Thermometer::setId(int p_id) {
    id = p_id;
}

void Thermometer::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Thermometer::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

void Thermometer::__setItsController(Controller* p_Controller) {
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

void Thermometer::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void Thermometer::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

void Thermometer::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.OczekiwanieSensor");
        rootState_subState = OczekiwanieSensor;
        rootState_active = OczekiwanieSensor;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Thermometer::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State OczekiwanieSensor
        case OczekiwanieSensor:
        {
            if(IS_EVENT_TYPE_OF(readSensor_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.OczekiwanieSensor");
                    //#[ transition 1 
                    readSensorFunc();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_7");
                    pushNullTransition();
                    rootState_subState = sendaction_7;
                    rootState_active = sendaction_7;
                    //#[ state sendaction_7.(Entry) 
                    itsController->GEN(sendReadFromSensor(recentValue));
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
void OMAnimatedThermometer::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("id", x2String(myReal->id));
    aomsAttributes->addAttribute("description", UNKNOWN2STRING(myReal->description));
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedThermometer::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
    OMAnimatedSensor::serializeRelations(aomsRelations);
}

void OMAnimatedThermometer::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Thermometer::OczekiwanieSensor:
        {
            OczekiwanieSensor_serializeStates(aomsState);
        }
        break;
        case Thermometer::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedThermometer::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_7");
}

void OMAnimatedThermometer::OczekiwanieSensor_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.OczekiwanieSensor");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(Thermometer, Default, false, Sensor, OMAnimatedSensor, OMAnimatedThermometer)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Thermometer.cpp
*********************************************************************/
