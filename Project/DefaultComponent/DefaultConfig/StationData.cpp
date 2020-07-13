/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: StationData
//!	Generated Date	: Mon, 13, Jul 2020  
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

#define Default_StationData_getTime_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class StationData
StationData::StationData(unsigned long long time) : baro(0), co(0), hygro(0), no2(0), o3(0.), pm1(0), pm10(0), pm2_5(0), so2(0), stationId(0), thermo(0), time(time) {
    NOTIFY_CONSTRUCTOR(StationData, StationData(unsigned long long), 1, Default_StationData_StationData_SERIALIZE);
    //#[ operation StationData(unsigned long long)
    //std::cout << "Created StationData object with time: "<< getTime() << std::endl;
    //#]
}

StationData::StationData() : baro(0), co(0), hygro(0), no2(0), o3(0.), pm1(0), pm10(0), pm2_5(0), so2(0), stationId(0), thermo(0), time(0) {
    NOTIFY_CONSTRUCTOR(StationData, StationData(), 0, OM_Default_StationData_StationData_1_SERIALIZE);
    //#[ operation StationData()
    //#]
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
    case 5:
    	return this->pm1;
    case 6:
    	return this->pm2_5;
    case 7:
    	return this->pm10;
    case 8:
        return this->thermo;
    case 9:
    	return this->hygro;
    case 10:
    	return this->baro;
    default:
    	std::cout << "Reached default in get() in StationData" << std::endl;
    	return 0.0;
    }
    //#]
}

unsigned long long StationData::getTime() {
    NOTIFY_OPERATION(getTime, getTime(), 0, Default_StationData_getTime_SERIALIZE);
    //#[ operation getTime()
    return time;
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
    case 5:
    	pm1 = value;
    	break;
    case 6:
    	pm2_5 = value;
    	break;
    case 7:
    	pm10 = value;
    	break;
    case 8:
        thermo = value;
        break;
    case 9:
    	hygro = value;
    	break;
    case 10:
    	baro = value;
    	break;
    default:
    	std::cout << "Reached default in set() in StationData" << std::endl;
    }
    //#]
}

double StationData::getBaro() const {
    return baro;
}

void StationData::setBaro(double p_baro) {
    baro = p_baro;
}

double StationData::getCo() const {
    return co;
}

void StationData::setCo(double p_co) {
    co = p_co;
}

double StationData::getHygro() const {
    return hygro;
}

void StationData::setHygro(double p_hygro) {
    hygro = p_hygro;
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

double StationData::getPm1() const {
    return pm1;
}

void StationData::setPm1(double p_pm1) {
    pm1 = p_pm1;
}

double StationData::getPm10() const {
    return pm10;
}

void StationData::setPm10(double p_pm10) {
    pm10 = p_pm10;
}

double StationData::getPm2_5() const {
    return pm2_5;
}

void StationData::setPm2_5(double p_pm2_5) {
    pm2_5 = p_pm2_5;
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

double StationData::getThermo() const {
    return thermo;
}

void StationData::setThermo(double p_thermo) {
    thermo = p_thermo;
}

void StationData::setTime(unsigned long long p_time) {
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
    aomsAttributes->addAttribute("pm1", x2String(myReal->pm1));
    aomsAttributes->addAttribute("pm2_5", x2String(myReal->pm2_5));
    aomsAttributes->addAttribute("pm10", x2String(myReal->pm10));
    aomsAttributes->addAttribute("hygro", x2String(myReal->hygro));
    aomsAttributes->addAttribute("thermo", x2String(myReal->thermo));
    aomsAttributes->addAttribute("baro", x2String(myReal->baro));
}
//#]

IMPLEMENT_META_P(StationData, Default, Default, false, OMAnimatedStationData)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\StationData.cpp
*********************************************************************/
