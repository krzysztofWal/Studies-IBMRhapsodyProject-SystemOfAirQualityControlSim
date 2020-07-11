/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: iCalibrateRequest
//!	Generated Date	: Sat, 11, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\iCalibrateRequest.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "iCalibrateRequest.h"
//#[ ignore
#define Default_iCalibrateRequest_iCalibrateRequest_SERIALIZE OM_NO_OP

#define Default_iCalibrateRequest_calibrateRequest_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class iCalibrateRequest
iCalibrateRequest::iCalibrateRequest() {
    NOTIFY_CONSTRUCTOR(iCalibrateRequest, iCalibrateRequest(), 0, Default_iCalibrateRequest_iCalibrateRequest_SERIALIZE);
}

iCalibrateRequest::~iCalibrateRequest() {
    NOTIFY_DESTRUCTOR(~iCalibrateRequest, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(iCalibrateRequest, Default, Default, false, OMAnimatediCalibrateRequest)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\iCalibrateRequest.cpp
*********************************************************************/
