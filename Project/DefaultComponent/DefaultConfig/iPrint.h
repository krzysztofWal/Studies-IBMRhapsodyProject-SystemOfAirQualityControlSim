/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: iPrint
//!	Generated Date	: Sat, 11, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\iPrint.h
*********************************************************************/

#ifndef iPrint_H
#define iPrint_H

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
//## operation print()
class StationData;

//## package Default

//## class iPrint
class iPrint {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatediPrint;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    iPrint();
    
    //## auto_generated
    virtual ~iPrint() = 0;
    
    ////    Operations    ////
    
    //## operation print()
    virtual StationData* print() = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatediPrint : virtual public AOMInstance {
    DECLARE_META(iPrint, OMAnimatediPrint)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\iPrint.h
*********************************************************************/
