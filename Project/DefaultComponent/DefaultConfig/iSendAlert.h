/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: iSendAlert
//!	Generated Date	: Tue, 14, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\iSendAlert.h
*********************************************************************/

#ifndef iSendAlert_H
#define iSendAlert_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <map>
//## auto_generated
#include <utility>
//## auto_generated
#include <vector>
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

//## class iSendAlert
class iSendAlert {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatediSendAlert;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    iSendAlert();
    
    //## auto_generated
    virtual ~iSendAlert() = 0;
    
    ////    Operations    ////
    
    //## operation sendAlert()
    virtual void sendAlert() = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatediSendAlert : virtual public AOMInstance {
    DECLARE_META(iSendAlert, OMAnimatediSendAlert)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\iSendAlert.h
*********************************************************************/
