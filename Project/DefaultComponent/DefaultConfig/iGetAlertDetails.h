/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: iGetAlertDetails
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\iGetAlertDetails.h
*********************************************************************/

#ifndef iGetAlertDetails_H
#define iGetAlertDetails_H

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
//## package Default

//## class iGetAlertDetails
class iGetAlertDetails {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatediGetAlertDetails;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    iGetAlertDetails();
    
    //## auto_generated
    virtual ~iGetAlertDetails() = 0;
    
    ////    Operations    ////
    
    //## operation getAlertDetails()
    virtual std::vector<std::pair<unsigned long long, int>> getAlertDetails() = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatediGetAlertDetails : virtual public AOMInstance {
    DECLARE_META(iGetAlertDetails, OMAnimatediGetAlertDetails)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\iGetAlertDetails.h
*********************************************************************/
