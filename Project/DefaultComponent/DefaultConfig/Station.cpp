/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Station
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Station.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Station.h"
//## attribute dataPackage
#include "StationData.h"
//## link itsReceiver
#include "Receiver.h"
//#[ ignore
#define Default_Station_appendToPackage_SERIALIZE \
    aomsmethod->addAttribute("whichSensor", x2String((int)whichSensor));\
    aomsmethod->addAttribute("value", x2String(value));
#define Default_Station_Station_SERIALIZE OM_NO_OP

#define Default_Station_callibrate_SERIALIZE OM_NO_OP

#define Default_Station_createPackage_SERIALIZE aomsmethod->addAttribute("time", x2String(time));

#define Default_Station_deletePackage_SERIALIZE OM_NO_OP

#define Default_Station_getDataPackage_SERIALIZE OM_NO_OP

#define Default_Station_goIntoStandByStatus_SERIALIZE OM_NO_OP

#define Default_Station_message_0_SERIALIZE OM_NO_OP

#define Default_Station_printPackage_SERIALIZE OM_NO_OP

#define Default_Station_sprawdzPoziomy_SERIALIZE OM_NO_OP

#define Default_Station_wejdzTrybOszczedzaniaEnergii_SERIALIZE OM_NO_OP

#define Default_Station_wlaczStacje_SERIALIZE OM_NO_OP

#define Default_Station_wylaczStacje_SERIALIZE OM_NO_OP

#define Default_object_0_object_0_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Station
Station::~Station() {
    NOTIFY_DESTRUCTOR(~Station, true);
    cleanUpRelations();
}

void Station::goIntoStandByStatus() {
    NOTIFY_OPERATION(goIntoStandByStatus, goIntoStandByStatus(), 0, Default_Station_goIntoStandByStatus_SERIALIZE);
    //#[ operation goIntoStandByStatus()
    if (stationStatus != standBy)
    	stationStatus = standBy;
    //#]
}

Barometer* Station::getItsBarometer() const {
    return (Barometer*) &itsBarometer;
}

Hygrometer* Station::getItsHygrometer() const {
    return (Hygrometer*) &itsHygrometer;
}

Thermometer* Station::getItsThermometer() const {
    return (Thermometer*) &itsThermometer;
}

bool Station::startBehavior() {
    bool done = true;
    done &= itsCO_Sensor.startBehavior();
    done &= itsNO2_Sensor.startBehavior();
    done &= itsO3_Sensor.startBehavior();
    done &= itsSO2_Sensor.startBehavior();
    done &= OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

int Station::getStationId() const {
    return stationId;
}

void Station::setStationId(int p_stationId) {
    stationId = p_stationId;
}

statusType Station::getStationStatus() const {
    return stationStatus;
}

void Station::setStationStatus(statusType p_stationStatus) {
    stationStatus = p_stationStatus;
}

void Station::initRelations() {
    itsBarometer._setItsStation_1(this);
    itsCO_Sensor._setItsStation_1(this);
    itsHygrometer._setItsStation_1(this);
    itsNO2_Sensor._setItsStation_1(this);
    itsO3_Sensor._setItsStation_1(this);
    itsPM10_Sensor._setItsStation_1(this);
    itsPM1_Sensor._setItsStation_1(this);
    itsPM2_5Sensor._setItsStation_1(this);
    itsSO2_Sensor._setItsStation_1(this);
    itsThermometer._setItsStation_1(this);
}

void Station::cleanUpRelations() {
    if(itsReceiver != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsReceiver");
            Station* p_Station = itsReceiver->getItsStation();
            if(p_Station != NULL)
                {
                    itsReceiver->__setItsStation(NULL);
                }
            itsReceiver = NULL;
        }
}

void Station::destroy() {
    itsCO_Sensor.destroy();
    itsNO2_Sensor.destroy();
    itsO3_Sensor.destroy();
    itsSO2_Sensor.destroy();
    OMReactive::destroy();
}

Station::Station(IOxfActive* theActiveContext) : stationId(1), stationStatus(off), time(1603) {
    NOTIFY_ACTIVE_CONSTRUCTOR(Station, Station(), 0, Default_Station_Station_SERIALIZE);
    setActiveContext(this, true);
    {
        {
            itsO3_Sensor.setShouldDelete(false);
        }
        {
            itsCO_Sensor.setShouldDelete(false);
        }
        {
            itsSO2_Sensor.setShouldDelete(false);
        }
        {
            itsNO2_Sensor.setShouldDelete(false);
        }
    }
    itsReceiver = NULL;
    initRelations();
    initStatechart();
    //#[ operation Station()
    std::cout << "Constructed station object with ID: " << stationId << std::endl;
    std::cout << "Station status: " << stationStatus << std::endl; 
    //#]
}

//## class Station::object_0
Station::object_0_C::object_0_C() {
    NOTIFY_CONSTRUCTOR_OBJECT(object_0, object_0(), 0, Default_object_0_object_0_SERIALIZE, object_0_C);
}

Station::object_0_C::~object_0_C() {
    NOTIFY_DESTRUCTOR(~object_0, true);
}

void Station::appendToPackage(const sensorType& whichSensor, double value) {
    NOTIFY_OPERATION(appendToPackage, appendToPackage(const sensorType&,double), 2, Default_Station_appendToPackage_SERIALIZE);
    //#[ operation appendToPackage(sensorType,double)
    switch(whichSensor){
    case o3:
    	dataPackage->setO3(value);
    break;
    default:
    std::cout << "Reached default in appendToPackage()" << std::endl;
    }
    //#]
}

void Station::callibrate() {
    NOTIFY_OPERATION(callibrate, callibrate(), 0, Default_Station_callibrate_SERIALIZE);
    //#[ operation callibrate()
    //#]
}

void Station::createPackage(long time) {
    NOTIFY_OPERATION(createPackage, createPackage(long), 1, Default_Station_createPackage_SERIALIZE);
    //#[ operation createPackage(long)
    dataPackage = new StationData(time);
    //#]
}

void Station::deletePackage() {
    NOTIFY_OPERATION(deletePackage, deletePackage(), 0, Default_Station_deletePackage_SERIALIZE);
    //#[ operation deletePackage()
    delete dataPackage;
    std::cout << "data package deleted" << std::endl;
    //#]
}

StationData* Station::getDataPackage() const {
    NOTIFY_OPERATION(getDataPackage, getDataPackage() const, 0, Default_Station_getDataPackage_SERIALIZE);
    //#[ operation getDataPackage() const
    return dataPackage;
    //#]
}

void Station::message_0() {
    NOTIFY_OPERATION(message_0, message_0(), 0, Default_Station_message_0_SERIALIZE);
    //#[ operation message_0()
    //#]
}

void Station::printPackage() {
    NOTIFY_OPERATION(printPackage, printPackage(), 0, Default_Station_printPackage_SERIALIZE);
    //#[ operation printPackage()
    std::cout << "========data package time: "<< time << "========" << std::endl
    		<< "O3: " << dataPackage->getO3() << std::endl;
    //#]
}

void Station::sprawdzPoziomy() {
    NOTIFY_OPERATION(sprawdzPoziomy, sprawdzPoziomy(), 0, Default_Station_sprawdzPoziomy_SERIALIZE);
    //#[ operation sprawdzPoziomy()
    //#]
}

void Station::wejdzTrybOszczedzaniaEnergii() {
    NOTIFY_OPERATION(wejdzTrybOszczedzaniaEnergii, wejdzTrybOszczedzaniaEnergii(), 0, Default_Station_wejdzTrybOszczedzaniaEnergii_SERIALIZE);
    //#[ operation wejdzTrybOszczedzaniaEnergii()
    if(stationStatus != standBy)
    	stationStatus = standBy;
    //#]
}

void Station::wlaczStacje() {
    NOTIFY_OPERATION(wlaczStacje, wlaczStacje(), 0, Default_Station_wlaczStacje_SERIALIZE);
    //#[ operation wlaczStacje()
    if(stationStatus != on)
    	stationStatus = off;
    //#]
}

void Station::wylaczStacje() {
    NOTIFY_OPERATION(wylaczStacje, wylaczStacje(), 0, Default_Station_wylaczStacje_SERIALIZE);
    //#[ operation wylaczStacje()
    if (stationStatus != off) 
    	stationStatus = off;
    //#]
}

CO_Sensor* Station::getItsCO_Sensor() const {
    return (CO_Sensor*) &itsCO_Sensor;
}

NO2_Sensor* Station::getItsNO2_Sensor() const {
    return (NO2_Sensor*) &itsNO2_Sensor;
}

O3_Sensor* Station::getItsO3_Sensor() const {
    return (O3_Sensor*) &itsO3_Sensor;
}

PM10_Sensor* Station::getItsPM10_Sensor() const {
    return (PM10_Sensor*) &itsPM10_Sensor;
}

PM1_Sensor* Station::getItsPM1_Sensor() const {
    return (PM1_Sensor*) &itsPM1_Sensor;
}

PM2_5Sensor* Station::getItsPM2_5Sensor() const {
    return (PM2_5Sensor*) &itsPM2_5Sensor;
}

Receiver* Station::getItsReceiver() const {
    return itsReceiver;
}

void Station::setItsReceiver(Receiver* p_Receiver) {
    if(p_Receiver != NULL)
        {
            p_Receiver->_setItsStation(this);
        }
    _setItsReceiver(p_Receiver);
}

SO2_Sensor* Station::getItsSO2_Sensor() const {
    return (SO2_Sensor*) &itsSO2_Sensor;
}

Station::object_0_C* Station::getObject_0() const {
    return (Station::object_0_C*) &object_0;
}

bool Station::getAlert() const {
    return alert;
}

void Station::setAlert(bool p_alert) {
    alert = p_alert;
}

void Station::setDataPackage(StationData* p_dataPackage) {
    dataPackage = p_dataPackage;
}

long Station::getTime() const {
    return time;
}

void Station::setTime(long p_time) {
    time = p_time;
}

void Station::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Station::__setItsReceiver(Receiver* p_Receiver) {
    itsReceiver = p_Receiver;
    if(p_Receiver != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsReceiver", p_Receiver, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsReceiver");
        }
}

void Station::_setItsReceiver(Receiver* p_Receiver) {
    if(itsReceiver != NULL)
        {
            itsReceiver->__setItsStation(NULL);
        }
    __setItsReceiver(p_Receiver);
}

void Station::_clearItsReceiver() {
    NOTIFY_RELATION_CLEARED("itsReceiver");
    itsReceiver = NULL;
}

void Station::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.state_0");
        rootState_subState = state_0;
        rootState_active = state_0;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Station::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_0
    if(rootState_active == state_0)
        {
            if(IS_EVENT_TYPE_OF(wyslijDane_Default_id))
                {
                    OMSETPARAMS(wyslijDane);
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.state_0");
                    //#[ transition 1 
                    createPackage(time);
                    appendToPackage(o3, params->valueBeingSent);
                    printPackage();
                    time++;
                    deletePackage();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_0");
                    rootState_subState = state_0;
                    rootState_active = state_0;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedStation::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("stationId", x2String(myReal->stationId));
    aomsAttributes->addAttribute("dataPackage", X2ITEM(myReal->dataPackage));
    aomsAttributes->addAttribute("time", x2String(myReal->time));
    aomsAttributes->addAttribute("stationStatus", x2String((int)myReal->stationStatus));
    aomsAttributes->addAttribute("alert", x2String(myReal->alert));
}

void OMAnimatedStation::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsO3_Sensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsO3_Sensor);
    aomsRelations->addRelation("itsThermometer", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsThermometer);
    aomsRelations->addRelation("itsHygrometer", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsHygrometer);
    aomsRelations->addRelation("itsBarometer", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsBarometer);
    aomsRelations->addRelation("object_0", true, true);
    aomsRelations->ADD_ITEM(&myReal->object_0);
    aomsRelations->addRelation("itsReceiver", false, true);
    if(myReal->itsReceiver)
        {
            aomsRelations->ADD_ITEM(myReal->itsReceiver);
        }
    aomsRelations->addRelation("itsCO_Sensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCO_Sensor);
    aomsRelations->addRelation("itsSO2_Sensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSO2_Sensor);
    aomsRelations->addRelation("itsNO2_Sensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsNO2_Sensor);
    aomsRelations->addRelation("itsPM10_Sensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsPM10_Sensor);
    aomsRelations->addRelation("itsPM2_5Sensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsPM2_5Sensor);
    aomsRelations->addRelation("itsPM1_Sensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsPM1_Sensor);
}

void OMAnimatedStation::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == Station::state_0)
        {
            state_0_serializeStates(aomsState);
        }
}

void OMAnimatedStation::state_0_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0");
}
//#]

IMPLEMENT_REACTIVE_META_P(Station, Default, Default, false, OMAnimatedStation)

IMPLEMENT_META_OBJECT_P(Station::object_0, Station::object_0_C, Default, Default, false, OMAnimatedobject_0_C)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Station.cpp
*********************************************************************/
