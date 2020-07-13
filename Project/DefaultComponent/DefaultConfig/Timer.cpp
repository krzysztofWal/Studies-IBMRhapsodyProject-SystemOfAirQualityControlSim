/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Timer
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Timer.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Timer.h"
//## link itsController
#include "Controller.h"
//#[ ignore
#define Default_Timer_Timer_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Timer
Timer::Timer(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Timer, Timer(), 0, Default_Timer_Timer_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsController = NULL;
    initStatechart();
}

Timer::~Timer() {
    NOTIFY_DESTRUCTOR(~Timer, true);
    cleanUpRelations();
    cancelTimeouts();
}

Controller* Timer::getItsController() const {
    return itsController;
}

void Timer::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

bool Timer::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Timer::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Timer::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

void Timer::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Timer::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

unsigned long long Timer::getTime() const {
    return time;
}

void Timer::setTime(unsigned long long p_time) {
    time = p_time;
}

void Timer::__setItsController(Controller* p_Controller) {
    itsController = p_Controller;
    if(p_Controller != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsController", p_Controller, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsController");
        }
}

void Timer::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void Timer::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

void Timer::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.TimerStandByState");
        rootState_subState = TimerStandByState;
        rootState_active = TimerStandByState;
        rootState_timeout = scheduleTimeout(50, "ROOT.TimerStandByState");
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Timer::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State TimerStandByState
        case TimerStandByState:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.TimerStandByState");
                            NOTIFY_STATE_ENTERED("ROOT.timeIncrement");
                            pushNullTransition();
                            rootState_subState = timeIncrement;
                            rootState_active = timeIncrement;
                            //#[ state timeIncrement.(Entry) 
                            if (time < ULLONG_MAX - 50) {
                            	time += 50;
                            	if (time%1000 ==0){
                            		//std::cout << "sending signal: " << time << std::endl;
                            		GEN(inicjujOdczytTimer);
                            	}
                            }
                             else {
                             	time = 0;
                            }
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(inicjujOdczytTimer_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.TimerStandByState");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_1");
                    pushNullTransition();
                    rootState_subState = sendaction_1;
                    rootState_active = sendaction_1;
                    //#[ state sendaction_1.(Entry) 
                    itsController->GEN(timerCzytajSensory(time));
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(requestTime_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.TimerStandByState");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_4");
                    pushNullTransition();
                    rootState_subState = sendaction_4;
                    rootState_active = sendaction_4;
                    //#[ state sendaction_4.(Entry) 
                    itsController->GEN(provideTime(time));
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_1
        case sendaction_1:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_1");
                    NOTIFY_STATE_ENTERED("ROOT.TimerStandByState");
                    rootState_subState = TimerStandByState;
                    rootState_active = TimerStandByState;
                    rootState_timeout = scheduleTimeout(50, "ROOT.TimerStandByState");
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_4
        case sendaction_4:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_4");
                    NOTIFY_STATE_ENTERED("ROOT.TimerStandByState");
                    rootState_subState = TimerStandByState;
                    rootState_active = TimerStandByState;
                    rootState_timeout = scheduleTimeout(50, "ROOT.TimerStandByState");
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        // State timeIncrement
        case timeIncrement:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.timeIncrement");
                    NOTIFY_STATE_ENTERED("ROOT.TimerStandByState");
                    rootState_subState = TimerStandByState;
                    rootState_active = TimerStandByState;
                    rootState_timeout = scheduleTimeout(50, "ROOT.TimerStandByState");
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
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
void OMAnimatedTimer::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("time", x2String(myReal->time));
}

void OMAnimatedTimer::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
}

void OMAnimatedTimer::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Timer::TimerStandByState:
        {
            TimerStandByState_serializeStates(aomsState);
        }
        break;
        case Timer::sendaction_1:
        {
            sendaction_1_serializeStates(aomsState);
        }
        break;
        case Timer::sendaction_4:
        {
            sendaction_4_serializeStates(aomsState);
        }
        break;
        case Timer::timeIncrement:
        {
            timeIncrement_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTimer::TimerStandByState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TimerStandByState");
}

void OMAnimatedTimer::timeIncrement_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.timeIncrement");
}

void OMAnimatedTimer::sendaction_4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_4");
}

void OMAnimatedTimer::sendaction_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_1");
}
//#]

IMPLEMENT_REACTIVE_META_P(Timer, Default, Default, false, OMAnimatedTimer)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Timer.cpp
*********************************************************************/
