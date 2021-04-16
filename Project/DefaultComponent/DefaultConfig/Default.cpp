/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Tue, 14, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
//## classInstance itsController
#include "Controller.h"
//## classInstance itsReceiver
#include "Receiver.h"
//## auto_generated
#include "Barometer.h"
//## auto_generated
#include "CO_Sensor.h"
//## auto_generated
#include "Hygrometer.h"
//## auto_generated
#include "iAktywujStacje.h"
//## auto_generated
#include "iCalibrateRequest.h"
//## auto_generated
#include "iConfirmAlertReceival.h"
//## auto_generated
#include "iConfirmDataReceival.h"
//## auto_generated
#include "iGetAlertDetails.h"
//## auto_generated
#include "iInform.h"
//## auto_generated
#include "iInitialize.h"
//## auto_generated
#include "iPrint.h"
//## auto_generated
#include "iSendAlert.h"
//## auto_generated
#include "iUspijStacje.h"
//## auto_generated
#include "NO2_Sensor.h"
//## auto_generated
#include "O3_Sensor.h"
//## auto_generated
#include "PM10_Sensor.h"
//## auto_generated
#include "PM1_Sensor.h"
//## auto_generated
#include "PM2_5Sensor.h"
//## auto_generated
#include "Sensor.h"
//## auto_generated
#include "SO2_Sensor.h"
//## auto_generated
#include "StationData.h"
//## auto_generated
#include "Thermometer.h"
//## auto_generated
#include "Timer.h"
//#[ ignore
#define Initialize_SERIALIZE OM_NO_OP

#define Initialize_UNSERIALIZE OM_NO_OP

#define Initialize_CONSTRUCTOR Initialize()

#define sendReadFromSensor_SERIALIZE OMADD_SER(valueBeingSent, x2String(myEvent->valueBeingSent))

#define sendReadFromSensor_UNSERIALIZE OMADD_UNSER(double, valueBeingSent, OMDestructiveString2X)

#define sendReadFromSensor_CONSTRUCTOR sendReadFromSensor(valueBeingSent)

#define create_SERIALIZE OMADD_SER(time, x2String(myEvent->time))

#define create_UNSERIALIZE OMADD_UNSER(long, time, OMDestructiveString2X)

#define create_CONSTRUCTOR create(time)

#define evInicjujWyslaniePakietu_SERIALIZE OM_NO_OP

#define evInicjujWyslaniePakietu_UNSERIALIZE OM_NO_OP

#define evInicjujWyslaniePakietu_CONSTRUCTOR evInicjujWyslaniePakietu()

#define potwierdzOdbior_SERIALIZE OM_NO_OP

#define potwierdzOdbior_UNSERIALIZE OM_NO_OP

#define potwierdzOdbior_CONSTRUCTOR potwierdzOdbior()

#define ConfirmRecival_SERIALIZE OM_NO_OP

#define ConfirmRecival_UNSERIALIZE OM_NO_OP

#define ConfirmRecival_CONSTRUCTOR ConfirmRecival()

#define Inform_SERIALIZE OM_NO_OP

#define Inform_UNSERIALIZE OM_NO_OP

#define Inform_CONSTRUCTOR Inform()

#define SendAlert_SERIALIZE OM_NO_OP

#define SendAlert_UNSERIALIZE OM_NO_OP

#define SendAlert_CONSTRUCTOR SendAlert()

#define serwZadajPakietu_SERIALIZE OM_NO_OP

#define serwZadajPakietu_UNSERIALIZE OM_NO_OP

#define serwZadajPakietu_CONSTRUCTOR serwZadajPakietu()

#define readSensor_SERIALIZE OM_NO_OP

#define readSensor_UNSERIALIZE OM_NO_OP

#define readSensor_CONSTRUCTOR readSensor()

#define timerCzytajSensory_SERIALIZE OMADD_SER(time, x2String(myEvent->time))

#define timerCzytajSensory_UNSERIALIZE OMADD_UNSER(unsigned long, time, OMDestructiveString2X)

#define timerCzytajSensory_CONSTRUCTOR timerCzytajSensory(time)

#define serwSkalibruj_SERIALIZE OM_NO_OP

#define serwSkalibruj_UNSERIALIZE OM_NO_OP

#define serwSkalibruj_CONSTRUCTOR serwSkalibruj()

#define callibrateCauseRequested_SERIALIZE OM_NO_OP

#define callibrateCauseRequested_UNSERIALIZE OM_NO_OP

#define callibrateCauseRequested_CONSTRUCTOR callibrateCauseRequested()

#define envSkalibruj_SERIALIZE OM_NO_OP

#define envSkalibruj_UNSERIALIZE OM_NO_OP

#define envSkalibruj_CONSTRUCTOR envSkalibruj()

#define requestTime_SERIALIZE OM_NO_OP

#define requestTime_UNSERIALIZE OM_NO_OP

#define requestTime_CONSTRUCTOR requestTime()

#define provideTime_SERIALIZE OMADD_SER(time, x2String(myEvent->time))

#define provideTime_UNSERIALIZE OMADD_UNSER(unsigned long, time, OMDestructiveString2X)

#define provideTime_CONSTRUCTOR provideTime(time)

#define inicjujOdczytTimer_SERIALIZE OM_NO_OP

#define inicjujOdczytTimer_UNSERIALIZE OM_NO_OP

#define inicjujOdczytTimer_CONSTRUCTOR inicjujOdczytTimer()

#define callibrated_SERIALIZE OM_NO_OP

#define callibrated_UNSERIALIZE OM_NO_OP

#define callibrated_CONSTRUCTOR callibrated()

#define potwierdzSygnalOdTimera_SERIALIZE OM_NO_OP

#define potwierdzSygnalOdTimera_UNSERIALIZE OM_NO_OP

#define potwierdzSygnalOdTimera_CONSTRUCTOR potwierdzSygnalOdTimera()

#define confirmAlertReceival_SERIALIZE OM_NO_OP

#define confirmAlertReceival_UNSERIALIZE OM_NO_OP

#define confirmAlertReceival_CONSTRUCTOR confirmAlertReceival()

#define serwUspijStacje_SERIALIZE OM_NO_OP

#define serwUspijStacje_UNSERIALIZE OM_NO_OP

#define serwUspijStacje_CONSTRUCTOR serwUspijStacje()

#define envUspijStacje_SERIALIZE OM_NO_OP

#define envUspijStacje_UNSERIALIZE OM_NO_OP

#define envUspijStacje_CONSTRUCTOR envUspijStacje()

#define serwAktywuj_SERIALIZE OM_NO_OP

#define serwAktywuj_UNSERIALIZE OM_NO_OP

#define serwAktywuj_CONSTRUCTOR serwAktywuj()

#define envAktywuj_SERIALIZE OM_NO_OP

#define envAktywuj_UNSERIALIZE OM_NO_OP

#define envAktywuj_CONSTRUCTOR envAktywuj()

#define serwCzytajLog_SERIALIZE OM_NO_OP

#define serwCzytajLog_UNSERIALIZE OM_NO_OP

#define serwCzytajLog_CONSTRUCTOR serwCzytajLog()

#define envCzytajInfo_SERIALIZE OM_NO_OP

#define envCzytajInfo_UNSERIALIZE OM_NO_OP

#define envCzytajInfo_CONSTRUCTOR envCzytajInfo()

#define serwCzytajInfo_SERIALIZE OM_NO_OP

#define serwCzytajInfo_UNSERIALIZE OM_NO_OP

#define serwCzytajInfo_CONSTRUCTOR serwCzytajInfo()

#define UspijStacje_SERIALIZE OM_NO_OP

#define UspijStacje_UNSERIALIZE OM_NO_OP

#define UspijStacje_CONSTRUCTOR UspijStacje()

#define AktywujStacje_SERIALIZE OM_NO_OP

#define AktywujStacje_UNSERIALIZE OM_NO_OP

#define AktywujStacje_CONSTRUCTOR AktywujStacje()
//#]

//## package Default


//## classInstance itsController
Controller itsController;

//## classInstance itsReceiver
Receiver itsReceiver;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(Default, Default)
#endif // _OMINSTRUMENT

void Default_initRelations() {
    {
        {
            itsReceiver.setShouldDelete(false);
        }
        {
            itsController.setShouldDelete(false);
        }
    }
    {
        
        itsReceiver.get_port_3()->setItsIPrint(itsController.get_port_33()->getItsIPrint());
        
        itsReceiver.get_port_3()->setItsIInitialize(itsController.get_port_33()->getItsIInitialize());
        
        itsReceiver.get_port_3()->setItsIConfirmDataReceival(itsController.get_port_33()->getItsIConfirmDataReceival());
        
        itsReceiver.get_port_3()->setItsIGetAlertDetails(itsController.get_port_33()->getItsIGetAlertDetails());
        
        itsReceiver.get_port_3()->setItsICalibrateRequest(itsController.get_port_33()->getItsICalibrateRequest());
        
        itsReceiver.get_port_3()->setItsIConfirmAlertReceival(itsController.get_port_33()->getItsIConfirmAlertReceival());
        
        itsReceiver.get_port_3()->setItsIUspijStacje(itsController.get_port_33()->getItsIUspijStacje());
        
        itsReceiver.get_port_3()->setItsIAktywujStacje(itsController.get_port_33()->getItsIAktywujStacje());
        
    }
    {
        
        itsController.get_port_35()->setItsIInform(itsReceiver.get_port_5()->getItsIInform());
        
        itsController.get_port_35()->setItsISendAlert(itsReceiver.get_port_5()->getItsISendAlert());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool Default_startBehavior() {
    bool done = true;
    done &= itsController.startBehavior();
    done &= itsReceiver.startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances() {
    OM_SET_INSTANCE_NAME(&itsReceiver, Receiver, "itsReceiver", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsController, Controller, "itsController", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
Default_OMInitializer::Default_OMInitializer() {
    Default_initRelations();
    Default_startBehavior();
}

Default_OMInitializer::~Default_OMInitializer() {
}
//#]

//## event Initialize()
Initialize::Initialize() {
    NOTIFY_EVENT_CONSTRUCTOR(Initialize)
    setId(Initialize_Default_id);
}

bool Initialize::isTypeOf(const short id) const {
    return (Initialize_Default_id==id);
}

IMPLEMENT_META_EVENT_P(Initialize, Default, Default, Initialize())

//## event sendReadFromSensor(double)
sendReadFromSensor::sendReadFromSensor() {
    NOTIFY_EVENT_CONSTRUCTOR(sendReadFromSensor)
    setId(sendReadFromSensor_Default_id);
}

sendReadFromSensor::sendReadFromSensor(double p_valueBeingSent) : valueBeingSent(p_valueBeingSent) {
    NOTIFY_EVENT_CONSTRUCTOR(sendReadFromSensor)
    setId(sendReadFromSensor_Default_id);
}

bool sendReadFromSensor::isTypeOf(const short id) const {
    return (sendReadFromSensor_Default_id==id);
}

IMPLEMENT_META_EVENT_P(sendReadFromSensor, Default, Default, sendReadFromSensor(double))

//## event create(long)
create::create() {
    NOTIFY_EVENT_CONSTRUCTOR(create)
    setId(create_Default_id);
}

create::create(long p_time) : time(p_time) {
    NOTIFY_EVENT_CONSTRUCTOR(create)
    setId(create_Default_id);
}

bool create::isTypeOf(const short id) const {
    return (create_Default_id==id);
}

IMPLEMENT_META_EVENT_P(create, Default, Default, create(long))

//## event evInicjujWyslaniePakietu()
evInicjujWyslaniePakietu::evInicjujWyslaniePakietu() {
    NOTIFY_EVENT_CONSTRUCTOR(evInicjujWyslaniePakietu)
    setId(evInicjujWyslaniePakietu_Default_id);
}

bool evInicjujWyslaniePakietu::isTypeOf(const short id) const {
    return (evInicjujWyslaniePakietu_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evInicjujWyslaniePakietu, Default, Default, evInicjujWyslaniePakietu())

//## event potwierdzOdbior()
potwierdzOdbior::potwierdzOdbior() {
    NOTIFY_EVENT_CONSTRUCTOR(potwierdzOdbior)
    setId(potwierdzOdbior_Default_id);
}

bool potwierdzOdbior::isTypeOf(const short id) const {
    return (potwierdzOdbior_Default_id==id);
}

IMPLEMENT_META_EVENT_P(potwierdzOdbior, Default, Default, potwierdzOdbior())

//## event ConfirmRecival()
ConfirmRecival::ConfirmRecival() {
    NOTIFY_EVENT_CONSTRUCTOR(ConfirmRecival)
    setId(ConfirmRecival_Default_id);
}

bool ConfirmRecival::isTypeOf(const short id) const {
    return (ConfirmRecival_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ConfirmRecival, Default, Default, ConfirmRecival())

//## event Inform()
Inform::Inform() {
    NOTIFY_EVENT_CONSTRUCTOR(Inform)
    setId(Inform_Default_id);
}

bool Inform::isTypeOf(const short id) const {
    return (Inform_Default_id==id);
}

IMPLEMENT_META_EVENT_P(Inform, Default, Default, Inform())

//## event SendAlert()
SendAlert::SendAlert() {
    NOTIFY_EVENT_CONSTRUCTOR(SendAlert)
    setId(SendAlert_Default_id);
}

bool SendAlert::isTypeOf(const short id) const {
    return (SendAlert_Default_id==id);
}

IMPLEMENT_META_EVENT_P(SendAlert, Default, Default, SendAlert())

//## event serwZadajPakietu()
serwZadajPakietu::serwZadajPakietu() {
    NOTIFY_EVENT_CONSTRUCTOR(serwZadajPakietu)
    setId(serwZadajPakietu_Default_id);
}

bool serwZadajPakietu::isTypeOf(const short id) const {
    return (serwZadajPakietu_Default_id==id);
}

IMPLEMENT_META_EVENT_P(serwZadajPakietu, Default, Default, serwZadajPakietu())

//## event readSensor()
readSensor::readSensor() {
    NOTIFY_EVENT_CONSTRUCTOR(readSensor)
    setId(readSensor_Default_id);
}

bool readSensor::isTypeOf(const short id) const {
    return (readSensor_Default_id==id);
}

IMPLEMENT_META_EVENT_P(readSensor, Default, Default, readSensor())

//## event timerCzytajSensory(unsigned long long)
timerCzytajSensory::timerCzytajSensory() {
    NOTIFY_EVENT_CONSTRUCTOR(timerCzytajSensory)
    setId(timerCzytajSensory_Default_id);
}

timerCzytajSensory::timerCzytajSensory(unsigned long long p_time) : time(p_time) {
    NOTIFY_EVENT_CONSTRUCTOR(timerCzytajSensory)
    setId(timerCzytajSensory_Default_id);
}

bool timerCzytajSensory::isTypeOf(const short id) const {
    return (timerCzytajSensory_Default_id==id);
}

IMPLEMENT_META_EVENT_P(timerCzytajSensory, Default, Default, timerCzytajSensory(unsigned long long))

//## event serwSkalibruj()
serwSkalibruj::serwSkalibruj() {
    NOTIFY_EVENT_CONSTRUCTOR(serwSkalibruj)
    setId(serwSkalibruj_Default_id);
}

bool serwSkalibruj::isTypeOf(const short id) const {
    return (serwSkalibruj_Default_id==id);
}

IMPLEMENT_META_EVENT_P(serwSkalibruj, Default, Default, serwSkalibruj())

//## event callibrateCauseRequested()
callibrateCauseRequested::callibrateCauseRequested() {
    NOTIFY_EVENT_CONSTRUCTOR(callibrateCauseRequested)
    setId(callibrateCauseRequested_Default_id);
}

bool callibrateCauseRequested::isTypeOf(const short id) const {
    return (callibrateCauseRequested_Default_id==id);
}

IMPLEMENT_META_EVENT_P(callibrateCauseRequested, Default, Default, callibrateCauseRequested())

//## event envSkalibruj()
envSkalibruj::envSkalibruj() {
    NOTIFY_EVENT_CONSTRUCTOR(envSkalibruj)
    setId(envSkalibruj_Default_id);
}

bool envSkalibruj::isTypeOf(const short id) const {
    return (envSkalibruj_Default_id==id);
}

IMPLEMENT_META_EVENT_P(envSkalibruj, Default, Default, envSkalibruj())

//## event requestTime()
requestTime::requestTime() {
    NOTIFY_EVENT_CONSTRUCTOR(requestTime)
    setId(requestTime_Default_id);
}

bool requestTime::isTypeOf(const short id) const {
    return (requestTime_Default_id==id);
}

IMPLEMENT_META_EVENT_P(requestTime, Default, Default, requestTime())

//## event provideTime(unsigned long long)
provideTime::provideTime() {
    NOTIFY_EVENT_CONSTRUCTOR(provideTime)
    setId(provideTime_Default_id);
}

provideTime::provideTime(unsigned long long p_time) : time(p_time) {
    NOTIFY_EVENT_CONSTRUCTOR(provideTime)
    setId(provideTime_Default_id);
}

bool provideTime::isTypeOf(const short id) const {
    return (provideTime_Default_id==id);
}

IMPLEMENT_META_EVENT_P(provideTime, Default, Default, provideTime(unsigned long long))

//## event inicjujOdczytTimer()
inicjujOdczytTimer::inicjujOdczytTimer() {
    NOTIFY_EVENT_CONSTRUCTOR(inicjujOdczytTimer)
    setId(inicjujOdczytTimer_Default_id);
}

bool inicjujOdczytTimer::isTypeOf(const short id) const {
    return (inicjujOdczytTimer_Default_id==id);
}

IMPLEMENT_META_EVENT_P(inicjujOdczytTimer, Default, Default, inicjujOdczytTimer())

//## event callibrated()
callibrated::callibrated() {
    NOTIFY_EVENT_CONSTRUCTOR(callibrated)
    setId(callibrated_Default_id);
}

bool callibrated::isTypeOf(const short id) const {
    return (callibrated_Default_id==id);
}

IMPLEMENT_META_EVENT_P(callibrated, Default, Default, callibrated())

//## event potwierdzSygnalOdTimera()
potwierdzSygnalOdTimera::potwierdzSygnalOdTimera() {
    NOTIFY_EVENT_CONSTRUCTOR(potwierdzSygnalOdTimera)
    setId(potwierdzSygnalOdTimera_Default_id);
}

bool potwierdzSygnalOdTimera::isTypeOf(const short id) const {
    return (potwierdzSygnalOdTimera_Default_id==id);
}

IMPLEMENT_META_EVENT_P(potwierdzSygnalOdTimera, Default, Default, potwierdzSygnalOdTimera())

//## event confirmAlertReceival()
confirmAlertReceival::confirmAlertReceival() {
    NOTIFY_EVENT_CONSTRUCTOR(confirmAlertReceival)
    setId(confirmAlertReceival_Default_id);
}

bool confirmAlertReceival::isTypeOf(const short id) const {
    return (confirmAlertReceival_Default_id==id);
}

IMPLEMENT_META_EVENT_P(confirmAlertReceival, Default, Default, confirmAlertReceival())

//## event serwUspijStacje()
serwUspijStacje::serwUspijStacje() {
    NOTIFY_EVENT_CONSTRUCTOR(serwUspijStacje)
    setId(serwUspijStacje_Default_id);
}

bool serwUspijStacje::isTypeOf(const short id) const {
    return (serwUspijStacje_Default_id==id);
}

IMPLEMENT_META_EVENT_P(serwUspijStacje, Default, Default, serwUspijStacje())

//## event envUspijStacje()
envUspijStacje::envUspijStacje() {
    NOTIFY_EVENT_CONSTRUCTOR(envUspijStacje)
    setId(envUspijStacje_Default_id);
}

bool envUspijStacje::isTypeOf(const short id) const {
    return (envUspijStacje_Default_id==id);
}

IMPLEMENT_META_EVENT_P(envUspijStacje, Default, Default, envUspijStacje())

//## event serwAktywuj()
serwAktywuj::serwAktywuj() {
    NOTIFY_EVENT_CONSTRUCTOR(serwAktywuj)
    setId(serwAktywuj_Default_id);
}

bool serwAktywuj::isTypeOf(const short id) const {
    return (serwAktywuj_Default_id==id);
}

IMPLEMENT_META_EVENT_P(serwAktywuj, Default, Default, serwAktywuj())

//## event envAktywuj()
envAktywuj::envAktywuj() {
    NOTIFY_EVENT_CONSTRUCTOR(envAktywuj)
    setId(envAktywuj_Default_id);
}

bool envAktywuj::isTypeOf(const short id) const {
    return (envAktywuj_Default_id==id);
}

IMPLEMENT_META_EVENT_P(envAktywuj, Default, Default, envAktywuj())

//## event serwCzytajLog()
serwCzytajLog::serwCzytajLog() {
    NOTIFY_EVENT_CONSTRUCTOR(serwCzytajLog)
    setId(serwCzytajLog_Default_id);
}

bool serwCzytajLog::isTypeOf(const short id) const {
    return (serwCzytajLog_Default_id==id);
}

IMPLEMENT_META_EVENT_P(serwCzytajLog, Default, Default, serwCzytajLog())

//## event envCzytajInfo()
envCzytajInfo::envCzytajInfo() {
    NOTIFY_EVENT_CONSTRUCTOR(envCzytajInfo)
    setId(envCzytajInfo_Default_id);
}

bool envCzytajInfo::isTypeOf(const short id) const {
    return (envCzytajInfo_Default_id==id);
}

IMPLEMENT_META_EVENT_P(envCzytajInfo, Default, Default, envCzytajInfo())

//## event serwCzytajInfo()
serwCzytajInfo::serwCzytajInfo() {
    NOTIFY_EVENT_CONSTRUCTOR(serwCzytajInfo)
    setId(serwCzytajInfo_Default_id);
}

bool serwCzytajInfo::isTypeOf(const short id) const {
    return (serwCzytajInfo_Default_id==id);
}

IMPLEMENT_META_EVENT_P(serwCzytajInfo, Default, Default, serwCzytajInfo())

//## event UspijStacje()
UspijStacje::UspijStacje() {
    NOTIFY_EVENT_CONSTRUCTOR(UspijStacje)
    setId(UspijStacje_Default_id);
}

bool UspijStacje::isTypeOf(const short id) const {
    return (UspijStacje_Default_id==id);
}

IMPLEMENT_META_EVENT_P(UspijStacje, Default, Default, UspijStacje())

//## event AktywujStacje()
AktywujStacje::AktywujStacje() {
    NOTIFY_EVENT_CONSTRUCTOR(AktywujStacje)
    setId(AktywujStacje_Default_id);
}

bool AktywujStacje::isTypeOf(const short id) const {
    return (AktywujStacje_Default_id==id);
}

IMPLEMENT_META_EVENT_P(AktywujStacje, Default, Default, AktywujStacje())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/
