/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: NO2Sensor
//!	Generated Date	: Tue, 7, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\NO2Sensor.h
*********************************************************************/

#ifndef NO2Sensor_H
#define NO2Sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## class NO2Sensor
#include "Sensor.h"
//## auto_generated
#include <map>
//## auto_generated
#include <utility>
//## auto_generated
#include <vector>
//## auto_generated
class Station;

//## package Default

//## class NO2Sensor
class NO2Sensor : public Sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedNO2Sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    NO2Sensor();
    
    //## auto_generated
    virtual ~NO2Sensor();
    
    ////    Operations    ////
    
    //## operation odczytajDane()
    virtual void odczytajDane();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Station* getItsStation_1() const;
    
    //## auto_generated
    void setItsStation_1(Station* p_Station);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Station* itsStation_1;		//## link itsStation_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsStation_1(Station* p_Station);
    
    //## auto_generated
    void _setItsStation_1(Station* p_Station);
    
    //## auto_generated
    void _clearItsStation_1();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedNO2Sensor : public OMAnimatedSensor {
    DECLARE_META(NO2Sensor, OMAnimatedNO2Sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\NO2Sensor.h
*********************************************************************/
