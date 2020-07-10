/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Thermometer
//!	Generated Date	: Fri, 10, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Thermometer.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Thermometer.h"
//## auto_generated
#include "Controller.h"
//#[ ignore
#define Default_Thermometer_Thermometer_SERIALIZE OM_NO_OP

#define Default_Thermometer_funcAb_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Thermometer
Thermometer::Thermometer() {
    NOTIFY_ACTIVE_NOT_REACTIVE_CONSTRUCTOR(Thermometer, Thermometer(), 0, Default_Thermometer_Thermometer_SERIALIZE);
    itsController = NULL;
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

Controller* Thermometer::getItsController() const {
    return itsController;
}

void Thermometer::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
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

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedThermometer::serializeAttributes(AOMSAttributes* aomsAttributes) const {
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
//#]

IMPLEMENT_META_S_P(Thermometer, Default, false, Sensor, OMAnimatedSensor, OMAnimatedThermometer)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Thermometer.cpp
*********************************************************************/
