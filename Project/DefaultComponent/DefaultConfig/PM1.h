/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PM1
//!	Generated Date	: Wed, 8, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\PM1.h
*********************************************************************/

#ifndef PM1_H
#define PM1_H

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
//## class PM1
#include "PMSensor.h"
//## auto_generated
#include <map>
//## auto_generated
#include <utility>
//## auto_generated
#include <vector>
//## auto_generated
class Station;

//## package Default

//## class PM1
class PM1 : public OMReactive, public PMSensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPM1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## operation PM1()
    PM1(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~PM1();
    
    ////    Operations    ////
    
    //## operation odczytajDane()
    virtual void odczytajDane();
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // state_2:
    //## statechart_method
    inline bool state_2_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum PM1_Enum {
        OMNonState = 0,
        state_2 = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPM1 : public OMAnimatedPMSensor {
    DECLARE_REACTIVE_META(PM1, OMAnimatedPM1)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_2_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool PM1::rootState_IN() const {
    return true;
}

inline bool PM1::state_2_IN() const {
    return rootState_subState == state_2;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PM1.h
*********************************************************************/
