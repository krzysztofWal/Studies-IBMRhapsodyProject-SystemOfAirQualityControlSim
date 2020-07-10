/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PM10Sensor
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\PM10Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "PM10Sensor.h"
//## auto_generated
#include "Controller.h"
//#[ ignore
#define Default_PM10Sensor_PM10Sensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class PM10Sensor
PM10Sensor::PM10Sensor() {
    NOTIFY_ACTIVE_NOT_REACTIVE_CONSTRUCTOR(PM10Sensor, PM10Sensor(), 0, Default_PM10Sensor_PM10Sensor_SERIALIZE);
}

PM10Sensor::~PM10Sensor() {
    NOTIFY_DESTRUCTOR(~PM10Sensor, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPM10Sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedPM10Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedSensor::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(PM10Sensor, Default, false, Sensor, OMAnimatedSensor, OMAnimatedPM10Sensor)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PM10Sensor.cpp
*********************************************************************/
