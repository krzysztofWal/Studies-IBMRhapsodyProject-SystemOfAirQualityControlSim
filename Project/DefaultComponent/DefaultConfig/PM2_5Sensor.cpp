/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PM2_5Sensor
//!	Generated Date	: Fri, 10, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\PM2_5Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "PM2_5Sensor.h"
//## auto_generated
#include "Controller.h"
//#[ ignore
#define Default_PM2_5Sensor_PM2_5Sensor_SERIALIZE OM_NO_OP

#define Default_PM2_5Sensor_funcAb_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class PM2_5Sensor
PM2_5Sensor::PM2_5Sensor() {
    NOTIFY_ACTIVE_NOT_REACTIVE_CONSTRUCTOR(PM2_5Sensor, PM2_5Sensor(), 0, Default_PM2_5Sensor_PM2_5Sensor_SERIALIZE);
    itsController = NULL;
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

Controller* PM2_5Sensor::getItsController() const {
    return itsController;
}

void PM2_5Sensor::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
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
//#]

IMPLEMENT_META_S_P(PM2_5Sensor, Default, false, Sensor, OMAnimatedSensor, OMAnimatedPM2_5Sensor)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PM2_5Sensor.cpp
*********************************************************************/
