/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Hygrometer
//!	Generated Date	: Fri, 10, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Hygrometer.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Hygrometer.h"
//## auto_generated
#include "Controller.h"
//#[ ignore
#define Default_Hygrometer_Hygrometer_SERIALIZE OM_NO_OP

#define Default_Hygrometer_funcAb_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Hygrometer
Hygrometer::Hygrometer() {
    NOTIFY_ACTIVE_NOT_REACTIVE_CONSTRUCTOR(Hygrometer, Hygrometer(), 0, Default_Hygrometer_Hygrometer_SERIALIZE);
    itsController = NULL;
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

Controller* Hygrometer::getItsController() const {
    return itsController;
}

void Hygrometer::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
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

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedHygrometer::serializeAttributes(AOMSAttributes* aomsAttributes) const {
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
//#]

IMPLEMENT_META_S_P(Hygrometer, Default, false, Sensor, OMAnimatedSensor, OMAnimatedHygrometer)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Hygrometer.cpp
*********************************************************************/
