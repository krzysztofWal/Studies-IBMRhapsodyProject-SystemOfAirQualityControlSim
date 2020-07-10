/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: NO2Sensor
//!	Generated Date	: Tue, 7, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\NO2Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "NO2Sensor.h"
//## auto_generated
#include "Station.h"
//#[ ignore
#define Default_NO2Sensor_NO2Sensor_SERIALIZE OM_NO_OP

#define Default_NO2Sensor_odczytajDane_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class NO2Sensor
NO2Sensor::NO2Sensor() {
    NOTIFY_ACTIVE_NOT_REACTIVE_CONSTRUCTOR(NO2Sensor, NO2Sensor(), 0, Default_NO2Sensor_NO2Sensor_SERIALIZE);
    itsStation_1 = NULL;
}

NO2Sensor::~NO2Sensor() {
    NOTIFY_DESTRUCTOR(~NO2Sensor, false);
    cleanUpRelations();
}

void NO2Sensor::odczytajDane() {
    NOTIFY_OPERATION(odczytajDane, odczytajDane(), 0, Default_NO2Sensor_odczytajDane_SERIALIZE);
    //#[ operation odczytajDane()
    //#]
}

Station* NO2Sensor::getItsStation_1() const {
    return itsStation_1;
}

void NO2Sensor::setItsStation_1(Station* p_Station) {
    _setItsStation_1(p_Station);
}

void NO2Sensor::cleanUpRelations() {
    if(itsStation_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStation_1");
            itsStation_1 = NULL;
        }
}

void NO2Sensor::__setItsStation_1(Station* p_Station) {
    itsStation_1 = p_Station;
    if(p_Station != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsStation_1", p_Station, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsStation_1");
        }
}

void NO2Sensor::_setItsStation_1(Station* p_Station) {
    __setItsStation_1(p_Station);
}

void NO2Sensor::_clearItsStation_1() {
    NOTIFY_RELATION_CLEARED("itsStation_1");
    itsStation_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedNO2Sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedNO2Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsStation_1", false, true);
    if(myReal->itsStation_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsStation_1);
        }
    OMAnimatedSensor::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(NO2Sensor, Default, false, Sensor, OMAnimatedSensor, OMAnimatedNO2Sensor)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\NO2Sensor.cpp
*********************************************************************/
