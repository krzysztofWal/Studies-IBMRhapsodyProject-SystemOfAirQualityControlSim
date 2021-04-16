/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: iUspijStacje
//!	Generated Date	: Tue, 14, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\iUspijStacje.h
*********************************************************************/

#ifndef iUspijStacje_H
#define iUspijStacje_H

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

//## class iUspijStacje
class iUspijStacje {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatediUspijStacje;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    iUspijStacje();
    
    //## auto_generated
    virtual ~iUspijStacje() = 0;
    
    ////    Operations    ////
    
    //## operation uspijStacje()
    virtual void uspijStacje() = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatediUspijStacje : virtual public AOMInstance {
    DECLARE_META(iUspijStacje, OMAnimatediUspijStacje)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\iUspijStacje.h
*********************************************************************/
