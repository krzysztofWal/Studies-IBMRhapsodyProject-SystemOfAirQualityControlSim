/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: StationData
//!	Generated Date	: Fri, 10, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\StationData.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "StationData.h"
//#[ ignore
#define Default_StationData_set_SERIALIZE \
    aomsmethod->addAttribute("which", x2String(which));\
    aomsmethod->addAttribute("value", x2String(value));
#define Default_StationData_StationData_SERIALIZE aomsmethod->addAttribute("time", x2String(time));

#define OM_Default_StationData_StationData_1_SERIALIZE OM_NO_OP

#define Default_StationData_get_SERIALIZE aomsmethod->addAttribute("which", x2String(which));
//#]

//## package Default

//## class StationData
StationData::StationData(long time) : co(0), o3(0.), so2(0), stationId(0) {
    NOTIFY_CONSTRUCTOR(StationData, StationData(long), 1, Default_StationData_StationData_SERIALIZE);
    //#[ operation StationData(long)
    //std::cout << "Created StationData object" << std::endl;
    //#]
}

StationData::StationData() : co(0), o3(0.), so2(0), stationId(0) {
    NOTIFY_CONSTRUCTOR(StationData, StationData(), 0, OM_Default_StationData_StationData_1_SERIALIZE);
}

StationData::~StationData() {
    NOTIFY_DESTRUCTOR(~StationData, true);
}

double StationData::get(int which) {
    NOTIFY_OPERATION(get, get(int), 1, Default_StationData_get_SERIALIZE);
    //#[ operation get(int)
    switch(which){
    case 1:
    	return this->o3;
    case 2:
    	return this->co; 
    case 3:
    	return this->so2;
    case 4:
    	return this->no2;
    
    default:
    	std::cout << "Reached default in appendToPackage()" << std::endl;
    	return 0.0;
    }
    //#]
}

void StationData::set(int which, double value) {
    NOTIFY_OPERATION(set, set(int,double), 2, Default_StationData_set_SERIALIZE);
    //#[ operation set(int,double)
    switch(which){
    case 1:
    	o3 = value;
    	break;
    case 2:
    	co = value;
    	break;
    case 4:
    	no2 = value;
    	break;
    case 3:
    	so2 = value;
    	break;
    default:
    	std::cout << "Reached default in appendToPackage()" << std::endl;
    }
    //#]
}

double StationData::getCo() const {
    return co;
}

void StationData::setCo(double p_co) {
    co = p_co;
}

double StationData::getNo2() const {
    return no2;
}

void StationData::setNo2(double p_no2) {
    no2 = p_no2;
}

double StationData::getO3() const {
    return o3;
}

void StationData::setO3(double p_o3) {
    o3 = p_o3;
}

double StationData::getSo2() const {
    return so2;
}

void StationData::setSo2(double p_so2) {
    so2 = p_so2;
}

int StationData::getStationId() const {
    return stationId;
}

void StationData::setStationId(int p_stationId) {
    stationId = p_stationId;
}

long StationData::getTime() const {
    return time;
}

void StationData::setTime(long p_time) {
    time = p_time;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedStationData::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("o3", x2String(myReal->o3));
    aomsAttributes->addAttribute("time", x2String(myReal->time));
    aomsAttributes->addAttribute("stationId", x2String(myReal->stationId));
    aomsAttributes->addAttribute("co", x2String(myReal->co));
    aomsAttributes->addAttribute("so2", x2String(myReal->so2));
    aomsAttributes->addAttribute("no2", x2String(myReal->no2));
}
//#]

IMPLEMENT_META_P(StationData, Default, Default, false, OMAnimatedStationData)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\StationData.cpp
*********************************************************************/
