/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: doubleFlowInterface
//!	Generated Date	: Wed, 1, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\doubleFlowInterface.h
*********************************************************************/

#ifndef doubleFlowInterface_H
#define doubleFlowInterface_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "FlowPortInterfaces.h"
//#[ ignore
//## package FlowPortInterfaces

//## ignore
class doubleFlowInterface {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    doubleFlowInterface();
    
    //## auto_generated
    virtual ~doubleFlowInterface() = 0;
    
    ////    Operations    ////
    
    //## operation SetValue(double,void *)
    virtual void SetValue(double data, void * pCaller = NULL) = 0;
};
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\doubleFlowInterface.h
*********************************************************************/
