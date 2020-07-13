/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Controller
//!	Generated Date	: Mon, 13, Jul 2020  
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

#define Default_Controller_calibrate_SERIALIZE OM_NO_OP

#define Default_Controller_calibrateRequest_SERIALIZE OM_NO_OP

#define Default_Controller_confirmAlert_SERIALIZE OM_NO_OP

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

#define Default_Controller_resetAlert_SERIALIZE OM_NO_OP

#define Default_Controller_sprawdzPoziomy_SERIALIZE OM_NO_OP

#define Default_object_0_object_0_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Controller
#ifdef _OMINSTRUMENT
//#[ ignore
static AOMClass* _ControllerSuper[6] = {
OMAnimatediPrint::staticGetClass(),
OMAnimatediInitialize::staticGetClass(),
OMAnimatediConfirmDataReceival::staticGetClass(),
OMAnimatediGetAlertDetails::staticGetClass(),
OMAnimatediCalibrateRequest::staticGetClass(),
OMAnimatediConfirmAlertReceival::staticGetClass()};
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
    done &= itsTimer.startBehavior();
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
    itsTimer._setItsController(this);
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
    itsTimer.destroy();
    OMReactive::destroy();
}

Controller::Controller(IOxfActive* theActiveContext) : stationId(1)
 , stationStatus(standBy), whetherTimerRead(false) {
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
        {
            itsTimer.setShouldDelete(false);
        }
    }
    initRelations();
    initStatechart();
    //#[ operation Controller()
    //std::cout << "Constructed controller object" << this << std::endl;
    //std::cout << "Station status: " << stationStatus << std::endl;
    //std::cout << alert[1] << std::endl;
    //std::cout << alert[2] << std::endl;
    //std::cout << alert[3] << std::endl;
    //std::cout << alert[4] << std::endl;
    //outFile = new std::ofstream("log.txt", std::ios::app);
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
    itsICalibrateRequest = NULL;
    itsIConfirmAlertReceival = NULL;
    itsIConfirmDataReceival = NULL;
    itsIGetAlertDetails = NULL;
    itsIInitialize = NULL;
    itsIPrint = NULL;
}

Controller::port_33_C::~port_33_C() {
    cleanUpRelations();
}

void Controller::port_33_C::calibrateRequest() {
    
    if (itsICalibrateRequest != NULL) {
        itsICalibrateRequest->calibrateRequest();
    }
    
}

void Controller::port_33_C::confirmAlert() {
    
    if (itsIConfirmAlertReceival != NULL) {
        itsIConfirmAlertReceival->confirmAlert();
    }
    
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
    setItsICalibrateRequest(part);
    setItsIConfirmAlertReceival(part);
    
}

std::vector<std::pair<unsigned long long, int>> Controller::port_33_C::getAlertDetails() {
    std::vector<std::pair<unsigned long long, int>> res;
    if (itsIGetAlertDetails != NULL) {
        res = itsIGetAlertDetails->getAlertDetails();
    }
    return res;
}

iCalibrateRequest* Controller::port_33_C::getItsICalibrateRequest() {
    return this;
}

iConfirmAlertReceival* Controller::port_33_C::getItsIConfirmAlertReceival() {
    return this;
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

void Controller::port_33_C::setItsICalibrateRequest(iCalibrateRequest* p_iCalibrateRequest) {
    itsICalibrateRequest = p_iCalibrateRequest;
}

void Controller::port_33_C::setItsIConfirmAlertReceival(iConfirmAlertReceival* p_iConfirmAlertReceival) {
    itsIConfirmAlertReceival = p_iConfirmAlertReceival;
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
    if(itsICalibrateRequest != NULL)
        {
            itsICalibrateRequest = NULL;
        }
    if(itsIConfirmAlertReceival != NULL)
        {
            itsIConfirmAlertReceival = NULL;
        }
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
    case pm1:
    	dataPackage->set(5,value);
    	break;
    case pm2_5:
    	dataPackage->set(6,value);
    	break;
    case pm10:
    	dataPackage->set(7,value);
    	break;
    case thermo:
    	dataPackage->set(8,value);
    	break;
    case hygro:
    	dataPackage->set(9,value);
    	break;
    case baro:
    	dataPackage->set(10,value);
    	break;
    default:
    	std::cout << "Reached default in appendToPackage()" << std::endl;
    }
    //#]
}

void Controller::calibrate() {
    NOTIFY_OPERATION(calibrate, calibrate(), 0, Default_Controller_calibrate_SERIALIZE);
    //#[ operation calibrate()
    //#]
}

void Controller::calibrateRequest() {
    NOTIFY_OPERATION(calibrateRequest, calibrateRequest(), 0, Default_Controller_calibrateRequest_SERIALIZE);
    //#[ operation calibrateRequest()
    GEN(callibrateCauseRequested);
    //#]
}

void Controller::confirmAlert() {
    NOTIFY_OPERATION(confirmAlert, confirmAlert(), 0, Default_Controller_confirmAlert_SERIALIZE);
    //#[ operation confirmAlert()
    GEN(confirmAlertReceival);
    //#]
}

void Controller::confirmReceival() {
    NOTIFY_OPERATION(confirmReceival, confirmReceival(), 0, Default_Controller_confirmReceival_SERIALIZE);
    //#[ operation confirmReceival()
    GEN(ConfirmRecival);
    //std::cout << "rec to contr - i have the data, can delete"<< std::endl;
    //#]
}

void Controller::createPackage(unsigned long long time) {
    NOTIFY_OPERATION(createPackage, createPackage(unsigned long long), 1, Default_Controller_createPackage_SERIALIZE);
    //#[ operation createPackage(unsigned long long)
    dataPackage = new StationData(time);
    //#]
}

void Controller::deletePackage() {
    NOTIFY_OPERATION(deletePackage, deletePackage(), 0, Default_Controller_deletePackage_SERIALIZE);
    //#[ operation deletePackage()
    delete dataPackage;
    //std::cout << "data package deleted" << std::endl;
    //#]
}

std::vector<std::pair<unsigned long long, int>> Controller::getAlertDetails() {
    NOTIFY_OPERATION(getAlertDetails, getAlertDetails(), 0, Default_Controller_getAlertDetails_SERIALIZE);
    //#[ operation getAlertDetails()
    std::vector<std::pair<unsigned long long, int>> temp;
    for (iterator++; iterator <= static_cast<int>(alert.size()); iterator++) {
    	if (alert[iterator]== true) 
    		temp.emplace_back(std::make_pair(dataPackage->getTime(),iterator));
    		//std::cout << "getAlertDetails(): " << dataPackage->getTime() << std::endl;
    }
    iterator = 0;
    return temp;
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
    //std::cout << "from rec to contr - initialize" << std::endl;
    //#]
}

bool Controller::isAnyAlert() {
    NOTIFY_OPERATION(isAnyAlert, isAnyAlert(), 0, Default_Controller_isAnyAlert_SERIALIZE);
    //#[ operation isAnyAlert()
    bool temp = false;
    for (iterator++; iterator <=static_cast<int>(alert.size()); iterator++) {
    	if (alert[iterator] == true)
    		temp = true; 
    }          
    iterator = 0;
    //std::cout << "Czy ktorys element jest ponad poziom?" << temp << std::endl;
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
    std::cout << "========data package time: "<<dataPackage->getTime() << "========" << std::endl
    		<< "O3: " << dataPackage->get(1) << std::endl
    		<< "CO: " << dataPackage->get(2) << std::endl
    		<< "SO2: " << dataPackage->get(3) << std::endl
    		<< "NO2: " << dataPackage->get(4) << std::endl
    		<< "PM1: " << dataPackage->get(5) << std::endl
    		<< "PM2.5: " << dataPackage->get(6) << std::endl
    		<< "PM10: " << dataPackage->get(7) << std::endl
    		<< "thermometer " << dataPackage->get(8) << std::endl
    		<< "hygrometer: " << dataPackage->get(9) << std::endl
    		<< "barometer: " << dataPackage->get(10) << std::endl
    		<< "==========================================" << std::endl;
    		
    //		<< "O3: " << dataPackage->getO3() << std::endl;
    		//<< "O3: " << dataPackage->getO3() << std::endl;
    //#]
}

void Controller::resetAlert() {
    NOTIFY_OPERATION(resetAlert, resetAlert(), 0, Default_Controller_resetAlert_SERIALIZE);
    //#[ operation resetAlert()
    for (iterator++; iterator <= static_cast<int>(alert.size()); iterator++) {
    	alert[iterator] = false;
    }
    iterator = 0;
    //#]
}

void Controller::setWhenDue(int which, double limit) {
    NOTIFY_OPERATION(setWhenDue, setWhenDue(int,double), 2, Default_Controller_setWhenDue_SERIALIZE);
    //#[ operation setWhenDue(int,double)
    if(dataPackage->get(which)> limit)
    alert[which] = true;
    //std::cout << "setWhenDue: " << alert[which] << std::endl;
    //#]
}

void Controller::sprawdzPoziomy() {
    NOTIFY_OPERATION(sprawdzPoziomy, sprawdzPoziomy(), 0, Default_Controller_sprawdzPoziomy_SERIALIZE);
    //#[ operation sprawdzPoziomy()
    setWhenDue(1,0.1); // limit o3
    setWhenDue(2,0.2);  // limit co
    setWhenDue(3,0.3);  // limit so2
    setWhenDue(4,0.5);  //limit no2
    setWhenDue(5,1);
    setWhenDue(6,1);
    setWhenDue(7,1);
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

int Controller::getStopMeasurementFlag() const {
    return stopMeasurementFlag;
}

void Controller::setStopMeasurementFlag(int p_stopMeasurementFlag) {
    stopMeasurementFlag = p_stopMeasurementFlag;
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

Timer* Controller::getItsTimer() const {
    return (Timer*) &itsTimer;
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

unsigned long long Controller::getTime() const {
    return time;
}

void Controller::setTime(unsigned long long p_time) {
    time = p_time;
}

bool Controller::getWhetherTimerRead() const {
    return whetherTimerRead;
}

void Controller::setWhetherTimerRead(bool p_whetherTimerRead) {
    whetherTimerRead = p_whetherTimerRead;
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

void Controller::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsTimer.setActiveContext(theActiveContext, false);
    }
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
            res = StationStandBy_handleEvent();
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
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_37");
                    rootState_subState = sendaction_37;
                    rootState_active = sendaction_37;
                    //#[ state sendaction_37.(Entry) 
                    itsPM1_Sensor.GEN(czytajCzujniki);
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_37");
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
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_37");
                            rootState_subState = sendaction_37;
                            rootState_active = sendaction_37;
                            //#[ state sendaction_37.(Entry) 
                            itsPM1_Sensor.GEN(czytajCzujniki);
                            //#]
                            rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_37");
                            NOTIFY_TRANSITION_TERMINATED("8");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State wysylanieAlertu
        case wysylanieAlertu:
        {
            if(IS_EVENT_TYPE_OF(confirmAlertReceival_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("17");
                    NOTIFY_STATE_EXITED("ROOT.wysylanieAlertu");
                    NOTIFY_STATE_ENTERED("ROOT.deletePackageState");
                    pushNullTransition();
                    rootState_subState = deletePackageState;
                    rootState_active = deletePackageState;
                    //#[ state deletePackageState.(Entry) 
                    deletePackage();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("17");
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
        // State checkLimits
        case checkLimits:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 15 
                    if(isAnyAlert())
                        {
                            NOTIFY_TRANSITION_STARTED("14");
                            NOTIFY_TRANSITION_STARTED("15");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.checkLimits");
                            NOTIFY_STATE_ENTERED("ROOT.wysylanieAlertu");
                            rootState_subState = wysylanieAlertu;
                            rootState_active = wysylanieAlertu;
                            //#[ state wysylanieAlertu.(Entry) 
                            OUT_PORT(port_35)->sendAlert();
                            
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("15");
                            NOTIFY_TRANSITION_TERMINATED("14");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("14");
                            NOTIFY_TRANSITION_STARTED("16");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.checkLimits");
                            NOTIFY_STATE_ENTERED("ROOT.deletePackageState");
                            pushNullTransition();
                            rootState_subState = deletePackageState;
                            rootState_active = deletePackageState;
                            //#[ state deletePackageState.(Entry) 
                            deletePackage();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("16");
                            NOTIFY_TRANSITION_TERMINATED("14");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State signalJoin_Timer_Server_Request
        case signalJoin_Timer_Server_Request:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 19 
                    if(whetherTimerRead)
                        {
                            NOTIFY_TRANSITION_STARTED("18");
                            NOTIFY_TRANSITION_STARTED("19");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.signalJoin_Timer_Server_Request");
                            NOTIFY_STATE_ENTERED("ROOT.checkLimits");
                            pushNullTransition();
                            rootState_subState = checkLimits;
                            rootState_active = checkLimits;
                            //#[ state checkLimits.(Entry) 
                            sprawdzPoziomy();
                            whetherTimerRead = false;
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("19");
                            NOTIFY_TRANSITION_TERMINATED("18");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("18");
                            NOTIFY_TRANSITION_STARTED("20");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.signalJoin_Timer_Server_Request");
                            NOTIFY_STATE_ENTERED("ROOT.packageReadyInformation");
                            rootState_subState = packageReadyInformation;
                            rootState_active = packageReadyInformation;
                            //#[ state packageReadyInformation.(Entry) 
                            OUT_PORT(port_35)->inform();
                            
                            //#]
                            rootState_timeout = scheduleTimeout(150, "ROOT.packageReadyInformation");
                            NOTIFY_TRANSITION_TERMINATED("20");
                            NOTIFY_TRANSITION_TERMINATED("18");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State callibration
        case callibration:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("37");
                            //#[ transition 37 
                            GEN(callibrated);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("37");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(callibrated_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("23");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.callibration");
                    NOTIFY_STATE_ENTERED("ROOT.StationStandBy");
                    rootState_subState = StationStandBy;
                    rootState_active = StationStandBy;
                    //#[ state StationStandBy.(Entry) 
                    obsluzTrybOszczedzaniaEnergii();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("23");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_37
        case sendaction_37:
        {
            if(IS_EVENT_TYPE_OF(wyslijDane_Default_id))
                {
                    OMSETPARAMS(wyslijDane);
                    NOTIFY_TRANSITION_STARTED("30");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.sendaction_37");
                    //#[ transition 30 
                    appendToPackage(pm1,params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_38");
                    rootState_subState = sendaction_38;
                    rootState_active = sendaction_38;
                    //#[ state sendaction_38.(Entry) 
                    itsPM2_5Sensor.GEN(czytajCzujniki);
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_38");
                    NOTIFY_TRANSITION_TERMINATED("30");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("24");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sendaction_37");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_38");
                            rootState_subState = sendaction_38;
                            rootState_active = sendaction_38;
                            //#[ state sendaction_38.(Entry) 
                            itsPM2_5Sensor.GEN(czytajCzujniki);
                            //#]
                            rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_38");
                            NOTIFY_TRANSITION_TERMINATED("24");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_38
        case sendaction_38:
        {
            if(IS_EVENT_TYPE_OF(wyslijDane_Default_id))
                {
                    OMSETPARAMS(wyslijDane);
                    NOTIFY_TRANSITION_STARTED("31");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.sendaction_38");
                    //#[ transition 31 
                    appendToPackage(pm2_5,params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_39");
                    rootState_subState = sendaction_39;
                    rootState_active = sendaction_39;
                    //#[ state sendaction_39.(Entry) 
                    itsPM10_Sensor.GEN(czytajCzujniki);
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_39");
                    NOTIFY_TRANSITION_TERMINATED("31");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("25");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sendaction_38");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_39");
                            rootState_subState = sendaction_39;
                            rootState_active = sendaction_39;
                            //#[ state sendaction_39.(Entry) 
                            itsPM10_Sensor.GEN(czytajCzujniki);
                            //#]
                            rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_39");
                            NOTIFY_TRANSITION_TERMINATED("25");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_39
        case sendaction_39:
        {
            if(IS_EVENT_TYPE_OF(wyslijDane_Default_id))
                {
                    OMSETPARAMS(wyslijDane);
                    NOTIFY_TRANSITION_STARTED("32");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.sendaction_39");
                    //#[ transition 32 
                    appendToPackage(pm10,params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_40");
                    rootState_subState = sendaction_40;
                    rootState_active = sendaction_40;
                    //#[ state sendaction_40.(Entry) 
                    itsThermometer.GEN(czytajCzujniki);
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_40");
                    NOTIFY_TRANSITION_TERMINATED("32");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("26");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sendaction_39");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_40");
                            rootState_subState = sendaction_40;
                            rootState_active = sendaction_40;
                            //#[ state sendaction_40.(Entry) 
                            itsThermometer.GEN(czytajCzujniki);
                            //#]
                            rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_40");
                            NOTIFY_TRANSITION_TERMINATED("26");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_40
        case sendaction_40:
        {
            if(IS_EVENT_TYPE_OF(wyslijDane_Default_id))
                {
                    OMSETPARAMS(wyslijDane);
                    NOTIFY_TRANSITION_STARTED("33");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.sendaction_40");
                    //#[ transition 33 
                    appendToPackage(thermo,params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_41");
                    rootState_subState = sendaction_41;
                    rootState_active = sendaction_41;
                    //#[ state sendaction_41.(Entry) 
                    itsHygrometer.GEN(czytajCzujniki);
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_41");
                    NOTIFY_TRANSITION_TERMINATED("33");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("27");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sendaction_40");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_41");
                            rootState_subState = sendaction_41;
                            rootState_active = sendaction_41;
                            //#[ state sendaction_41.(Entry) 
                            itsHygrometer.GEN(czytajCzujniki);
                            //#]
                            rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_41");
                            NOTIFY_TRANSITION_TERMINATED("27");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_41
        case sendaction_41:
        {
            if(IS_EVENT_TYPE_OF(wyslijDane_Default_id))
                {
                    OMSETPARAMS(wyslijDane);
                    NOTIFY_TRANSITION_STARTED("34");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.sendaction_41");
                    //#[ transition 34 
                    appendToPackage(hygro,params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_42");
                    rootState_subState = sendaction_42;
                    rootState_active = sendaction_42;
                    //#[ state sendaction_42.(Entry) 
                    itsBarometer.GEN(czytajCzujniki);
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_42");
                    NOTIFY_TRANSITION_TERMINATED("34");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("28");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sendaction_41");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_42");
                            rootState_subState = sendaction_42;
                            rootState_active = sendaction_42;
                            //#[ state sendaction_42.(Entry) 
                            itsBarometer.GEN(czytajCzujniki);
                            //#]
                            rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_42");
                            NOTIFY_TRANSITION_TERMINATED("28");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_42
        case sendaction_42:
        {
            if(IS_EVENT_TYPE_OF(wyslijDane_Default_id))
                {
                    OMSETPARAMS(wyslijDane);
                    NOTIFY_TRANSITION_STARTED("35");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.sendaction_42");
                    //#[ transition 35 
                    appendToPackage(baro,params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.signalJoin_Timer_Server_Request");
                    pushNullTransition();
                    rootState_subState = signalJoin_Timer_Server_Request;
                    rootState_active = signalJoin_Timer_Server_Request;
                    NOTIFY_TRANSITION_TERMINATED("35");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("29");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sendaction_42");
                            NOTIFY_STATE_ENTERED("ROOT.signalJoin_Timer_Server_Request");
                            pushNullTransition();
                            rootState_subState = signalJoin_Timer_Server_Request;
                            rootState_active = signalJoin_Timer_Server_Request;
                            NOTIFY_TRANSITION_TERMINATED("29");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_44
        case sendaction_44:
        {
            if(IS_EVENT_TYPE_OF(provideTime_Default_id))
                {
                    OMSETPARAMS(provideTime);
                    NOTIFY_TRANSITION_STARTED("36");
                    NOTIFY_STATE_EXITED("ROOT.sendaction_44");
                    //#[ transition 36 
                    createPackage(params->time);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_10");
                    rootState_subState = sendaction_10;
                    rootState_active = sendaction_10;
                    //#[ state sendaction_10.(Entry) 
                    itsCO_Sensor.GEN(czytajCzujniki);
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_10");
                    NOTIFY_TRANSITION_TERMINATED("36");
                    res = eventConsumed;
                }
            
        }
        break;
        // State stationSleep
        case stationSleep:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("40");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.stationSleep");
                    NOTIFY_STATE_ENTERED("ROOT.StationStandBy");
                    rootState_subState = StationStandBy;
                    rootState_active = StationStandBy;
                    //#[ state StationStandBy.(Entry) 
                    obsluzTrybOszczedzaniaEnergii();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("40");
                    res = eventConsumed;
                }
            
        }
        break;
        // State stationActivation
        case stationActivation:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("43");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.stationActivation");
                    NOTIFY_STATE_ENTERED("ROOT.StationStandBy");
                    rootState_subState = StationStandBy;
                    rootState_active = StationStandBy;
                    //#[ state StationStandBy.(Entry) 
                    obsluzTrybOszczedzaniaEnergii();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("43");
                    res = eventConsumed;
                }
            
        }
        break;
        // State readLog
        case readLog:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("45");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.readLog");
                    NOTIFY_STATE_ENTERED("ROOT.StationStandBy");
                    rootState_subState = StationStandBy;
                    rootState_active = StationStandBy;
                    //#[ state StationStandBy.(Entry) 
                    obsluzTrybOszczedzaniaEnergii();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("45");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus Controller::StationStandBy_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(envCzytajLog_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("44");
            NOTIFY_STATE_EXITED("ROOT.StationStandBy");
            NOTIFY_STATE_ENTERED("ROOT.readLog");
            pushNullTransition();
            rootState_subState = readLog;
            rootState_active = readLog;
            //#[ state readLog.(Entry) 
            //readInfo();
            //#]
            NOTIFY_TRANSITION_TERMINATED("44");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(serwAktywuj_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("42");
            NOTIFY_STATE_EXITED("ROOT.StationStandBy");
            NOTIFY_STATE_ENTERED("ROOT.stationActivation");
            pushNullTransition();
            rootState_subState = stationActivation;
            rootState_active = stationActivation;
            //#[ state stationActivation.(Entry) 
            if (stopMeasurementFlag)
            	stopMeasurementFlag = false;
            //std::cout << stopMeasurementFlag << " in activation" << std::endl;
            //#]
            NOTIFY_TRANSITION_TERMINATED("42");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(callibrateCauseRequested_Default_id))
        {
            //## transition 21 
            if(!stopMeasurementFlag)
                {
                    NOTIFY_TRANSITION_STARTED("21");
                    NOTIFY_STATE_EXITED("ROOT.StationStandBy");
                    //#[ transition 21 
                    obsluzTrybOszczedzaniaEnergii();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.callibration");
                    rootState_subState = callibration;
                    rootState_active = callibration;
                    //#[ state callibration.(Entry) 
                    calibrate();
                    //#]
                    rootState_timeout = scheduleTimeout(1000, "ROOT.callibration");
                    NOTIFY_TRANSITION_TERMINATED("21");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(Initialize_Default_id))
        {
            //## transition 0 
            if(!stopMeasurementFlag)
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.StationStandBy");
                    //#[ transition 0 
                    obsluzTrybOszczedzaniaEnergii();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_44");
                    rootState_subState = sendaction_44;
                    rootState_active = sendaction_44;
                    //#[ state sendaction_44.(Entry) 
                    itsTimer.GEN(requestTime);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(serwCzytajLog_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("46");
            NOTIFY_STATE_EXITED("ROOT.StationStandBy");
            NOTIFY_STATE_ENTERED("ROOT.readLog");
            pushNullTransition();
            rootState_subState = readLog;
            rootState_active = readLog;
            //#[ state readLog.(Entry) 
            //readInfo();
            //#]
            NOTIFY_TRANSITION_TERMINATED("46");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(timerCzytajSensory_Default_id))
        {
            OMSETPARAMS(timerCzytajSensory);
            //## transition 11 
            if(!stopMeasurementFlag)
                {
                    NOTIFY_TRANSITION_STARTED("11");
                    NOTIFY_STATE_EXITED("ROOT.StationStandBy");
                    //#[ transition 11 
                    obsluzTrybOszczedzaniaEnergii();whetherTimerRead=true;createPackage(params->time);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_10");
                    rootState_subState = sendaction_10;
                    rootState_active = sendaction_10;
                    //#[ state sendaction_10.(Entry) 
                    itsCO_Sensor.GEN(czytajCzujniki);
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_10");
                    NOTIFY_TRANSITION_TERMINATED("11");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(envUspijStacje_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("38");
            NOTIFY_STATE_EXITED("ROOT.StationStandBy");
            NOTIFY_STATE_ENTERED("ROOT.stationSleep");
            pushNullTransition();
            rootState_subState = stationSleep;
            rootState_active = stationSleep;
            //#[ state stationSleep.(Entry) 
            if (!stopMeasurementFlag)
            	stopMeasurementFlag = true;
            //std::cout << stopMeasurementFlag << " in sleep" << std::endl;
            //#]
            NOTIFY_TRANSITION_TERMINATED("38");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(envAktywuj_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("41");
            NOTIFY_STATE_EXITED("ROOT.StationStandBy");
            NOTIFY_STATE_ENTERED("ROOT.stationActivation");
            pushNullTransition();
            rootState_subState = stationActivation;
            rootState_active = stationActivation;
            //#[ state stationActivation.(Entry) 
            if (stopMeasurementFlag)
            	stopMeasurementFlag = false;
            //std::cout << stopMeasurementFlag << " in activation" << std::endl;
            //#]
            NOTIFY_TRANSITION_TERMINATED("41");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(envSkalibruj_Default_id))
        {
            //## transition 22 
            if(!stopMeasurementFlag)
                {
                    NOTIFY_TRANSITION_STARTED("22");
                    NOTIFY_STATE_EXITED("ROOT.StationStandBy");
                    //#[ transition 22 
                    obsluzTrybOszczedzaniaEnergii();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.callibration");
                    rootState_subState = callibration;
                    rootState_active = callibration;
                    //#[ state callibration.(Entry) 
                    calibrate();
                    //#]
                    rootState_timeout = scheduleTimeout(1000, "ROOT.callibration");
                    NOTIFY_TRANSITION_TERMINATED("22");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(serwUspijStacje_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("39");
            NOTIFY_STATE_EXITED("ROOT.StationStandBy");
            NOTIFY_STATE_ENTERED("ROOT.stationSleep");
            pushNullTransition();
            rootState_subState = stationSleep;
            rootState_active = stationSleep;
            //#[ state stationSleep.(Entry) 
            if (!stopMeasurementFlag)
            	stopMeasurementFlag = true;
            //std::cout << stopMeasurementFlag << " in sleep" << std::endl;
            //#]
            NOTIFY_TRANSITION_TERMINATED("39");
            res = eventConsumed;
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
    aomsAttributes->addAttribute("stopMeasurementFlag", x2String(myReal->stopMeasurementFlag));
    OMAnimatediPrint::serializeAttributes(aomsAttributes);
    OMAnimatediInitialize::serializeAttributes(aomsAttributes);
    OMAnimatediConfirmDataReceival::serializeAttributes(aomsAttributes);
    OMAnimatediGetAlertDetails::serializeAttributes(aomsAttributes);
    OMAnimatediCalibrateRequest::serializeAttributes(aomsAttributes);
    OMAnimatediConfirmAlertReceival::serializeAttributes(aomsAttributes);
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
    aomsRelations->addRelation("itsTimer", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTimer);
    OMAnimatediPrint::serializeRelations(aomsRelations);
    OMAnimatediInitialize::serializeRelations(aomsRelations);
    OMAnimatediConfirmDataReceival::serializeRelations(aomsRelations);
    OMAnimatediGetAlertDetails::serializeRelations(aomsRelations);
    OMAnimatediCalibrateRequest::serializeRelations(aomsRelations);
    OMAnimatediConfirmAlertReceival::serializeRelations(aomsRelations);
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
        case Controller::checkLimits:
        {
            checkLimits_serializeStates(aomsState);
        }
        break;
        case Controller::signalJoin_Timer_Server_Request:
        {
            signalJoin_Timer_Server_Request_serializeStates(aomsState);
        }
        break;
        case Controller::callibration:
        {
            callibration_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_37:
        {
            sendaction_37_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_38:
        {
            sendaction_38_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_39:
        {
            sendaction_39_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_40:
        {
            sendaction_40_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_41:
        {
            sendaction_41_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_42:
        {
            sendaction_42_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_44:
        {
            sendaction_44_serializeStates(aomsState);
        }
        break;
        case Controller::stationSleep:
        {
            stationSleep_serializeStates(aomsState);
        }
        break;
        case Controller::stationActivation:
        {
            stationActivation_serializeStates(aomsState);
        }
        break;
        case Controller::readLog:
        {
            readLog_serializeStates(aomsState);
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

void OMAnimatedController::stationSleep_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.stationSleep");
}

void OMAnimatedController::stationActivation_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.stationActivation");
}

void OMAnimatedController::signalJoin_Timer_Server_Request_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.signalJoin_Timer_Server_Request");
}

void OMAnimatedController::sendaction_44_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_44");
}

void OMAnimatedController::sendaction_42_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_42");
}

void OMAnimatedController::sendaction_41_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_41");
}

void OMAnimatedController::sendaction_40_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_40");
}

void OMAnimatedController::sendaction_39_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_39");
}

void OMAnimatedController::sendaction_38_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_38");
}

void OMAnimatedController::sendaction_37_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_37");
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

void OMAnimatedController::readLog_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.readLog");
}

void OMAnimatedController::packageReadyInformation_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.packageReadyInformation");
}

void OMAnimatedController::deletePackageState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.deletePackageState");
}

void OMAnimatedController::checkLimits_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.checkLimits");
}

void OMAnimatedController::callibration_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.callibration");
}
//#]

IMPLEMENT_REACTIVE_META_M_P(Controller, Default, false, _ControllerSuper, 6, OMAnimatedController)

OMINIT_SUPERCLASS(iPrint, OMAnimatediPrint)

OMINIT_SUPERCLASS(iInitialize, OMAnimatediInitialize)

OMINIT_SUPERCLASS(iConfirmDataReceival, OMAnimatediConfirmDataReceival)

OMINIT_SUPERCLASS(iGetAlertDetails, OMAnimatediGetAlertDetails)

OMINIT_SUPERCLASS(iCalibrateRequest, OMAnimatediCalibrateRequest)

OMINIT_SUPERCLASS(iConfirmAlertReceival, OMAnimatediConfirmAlertReceival)

OMREGISTER_REACTIVE_CLASS

IMPLEMENT_META_OBJECT_P(Controller::object_0, Controller::object_0_C, Default, Default, false, OMAnimatedobject_0_C)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Controller.cpp
*********************************************************************/
