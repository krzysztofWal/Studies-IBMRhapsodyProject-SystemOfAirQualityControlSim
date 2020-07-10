/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: iPrint
//!	Generated Date	: Fri, 10, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\iPrint.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "iPrint.h"
//#[ ignore
#define Default_iPrint_iPrint_SERIALIZE OM_NO_OP

#define Default_iPrint_print_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class iPrint
iPrint::iPrint() {
    NOTIFY_CONSTRUCTOR(iPrint, iPrint(), 0, Default_iPrint_iPrint_SERIALIZE);
}

iPrint::~iPrint() {
    NOTIFY_DESTRUCTOR(~iPrint, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(iPrint, Default, Default, false, OMAnimatediPrint)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\iPrint.cpp
*********************************************************************/
