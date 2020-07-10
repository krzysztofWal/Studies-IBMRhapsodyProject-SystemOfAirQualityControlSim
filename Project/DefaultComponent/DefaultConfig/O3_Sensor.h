/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: O3_Sensor
//!	Generated Date	: Fri, 10, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\O3_Sensor.h
*********************************************************************/

#ifndef O3_Sensor_H
#define O3_Sensor_H

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
//## class O3_Sensor
#include "Sensor.h"
//## auto_generated
#include <map>
//## auto_generated
#include <utility>
//## auto_generated
#include <vector>
//## auto_generated
class Controller;

//## package Default

//## class O3_Sensor
class O3_Sensor : public OMReactive, public Sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedO3_Sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    O3_Sensor(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~O3_Sensor();
    
    ////    Operations    ////
    
    //## operation funcAb()
    virtual void funcAb();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    void setItsController(Controller* p_Controller);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Controller* itsController;		//## link itsController
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsController(Controller* p_Controller);
    
    //## auto_generated
    void _setItsController(Controller* p_Controller);
    
    //## auto_generated
    void _clearItsController();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // sendaction_7:
    //## statechart_method
    inline bool sendaction_7_IN() const;
    
    // Oczekiwanie_O3:
    //## statechart_method
    inline bool Oczekiwanie_O3_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum O3_Sensor_Enum {
        OMNonState = 0,
        sendaction_7 = 1,
        Oczekiwanie_O3 = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedO3_Sensor : public OMAnimatedSensor {
    DECLARE_REACTIVE_META(O3_Sensor, OMAnimatedO3_Sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Oczekiwanie_O3_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool O3_Sensor::rootState_IN() const {
    return true;
}

inline bool O3_Sensor::sendaction_7_IN() const {
    return rootState_subState == sendaction_7;
}

inline bool O3_Sensor::Oczekiwanie_O3_IN() const {
    return rootState_subState == Oczekiwanie_O3;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\O3_Sensor.h
*********************************************************************/
