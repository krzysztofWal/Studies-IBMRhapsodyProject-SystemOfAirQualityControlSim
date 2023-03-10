/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Receiver
//!	Generated Date	: Tue, 14, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Receiver.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Receiver.h"
//#[ ignore
#define Default_Receiver_Receiver_SERIALIZE OM_NO_OP

#define Default_Receiver_inform_SERIALIZE OM_NO_OP

#define Default_Receiver_sendAlert_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Receiver
//#[ ignore
Receiver::port_3_C::port_3_C() : _p_(0) {
    itsIAktywujStacje = NULL;
    itsICalibrateRequest = NULL;
    itsIConfirmAlertReceival = NULL;
    itsIConfirmDataReceival = NULL;
    itsIGetAlertDetails = NULL;
    itsIInitialize = NULL;
    itsIPrint = NULL;
    itsIUspijStacje = NULL;
}

Receiver::port_3_C::~port_3_C() {
    cleanUpRelations();
}

void Receiver::port_3_C::aktywujStacje() {
    
    if (itsIAktywujStacje != NULL) {
        itsIAktywujStacje->aktywujStacje();
    }
    
}

void Receiver::port_3_C::calibrateRequest() {
    
    if (itsICalibrateRequest != NULL) {
        itsICalibrateRequest->calibrateRequest();
    }
    
}

void Receiver::port_3_C::confirmAlert() {
    
    if (itsIConfirmAlertReceival != NULL) {
        itsIConfirmAlertReceival->confirmAlert();
    }
    
}

void Receiver::port_3_C::confirmReceival() {
    
    if (itsIConfirmDataReceival != NULL) {
        itsIConfirmDataReceival->confirmReceival();
    }
    
}

std::vector<std::pair<unsigned long long,std::pair<int,int>>> Receiver::port_3_C::getAlertDetails() {
    std::vector<std::pair<unsigned long long,std::pair<int,int>>> res;
    if (itsIGetAlertDetails != NULL) {
        res = itsIGetAlertDetails->getAlertDetails();
    }
    return res;
}

iAktywujStacje* Receiver::port_3_C::getItsIAktywujStacje() {
    return this;
}

iCalibrateRequest* Receiver::port_3_C::getItsICalibrateRequest() {
    return this;
}

iConfirmAlertReceival* Receiver::port_3_C::getItsIConfirmAlertReceival() {
    return this;
}

iConfirmDataReceival* Receiver::port_3_C::getItsIConfirmDataReceival() {
    return this;
}

iGetAlertDetails* Receiver::port_3_C::getItsIGetAlertDetails() {
    return this;
}

iInitialize* Receiver::port_3_C::getItsIInitialize() {
    return this;
}

iPrint* Receiver::port_3_C::getItsIPrint() {
    return this;
}

iUspijStacje* Receiver::port_3_C::getItsIUspijStacje() {
    return this;
}

Receiver::port_3_C* Receiver::port_3_C::getOutBound() {
    return this;
}

void Receiver::port_3_C::initialize() {
    
    if (itsIInitialize != NULL) {
        itsIInitialize->initialize();
    }
    
}

StationData Receiver::port_3_C::print() {
    StationData res;
    if (itsIPrint != NULL) {
        res = itsIPrint->print();
    }
    return res;
}

void Receiver::port_3_C::uspijStacje() {
    
    if (itsIUspijStacje != NULL) {
        itsIUspijStacje->uspijStacje();
    }
    
}

void Receiver::port_3_C::setItsIAktywujStacje(iAktywujStacje* p_iAktywujStacje) {
    itsIAktywujStacje = p_iAktywujStacje;
}

void Receiver::port_3_C::setItsICalibrateRequest(iCalibrateRequest* p_iCalibrateRequest) {
    itsICalibrateRequest = p_iCalibrateRequest;
}

void Receiver::port_3_C::setItsIConfirmAlertReceival(iConfirmAlertReceival* p_iConfirmAlertReceival) {
    itsIConfirmAlertReceival = p_iConfirmAlertReceival;
}

void Receiver::port_3_C::setItsIConfirmDataReceival(iConfirmDataReceival* p_iConfirmDataReceival) {
    itsIConfirmDataReceival = p_iConfirmDataReceival;
}

void Receiver::port_3_C::setItsIGetAlertDetails(iGetAlertDetails* p_iGetAlertDetails) {
    itsIGetAlertDetails = p_iGetAlertDetails;
}

void Receiver::port_3_C::setItsIInitialize(iInitialize* p_iInitialize) {
    itsIInitialize = p_iInitialize;
}

void Receiver::port_3_C::setItsIPrint(iPrint* p_iPrint) {
    itsIPrint = p_iPrint;
}

void Receiver::port_3_C::setItsIUspijStacje(iUspijStacje* p_iUspijStacje) {
    itsIUspijStacje = p_iUspijStacje;
}

void Receiver::port_3_C::cleanUpRelations() {
    if(itsIAktywujStacje != NULL)
        {
            itsIAktywujStacje = NULL;
        }
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
    if(itsIUspijStacje != NULL)
        {
            itsIUspijStacje = NULL;
        }
}

Receiver::port_5_C::port_5_C() : _p_(0) {
    itsIInform = NULL;
    itsISendAlert = NULL;
}

Receiver::port_5_C::~port_5_C() {
    cleanUpRelations();
}

void Receiver::port_5_C::connectReceiver(Receiver* part) {
    setItsIInform(part);
    setItsISendAlert(part);
    
}

iInform* Receiver::port_5_C::getItsIInform() {
    return this;
}

iSendAlert* Receiver::port_5_C::getItsISendAlert() {
    return this;
}

void Receiver::port_5_C::inform() {
    
    if (itsIInform != NULL) {
        itsIInform->inform();
    }
    
}

void Receiver::port_5_C::sendAlert() {
    
    if (itsISendAlert != NULL) {
        itsISendAlert->sendAlert();
    }
    
}

void Receiver::port_5_C::setItsIInform(iInform* p_iInform) {
    itsIInform = p_iInform;
}

void Receiver::port_5_C::setItsISendAlert(iSendAlert* p_iSendAlert) {
    itsISendAlert = p_iSendAlert;
}

void Receiver::port_5_C::cleanUpRelations() {
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

Receiver::Receiver(IOxfActive* theActiveContext) : iterator(0) {
    NOTIFY_ACTIVE_CONSTRUCTOR(Receiver, Receiver(), 0, Default_Receiver_Receiver_SERIALIZE);
    setActiveContext(this, true);
    initRelations();
    initStatechart();
}

Receiver::~Receiver() {
    NOTIFY_DESTRUCTOR(~Receiver, false);
    cancelTimeouts();
}

void Receiver::inform() {
    NOTIFY_OPERATION(inform, inform(), 0, Default_Receiver_inform_SERIALIZE);
    //#[ operation inform()
    GEN(Inform);
    //std::cout << "contr to rec - 've got data you can have them" << std::endl;
    //#]
}

void Receiver::sendAlert() {
    NOTIFY_OPERATION(sendAlert, sendAlert(), 0, Default_Receiver_sendAlert_SERIALIZE);
    //#[ operation sendAlert()
    GEN(SendAlert);
    //#]
}

Receiver::port_3_C* Receiver::getPort_3() const {
    return (Receiver::port_3_C*) &port_3;
}

Receiver::port_3_C* Receiver::get_port_3() const {
    return (Receiver::port_3_C*) &port_3;
}

Receiver::port_5_C* Receiver::getPort_5() const {
    return (Receiver::port_5_C*) &port_5;
}

Receiver::port_5_C* Receiver::get_port_5() const {
    return (Receiver::port_5_C*) &port_5;
}

bool Receiver::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

std::vector<std::pair<unsigned long long, std::pair<int,int>>> Receiver::getAlert_TimeAndWhichParticulate() const {
    return Alert_TimeAndWhichParticulate;
}

void Receiver::setAlert_TimeAndWhichParticulate(std::vector<std::pair<unsigned long long, std::pair<int,int>>> p_Alert_TimeAndWhichParticulate) {
    Alert_TimeAndWhichParticulate = p_Alert_TimeAndWhichParticulate;
}

std::vector<StationData> Receiver::getDataReceived() const {
    return dataReceived;
}

void Receiver::setDataReceived(std::vector<StationData> p_dataReceived) {
    dataReceived = p_dataReceived;
}

int Receiver::getIterator() const {
    return iterator;
}

void Receiver::setIterator(int p_iterator) {
    iterator = p_iterator;
}

void Receiver::initRelations() {
    if (get_port_5() != NULL) {
        get_port_5()->connectReceiver(this);
    }
}

void Receiver::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Receiver::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Receiver::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Receiver::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.receiverStandby");
        rootState_subState = receiverStandby;
        rootState_active = receiverStandby;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Receiver::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State receiverStandby
        case receiverStandby:
        {
            res = receiverStandby_handleEvent();
        }
        break;
        // State begin
        case begin:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("7");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.begin");
                            NOTIFY_STATE_ENTERED("ROOT.begin");
                            rootState_subState = begin;
                            rootState_active = begin;
                            //#[ state begin.(Entry) 
                            OUT_PORT(port_3)->initialize();
                            //#]
                            rootState_timeout = scheduleTimeout(600, "ROOT.begin");
                            NOTIFY_TRANSITION_TERMINATED("7");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(Inform_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.begin");
                    //#[ transition 1 
                    dataReceived.emplace_back(OUT_PORT(port_3)->print());
                    OUT_PORT(port_3)->confirmReceival();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.receiverStandby");
                    rootState_subState = receiverStandby;
                    rootState_active = receiverStandby;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State alertReceival
        case alertReceival:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.alertReceival");
                    //#[ transition 4 
                    OUT_PORT(port_3)->confirmAlert();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.receiverStandby");
                    rootState_subState = receiverStandby;
                    rootState_active = receiverStandby;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendCallibrationRequest
        case sendCallibrationRequest:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendCallibrationRequest");
                    NOTIFY_STATE_ENTERED("ROOT.receiverStandby");
                    rootState_subState = receiverStandby;
                    rootState_active = receiverStandby;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
        }
        break;
        // State state_8
        case state_8:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_8");
                    NOTIFY_STATE_ENTERED("ROOT.receiverStandby");
                    rootState_subState = receiverStandby;
                    rootState_active = receiverStandby;
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
        }
        break;
        // State state_9
        case state_9:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("11");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9");
                    NOTIFY_STATE_ENTERED("ROOT.receiverStandby");
                    rootState_subState = receiverStandby;
                    rootState_active = receiverStandby;
                    NOTIFY_TRANSITION_TERMINATED("11");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus Receiver::receiverStandby_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(serwAktywuj_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("10");
            NOTIFY_STATE_EXITED("ROOT.receiverStandby");
            NOTIFY_STATE_ENTERED("ROOT.state_9");
            pushNullTransition();
            rootState_subState = state_9;
            rootState_active = state_9;
            //#[ state state_9.(Entry) 
            OUT_PORT(port_3)->aktywujStacje();
            //#]
            NOTIFY_TRANSITION_TERMINATED("10");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(serwSkalibruj_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("5");
            NOTIFY_STATE_EXITED("ROOT.receiverStandby");
            NOTIFY_STATE_ENTERED("ROOT.sendCallibrationRequest");
            pushNullTransition();
            rootState_subState = sendCallibrationRequest;
            rootState_active = sendCallibrationRequest;
            //#[ state sendCallibrationRequest.(Entry) 
            OUT_PORT(port_3)->calibrateRequest();
            //#]
            NOTIFY_TRANSITION_TERMINATED("5");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(SendAlert_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("3");
            NOTIFY_STATE_EXITED("ROOT.receiverStandby");
            NOTIFY_STATE_ENTERED("ROOT.alertReceival");
            pushNullTransition();
            rootState_subState = alertReceival;
            rootState_active = alertReceival;
            //#[ state alertReceival.(Entry) 
            auto vec = OUT_PORT(port_3)->getAlertDetails();
            std::cout << "======received alert=======" << std::endl;
            for (; iterator < static_cast<int>(vec.size()) ;iterator++) {
            	std::cout << "time: " << vec.at(iterator).first << " measured pollutant: " << vec.at(iterator).second.first << " level: " << vec.at(iterator).second.second << "%" << std::endl; 
            	Alert_TimeAndWhichParticulate.emplace_back(vec.at(iterator));
            }                                                                                                                    
            std::cout << "=============================" << std::endl;
            iterator = 0;
            //#]
            NOTIFY_TRANSITION_TERMINATED("3");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(serwZadajPakietu_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("2");
            NOTIFY_STATE_EXITED("ROOT.receiverStandby");
            NOTIFY_STATE_ENTERED("ROOT.begin");
            rootState_subState = begin;
            rootState_active = begin;
            //#[ state begin.(Entry) 
            OUT_PORT(port_3)->initialize();
            //#]
            rootState_timeout = scheduleTimeout(600, "ROOT.begin");
            NOTIFY_TRANSITION_TERMINATED("2");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(serwUspijStacje_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("8");
            NOTIFY_STATE_EXITED("ROOT.receiverStandby");
            NOTIFY_STATE_ENTERED("ROOT.state_8");
            pushNullTransition();
            rootState_subState = state_8;
            rootState_active = state_8;
            //#[ state state_8.(Entry) 
            OUT_PORT(port_3)->uspijStacje();
            //#]
            NOTIFY_TRANSITION_TERMINATED("8");
            res = eventConsumed;
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedReceiver::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("dataReceived", UNKNOWN2STRING(myReal->dataReceived));
    aomsAttributes->addAttribute("Alert_TimeAndWhichParticulate", UNKNOWN2STRING(myReal->Alert_TimeAndWhichParticulate));
    aomsAttributes->addAttribute("iterator", x2String(myReal->iterator));
    OMAnimatediInform::serializeAttributes(aomsAttributes);
    OMAnimatediSendAlert::serializeAttributes(aomsAttributes);
}

void OMAnimatedReceiver::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatediInform::serializeRelations(aomsRelations);
    OMAnimatediSendAlert::serializeRelations(aomsRelations);
}

void OMAnimatedReceiver::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Receiver::receiverStandby:
        {
            receiverStandby_serializeStates(aomsState);
        }
        break;
        case Receiver::begin:
        {
            begin_serializeStates(aomsState);
        }
        break;
        case Receiver::alertReceival:
        {
            alertReceival_serializeStates(aomsState);
        }
        break;
        case Receiver::sendCallibrationRequest:
        {
            sendCallibrationRequest_serializeStates(aomsState);
        }
        break;
        case Receiver::state_8:
        {
            state_8_serializeStates(aomsState);
        }
        break;
        case Receiver::state_9:
        {
            state_9_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedReceiver::state_9_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9");
}

void OMAnimatedReceiver::state_8_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_8");
}

void OMAnimatedReceiver::sendCallibrationRequest_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendCallibrationRequest");
}

void OMAnimatedReceiver::receiverStandby_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.receiverStandby");
}

void OMAnimatedReceiver::begin_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.begin");
}

void OMAnimatedReceiver::alertReceival_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.alertReceival");
}

static AOMClass* _ReceiverSuper[2] = {
OMAnimatediInform::staticGetClass(),
OMAnimatediSendAlert::staticGetClass()};
//#]

IMPLEMENT_REACTIVE_META_M_P(Receiver, Default, false, _ReceiverSuper, 2, OMAnimatedReceiver)

OMINIT_SUPERCLASS(iInform, OMAnimatediInform)

OMINIT_SUPERCLASS(iSendAlert, OMAnimatediSendAlert)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Receiver.cpp
*********************************************************************/
