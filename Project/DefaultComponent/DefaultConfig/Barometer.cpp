/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Barometer
//!	Generated Date	: Fri, 10, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Barometer.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Barometer.h"
//## auto_generated
#include "Controller.h"
//#[ ignore
#define Default_Barometer_Barometer_SERIALIZE OM_NO_OP

#define Default_Barometer_funcAb_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Barometer
Barometer::Barometer() {
    NOTIFY_ACTIVE_NOT_REACTIVE_CONSTRUCTOR(Barometer, Barometer(), 0, Default_Barometer_Barometer_SERIALIZE);
    itsController = NULL;
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

Controller* Barometer::getItsController() const {
    return itsController;
}

void Barometer::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
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

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedBarometer::serializeAttributes(AOMSAttributes* aomsAttributes) const {
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
//#]

IMPLEMENT_META_S_P(Barometer, Default, false, Sensor, OMAnimatedSensor, OMAnimatedBarometer)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Barometer.cpp
*********************************************************************/
