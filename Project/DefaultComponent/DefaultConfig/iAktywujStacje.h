/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: iAktywujStacje
//!	Generated Date	: Tue, 14, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\iAktywujStacje.h
*********************************************************************/

#ifndef iAktywujStacje_H
#define iAktywujStacje_H

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

//## class iAktywujStacje
class iAktywujStacje {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatediAktywujStacje;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    iAktywujStacje();
    
    //## auto_generated
    virtual ~iAktywujStacje() = 0;
    
    ////    Operations    ////
    
    //## operation aktywujStacje()
    virtual void aktywujStacje() = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatediAktywujStacje : virtual public AOMInstance {
    DECLARE_META(iAktywujStacje, OMAnimatediAktywujStacje)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\iAktywujStacje.h
*********************************************************************/
