/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Timer
//!	Generated Date	: Sat, 11, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Timer.h
*********************************************************************/

#ifndef Timer_H
#define Timer_H

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
//## auto_generated
#include <map>
//## auto_generated
#include <utility>
//## auto_generated
#include <vector>
//## auto_generated
#include <fstream>
//## auto_generated
#include <array>
//## auto_generated
#include <stdio.h>
//## link itsController
class Controller;

//## package Default

//## class Timer
class Timer : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTimer;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Timer(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Timer();
    
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
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
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
    
    // TimerStandByState:
    //## statechart_method
    inline bool TimerStandByState_IN() const;
    
    // sendaction_1:
    //## statechart_method
    inline bool sendaction_1_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Timer_Enum {
        OMNonState = 0,
        TimerStandByState = 1,
        sendaction_1 = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTimer : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Timer, OMAnimatedTimer)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TimerStandByState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_1_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Timer::rootState_IN() const {
    return true;
}

inline bool Timer::TimerStandByState_IN() const {
    return rootState_subState == TimerStandByState;
}

inline bool Timer::sendaction_1_IN() const {
    return rootState_subState == sendaction_1;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Timer.h
*********************************************************************/
