/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Controller
//!	Generated Date	: Sat, 11, Jul 2020  
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
//## auto_generated
#include <map>
//## auto_generated
#include <utility>
//## auto_generated
#include <vector>
//## class port_35_C
#include "iInform.h"
//## class port_35_C
#include "iSendAlert.h"
//#[ ignore
#define OMAnim_Default_Controller_setStationStatus_statusType_ARGS_DECLARATION statusType p_stationStatus;
//#]

//## package Default

//## class Controller
class Controller : public OMThread, public OMReactive, public iPrint, public iInitialize, public iConfirmDataReceival, public iGetAlertDetails {
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

public :

    //## auto_generated
    void setStationStatus(statusType p_stationStatus);

protected :

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
    class port_33_C : public iPrint, public iInitialize, public iConfirmDataReceival, public iGetAlertDetails {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        port_33_C();
        
        //## auto_generated
        virtual ~port_33_C();
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void confirmReceival();
        
        //## auto_generated
        void connectController(Controller* part);
        
        //## auto_generated
        virtual void getAlertDetails();
        
        //## auto_generated
        iConfirmDataReceival* getItsIConfirmDataReceival();
        
        //## auto_generated
        iGetAlertDetails* getItsIGetAlertDetails();
        
        //## auto_generated
        iInitialize* getItsIInitialize();
        
        //## auto_generated
        iPrint* getItsIPrint();
        
        //## auto_generated
        virtual void initialize();
        
        //## auto_generated
        virtual StationData* print();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIConfirmDataReceival(iConfirmDataReceival* p_iConfirmDataReceival);
        
        //## auto_generated
        void setItsIGetAlertDetails(iGetAlertDetails* p_iGetAlertDetails);
        
        //## auto_generated
        void setItsIInitialize(iInitialize* p_iInitialize);
        
        //## auto_generated
        void setItsIPrint(iPrint* p_iPrint);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        iConfirmDataReceival* itsIConfirmDataReceival;		//## link itsIConfirmDataReceival
        
        iGetAlertDetails* itsIGetAlertDetails;		//## link itsIGetAlertDetails
        
        iInitialize* itsIInitialize;		//## link itsIInitialize
        
        iPrint* itsIPrint;		//## link itsIPrint
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
    
    //## operation callibrate()
    void callibrate();
    
    //## operation confirmReceival()
    virtual void confirmReceival();
    
    //## operation createPackage(long)
    void createPackage(long time);
    
    //## operation deletePackage()
    void deletePackage();
    
    //## operation getAlertDetails()
    virtual void getAlertDetails();
    
    //## operation getDataPackage() const
    StationData* getDataPackage() const;
    
    //## operation initialize()
    virtual void initialize();
    
    //## operation isAnyAlert()
    bool isAnyAlert();
    
    //## operation print()
    virtual StationData* print();
    
    //## operation printPackage()
    void printPackage();
    
    //## operation setWhenDue(int,double)
    void setWhenDue(int which, double limit);
    
    //## operation sprawdzPoziomy()
    void sprawdzPoziomy();
    
    //## operation wejdzTrybOszczedzaniaEnergii()
    void wejdzTrybOszczedzaniaEnergii();
    
    //## operation wlaczStacje()
    void wlaczStacje();
    
    //## operation wylaczStacje()
    void wylaczStacje();
    
    //## auto_generated
    port_33_C* getPort_33() const;
    
    //## auto_generated
    port_33_C* get_port_33() const;
    
    //## auto_generated
    port_35_C* getPort_35() const;
    
    //## auto_generated
    port_35_C* get_port_35() const;
    
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
    object_0_C* getObject_0() const;

protected :

    //## auto_generated
    std::map<int, bool> getAlert() const;
    
    //## auto_generated
    void setAlert(std::map<int, bool> p_alert);
    
    //## auto_generated
    void setDataPackage(StationData* p_dataPackage);
    
    //## auto_generated
    long getTime() const;
    
    //## auto_generated
    void setTime(long p_time);
    
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
    
    long time;		//## attribute time
    
//#[ ignore
    port_33_C port_33;
    
    port_35_C port_35;
//#]

    CO_Sensor itsCO_Sensor;		//## link itsCO_Sensor
    
    NO2_Sensor itsNO2_Sensor;		//## link itsNO2_Sensor
    
    PM10_Sensor itsPM10_Sensor;		//## link itsPM10_Sensor
    
    PM1_Sensor itsPM1_Sensor;		//## link itsPM1_Sensor
    
    PM2_5Sensor itsPM2_5Sensor;		//## link itsPM2_5Sensor
    
    SO2_Sensor itsSO2_Sensor;		//## link itsSO2_Sensor
    
    object_0_C object_0;		//## classInstance object_0

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    inline bool rootState_isCompleted();
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // wysylanieAlertu:
    //## statechart_method
    inline bool wysylanieAlertu_IN() const;
    
    // terminationstate_6:
    //## statechart_method
    inline bool terminationstate_6_IN() const;
    
    // StationStandBy:
    //## statechart_method
    inline bool StationStandBy_IN() const;
    
    // StationOn:
    //## statechart_method
    inline bool StationOn_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus StationOn_handleEvent();
    
    // state_0:
    //## statechart_method
    inline bool state_0_IN() const;
    
    // soonToCheckIfAlert:
    //## statechart_method
    inline bool soonToCheckIfAlert_IN() const;
    
    // simulationStartPoint:
    //## statechart_method
    inline bool simulationStartPoint_IN() const;
    
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
    
    // packageReadyInformation:
    //## statechart_method
    inline bool packageReadyInformation_IN() const;

protected :

//#[ ignore
    enum Controller_Enum {
        OMNonState = 0,
        wysylanieAlertu = 1,
        terminationstate_6 = 2,
        StationStandBy = 3,
        StationOn = 4,
        state_0 = 5,
        soonToCheckIfAlert = 6,
        simulationStartPoint = 7,
        sendaction_14 = 8,
        sendaction_13 = 9,
        sendaction_12 = 10,
        sendaction_10 = 11,
        packageReadyInformation = 12
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(Default_Controller_setStationStatus_statusType)

//#[ ignore
class OMAnimatedController : public OMAnimatediPrint, public OMAnimatediInitialize, public OMAnimatediConfirmDataReceival, public OMAnimatediGetAlertDetails {
    DECLARE_REACTIVE_META(Controller, OMAnimatedController)
    
    DECLARE_META_OP(Default_Controller_setStationStatus_statusType)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void wysylanieAlertu_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void terminationstate_6_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void StationStandBy_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void StationOn_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_0_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void soonToCheckIfAlert_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void simulationStartPoint_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_14_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_13_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_12_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_10_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void packageReadyInformation_serializeStates(AOMSState* aomsState) const;
};

class OMAnimatedobject_0_C : virtual public AOMInstance {
    DECLARE_META(Controller::object_0_C, OMAnimatedobject_0_C)
};
//#]
#endif // _OMINSTRUMENT

inline bool Controller::rootState_IN() const {
    return true;
}

inline bool Controller::rootState_isCompleted() {
    return ( IS_IN(terminationstate_6) );
}

inline bool Controller::wysylanieAlertu_IN() const {
    return rootState_subState == wysylanieAlertu;
}

inline bool Controller::terminationstate_6_IN() const {
    return rootState_subState == terminationstate_6;
}

inline bool Controller::StationStandBy_IN() const {
    return rootState_subState == StationStandBy;
}

inline bool Controller::StationOn_IN() const {
    return rootState_subState == StationOn;
}

inline bool Controller::state_0_IN() const {
    return rootState_subState == state_0;
}

inline bool Controller::soonToCheckIfAlert_IN() const {
    return rootState_subState == soonToCheckIfAlert;
}

inline bool Controller::simulationStartPoint_IN() const {
    return rootState_subState == simulationStartPoint;
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

inline bool Controller::packageReadyInformation_IN() const {
    return rootState_subState == packageReadyInformation;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Controller.h
*********************************************************************/
