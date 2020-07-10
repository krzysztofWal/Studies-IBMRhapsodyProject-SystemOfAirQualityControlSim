/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SO2Sensor
//!	Generated Date	: Tue, 7, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\SO2Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SO2Sensor.h"
//## auto_generated
#include "Station.h"
//#[ ignore
#define Default_SO2Sensor_SO2Sensor_SERIALIZE OM_NO_OP

#define Default_SO2Sensor_odczytajDane_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class SO2Sensor
SO2Sensor::SO2Sensor() {
    NOTIFY_ACTIVE_NOT_REACTIVE_CONSTRUCTOR(SO2Sensor, SO2Sensor(), 0, Default_SO2Sensor_SO2Sensor_SERIALIZE);
    itsStation_1 = NULL;
}

SO2Sensor::~SO2Sensor() {
    NOTIFY_DESTRUCTOR(~SO2Sensor, false);
    cleanUpRelations();
}

void SO2Sensor::odczytajDane() {
    NOTIFY_OPERATION(odczytajDane, odczytajDane(), 0, Default_SO2Sensor_odczytajDane_SERIALIZE);
    //#[ operation odczytajDane()
    //#]
}

Station* SO2Sensor::getItsStation_1() const {
    return itsStation_1;
}

void SO2Sensor::setItsStation_1(Station* p_Station) {
    _setItsStation_1(p_Station);
}

void SO2Sensor::cleanUpRelations() {
    if(itsStation_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStation_1");
            itsStation_1 = NULL;
        }
}

void SO2Sensor::__setItsStation_1(Station* p_Station) {
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

void SO2Sensor::_setItsStation_1(Station* p_Station) {
    __setItsStation_1(p_Station);
}

void SO2Sensor::_clearItsStation_1() {
    NOTIFY_RELATION_CLEARED("itsStation_1");
    itsStation_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSO2Sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedSO2Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsStation_1", false, true);
    if(myReal->itsStation_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsStation_1);
        }
    OMAnimatedSensor::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(SO2Sensor, Default, false, Sensor, OMAnimatedSensor, OMAnimatedSO2Sensor)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SO2Sensor.cpp
*********************************************************************/
