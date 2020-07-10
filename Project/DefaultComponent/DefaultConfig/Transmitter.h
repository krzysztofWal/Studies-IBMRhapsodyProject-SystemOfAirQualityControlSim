/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Transmitter
//!	Generated Date	: Fri, 10, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Transmitter.h
*********************************************************************/

#ifndef Transmitter_H
#define Transmitter_H

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
//## class port_3_C
#include "iPrint.h"
//## package Default

//## class Transmitter
class Transmitter : public OMThread, public OMReactive {
public :

//#[ ignore
    //## package Default
    class port_3_C : public iPrint {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        port_3_C();
        
        //## auto_generated
        virtual ~port_3_C();
        
        ////    Operations    ////
        
        //## auto_generated
        iPrint* getItsIPrint();
        
        //## auto_generated
        iPrint* getOutBound();
        
        //## auto_generated
        virtual void print();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIPrint(iPrint* p_iPrint);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        iPrint* itsIPrint;		//## link itsIPrint
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedTransmitter;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## operation Transmitter()
    Transmitter(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Transmitter();
    
    ////    Additional operations    ////
    
    //## auto_generated
    port_3_C* getPort_3() const;
    
    //## auto_generated
    port_3_C* get_port_3() const;
    
    //## auto_generated
    std::vector<std::pair<int, int>> getAlert_StationIDandWhichParticulate() const;
    
    //## auto_generated
    void setAlert_StationIDandWhichParticulate(std::vector<std::pair<int, int>> p_Alert_StationIDandWhichParticulate);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    std::vector<StationData*> getDataReceived() const;
    
    //## auto_generated
    void setDataReceived(std::vector<StationData*> p_dataReceived);
    
    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////
    
    std::vector<std::pair<int, int>> Alert_StationIDandWhichParticulate;		//## attribute Alert_StationIDandWhichParticulate
    
    std::vector<StationData*> dataReceived;		//## attribute dataReceived
    
    ////    Relations and components    ////
    
//#[ ignore
    port_3_C port_3;
//#]

    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // receiverStandby:
    //## statechart_method
    inline bool receiverStandby_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Transmitter_Enum {
        OMNonState = 0,
        receiverStandby = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTransmitter : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Transmitter, OMAnimatedTransmitter)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void receiverStandby_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Transmitter::rootState_IN() const {
    return true;
}

inline bool Transmitter::receiverStandby_IN() const {
    return rootState_subState == receiverStandby;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Transmitter.h
*********************************************************************/
