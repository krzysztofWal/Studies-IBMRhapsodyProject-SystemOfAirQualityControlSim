/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: StationData
//!	Generated Date	: Fri, 10, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\StationData.h
*********************************************************************/

#ifndef StationData_H
#define StationData_H

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
//## package Default

//## class StationData
class StationData {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedStationData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## operation StationData(long)
    StationData(long time);
    
    //## auto_generated
    StationData();
    
    //## auto_generated
    ~StationData();
    
    ////    Operations    ////
    
    //## operation get(int)
    double get(int which);
    
    //## operation set(int,double)
    void set(int which, double value);
    
    ////    Additional operations    ////
    
    //## auto_generated
    double getCo() const;
    
    //## auto_generated
    void setCo(double p_co);
    
    //## auto_generated
    double getNo2() const;
    
    //## auto_generated
    void setNo2(double p_no2);
    
    //## auto_generated
    double getO3() const;
    
    //## auto_generated
    void setO3(double p_o3);
    
    //## auto_generated
    double getSo2() const;
    
    //## auto_generated
    void setSo2(double p_so2);
    
    //## auto_generated
    int getStationId() const;
    
    //## auto_generated
    void setStationId(int p_stationId);
    
    //## auto_generated
    long getTime() const;
    
    //## auto_generated
    void setTime(long p_time);
    
    ////    Attributes    ////

protected :

    double co;		//## attribute co
    
    double no2;		//## attribute no2
    
    double o3;		//## attribute o3
    
    double so2;		//## attribute so2
    
    int stationId;		//## attribute stationId
    
    long time;		//## attribute time
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedStationData : virtual public AOMInstance {
    DECLARE_META(StationData, OMAnimatedStationData)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\StationData.h
*********************************************************************/
