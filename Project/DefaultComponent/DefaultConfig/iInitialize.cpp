/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: iInitialize
//!	Generated Date	: Sat, 11, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\iInitialize.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "iInitialize.h"
//#[ ignore
#define Default_iInitialize_iInitialize_SERIALIZE OM_NO_OP

#define Default_iInitialize_initialize_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class iInitialize
iInitialize::iInitialize() {
    NOTIFY_CONSTRUCTOR(iInitialize, iInitialize(), 0, Default_iInitialize_iInitialize_SERIALIZE);
}

iInitialize::~iInitialize() {
    NOTIFY_DESTRUCTOR(~iInitialize, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(iInitialize, Default, Default, false, OMAnimatediInitialize)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\iInitialize.cpp
*********************************************************************/
