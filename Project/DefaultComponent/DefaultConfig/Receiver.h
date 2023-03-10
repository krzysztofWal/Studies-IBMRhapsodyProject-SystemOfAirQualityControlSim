/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Receiver
//!	Generated Date	: Tue, 14, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Receiver.h
*********************************************************************/

#ifndef Receiver_H
#define Receiver_H

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
//## class Receiver
#include "iInform.h"
//## class Receiver
#include "iSendAlert.h"
//## dependency StationData
#include "StationData.h"
//## auto_generated
#include <map>
//## auto_generated
#include <utility>
//## auto_generated
#include <vector>
//## auto_generated
#include <array>
//## class port_3_C
#include "iAktywujStacje.h"
//## class port_3_C
#include "iCalibrateRequest.h"
//## class port_3_C
#include "iConfirmAlertReceival.h"
//## class port_3_C
#include "iConfirmDataReceival.h"
//## class port_3_C
#include "iGetAlertDetails.h"
//## class port_3_C
#include "iInitialize.h"
//## class port_3_C
#include "iPrint.h"
//## class port_3_C
#include "iUspijStacje.h"
//## auto_generated
#include <fstream>
//## auto_generated
#include <climits>
//## auto_generated
#include <string>
//## auto_generated
#include <cstdlib>
//## auto_generated
#include <ctime>
//## auto_generated
#include <math.h>
//## package Default

//## class Receiver
class Receiver : public OMThread, public OMReactive, public iInform, public iSendAlert {
public :

//#[ ignore
    //## package Default
    class port_3_C : public iPrint, public iInitialize, public iConfirmDataReceival, public iGetAlertDetails, public iCalibrateRequest, public iConfirmAlertReceival, public iUspijStacje, public iAktywujStacje {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        port_3_C();
        
        //## auto_generated
        virtual ~port_3_C();
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void aktywujStacje();
        
        //## auto_generated
        virtual void calibrateRequest();
        
        //## auto_generated
        virtual void confirmAlert();
        
        //## auto_generated
        virtual void confirmReceival();
        
        //## auto_generated
        virtual std::vector<std::pair<unsigned long long,std::pair<int,int>>> getAlertDetails();
        
        //## auto_generated
        iAktywujStacje* getItsIAktywujStacje();
        
        //## auto_generated
        iCalibrateRequest* getItsICalibrateRequest();
        
        //## auto_generated
        iConfirmAlertReceival* getItsIConfirmAlertReceival();
        
        //## auto_generated
        iConfirmDataReceival* getItsIConfirmDataReceival();
        
        //## auto_generated
        iGetAlertDetails* getItsIGetAlertDetails();
        
        //## auto_generated
        iInitialize* getItsIInitialize();
        
        //## auto_generated
        iPrint* getItsIPrint();
        
        //## auto_generated
        iUspijStacje* getItsIUspijStacje();
        
        //## auto_generated
        Receiver::port_3_C* getOutBound();
        
        //## auto_generated
        virtual void initialize();
        
        //## auto_generated
        virtual StationData print();
        
        //## auto_generated
        virtual void uspijStacje();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIAktywujStacje(iAktywujStacje* p_iAktywujStacje);
        
        //## auto_generated
        void setItsICalibrateRequest(iCalibrateRequest* p_iCalibrateRequest);
        
        //## auto_generated
        void setItsIConfirmAlertReceival(iConfirmAlertReceival* p_iConfirmAlertReceival);
        
        //## auto_generated
        void setItsIConfirmDataReceival(iConfirmDataReceival* p_iConfirmDataReceival);
        
        //## auto_generated
        void setItsIGetAlertDetails(iGetAlertDetails* p_iGetAlertDetails);
        
        //## auto_generated
        void setItsIInitialize(iInitialize* p_iInitialize);
        
        //## auto_generated
        void setItsIPrint(iPrint* p_iPrint);
        
        //## auto_generated
        void setItsIUspijStacje(iUspijStacje* p_iUspijStacje);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        iAktywujStacje* itsIAktywujStacje;		//## link itsIAktywujStacje
        
        iCalibrateRequest* itsICalibrateRequest;		//## link itsICalibrateRequest
        
        iConfirmAlertReceival* itsIConfirmAlertReceival;		//## link itsIConfirmAlertReceival
        
        iConfirmDataReceival* itsIConfirmDataReceival;		//## link itsIConfirmDataReceival
        
        iGetAlertDetails* itsIGetAlertDetails;		//## link itsIGetAlertDetails
        
        iInitialize* itsIInitialize;		//## link itsIInitialize
        
        iPrint* itsIPrint;		//## link itsIPrint
        
        iUspijStacje* itsIUspijStacje;		//## link itsIUspijStacje
    };
    
    //## package Default
    class port_5_C : public iInform, public iSendAlert {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        port_5_C();
        
        //## auto_generated
        virtual ~port_5_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectReceiver(Receiver* part);
        
        //## auto_generated
        iInform* getItsIInform();
        
        //## auto_generated
        iSendAlert* getItsISendAlert();
        
        //## auto_generated
        virtual void inform();
        
        //## auto_generated
        virtual void sendAlert();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIInform(iInform* p_iInform);
        
        //## auto_generated
        void setItsISendAlert(iSendAlert* p_iSendAlert);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        iInform* itsIInform;		//## link itsIInform
        
        iSendAlert* itsISendAlert;		//## link itsISendAlert
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedReceiver;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Receiver(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~Receiver();
    
    ////    Operations    ////
    
    //## operation inform()
    virtual void inform();
    
    //## operation sendAlert()
    virtual void sendAlert();
    
    ////    Additional operations    ////
    
    //## auto_generated
    port_3_C* getPort_3() const;
    
    //## auto_generated
    port_3_C* get_port_3() const;
    
    //## auto_generated
    port_5_C* getPort_5() const;
    
    //## auto_generated
    port_5_C* get_port_5() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    std::vector<std::pair<unsigned long long, std::pair<int,int>>> getAlert_TimeAndWhichParticulate() const;
    
    //## auto_generated
    void setAlert_TimeAndWhichParticulate(std::vector<std::pair<unsigned long long, std::pair<int,int>>> p_Alert_TimeAndWhichParticulate);
    
    //## auto_generated
    std::vector<StationData> getDataReceived() const;
    
    //## auto_generated
    void setDataReceived(std::vector<StationData> p_dataReceived);
    
    //## auto_generated
    int getIterator() const;
    
    //## auto_generated
    void setIterator(int p_iterator);
    
    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    std::vector<std::pair<unsigned long long, std::pair<int,int>>> Alert_TimeAndWhichParticulate;		//## attribute Alert_TimeAndWhichParticulate
    
    std::vector<StationData> dataReceived;		//## attribute dataReceived
    
    int iterator;		//## attribute iterator
    
    ////    Relations and components    ////
    
//#[ ignore
    port_3_C port_3;
    
    port_5_C port_5;
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
    
    // state_9:
    //## statechart_method
    inline bool state_9_IN() const;
    
    // state_8:
    //## statechart_method
    inline bool state_8_IN() const;
    
    // sendCallibrationRequest:
    //## statechart_method
    inline bool sendCallibrationRequest_IN() const;
    
    // receiverStandby:
    //## statechart_method
    inline bool receiverStandby_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus receiverStandby_handleEvent();
    
    // begin:
    //## statechart_method
    inline bool begin_IN() const;
    
    // alertReceival:
    //## statechart_method
    inline bool alertReceival_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Receiver_Enum {
        OMNonState = 0,
        state_9 = 1,
        state_8 = 2,
        sendCallibrationRequest = 3,
        receiverStandby = 4,
        begin = 5,
        alertReceival = 6
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedReceiver : public OMAnimatediInform, public OMAnimatediSendAlert {
    DECLARE_REACTIVE_META(Receiver, OMAnimatedReceiver)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_9_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_8_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendCallibrationRequest_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void receiverStandby_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void begin_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void alertReceival_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Receiver::rootState_IN() const {
    return true;
}

inline bool Receiver::state_9_IN() const {
    return rootState_subState == state_9;
}

inline bool Receiver::state_8_IN() const {
    return rootState_subState == state_8;
}

inline bool Receiver::sendCallibrationRequest_IN() const {
    return rootState_subState == sendCallibrationRequest;
}

inline bool Receiver::receiverStandby_IN() const {
    return rootState_subState == receiverStandby;
}

inline bool Receiver::begin_IN() const {
    return rootState_subState == begin;
}

inline bool Receiver::alertReceival_IN() const {
    return rootState_subState == alertReceival;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Receiver.h
*********************************************************************/
