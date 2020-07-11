/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Controller
//!	Generated Date	: Sat, 11, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Controller.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Controller.h"
//#[ ignore
#define Default_Controller_appendToPackage_SERIALIZE \
    aomsmethod->addAttribute("whichSensor", x2String((int)whichSensor));\
    aomsmethod->addAttribute("value", x2String(value));
#define Default_Controller_setWhenDue_SERIALIZE \
    aomsmethod->addAttribute("which", x2String(which));\
    aomsmethod->addAttribute("limit", x2String(limit));
#define Default_Controller_Controller_SERIALIZE OM_NO_OP

#define Default_Controller_callibrate_SERIALIZE OM_NO_OP

#define Default_Controller_confirmReceival_SERIALIZE OM_NO_OP

#define Default_Controller_createPackage_SERIALIZE aomsmethod->addAttribute("time", x2String(time));

#define Default_Controller_deletePackage_SERIALIZE OM_NO_OP

#define Default_Controller_getAlertDetails_SERIALIZE OM_NO_OP

#define Default_Controller_getDataPackage_SERIALIZE OM_NO_OP

#define Default_Controller_initialize_SERIALIZE OM_NO_OP

#define Default_Controller_isAnyAlert_SERIALIZE OM_NO_OP

#define Default_Controller_obsluzTrybOszczedzaniaEnergii_SERIALIZE OM_NO_OP

#define Default_Controller_print_SERIALIZE OM_NO_OP

#define Default_Controller_printPackage_SERIALIZE OM_NO_OP

#define Default_Controller_sprawdzPoziomy_SERIALIZE OM_NO_OP

#define OMAnim_Default_Controller_setStationStatus_statusType_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,(int&)p_stationStatus)

#define OMAnim_Default_Controller_setStationStatus_statusType_SERIALIZE_RET_VAL

#define Default_object_0_object_0_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Controller
#ifdef _OMINSTRUMENT
//#[ ignore
static AOMClass* _ControllerSuper[4] = {
OMAnimatediPrint::staticGetClass(),
OMAnimatediInitialize::staticGetClass(),
OMAnimatediConfirmDataReceival::staticGetClass(),
OMAnimatediGetAlertDetails::staticGetClass()};
//#]
#endif // _OMINSTRUMENT

Barometer* Controller::getItsBarometer() const {
    return (Barometer*) &itsBarometer;
}

Hygrometer* Controller::getItsHygrometer() const {
    return (Hygrometer*) &itsHygrometer;
}

Thermometer* Controller::getItsThermometer() const {
    return (Thermometer*) &itsThermometer;
}

bool Controller::startBehavior() {
    bool done = true;
    done &= itsBarometer.startBehavior();
    done &= itsCO_Sensor.startBehavior();
    done &= itsHygrometer.startBehavior();
    done &= itsNO2_Sensor.startBehavior();
    done &= itsO3_Sensor.startBehavior();
    done &= itsPM10_Sensor.startBehavior();
    done &= itsPM1_Sensor.startBehavior();
    done &= itsPM2_5Sensor.startBehavior();
    done &= itsSO2_Sensor.startBehavior();
    done &= itsThermometer.startBehavior();
    done &= OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

int Controller::getStationId() const {
    return stationId;
}

void Controller::setStationId(int p_stationId) {
    stationId = p_stationId;
}

statusType Controller::getStationStatus() const {
    return stationStatus;
}

void Controller::setStationStatus(statusType p_stationStatus) {
    stationStatus = p_stationStatus;
    NOTIFY_SET_OPERATION;
}

void Controller::initRelations() {
    itsBarometer._setItsController(this);
    itsCO_Sensor._setItsController(this);
    itsHygrometer._setItsController(this);
    itsNO2_Sensor._setItsController(this);
    itsO3_Sensor._setItsController(this);
    itsPM10_Sensor._setItsController(this);
    itsPM1_Sensor._setItsController(this);
    itsPM2_5Sensor._setItsController(this);
    itsSO2_Sensor._setItsController(this);
    itsThermometer._setItsController(this);
    if (get_port_33() != NULL) {
        get_port_33()->connectController(this);
    }
}

void Controller::destroy() {
    itsBarometer.destroy();
    itsCO_Sensor.destroy();
    itsHygrometer.destroy();
    itsNO2_Sensor.destroy();
    itsO3_Sensor.destroy();
    itsPM10_Sensor.destroy();
    itsPM1_Sensor.destroy();
    itsPM2_5Sensor.destroy();
    itsSO2_Sensor.destroy();
    itsThermometer.destroy();
    OMReactive::destroy();
}

Controller::Controller(IOxfActive* theActiveContext) : stationId(1), stationStatus(standBy), time(1603), whetherTimerRead(false) {
    NOTIFY_ACTIVE_CONSTRUCTOR(Controller, Controller(), 0, Default_Controller_Controller_SERIALIZE);
    setActiveContext(this, true);
    {
        {
            itsO3_Sensor.setShouldDelete(false);
        }
        {
            itsThermometer.setShouldDelete(false);
        }
        {
            itsHygrometer.setShouldDelete(false);
        }
        {
            itsBarometer.setShouldDelete(false);
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
        {
            itsPM10_Sensor.setShouldDelete(false);
        }
        {
            itsPM2_5Sensor.setShouldDelete(false);
        }
        {
            itsPM1_Sensor.setShouldDelete(false);
        }
    }
    initRelations();
    initStatechart();
    //#[ operation Controller()
    alert[1] = false;
    alert[2]= false;
    alert[3] = false;
    alert[4] = false;
    
    std::cout << "Constructed controller object" << this << std::endl;
    //std::cout << "Station status: " << stationStatus << std::endl;
    
    //std::cout << alert[1] << std::endl;
    //std::cout << alert[2] << std::endl;
    //std::cout << alert[3] << std::endl;
    //std::cout << alert[4] << std::endl;
    
    
    //#]
}

//## class Controller::object_0
Controller::object_0_C::object_0_C() {
    NOTIFY_CONSTRUCTOR_OBJECT(object_0, object_0(), 0, Default_object_0_object_0_SERIALIZE, object_0_C);
}

Controller::object_0_C::~object_0_C() {
    NOTIFY_DESTRUCTOR(~object_0, true);
}

//#[ ignore
Controller::port_33_C::port_33_C() : _p_(0) {
    itsIConfirmDataReceival = NULL;
    itsIGetAlertDetails = NULL;
    itsIInitialize = NULL;
    itsIPrint = NULL;
}

Controller::port_33_C::~port_33_C() {
    cleanUpRelations();
}

void Controller::port_33_C::confirmReceival() {
    
    if (itsIConfirmDataReceival != NULL) {
        itsIConfirmDataReceival->confirmReceival();
    }
    
}

void Controller::port_33_C::connectController(Controller* part) {
    setItsIPrint(part);
    setItsIInitialize(part);
    setItsIConfirmDataReceival(part);
    setItsIGetAlertDetails(part);
    
}

void Controller::port_33_C::getAlertDetails() {
    
    if (itsIGetAlertDetails != NULL) {
        itsIGetAlertDetails->getAlertDetails();
    }
    
}

iConfirmDataReceival* Controller::port_33_C::getItsIConfirmDataReceival() {
    return this;
}

iGetAlertDetails* Controller::port_33_C::getItsIGetAlertDetails() {
    return this;
}

iInitialize* Controller::port_33_C::getItsIInitialize() {
    return this;
}

iPrint* Controller::port_33_C::getItsIPrint() {
    return this;
}

void Controller::port_33_C::initialize() {
    
    if (itsIInitialize != NULL) {
        itsIInitialize->initialize();
    }
    
}

StationData Controller::port_33_C::print() {
    StationData res;
    if (itsIPrint != NULL) {
        res = itsIPrint->print();
    }
    return res;
}

void Controller::port_33_C::setItsIConfirmDataReceival(iConfirmDataReceival* p_iConfirmDataReceival) {
    itsIConfirmDataReceival = p_iConfirmDataReceival;
}

void Controller::port_33_C::setItsIGetAlertDetails(iGetAlertDetails* p_iGetAlertDetails) {
    itsIGetAlertDetails = p_iGetAlertDetails;
}

void Controller::port_33_C::setItsIInitialize(iInitialize* p_iInitialize) {
    itsIInitialize = p_iInitialize;
}

void Controller::port_33_C::setItsIPrint(iPrint* p_iPrint) {
    itsIPrint = p_iPrint;
}

void Controller::port_33_C::cleanUpRelations() {
    if(itsIConfirmDataReceival != NULL)
        {
            itsIConfirmDataReceival = NULL;
        }
    if(itsIGetAlertDetails != NULL)
        {
            itsIGetAlertDetails = NULL;
        }
    if(itsIInitialize != NULL)
        {
            itsIInitialize = NULL;
        }
    if(itsIPrint != NULL)
        {
            itsIPrint = NULL;
        }
}

Controller::port_35_C::port_35_C() : _p_(0) {
    itsIInform = NULL;
    itsISendAlert = NULL;
}

Controller::port_35_C::~port_35_C() {
    cleanUpRelations();
}

iInform* Controller::port_35_C::getItsIInform() {
    return this;
}

iSendAlert* Controller::port_35_C::getItsISendAlert() {
    return this;
}

Controller::port_35_C* Controller::port_35_C::getOutBound() {
    return this;
}

void Controller::port_35_C::inform() {
    
    if (itsIInform != NULL) {
        itsIInform->inform();
    }
    
}

void Controller::port_35_C::sendAlert() {
    
    if (itsISendAlert != NULL) {
        itsISendAlert->sendAlert();
    }
    
}

void Controller::port_35_C::setItsIInform(iInform* p_iInform) {
    itsIInform = p_iInform;
}

void Controller::port_35_C::setItsISendAlert(iSendAlert* p_iSendAlert) {
    itsISendAlert = p_iSendAlert;
}

void Controller::port_35_C::cleanUpRelations() {
    if(itsIInform != NULL)
        {
            itsIInform = NULL;
        }
    if(itsISendAlert != NULL)
        {
            itsISendAlert = NULL;
        }
}
//#]

Controller::~Controller() {
    NOTIFY_DESTRUCTOR(~Controller, false);
    cancelTimeouts();
}

void Controller::appendToPackage(const sensorType& whichSensor, double value) {
    NOTIFY_OPERATION(appendToPackage, appendToPackage(const sensorType&,double), 2, Default_Controller_appendToPackage_SERIALIZE);
    //#[ operation appendToPackage(sensorType,double)
    switch(whichSensor){
    case o3:
    	dataPackage->set(1,value);
    	break;
    case co:
    	dataPackage->set(2,value);
    	break;
    case no2:
    	dataPackage->set(4,value);
    	break;
    case so2:
    	dataPackage->set(3,value);
    	break;
    default:
    	std::cout << "Reached default in appendToPackage()" << std::endl;
    }
    //#]
}

void Controller::callibrate() {
    NOTIFY_OPERATION(callibrate, callibrate(), 0, Default_Controller_callibrate_SERIALIZE);
    //#[ operation callibrate()
    //#]
}

void Controller::confirmReceival() {
    NOTIFY_OPERATION(confirmReceival, confirmReceival(), 0, Default_Controller_confirmReceival_SERIALIZE);
    //#[ operation confirmReceival()
    GEN(ConfirmRecival);
    std::cout << "rec to contr - i have the data, can delete"<< std::endl;
    //#]
}

void Controller::createPackage(long time) {
    NOTIFY_OPERATION(createPackage, createPackage(long), 1, Default_Controller_createPackage_SERIALIZE);
    //#[ operation createPackage(long)
    dataPackage = new StationData(time);
    //#]
}

void Controller::deletePackage() {
    NOTIFY_OPERATION(deletePackage, deletePackage(), 0, Default_Controller_deletePackage_SERIALIZE);
    //#[ operation deletePackage()
    delete dataPackage;
    std::cout << "data package deleted" << std::endl;
    //#]
}

void Controller::getAlertDetails() {
    NOTIFY_OPERATION(getAlertDetails, getAlertDetails(), 0, Default_Controller_getAlertDetails_SERIALIZE);
    //#[ operation getAlertDetails()
    //#]
}

StationData* Controller::getDataPackage() const {
    NOTIFY_OPERATION(getDataPackage, getDataPackage() const, 0, Default_Controller_getDataPackage_SERIALIZE);
    //#[ operation getDataPackage() const
    return dataPackage;
    //#]
}

void Controller::initialize() {
    NOTIFY_OPERATION(initialize, initialize(), 0, Default_Controller_initialize_SERIALIZE);
    //#[ operation initialize()
    GEN(Initialize);
    //initializationFlag = true;
    std::cout << "from rec to contr - initialize" << std::endl;
    //#]
}

bool Controller::isAnyAlert() {
    NOTIFY_OPERATION(isAnyAlert, isAnyAlert(), 0, Default_Controller_isAnyAlert_SERIALIZE);
    //#[ operation isAnyAlert()
    bool temp = false;
    for (iterator++; iterator <=4; iterator++) {
    	if (alert[iterator] == true)
    	temp = true; 
    }          
    iterator = 0;
    std::cout << "Czy ktorys element jest ponad poziom?" << temp << std::endl;
    return temp;
    //#]
}

void Controller::obsluzTrybOszczedzaniaEnergii() {
    NOTIFY_OPERATION(obsluzTrybOszczedzaniaEnergii, obsluzTrybOszczedzaniaEnergii(), 0, Default_Controller_obsluzTrybOszczedzaniaEnergii_SERIALIZE);
    //#[ operation obsluzTrybOszczedzaniaEnergii()
    if(stationStatus != standBy)
    	stationStatus = standBy;
    if(stationStatus = standBy)
    	stationStatus = on;
    //#]
}

StationData Controller::print() {
    NOTIFY_OPERATION(print, print(), 0, Default_Controller_print_SERIALIZE);
    //#[ operation print()
    
    printPackage();
    //return StationData(	dataPackage->get(1),
    //					dataPackage->get(2),
    //					dataPackage->get(3),
    //					dataPackage->get(4),
    //					stationId,
    //					dataPackage->getTime());  
    return (*dataPackage);
    //#]
}

void Controller::printPackage() {
    NOTIFY_OPERATION(printPackage, printPackage(), 0, Default_Controller_printPackage_SERIALIZE);
    //#[ operation printPackage()
    std::cout << "========data package time: "<< time << "========" << std::endl
    		<< "O3: " << dataPackage->get(1) << std::endl
    		<< "CO: " << dataPackage->get(2) << std::endl
    		<< "SO2: " << dataPackage->get(3) << std::endl
    		<< "NO2: " << dataPackage->get(4) << std::endl
    		<< "==========================================" << std::endl;
    		
    //		<< "O3: " << dataPackage->getO3() << std::endl;
    		//<< "O3: " << dataPackage->getO3() << std::endl;
    //#]
}

void Controller::setWhenDue(int which, double limit) {
    NOTIFY_OPERATION(setWhenDue, setWhenDue(int,double), 2, Default_Controller_setWhenDue_SERIALIZE);
    //#[ operation setWhenDue(int,double)
    if(dataPackage->get(which)> limit)
    alert[which] = true;
    std::cout << "setWhenDue: " << alert[which] << std::endl;
    //#]
}

void Controller::sprawdzPoziomy() {
    NOTIFY_OPERATION(sprawdzPoziomy, sprawdzPoziomy(), 0, Default_Controller_sprawdzPoziomy_SERIALIZE);
    //#[ operation sprawdzPoziomy()
    setWhenDue(1,0.1); // limit o3
    setWhenDue(2,0.2);  // limit co
    setWhenDue(3,0.3);  // limit so2
    setWhenDue(4,0.5);  //limit no2
    //#]
}

Controller::port_33_C* Controller::getPort_33() const {
    return (Controller::port_33_C*) &port_33;
}

Controller::port_33_C* Controller::get_port_33() const {
    return (Controller::port_33_C*) &port_33;
}

Controller::port_35_C* Controller::getPort_35() const {
    return (Controller::port_35_C*) &port_35;
}

Controller::port_35_C* Controller::get_port_35() const {
    return (Controller::port_35_C*) &port_35;
}

bool Controller::getWhetherTimerRead() const {
    return whetherTimerRead;
}

void Controller::setWhetherTimerRead(bool p_whetherTimerRead) {
    whetherTimerRead = p_whetherTimerRead;
}

CO_Sensor* Controller::getItsCO_Sensor() const {
    return (CO_Sensor*) &itsCO_Sensor;
}

NO2_Sensor* Controller::getItsNO2_Sensor() const {
    return (NO2_Sensor*) &itsNO2_Sensor;
}

O3_Sensor* Controller::getItsO3_Sensor() const {
    return (O3_Sensor*) &itsO3_Sensor;
}

PM10_Sensor* Controller::getItsPM10_Sensor() const {
    return (PM10_Sensor*) &itsPM10_Sensor;
}

PM1_Sensor* Controller::getItsPM1_Sensor() const {
    return (PM1_Sensor*) &itsPM1_Sensor;
}

PM2_5Sensor* Controller::getItsPM2_5Sensor() const {
    return (PM2_5Sensor*) &itsPM2_5Sensor;
}

SO2_Sensor* Controller::getItsSO2_Sensor() const {
    return (SO2_Sensor*) &itsSO2_Sensor;
}

Controller::object_0_C* Controller::getObject_0() const {
    return (Controller::object_0_C*) &object_0;
}

std::map<int, bool> Controller::getAlert() const {
    return alert;
}

void Controller::setAlert(std::map<int, bool> p_alert) {
    alert = p_alert;
}

void Controller::setDataPackage(StationData* p_dataPackage) {
    dataPackage = p_dataPackage;
}

long Controller::getTime() const {
    return time;
}

void Controller::setTime(long p_time) {
    time = p_time;
}

void Controller::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Controller::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Controller::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

int Controller::getIterator() const {
    return iterator;
}

void Controller::setIterator(int p_iterator) {
    iterator = p_iterator;
}

void Controller::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("10");
        NOTIFY_STATE_ENTERED("ROOT.StationStandBy");
        rootState_subState = StationStandBy;
        rootState_active = StationStandBy;
        //#[ state StationStandBy.(Entry) 
        obsluzTrybOszczedzaniaEnergii();
        //#]
        NOTIFY_TRANSITION_TERMINATED("10");
    }
}

IOxfReactive::TakeEventStatus Controller::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State StationStandBy
        case StationStandBy:
        {
            if(IS_EVENT_TYPE_OF(Initialize_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.StationStandBy");
                    //#[ transition 0 
                    obsluzTrybOszczedzaniaEnergii();createPackage(this->time);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_10");
                    rootState_subState = sendaction_10;
                    rootState_active = sendaction_10;
                    //#[ state sendaction_10.(Entry) 
                    itsCO_Sensor.GEN(czytajCzujniki);
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_10");
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(timerCzytajSensory_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("11");
                    NOTIFY_STATE_EXITED("ROOT.StationStandBy");
                    //#[ transition 11 
                    obsluzTrybOszczedzaniaEnergii();createPackage(this->time);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_27");
                    rootState_subState = sendaction_27;
                    rootState_active = sendaction_27;
                    //#[ state sendaction_27.(Entry) 
                    itsCO_Sensor.GEN(czytajCzujniki);
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_27");
                    NOTIFY_TRANSITION_TERMINATED("11");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_10
        case sendaction_10:
        {
            if(IS_EVENT_TYPE_OF(wyslijDane_Default_id))
                {
                    OMSETPARAMS(wyslijDane);
                    NOTIFY_TRANSITION_STARTED("1");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.sendaction_10");
                    //#[ transition 1 
                    appendToPackage(co, params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_12");
                    rootState_subState = sendaction_12;
                    rootState_active = sendaction_12;
                    //#[ state sendaction_12.(Entry) 
                    itsNO2_Sensor.GEN(czytajCzujniki);
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_12");
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sendaction_10");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_12");
                            rootState_subState = sendaction_12;
                            rootState_active = sendaction_12;
                            //#[ state sendaction_12.(Entry) 
                            itsNO2_Sensor.GEN(czytajCzujniki);
                            //#]
                            rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_12");
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_12
        case sendaction_12:
        {
            if(IS_EVENT_TYPE_OF(wyslijDane_Default_id))
                {
                    OMSETPARAMS(wyslijDane);
                    NOTIFY_TRANSITION_STARTED("2");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.sendaction_12");
                    //#[ transition 2 
                    appendToPackage(no2, params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_13");
                    rootState_subState = sendaction_13;
                    rootState_active = sendaction_13;
                    //#[ state sendaction_13.(Entry) 
                    itsSO2_Sensor.GEN(czytajCzujniki);
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_13");
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("6");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sendaction_12");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_13");
                            rootState_subState = sendaction_13;
                            rootState_active = sendaction_13;
                            //#[ state sendaction_13.(Entry) 
                            itsSO2_Sensor.GEN(czytajCzujniki);
                            //#]
                            rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_13");
                            NOTIFY_TRANSITION_TERMINATED("6");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_13
        case sendaction_13:
        {
            if(IS_EVENT_TYPE_OF(wyslijDane_Default_id))
                {
                    OMSETPARAMS(wyslijDane);
                    NOTIFY_TRANSITION_STARTED("3");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.sendaction_13");
                    //#[ transition 3 
                    appendToPackage(co, params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_14");
                    rootState_subState = sendaction_14;
                    rootState_active = sendaction_14;
                    //#[ state sendaction_14.(Entry) 
                    itsO3_Sensor.GEN(czytajCzujniki);
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_14");
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("7");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sendaction_13");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_14");
                            rootState_subState = sendaction_14;
                            rootState_active = sendaction_14;
                            //#[ state sendaction_14.(Entry) 
                            itsO3_Sensor.GEN(czytajCzujniki);
                            //#]
                            rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_14");
                            NOTIFY_TRANSITION_TERMINATED("7");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_14
        case sendaction_14:
        {
            if(IS_EVENT_TYPE_OF(wyslijDane_Default_id))
                {
                    OMSETPARAMS(wyslijDane);
                    NOTIFY_TRANSITION_STARTED("4");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.sendaction_14");
                    //#[ transition 4 
                    appendToPackage(o3, params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.packageReadyInformation");
                    rootState_subState = packageReadyInformation;
                    rootState_active = packageReadyInformation;
                    //#[ state packageReadyInformation.(Entry) 
                    OUT_PORT(port_35)->inform();
                    
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.packageReadyInformation");
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("8");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sendaction_14");
                            NOTIFY_STATE_ENTERED("ROOT.packageReadyInformation");
                            rootState_subState = packageReadyInformation;
                            rootState_active = packageReadyInformation;
                            //#[ state packageReadyInformation.(Entry) 
                            OUT_PORT(port_35)->inform();
                            
                            //#]
                            rootState_timeout = scheduleTimeout(150, "ROOT.packageReadyInformation");
                            NOTIFY_TRANSITION_TERMINATED("8");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State wysylanieAlertu
        case wysylanieAlertu:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("25");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.wysylanieAlertu");
                    NOTIFY_STATE_ENTERED("ROOT.deletePackageState");
                    pushNullTransition();
                    rootState_subState = deletePackageState;
                    rootState_active = deletePackageState;
                    //#[ state deletePackageState.(Entry) 
                    deletePackage();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("25");
                    res = eventConsumed;
                }
            
        }
        break;
        // State packageReadyInformation
        case packageReadyInformation:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("12");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.packageReadyInformation");
                            NOTIFY_STATE_ENTERED("ROOT.deletePackageState");
                            pushNullTransition();
                            rootState_subState = deletePackageState;
                            rootState_active = deletePackageState;
                            //#[ state deletePackageState.(Entry) 
                            deletePackage();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("12");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(ConfirmRecival_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.packageReadyInformation");
                    NOTIFY_STATE_ENTERED("ROOT.deletePackageState");
                    pushNullTransition();
                    rootState_subState = deletePackageState;
                    rootState_active = deletePackageState;
                    //#[ state deletePackageState.(Entry) 
                    deletePackage();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
        }
        break;
        // State deletePackageState
        case deletePackageState:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("13");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.deletePackageState");
                    NOTIFY_STATE_ENTERED("ROOT.StationStandBy");
                    rootState_subState = StationStandBy;
                    rootState_active = StationStandBy;
                    //#[ state StationStandBy.(Entry) 
                    obsluzTrybOszczedzaniaEnergii();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("13");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_29
        case sendaction_29:
        {
            if(IS_EVENT_TYPE_OF(wyslijDane_Default_id))
                {
                    OMSETPARAMS(wyslijDane);
                    NOTIFY_TRANSITION_STARTED("18");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.sendaction_29");
                    //#[ transition 18 
                    appendToPackage(co, params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_30");
                    rootState_subState = sendaction_30;
                    rootState_active = sendaction_30;
                    //#[ state sendaction_30.(Entry) 
                    itsO3_Sensor.GEN(czytajCzujniki);
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_30");
                    NOTIFY_TRANSITION_TERMINATED("18");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("19");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sendaction_29");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_30");
                            rootState_subState = sendaction_30;
                            rootState_active = sendaction_30;
                            //#[ state sendaction_30.(Entry) 
                            itsO3_Sensor.GEN(czytajCzujniki);
                            //#]
                            rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_30");
                            NOTIFY_TRANSITION_TERMINATED("19");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_30
        case sendaction_30:
        {
            if(IS_EVENT_TYPE_OF(wyslijDane_Default_id))
                {
                    OMSETPARAMS(wyslijDane);
                    NOTIFY_TRANSITION_STARTED("20");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.sendaction_30");
                    //#[ transition 20 
                    appendToPackage(o3, params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_32");
                    pushNullTransition();
                    rootState_subState = state_32;
                    rootState_active = state_32;
                    //#[ state state_32.(Entry) 
                    sprawdzPoziomy();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("20");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("21");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sendaction_30");
                            NOTIFY_STATE_ENTERED("ROOT.state_32");
                            pushNullTransition();
                            rootState_subState = state_32;
                            rootState_active = state_32;
                            //#[ state state_32.(Entry) 
                            sprawdzPoziomy();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("21");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_28
        case sendaction_28:
        {
            if(IS_EVENT_TYPE_OF(wyslijDane_Default_id))
                {
                    OMSETPARAMS(wyslijDane);
                    NOTIFY_TRANSITION_STARTED("16");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.sendaction_28");
                    //#[ transition 16 
                    appendToPackage(no2, params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_29");
                    rootState_subState = sendaction_29;
                    rootState_active = sendaction_29;
                    //#[ state sendaction_29.(Entry) 
                    itsSO2_Sensor.GEN(czytajCzujniki);
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_29");
                    NOTIFY_TRANSITION_TERMINATED("16");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("17");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sendaction_28");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_29");
                            rootState_subState = sendaction_29;
                            rootState_active = sendaction_29;
                            //#[ state sendaction_29.(Entry) 
                            itsSO2_Sensor.GEN(czytajCzujniki);
                            //#]
                            rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_29");
                            NOTIFY_TRANSITION_TERMINATED("17");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_27
        case sendaction_27:
        {
            if(IS_EVENT_TYPE_OF(wyslijDane_Default_id))
                {
                    OMSETPARAMS(wyslijDane);
                    NOTIFY_TRANSITION_STARTED("14");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.sendaction_27");
                    //#[ transition 14 
                    appendToPackage(co, params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_28");
                    rootState_subState = sendaction_28;
                    rootState_active = sendaction_28;
                    //#[ state sendaction_28.(Entry) 
                    itsNO2_Sensor.GEN(czytajCzujniki);
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_28");
                    NOTIFY_TRANSITION_TERMINATED("14");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("15");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sendaction_27");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_28");
                            rootState_subState = sendaction_28;
                            rootState_active = sendaction_28;
                            //#[ state sendaction_28.(Entry) 
                            itsNO2_Sensor.GEN(czytajCzujniki);
                            //#]
                            rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_28");
                            NOTIFY_TRANSITION_TERMINATED("15");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State state_32
        case state_32:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 23 
                    if(!isAnyAlert())
                        {
                            NOTIFY_TRANSITION_STARTED("22");
                            NOTIFY_TRANSITION_STARTED("23");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_32");
                            NOTIFY_STATE_ENTERED("ROOT.wysylanieAlertu");
                            pushNullTransition();
                            rootState_subState = wysylanieAlertu;
                            rootState_active = wysylanieAlertu;
                            //#[ state wysylanieAlertu.(Entry) 
                            OUT_PORT(port_35)->sendAlert();
                            
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("23");
                            NOTIFY_TRANSITION_TERMINATED("22");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("22");
                            NOTIFY_TRANSITION_STARTED("24");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_32");
                            NOTIFY_STATE_ENTERED("ROOT.deletePackageState");
                            pushNullTransition();
                            rootState_subState = deletePackageState;
                            rootState_active = deletePackageState;
                            //#[ state deletePackageState.(Entry) 
                            deletePackage();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("24");
                            NOTIFY_TRANSITION_TERMINATED("22");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedController::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("stationId", x2String(myReal->stationId));
    aomsAttributes->addAttribute("dataPackage", X2ITEM(myReal->dataPackage));
    aomsAttributes->addAttribute("time", x2String(myReal->time));
    aomsAttributes->addAttribute("stationStatus", x2String((int)myReal->stationStatus));
    aomsAttributes->addAttribute("alert", UNKNOWN2STRING(myReal->alert));
    aomsAttributes->addAttribute("iterator", x2String(myReal->iterator));
    aomsAttributes->addAttribute("whetherTimerRead", x2String(myReal->whetherTimerRead));
    OMAnimatediPrint::serializeAttributes(aomsAttributes);
    OMAnimatediInitialize::serializeAttributes(aomsAttributes);
    OMAnimatediConfirmDataReceival::serializeAttributes(aomsAttributes);
    OMAnimatediGetAlertDetails::serializeAttributes(aomsAttributes);
}

void OMAnimatedController::serializeRelations(AOMSRelations* aomsRelations) const {
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
    OMAnimatediPrint::serializeRelations(aomsRelations);
    OMAnimatediInitialize::serializeRelations(aomsRelations);
    OMAnimatediConfirmDataReceival::serializeRelations(aomsRelations);
    OMAnimatediGetAlertDetails::serializeRelations(aomsRelations);
}

void OMAnimatedController::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Controller::StationStandBy:
        {
            StationStandBy_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_10:
        {
            sendaction_10_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_12:
        {
            sendaction_12_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_13:
        {
            sendaction_13_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_14:
        {
            sendaction_14_serializeStates(aomsState);
        }
        break;
        case Controller::wysylanieAlertu:
        {
            wysylanieAlertu_serializeStates(aomsState);
        }
        break;
        case Controller::packageReadyInformation:
        {
            packageReadyInformation_serializeStates(aomsState);
        }
        break;
        case Controller::deletePackageState:
        {
            deletePackageState_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_29:
        {
            sendaction_29_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_30:
        {
            sendaction_30_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_28:
        {
            sendaction_28_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_27:
        {
            sendaction_27_serializeStates(aomsState);
        }
        break;
        case Controller::state_32:
        {
            state_32_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedController::wysylanieAlertu_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.wysylanieAlertu");
}

void OMAnimatedController::StationStandBy_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.StationStandBy");
}

void OMAnimatedController::state_32_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_32");
}

void OMAnimatedController::sendaction_30_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_30");
}

void OMAnimatedController::sendaction_29_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_29");
}

void OMAnimatedController::sendaction_28_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_28");
}

void OMAnimatedController::sendaction_27_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_27");
}

void OMAnimatedController::sendaction_14_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_14");
}

void OMAnimatedController::sendaction_13_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_13");
}

void OMAnimatedController::sendaction_12_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_12");
}

void OMAnimatedController::sendaction_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_10");
}

void OMAnimatedController::packageReadyInformation_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.packageReadyInformation");
}

void OMAnimatedController::deletePackageState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.deletePackageState");
}
//#]

IMPLEMENT_REACTIVE_META_M_P(Controller, Default, false, _ControllerSuper, 4, OMAnimatedController)

OMINIT_SUPERCLASS(iPrint, OMAnimatediPrint)

OMINIT_SUPERCLASS(iInitialize, OMAnimatediInitialize)

OMINIT_SUPERCLASS(iConfirmDataReceival, OMAnimatediConfirmDataReceival)

OMINIT_SUPERCLASS(iGetAlertDetails, OMAnimatediGetAlertDetails)

OMREGISTER_REACTIVE_CLASS

IMPLEMENT_META_OP(OMAnimatedController, Default_Controller_setStationStatus_statusType, "setStationStatus", FALSE, "setStationStatus(statusType)", 1)

IMPLEMENT_OP_CALL(Default_Controller_setStationStatus_statusType, Controller, setStationStatus(p_stationStatus), NO_OP())

IMPLEMENT_META_OBJECT_P(Controller::object_0, Controller::object_0_C, Default, Default, false, OMAnimatedobject_0_C)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Controller.cpp
*********************************************************************/
