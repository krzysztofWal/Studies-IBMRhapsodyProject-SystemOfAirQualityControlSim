/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Hygrometer
//!	Generated Date	: Fri, 10, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Hygrometer.h
*********************************************************************/

#ifndef Hygrometer_H
#define Hygrometer_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## class Hygrometer
#include "Sensor.h"
//## auto_generated
#include <map>
//## auto_generated
#include <utility>
//## auto_generated
#include <vector>
//## auto_generated
class Controller;

//## package Default

//## class Hygrometer
class Hygrometer : public Sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedHygrometer;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Hygrometer();
    
    //## auto_generated
    virtual ~Hygrometer();
    
    ////    Operations    ////
    
    //## operation funcAb()
    virtual void funcAb();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    void setItsController(Controller* p_Controller);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Controller* itsController;		//## link itsController
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsController(Controller* p_Controller);
    
    //## auto_generated
    void _setItsController(Controller* p_Controller);
    
    //## auto_generated
    void _clearItsController();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedHygrometer : public OMAnimatedSensor {
    DECLARE_META(Hygrometer, OMAnimatedHygrometer)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Hygrometer.h
*********************************************************************/