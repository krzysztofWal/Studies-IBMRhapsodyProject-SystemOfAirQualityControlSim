/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sensor
//!	Generated Date	: Fri, 10, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Sensor.h"
//## link itsController
#include "Controller.h"
//#[ ignore
#define Default_Sensor_Sensor_SERIALIZE OM_NO_OP

#define Default_Sensor_funcAb_SERIALIZE OM_NO_OP

#define Default_Sensor_odczytajDane_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Sensor
Sensor::Sensor() : recentValue(0.0) {
    NOTIFY_ACTIVE_NOT_REACTIVE_CONSTRUCTOR(Sensor, Sensor(), 0, Default_Sensor_Sensor_SERIALIZE);
    itsController = NULL;
}

Sensor::~Sensor() {
    NOTIFY_DESTRUCTOR(~Sensor, true);
    cleanUpRelations();
}

double Sensor::odczytajDane() {
    NOTIFY_OPERATION(odczytajDane, odczytajDane(), 0, Default_Sensor_odczytajDane_SERIALIZE);
    //#[ operation odczytajDane()
    
     return 0.5;
    //#]
}

Controller* Sensor::getItsController() const {
    return itsController;
}

void Sensor::setItsController(Controller* p_Controller) {
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

std::string Sensor::getDescription() const {
    return description;
}

void Sensor::setDescription(std::string p_description) {
    description = p_description;
}

int Sensor::getId() const {
    return id;
}

void Sensor::setId(int p_id) {
    id = p_id;
}

double Sensor::getRecentValue() const {
    return recentValue;
}

void Sensor::setRecentValue(double p_recentValue) {
    recentValue = p_recentValue;
}

bool Sensor::getStatus() const {
    return status;
}

void Sensor::setStatus(bool p_status) {
    status = p_status;
}

void Sensor::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("id", x2String(myReal->id));
    aomsAttributes->addAttribute("description", UNKNOWN2STRING(myReal->description));
    aomsAttributes->addAttribute("status", x2String(myReal->status));
    aomsAttributes->addAttribute("recentValue", x2String(myReal->recentValue));
}

void OMAnimatedSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
}
//#]

IMPLEMENT_META_P(Sensor, Default, Default, false, OMAnimatedSensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Sensor.cpp
*********************************************************************/
