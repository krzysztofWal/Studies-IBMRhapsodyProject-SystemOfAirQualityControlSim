/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Controller
//!	Generated Date	: Tue, 14, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Controller.h
*********************************************************************/

#ifndef Controller_H
#define Controller_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## link itsBarometer
#include "Barometer.h"
//## link itsHygrometer
#include "Hygrometer.h"
//## link itsThermometer
#include "Thermometer.h"
//## link itsCO_Sensor
#include "CO_Sensor.h"
//## class Controller
#include "iCalibrateRequest.h"
//## class Controller
#include "iConfirmAlertReceival.h"
//## class Controller
#include "iConfirmDataReceival.h"
//## class Controller
#include "iGetAlertDetails.h"
//## class Controller
#include "iInitialize.h"
//## class Controller
#include "iPrint.h"
//## link itsNO2_Sensor
#include "NO2_Sensor.h"
//## link itsO3_Sensor
#include "O3_Sensor.h"
//## link itsPM10_Sensor
#include "PM10_Sensor.h"
//## link itsPM1_Sensor
#include "PM1_Sensor.h"
//## link itsPM2_5Sensor
#include "PM2_5Sensor.h"
//## link itsSO2_Sensor
#include "SO2_Sensor.h"
//## dependency StationData
#include "StationData.h"
//## link itsTimer
#include "Timer.h"
//## auto_generated
#include <map>
//## auto_generated
#include <utility>
//## auto_generated
#include <vector>
//## auto_generated
#include <fstream>
//## auto_generated
#include <climits>
//## class port_35_C
#include "iInform.h"
//## class port_35_C
#include "iSendAlert.h"
//## class Controller
#include "iAktywujStacje.h"
//## class Controller
#include "iUspijStacje.h"
//## auto_generated
#include <string>
//## auto_generated
#include <cstdlib>
//## auto_generated
#include <ctime>
//## package Default

//## class Controller
class Controller : public OMThread, public OMReactive, public iPrint, public iInitialize, public iConfirmDataReceival, public iGetAlertDetails, public iCalibrateRequest, public iConfirmAlertReceival, public iAktywujStacje, public iUspijStacje {
public :

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedController;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    ////    Operations    ////
    
    ////    Additional operations    ////
    
    //## auto_generated
    Barometer* getItsBarometer() const;
    
    //## auto_generated
    Hygrometer* getItsHygrometer() const;
    
    //## auto_generated
    Thermometer* getItsThermometer() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    int getStationId() const;
    
    //## auto_generated
    void setStationId(int p_stationId);
    
    //## auto_generated
    statusType getStationStatus() const;
    
    //## auto_generated
    void setStationStatus(statusType p_stationStatus);
    
    //## auto_generated
    void initRelations();
    
    ////    Attributes    ////
    
    int stationId;		//## attribute stationId
    
    ////    Relations and components    ////
    
    Barometer itsBarometer;		//## link itsBarometer
    
    Hygrometer itsHygrometer;		//## link itsHygrometer
    
    O3_Sensor itsO3_Sensor;		//## link itsO3_Sensor
    
    Thermometer itsThermometer;		//## link itsThermometer
    
    ////    Framework operations    ////

public :

    //## auto_generated
    virtual void destroy();
    
    //## operation Controller()
    Controller(IOxfActive* theActiveContext = 0);
    
    //## class Controller::object_0
    class object_0_C {
        ////    Friends    ////
        
    public :
    
    #ifdef _OMINSTRUMENT
        friend class OMAnimatedobject_0_C;
    #endif // _OMINSTRUMENT
    
        ////    Constructors and destructors    ////
        
        //## auto_generated
        object_0_C();
        
        //## auto_generated
        ~object_0_C();
    };
    
//#[ ignore
    //## package Default
    class port_33_C : public iPrint, public iInitialize, public iConfirmDataReceival, public iGetAlertDetails, public iCalibrateRequest, public iConfirmAlertReceival, public iAktywujStacje, public iUspijStacje {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        port_33_C();
        
        //## auto_generated
        virtual ~port_33_C();
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void aktywujStacje();
        
        //## auto_generated
        virtual void calibrateRequest();
        
        //## auto_generated
        virtual void confirmAlert();
        
        //## auto_generated
        virtual void confirmReceival();
        
        //## auto_generated
        void connectController(Controller* part);
        
        //## auto_generated
        virtual std::vector<std::pair<unsigned long long, int>> getAlertDetails();
        
        //## auto_generated
        iAktywujStacje* getItsIAktywujStacje();
        
        //## auto_generated
        iCalibrateRequest* getItsICalibrateRequest();
        
        //## auto_generated
        iConfirmAlertReceival* getItsIConfirmAlertReceival();
        
        //## auto_generated
        iConfirmDataReceival* getItsIConfirmDataReceival();
        
        //## auto_generated
        iGetAlertDetails* getItsIGetAlertDetails();
        
        //## auto_generated
        iInitialize* getItsIInitialize();
        
        //## auto_generated
        iPrint* getItsIPrint();
        
        //## auto_generated
        iUspijStacje* getItsIUspijStacje();
        
        //## auto_generated
        virtual void initialize();
        
        //## auto_generated
        virtual StationData print();
        
        //## auto_generated
        virtual void uspijStacje();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIAktywujStacje(iAktywujStacje* p_iAktywujStacje);
        
        //## auto_generated
        void setItsICalibrateRequest(iCalibrateRequest* p_iCalibrateRequest);
        
        //## auto_generated
        void setItsIConfirmAlertReceival(iConfirmAlertReceival* p_iConfirmAlertReceival);
        
        //## auto_generated
        void setItsIConfirmDataReceival(iConfirmDataReceival* p_iConfirmDataReceival);
        
        //## auto_generated
        void setItsIGetAlertDetails(iGetAlertDetails* p_iGetAlertDetails);
        
        //## auto_generated
        void setItsIInitialize(iInitialize* p_iInitialize);
        
        //## auto_generated
        void setItsIPrint(iPrint* p_iPrint);
        
        //## auto_generated
        void setItsIUspijStacje(iUspijStacje* p_iUspijStacje);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        iAktywujStacje* itsIAktywujStacje;		//## link itsIAktywujStacje
        
        iCalibrateRequest* itsICalibrateRequest;		//## link itsICalibrateRequest
        
        iConfirmAlertReceival* itsIConfirmAlertReceival;		//## link itsIConfirmAlertReceival
        
        iConfirmDataReceival* itsIConfirmDataReceival;		//## link itsIConfirmDataReceival
        
        iGetAlertDetails* itsIGetAlertDetails;		//## link itsIGetAlertDetails
        
        iInitialize* itsIInitialize;		//## link itsIInitialize
        
        iPrint* itsIPrint;		//## link itsIPrint
        
        iUspijStacje* itsIUspijStacje;		//## link itsIUspijStacje
    };
    
    //## package Default
    class port_35_C : public iInform, public iSendAlert {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        port_35_C();
        
        //## auto_generated
        virtual ~port_35_C();
        
        ////    Operations    ////
        
        //## auto_generated
        iInform* getItsIInform();
        
        //## auto_generated
        iSendAlert* getItsISendAlert();
        
        //## auto_generated
        Controller::port_35_C* getOutBound();
        
        //## auto_generated
        virtual void inform();
        
        //## auto_generated
        virtual void sendAlert();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIInform(iInform* p_iInform);
        
        //## auto_generated
        void setItsISendAlert(iSendAlert* p_iSendAlert);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        iInform* itsIInform;		//## link itsIInform
        
        iSendAlert* itsISendAlert;		//## link itsISendAlert
    };
//#]

    //## auto_generated
    virtual ~Controller();
    
    //## operation appendToPackage(sensorType,double)
    void appendToPackage(const sensorType& whichSensor, double value);
    
    //## operation calibrate()
    void calibrate();
    
    //## operation calibrateRequest()
    virtual void calibrateRequest();
    
    //## operation confirmAlert()
    virtual void confirmAlert();
    
    //## operation confirmReceival()
    virtual void confirmReceival();
    
    //## operation createPackage(unsigned long long)
    void createPackage(unsigned long long time);
    
    //## operation deletePackage()
    void deletePackage();
    
    //## operation getAlertDetails()
    virtual std::vector<std::pair<unsigned long long,int>> getAlertDetails();
    
    //## operation getDataPackage() const
    StationData* getDataPackage() const;
    
    //## operation initialize()
    virtual void initialize();
    
    //## operation isAnyAlert()
    bool isAnyAlert();
    
    //## operation obsluzTrybOszczedzaniaEnergii()
    void obsluzTrybOszczedzaniaEnergii();
    
    //## operation print()
    virtual StationData print();
    
    //## operation printPackage()
    void printPackage();
    
    //## operation readInfo()
    void readInfo();
    
    //## operation resetAlert()
    void resetAlert();
    
    //## operation setWhenDue(int,double)
    void setWhenDue(int which, double limit);
    
    //## operation sprawdzPoziomy()
    void sprawdzPoziomy();
    
    //## auto_generated
    port_33_C* getPort_33() const;
    
    //## auto_generated
    port_33_C* get_port_33() const;
    
    //## auto_generated
    port_35_C* getPort_35() const;
    
    //## auto_generated
    port_35_C* get_port_35() const;
    
    //## auto_generated
    int getStopMeasurementFlag() const;
    
    //## auto_generated
    void setStopMeasurementFlag(int p_stopMeasurementFlag);
    
    //## auto_generated
    CO_Sensor* getItsCO_Sensor() const;
    
    //## auto_generated
    NO2_Sensor* getItsNO2_Sensor() const;
    
    //## auto_generated
    O3_Sensor* getItsO3_Sensor() const;
    
    //## auto_generated
    PM10_Sensor* getItsPM10_Sensor() const;
    
    //## auto_generated
    PM1_Sensor* getItsPM1_Sensor() const;
    
    //## auto_generated
    PM2_5Sensor* getItsPM2_5Sensor() const;
    
    //## auto_generated
    SO2_Sensor* getItsSO2_Sensor() const;
    
    //## auto_generated
    Timer* getItsTimer() const;
    
    //## auto_generated
    object_0_C* getObject_0() const;

protected :

    //## auto_generated
    std::map<int, bool> getAlert() const;
    
    //## auto_generated
    void setAlert(std::map<int, bool> p_alert);
    
    //## auto_generated
    unsigned long long getTime() const;
    
    //## auto_generated
    void setTime(unsigned long long p_time);
    
    //## auto_generated
    bool getWhetherTimerRead() const;
    
    //## auto_generated
    void setWhetherTimerRead(bool p_whetherTimerRead);
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);

private :

    //## auto_generated
    int getIterator() const;
    
    //## auto_generated
    void setIterator(int p_iterator);

protected :

    std::map<int, bool> alert;		//## attribute alert
    
    StationData* dataPackage;		//## attribute dataPackage
    
    int iterator;		//## attribute iterator
    
    statusType stationStatus;		//## attribute stationStatus
    
    int stopMeasurementFlag;		//## attribute stopMeasurementFlag
    
    unsigned long long time;		//## attribute time
    
    bool whetherTimerRead;		//## attribute whetherTimerRead
    
    CO_Sensor itsCO_Sensor;		//## link itsCO_Sensor
    
    NO2_Sensor itsNO2_Sensor;		//## link itsNO2_Sensor
    
    PM10_Sensor itsPM10_Sensor;		//## link itsPM10_Sensor
    
    PM1_Sensor itsPM1_Sensor;		//## link itsPM1_Sensor
    
    PM2_5Sensor itsPM2_5Sensor;		//## link itsPM2_5Sensor
    
    SO2_Sensor itsSO2_Sensor;		//## link itsSO2_Sensor
    
    Timer itsTimer;		//## link itsTimer

public :

    //## operation aktywujStacje()
    virtual void aktywujStacje();
    
    //## operation giveGenTime()
    unsigned long long giveGenTime();
    
    //## operation stacjaAktywna()
    void stacjaAktywna();
    
    //## operation stacjaUspiona()
    void stacjaUspiona();
    
    //## operation uspijStacje()
    virtual void uspijStacje();

protected :

    //## auto_generated
    void setDataPackage(StationData* p_dataPackage);
    
//#[ ignore
    port_33_C port_33;
    
    port_35_C port_35;
//#]

    object_0_C object_0;		//## classInstance object_0

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // wysylanieAlertu:
    //## statechart_method
    inline bool wysylanieAlertu_IN() const;
    
    // StationStandBy:
    //## statechart_method
    inline bool StationStandBy_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus StationStandBy_handleEvent();
    
    // stationSleep:
    //## statechart_method
    inline bool stationSleep_IN() const;
    
    // stationActivation:
    //## statechart_method
    inline bool stationActivation_IN() const;
    
    // signalJoin_Timer_Server_Request:
    //## statechart_method
    inline bool signalJoin_Timer_Server_Request_IN() const;
    
    // sendaction_44:
    //## statechart_method
    inline bool sendaction_44_IN() const;
    
    // sendaction_42:
    //## statechart_method
    inline bool sendaction_42_IN() const;
    
    // sendaction_41:
    //## statechart_method
    inline bool sendaction_41_IN() const;
    
    // sendaction_40:
    //## statechart_method
    inline bool sendaction_40_IN() const;
    
    // sendaction_39:
    //## statechart_method
    inline bool sendaction_39_IN() const;
    
    // sendaction_38:
    //## statechart_method
    inline bool sendaction_38_IN() const;
    
    // sendaction_37:
    //## statechart_method
    inline bool sendaction_37_IN() const;
    
    // sendaction_14:
    //## statechart_method
    inline bool sendaction_14_IN() const;
    
    // sendaction_13:
    //## statechart_method
    inline bool sendaction_13_IN() const;
    
    // sendaction_12:
    //## statechart_method
    inline bool sendaction_12_IN() const;
    
    // sendaction_10:
    //## statechart_method
    inline bool sendaction_10_IN() const;
    
    // readInfoState:
    //## statechart_method
    inline bool readInfoState_IN() const;
    
    // packageReadyInformation:
    //## statechart_method
    inline bool packageReadyInformation_IN() const;
    
    // deletePackageState:
    //## statechart_method
    inline bool deletePackageState_IN() const;
    
    // checkLimits:
    //## statechart_method
    inline bool checkLimits_IN() const;
    
    // callibration:
    //## statechart_method
    inline bool callibration_IN() const;

protected :

//#[ ignore
    enum Controller_Enum {
        OMNonState = 0,
        wysylanieAlertu = 1,
        StationStandBy = 2,
        stationSleep = 3,
        stationActivation = 4,
        signalJoin_Timer_Server_Request = 5,
        sendaction_44 = 6,
        sendaction_42 = 7,
        sendaction_41 = 8,
        sendaction_40 = 9,
        sendaction_39 = 10,
        sendaction_38 = 11,
        sendaction_37 = 12,
        sendaction_14 = 13,
        sendaction_13 = 14,
        sendaction_12 = 15,
        sendaction_10 = 16,
        readInfoState = 17,
        packageReadyInformation = 18,
        deletePackageState = 19,
        checkLimits = 20,
        callibration = 21
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedController : public OMAnimatediPrint, public OMAnimatediInitialize, public OMAnimatediConfirmDataReceival, public OMAnimatediGetAlertDetails, public OMAnimatediCalibrateRequest, public OMAnimatediConfirmAlertReceival, public OMAnimatediAktywujStacje, public OMAnimatediUspijStacje {
    DECLARE_REACTIVE_META(Controller, OMAnimatedController)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void wysylanieAlertu_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void StationStandBy_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void stationSleep_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void stationActivation_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void signalJoin_Timer_Server_Request_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_44_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_42_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_41_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_40_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_39_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_38_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_37_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_14_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_13_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_12_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_10_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void readInfoState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void packageReadyInformation_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void deletePackageState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void checkLimits_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void callibration_serializeStates(AOMSState* aomsState) const;
};

class OMAnimatedobject_0_C : virtual public AOMInstance {
    DECLARE_META(Controller::object_0_C, OMAnimatedobject_0_C)
};
//#]
#endif // _OMINSTRUMENT

inline bool Controller::rootState_IN() const {
    return true;
}

inline bool Controller::wysylanieAlertu_IN() const {
    return rootState_subState == wysylanieAlertu;
}

inline bool Controller::StationStandBy_IN() const {
    return rootState_subState == StationStandBy;
}

inline bool Controller::stationSleep_IN() const {
    return rootState_subState == stationSleep;
}

inline bool Controller::stationActivation_IN() const {
    return rootState_subState == stationActivation;
}

inline bool Controller::signalJoin_Timer_Server_Request_IN() const {
    return rootState_subState == signalJoin_Timer_Server_Request;
}

inline bool Controller::sendaction_44_IN() const {
    return rootState_subState == sendaction_44;
}

inline bool Controller::sendaction_42_IN() const {
    return rootState_subState == sendaction_42;
}

inline bool Controller::sendaction_41_IN() const {
    return rootState_subState == sendaction_41;
}

inline bool Controller::sendaction_40_IN() const {
    return rootState_subState == sendaction_40;
}

inline bool Controller::sendaction_39_IN() const {
    return rootState_subState == sendaction_39;
}

inline bool Controller::sendaction_38_IN() const {
    return rootState_subState == sendaction_38;
}

inline bool Controller::sendaction_37_IN() const {
    return rootState_subState == sendaction_37;
}

inline bool Controller::sendaction_14_IN() const {
    return rootState_subState == sendaction_14;
}

inline bool Controller::sendaction_13_IN() const {
    return rootState_subState == sendaction_13;
}

inline bool Controller::sendaction_12_IN() const {
    return rootState_subState == sendaction_12;
}

inline bool Controller::sendaction_10_IN() const {
    return rootState_subState == sendaction_10;
}

inline bool Controller::readInfoState_IN() const {
    return rootState_subState == readInfoState;
}

inline bool Controller::packageReadyInformation_IN() const {
    return rootState_subState == packageReadyInformation;
}

inline bool Controller::deletePackageState_IN() const {
    return rootState_subState == deletePackageState;
}

inline bool Controller::checkLimits_IN() const {
    return rootState_subState == checkLimits;
}

inline bool Controller::callibration_IN() const {
    return rootState_subState == callibration;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Controller.h
*********************************************************************/
