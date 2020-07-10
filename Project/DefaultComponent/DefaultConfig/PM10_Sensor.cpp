/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PM10_Sensor
//!	Generated Date	: Fri, 10, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\PM10_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "PM10_Sensor.h"
//## auto_generated
#include "Controller.h"
//#[ ignore
#define Default_PM10_Sensor_PM10_Sensor_SERIALIZE OM_NO_OP

#define Default_PM10_Sensor_funcAb_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class PM10_Sensor
PM10_Sensor::PM10_Sensor() {
    NOTIFY_ACTIVE_NOT_REACTIVE_CONSTRUCTOR(PM10_Sensor, PM10_Sensor(), 0, Default_PM10_Sensor_PM10_Sensor_SERIALIZE);
    itsController = NULL;
    //#[ operation PM10_Sensor()
    std::cout << "Created PM10Sensor: " << this << std::endl ;
    //#]
}

PM10_Sensor::~PM10_Sensor() {
    NOTIFY_DESTRUCTOR(~PM10_Sensor, false);
    cleanUpRelations();
}

void PM10_Sensor::funcAb() {
    NOTIFY_OPERATION(funcAb, funcAb(), 0, Default_PM10_Sensor_funcAb_SERIALIZE);
    //#[ operation funcAb()
    //#]
}

Controller* PM10_Sensor::getItsController() const {
    return itsController;
}

void PM10_Sensor::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

void PM10_Sensor::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

void PM10_Sensor::__setItsController(Controller* p_Controller) {
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

void PM10_Sensor::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void PM10_Sensor::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPM10_Sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedPM10_Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
    OMAnimatedSensor::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(PM10_Sensor, Default, false, Sensor, OMAnimatedSensor, OMAnimatedPM10_Sensor)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PM10_Sensor.cpp
*********************************************************************/
