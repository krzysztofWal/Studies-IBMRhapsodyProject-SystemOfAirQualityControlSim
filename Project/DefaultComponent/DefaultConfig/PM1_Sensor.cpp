/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PM1_Sensor
//!	Generated Date	: Fri, 10, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\PM1_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "PM1_Sensor.h"
//## auto_generated
#include "Controller.h"
//#[ ignore
#define Default_PM1_Sensor_PM1_Sensor_SERIALIZE OM_NO_OP

#define Default_PM1_Sensor_funcAb_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class PM1_Sensor
PM1_Sensor::PM1_Sensor() {
    NOTIFY_ACTIVE_NOT_REACTIVE_CONSTRUCTOR(PM1_Sensor, PM1_Sensor(), 0, Default_PM1_Sensor_PM1_Sensor_SERIALIZE);
    itsController = NULL;
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

Controller* PM1_Sensor::getItsController() const {
    return itsController;
}

void PM1_Sensor::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
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
//#]

IMPLEMENT_META_S_P(PM1_Sensor, Default, false, Sensor, OMAnimatedSensor, OMAnimatedPM1_Sensor)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PM1_Sensor.cpp
*********************************************************************/
