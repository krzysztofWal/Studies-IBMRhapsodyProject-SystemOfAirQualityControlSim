/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: iSendAlert
//!	Generated Date	: Sat, 11, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\iSendAlert.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "iSendAlert.h"
//#[ ignore
#define Default_iSendAlert_iSendAlert_SERIALIZE OM_NO_OP

#define Default_iSendAlert_sendAlert_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class iSendAlert
iSendAlert::iSendAlert() {
    NOTIFY_CONSTRUCTOR(iSendAlert, iSendAlert(), 0, Default_iSendAlert_iSendAlert_SERIALIZE);
}

iSendAlert::~iSendAlert() {
    NOTIFY_DESTRUCTOR(~iSendAlert, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(iSendAlert, Default, Default, false, OMAnimatediSendAlert)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\iSendAlert.cpp
*********************************************************************/
