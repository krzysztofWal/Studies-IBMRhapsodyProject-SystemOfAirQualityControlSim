/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Receiver
//!	Generated Date	: Sat, 11, Jul 2020  
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
    itsIConfirmDataReceival = NULL;
    itsIInitialize = NULL;
    itsIPrint = NULL;
}

Receiver::port_3_C::~port_3_C() {
    cleanUpRelations();
}

void Receiver::port_3_C::confirmReceival() {
    
    if (itsIConfirmDataReceival != NULL) {
        itsIConfirmDataReceival->confirmReceival();
    }
    
}

iConfirmDataReceival* Receiver::port_3_C::getItsIConfirmDataReceival() {
    return this;
}

iInitialize* Receiver::port_3_C::getItsIInitialize() {
    return this;
}

iPrint* Receiver::port_3_C::getItsIPrint() {
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

StationData* Receiver::port_3_C::print() {
    StationData* res = NULL;
    if (itsIPrint != NULL) {
        res = itsIPrint->print();
    }
    return res;
}

void Receiver::port_3_C::setItsIConfirmDataReceival(iConfirmDataReceival* p_iConfirmDataReceival) {
    itsIConfirmDataReceival = p_iConfirmDataReceival;
}

void Receiver::port_3_C::setItsIInitialize(iInitialize* p_iInitialize) {
    itsIInitialize = p_iInitialize;
}

void Receiver::port_3_C::setItsIPrint(iPrint* p_iPrint) {
    itsIPrint = p_iPrint;
}

void Receiver::port_3_C::cleanUpRelations() {
    if(itsIConfirmDataReceival != NULL)
        {
            itsIConfirmDataReceival = NULL;
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

Receiver::Receiver(IOxfActive* theActiveContext) {
    NOTIFY_ACTIVE_CONSTRUCTOR(Receiver, Receiver(), 0, Default_Receiver_Receiver_SERIALIZE);
    setActiveContext(this, true);
    initRelations();
    initStatechart();
    //#[ operation Receiver()
    std::cout << "Constructed transmitter object" << this << std::endl;
    //#]
}

Receiver::~Receiver() {
    NOTIFY_DESTRUCTOR(~Receiver, false);
}

void Receiver::inform() {
    NOTIFY_OPERATION(inform, inform(), 0, Default_Receiver_inform_SERIALIZE);
    //#[ operation inform()
    GEN(Inform);
    std::cout << "contr to rec - 've got data you can have them" << std::endl;
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

std::vector<std::pair<int, int>> Receiver::getAlert_TimeAndWhichParticulate() const {
    return Alert_TimeAndWhichParticulate;
}

void Receiver::setAlert_TimeAndWhichParticulate(std::vector<std::pair<int, int>> p_Alert_TimeAndWhichParticulate) {
    Alert_TimeAndWhichParticulate = p_Alert_TimeAndWhichParticulate;
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

std::vector<StationData> Receiver::getDataReceived() const {
    return dataReceived;
}

void Receiver::setDataReceived(std::vector<StationData> p_dataReceived) {
    dataReceived = p_dataReceived;
}

void Receiver::initRelations() {
    if (get_port_5() != NULL) {
        get_port_5()->connectReceiver(this);
    }
}

void Receiver::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
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
            if(IS_EVENT_TYPE_OF(evBegin_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.receiverStandby");
                    NOTIFY_STATE_ENTERED("ROOT.begin");
                    rootState_subState = begin;
                    rootState_active = begin;
                    //#[ state begin.(Entry) 
                    OUT_PORT(port_3)->initialize();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State begin
        case begin:
        {
            if(IS_EVENT_TYPE_OF(SendAlert_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.begin");
                    //#[ transition 3 
                    std::cout << "rec received an alert" << std::endl;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.begin");
                    rootState_subState = begin;
                    rootState_active = begin;
                    //#[ state begin.(Entry) 
                    OUT_PORT(port_3)->initialize();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(Inform_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
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
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedReceiver::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("dataReceived", UNKNOWN2STRING(myReal->dataReceived));
    aomsAttributes->addAttribute("Alert_TimeAndWhichParticulate", UNKNOWN2STRING(myReal->Alert_TimeAndWhichParticulate));
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
        default:
            break;
    }
}

void OMAnimatedReceiver::receiverStandby_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.receiverStandby");
}

void OMAnimatedReceiver::begin_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.begin");
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
