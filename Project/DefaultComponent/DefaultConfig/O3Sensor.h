/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: O3Sensor
//!	Generated Date	: Tue, 7, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\O3Sensor.h
*********************************************************************/

#ifndef O3Sensor_H
#define O3Sensor_H

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
//## class O3Sensor
#include "Sensor.h"
//## auto_generated
#include <map>
//## auto_generated
#include <utility>
//## auto_generated
#include <vector>
//## auto_generated
class Station;

//## package Default

//## class O3Sensor
class O3Sensor : public OMReactive, public Sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedO3Sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    O3Sensor(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~O3Sensor();
    
    ////    Operations    ////
    
    //## operation odczytajDane()
    virtual void odczytajDane();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Station* getItsStation_1() const;
    
    //## auto_generated
    void setItsStation_1(Station* p_Station);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Relations and components    ////
    
    Station* itsStation_1;		//## link itsStation_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsStation_1(Station* p_Station);
    
    //## auto_generated
    void _setItsStation_1(Station* p_Station);
    
    //## auto_generated
    void _clearItsStation_1();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // state_4:
    //## statechart_method
    inline bool state_4_IN() const;
    
    // sendaction_7:
    //## statechart_method
    inline bool sendaction_7_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum O3Sensor_Enum {
        OMNonState = 0,
        state_4 = 1,
        sendaction_7 = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedO3Sensor : public OMAnimatedSensor {
    DECLARE_REACTIVE_META(O3Sensor, OMAnimatedO3Sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_7_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool O3Sensor::rootState_IN() const {
    return true;
}

inline bool O3Sensor::state_4_IN() const {
    return rootState_subState == state_4;
}

inline bool O3Sensor::sendaction_7_IN() const {
    return rootState_subState == sendaction_7;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\O3Sensor.h
*********************************************************************/
