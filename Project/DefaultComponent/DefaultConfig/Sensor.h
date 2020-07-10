/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sensor
//!	Generated Date	: Fri, 10, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Sensor.h
*********************************************************************/

#ifndef Sensor_H
#define Sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <map>
//## auto_generated
#include <utility>
//## auto_generated
#include <vector>
//## link itsController
class Controller;

//## package Default

//## class Sensor
class Sensor : public OMThread {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Sensor();
    
    //## auto_generated
    virtual ~Sensor();
    
    ////    Operations    ////
    
    //## operation funcAb()
    virtual void funcAb() = 0;
    
    //## operation odczytajDane()
    virtual double odczytajDane();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    void setItsController(Controller* p_Controller);

protected :

    //## auto_generated
    std::string getDescription() const;
    
    //## auto_generated
    void setDescription(std::string p_description);
    
    //## auto_generated
    int getId() const;
    
    //## auto_generated
    void setId(int p_id);
    
    //## auto_generated
    double getRecentValue() const;
    
    //## auto_generated
    void setRecentValue(double p_recentValue);
    
    //## auto_generated
    bool getStatus() const;
    
    //## auto_generated
    void setStatus(bool p_status);
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    std::string description;		//## attribute description
    
    int id;		//## attribute id
    
    double recentValue;		//## attribute recentValue
    
    bool status;		//## attribute status
    
    ////    Relations and components    ////
    
    Controller* itsController;		//## link itsController
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSensor : virtual public AOMInstance {
    DECLARE_META(Sensor, OMAnimatedSensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Sensor.h
*********************************************************************/
