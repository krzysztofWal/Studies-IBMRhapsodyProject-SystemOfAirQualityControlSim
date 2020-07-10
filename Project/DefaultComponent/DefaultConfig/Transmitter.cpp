/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Transmitter
//!	Generated Date	: Fri, 10, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Transmitter.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Transmitter.h"
//#[ ignore
#define Default_Transmitter_Transmitter_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Transmitter
//#[ ignore
Transmitter::port_3_C::port_3_C() : _p_(0) {
    itsIPrint = NULL;
}

Transmitter::port_3_C::~port_3_C() {
    cleanUpRelations();
}

iPrint* Transmitter::port_3_C::getItsIPrint() {
    return this;
}

iPrint* Transmitter::port_3_C::getOutBound() {
    return this;
}

void Transmitter::port_3_C::print() {
    
    if (itsIPrint != NULL) {
        itsIPrint->print();
    }
    
}

void Transmitter::port_3_C::setItsIPrint(iPrint* p_iPrint) {
    itsIPrint = p_iPrint;
}

void Transmitter::port_3_C::cleanUpRelations() {
    if(itsIPrint != NULL)
        {
            itsIPrint = NULL;
        }
}
//#]

Transmitter::Transmitter(IOxfActive* theActiveContext) {
    NOTIFY_ACTIVE_CONSTRUCTOR(Transmitter, Transmitter(), 0, Default_Transmitter_Transmitter_SERIALIZE);
    setActiveContext(this, true);
    initStatechart();
    //#[ operation Transmitter()
    std::cout << "Constructed transmitter object" << this << std::endl;
    //#]
}

Transmitter::~Transmitter() {
    NOTIFY_DESTRUCTOR(~Transmitter, true);
}

Transmitter::port_3_C* Transmitter::getPort_3() const {
    return (Transmitter::port_3_C*) &port_3;
}

Transmitter::port_3_C* Transmitter::get_port_3() const {
    return (Transmitter::port_3_C*) &port_3;
}

std::vector<std::pair<int, int>> Transmitter::getAlert_StationIDandWhichParticulate() const {
    return Alert_StationIDandWhichParticulate;
}

void Transmitter::setAlert_StationIDandWhichParticulate(std::vector<std::pair<int, int>> p_Alert_StationIDandWhichParticulate) {
    Alert_StationIDandWhichParticulate = p_Alert_StationIDandWhichParticulate;
}

bool Transmitter::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

std::vector<StationData*> Transmitter::getDataReceived() const {
    return dataReceived;
}

void Transmitter::setDataReceived(std::vector<StationData*> p_dataReceived) {
    dataReceived = p_dataReceived;
}

void Transmitter::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Transmitter::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.receiverStandby");
        rootState_subState = receiverStandby;
        rootState_active = receiverStandby;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Transmitter::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State receiverStandby
    if(rootState_active == receiverStandby)
        {
            if(IS_EVENT_TYPE_OF(evGonnaSend_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.receiverStandby");
                    //#[ transition 1 
                    OUT_PORT(port_3)->print();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.receiverStandby");
                    rootState_subState = receiverStandby;
                    rootState_active = receiverStandby;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTransmitter::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("dataReceived", UNKNOWN2STRING(myReal->dataReceived));
    aomsAttributes->addAttribute("Alert_StationIDandWhichParticulate", UNKNOWN2STRING(myReal->Alert_StationIDandWhichParticulate));
}

void OMAnimatedTransmitter::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == Transmitter::receiverStandby)
        {
            receiverStandby_serializeStates(aomsState);
        }
}

void OMAnimatedTransmitter::receiverStandby_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.receiverStandby");
}
//#]

IMPLEMENT_REACTIVE_META_P(Transmitter, Default, Default, false, OMAnimatedTransmitter)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Transmitter.cpp
*********************************************************************/
