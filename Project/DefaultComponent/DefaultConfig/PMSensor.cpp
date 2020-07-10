/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PMSensor
//!	Generated Date	: Wed, 8, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\PMSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "PMSensor.h"
//## auto_generated
#include "Station.h"
//#[ ignore
#define Default_PMSensor_PMSensor_SERIALIZE OM_NO_OP

#define Default_PMSensor_odczytajDane_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class PMSensor
PMSensor::PMSensor() {
    NOTIFY_ACTIVE_NOT_REACTIVE_CONSTRUCTOR(PMSensor, PMSensor(), 0, Default_PMSensor_PMSensor_SERIALIZE);
    itsStation_1 = NULL;
    //#[ operation PMSensor()
    std::cout << "Constructed PMSensor" << this << std::endl;
    //#]
}

PMSensor::~PMSensor() {
    NOTIFY_DESTRUCTOR(~PMSensor, false);
    cleanUpRelations();
}

void PMSensor::odczytajDane() {
    NOTIFY_OPERATION(odczytajDane, odczytajDane(), 0, Default_PMSensor_odczytajDane_SERIALIZE);
    //#[ operation odczytajDane()
    //#]
}

Station* PMSensor::getItsStation_1() const {
    return itsStation_1;
}

void PMSensor::setItsStation_1(Station* p_Station) {
    if(p_Station != NULL)
        {
            p_Station->_addItsPMSensor(this);
        }
    _setItsStation_1(p_Station);
}

void PMSensor::cleanUpRelations() {
    if(itsStation_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStation_1");
            Station* current = itsStation_1;
            if(current != NULL)
                {
                    current->_removeItsPMSensor(this);
                }
            itsStation_1 = NULL;
        }
}

void PMSensor::__setItsStation_1(Station* p_Station) {
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

void PMSensor::_setItsStation_1(Station* p_Station) {
    if(itsStation_1 != NULL)
        {
            itsStation_1->_removeItsPMSensor(this);
        }
    __setItsStation_1(p_Station);
}

void PMSensor::_clearItsStation_1() {
    NOTIFY_RELATION_CLEARED("itsStation_1");
    itsStation_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPMSensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedPMSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsStation_1", false, true);
    if(myReal->itsStation_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsStation_1);
        }
    OMAnimatedSensor::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(PMSensor, Default, false, Sensor, OMAnimatedSensor, OMAnimatedPMSensor)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PMSensor.cpp
*********************************************************************/
