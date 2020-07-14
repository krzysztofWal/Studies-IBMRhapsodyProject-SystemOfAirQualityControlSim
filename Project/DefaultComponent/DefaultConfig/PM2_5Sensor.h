/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PM2_5Sensor
//!	Generated Date	: Tue, 14, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\PM2_5Sensor.h
*********************************************************************/

#ifndef PM2_5Sensor_H
#define PM2_5Sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## class PM2_5Sensor
#include "Sensor.h"
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
class Controller;

//## package Default

//## class PM2_5Sensor
class PM2_5Sensor : public Sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPM2_5Sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## operation PM2_5Sensor()
    PM2_5Sensor(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~PM2_5Sensor();
    
    ////    Operations    ////
    
    //## operation funcAb()
    virtual void funcAb();
    
    //## operation getDescription()
    virtual std::string getDescription();
    
    //## operation getId()
    virtual int getId();
    
    //## operation odczytajDane()
    virtual void odczytajDane();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    void setItsController(Controller* p_Controller);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void setDescription(std::string p_description);
    
    //## auto_generated
    void setId(int p_id);
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    std::string description;		//## attribute description
    
    int id;		//## attribute id
    
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
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPM2_5Sensor : public OMAnimatedSensor {
    DECLARE_REACTIVE_META(PM2_5Sensor, OMAnimatedPM2_5Sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void OczekiwanieSensor_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PM2_5Sensor.h
*********************************************************************/
