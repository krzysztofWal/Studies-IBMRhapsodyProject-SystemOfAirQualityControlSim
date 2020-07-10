/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Station
//!	Generated Date	: Thu, 9, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Station.h
*********************************************************************/

#ifndef Station_H
#define Station_H

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
//## auto_generated
#include <map>
//## auto_generated
#include <utility>
//## auto_generated
#include <vector>
//## link itsReceiver
class Receiver;

//## attribute dataPackage
class StationData;

//## package Default

//## class Station
class Station : public OMThread, public OMReactive {
public :

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedStation;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ~Station();
    
    ////    Operations    ////
    
    //## operation goIntoStandByStatus()
    void goIntoStandByStatus();
    
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
    
    //## auto_generated
    void cleanUpRelations();
    
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
    
    //## operation Station()
    Station(IOxfActive* theActiveContext = 0);
    
    //## class Station::object_0
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
    
    //## operation appendToPackage(sensorType,double)
    void appendToPackage(const sensorType& whichSensor, double value);
    
    //## operation callibrate()
    void callibrate();
    
    //## operation createPackage(long)
    void createPackage(long time);
    
    //## operation deletePackage()
    void deletePackage();
    
    //## operation getDataPackage() const
    StationData* getDataPackage() const;
    
    //## operation message_0()
    void message_0();
    
    //## operation printPackage()
    void printPackage();
    
    //## operation sprawdzPoziomy()
    void sprawdzPoziomy();
    
    //## operation wejdzTrybOszczedzaniaEnergii()
    void wejdzTrybOszczedzaniaEnergii();
    
    //## operation wlaczStacje()
    void wlaczStacje();
    
    //## operation wylaczStacje()
    void wylaczStacje();
    
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
    Receiver* getItsReceiver() const;
    
    //## auto_generated
    void setItsReceiver(Receiver* p_Receiver);
    
    //## auto_generated
    SO2_Sensor* getItsSO2_Sensor() const;
    
    //## auto_generated
    object_0_C* getObject_0() const;

protected :

    //## auto_generated
    bool getAlert() const;
    
    //## auto_generated
    void setAlert(bool p_alert);
    
    //## auto_generated
    void setDataPackage(StationData* p_dataPackage);
    
    //## auto_generated
    long getTime() const;
    
    //## auto_generated
    void setTime(long p_time);
    
    //## auto_generated
    void initStatechart();
    
    bool alert;		//## attribute alert
    
    StationData* dataPackage;		//## attribute dataPackage
    
    statusType stationStatus;		//## attribute stationStatus
    
    long time;		//## attribute time
    
    CO_Sensor itsCO_Sensor;		//## link itsCO_Sensor
    
    NO2_Sensor itsNO2_Sensor;		//## link itsNO2_Sensor
    
    PM10_Sensor itsPM10_Sensor;		//## link itsPM10_Sensor
    
    PM1_Sensor itsPM1_Sensor;		//## link itsPM1_Sensor
    
    PM2_5Sensor itsPM2_5Sensor;		//## link itsPM2_5Sensor
    
    Receiver* itsReceiver;		//## link itsReceiver
    
    SO2_Sensor itsSO2_Sensor;		//## link itsSO2_Sensor
    
    object_0_C object_0;		//## classInstance object_0

public :

    //## auto_generated
    void __setItsReceiver(Receiver* p_Receiver);
    
    //## auto_generated
    void _setItsReceiver(Receiver* p_Receiver);
    
    //## auto_generated
    void _clearItsReceiver();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // state_0:
    //## statechart_method
    inline bool state_0_IN() const;

protected :

//#[ ignore
    enum Station_Enum {
        OMNonState = 0,
        state_0 = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedStation : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Station, OMAnimatedStation)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_0_serializeStates(AOMSState* aomsState) const;
};

class OMAnimatedobject_0_C : virtual public AOMInstance {
    DECLARE_META(Station::object_0_C, OMAnimatedobject_0_C)
};
//#]
#endif // _OMINSTRUMENT

inline bool Station::rootState_IN() const {
    return true;
}

inline bool Station::state_0_IN() const {
    return rootState_subState == state_0;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Station.h
*********************************************************************/
