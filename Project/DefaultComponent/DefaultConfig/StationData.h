/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: StationData
//!	Generated Date	: Tue, 14, Jul 2020  
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

//## class StationData
class StationData {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedStationData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## operation StationData(unsigned long long)
    StationData(unsigned long long time);
    
    //## operation StationData()
    StationData();
    
    //## auto_generated
    ~StationData();
    
    ////    Operations    ////
    
    //## operation get(int)
    double get(int which);
    
    //## operation getTime()
    unsigned long long getTime();
    
    //## operation set(int,double)
    void set(int which, double value);
    
    ////    Additional operations    ////

private :

    //## auto_generated
    double getBaro() const;
    
    //## auto_generated
    void setBaro(double p_baro);
    
    //## auto_generated
    double getCo() const;
    
    //## auto_generated
    void setCo(double p_co);
    
    //## auto_generated
    double getHygro() const;
    
    //## auto_generated
    void setHygro(double p_hygro);
    
    //## auto_generated
    double getNo2() const;
    
    //## auto_generated
    void setNo2(double p_no2);
    
    //## auto_generated
    double getO3() const;
    
    //## auto_generated
    void setO3(double p_o3);
    
    //## auto_generated
    double getPm1() const;
    
    //## auto_generated
    void setPm1(double p_pm1);
    
    //## auto_generated
    double getPm10() const;
    
    //## auto_generated
    void setPm10(double p_pm10);
    
    //## auto_generated
    double getPm2_5() const;
    
    //## auto_generated
    void setPm2_5(double p_pm2_5);
    
    //## auto_generated
    double getSo2() const;
    
    //## auto_generated
    void setSo2(double p_so2);
    
    //## auto_generated
    int getStationId() const;
    
    //## auto_generated
    void setStationId(int p_stationId);
    
    //## auto_generated
    double getThermo() const;
    
    //## auto_generated
    void setThermo(double p_thermo);
    
    //## auto_generated
    void setTime(unsigned long long p_time);
    
    ////    Attributes    ////

protected :

    double baro;		//## attribute baro
    
    double co;		//## attribute co
    
    double hygro;		//## attribute hygro
    
    double no2;		//## attribute no2
    
    double o3;		//## attribute o3
    
    double pm1;		//## attribute pm1
    
    double pm10;		//## attribute pm10
    
    double pm2_5;		//## attribute pm2_5
    
    double so2;		//## attribute so2
    
    int stationId;		//## attribute stationId
    
    double thermo;		//## attribute thermo
    
    unsigned long long time;		//## attribute time
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
