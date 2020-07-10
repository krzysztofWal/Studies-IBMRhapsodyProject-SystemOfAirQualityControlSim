/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: COSensor
//!	Generated Date	: Tue, 7, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\COSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "COSensor.h"
//## auto_generated
#include "Station.h"
//#[ ignore
#define Default_COSensor_COSensor_SERIALIZE OM_NO_OP

#define Default_COSensor_odczytajDane_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class COSensor
COSensor::COSensor() {
    NOTIFY_ACTIVE_NOT_REACTIVE_CONSTRUCTOR(COSensor, COSensor(), 0, Default_COSensor_COSensor_SERIALIZE);
    itsStation_1 = NULL;
}

COSensor::~COSensor() {
    NOTIFY_DESTRUCTOR(~COSensor, false);
    cleanUpRelations();
}

void COSensor::odczytajDane() {
    NOTIFY_OPERATION(odczytajDane, odczytajDane(), 0, Default_COSensor_odczytajDane_SERIALIZE);
    //#[ operation odczytajDane()
    //#]
}

Station* COSensor::getItsStation_1() const {
    return itsStation_1;
}

void COSensor::setItsStation_1(Station* p_Station) {
    _setItsStation_1(p_Station);
}

void COSensor::cleanUpRelations() {
    if(itsStation_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStation_1");
            itsStation_1 = NULL;
        }
}

void COSensor::__setItsStation_1(Station* p_Station) {
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

void COSensor::_setItsStation_1(Station* p_Station) {
    __setItsStation_1(p_Station);
}

void COSensor::_clearItsStation_1() {
    NOTIFY_RELATION_CLEARED("itsStation_1");
    itsStation_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCOSensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedCOSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsStation_1", false, true);
    if(myReal->itsStation_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsStation_1);
        }
    OMAnimatedSensor::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(COSensor, Default, false, Sensor, OMAnimatedSensor, OMAnimatedCOSensor)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\COSensor.cpp
*********************************************************************/
