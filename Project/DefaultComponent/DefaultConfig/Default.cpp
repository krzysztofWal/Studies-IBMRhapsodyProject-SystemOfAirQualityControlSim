/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Mon, 13, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## event evSendToReceiver(StationData*)
#include "StationData.h"
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
#include "iCalibrateRequest.h"
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
#include "Thermometer.h"
//## auto_generated
#include "Timer.h"
//#[ ignore
#define evSendAlert_SERIALIZE \
    OMADD_SER(stationId, x2String(myEvent->stationId))\
    OMADD_SER(whichParticle, x2String(myEvent->whichParticle))
#define evSendAlert_UNSERIALIZE \
    OMADD_UNSER(int, stationId, OMDestructiveString2X)\
    OMADD_UNSER(int, whichParticle, OMDestructiveString2X)
#define inicjalizujWyslaniePakietu_SERIALIZE OM_NO_OP

#define inicjalizujWyslaniePakietu_UNSERIALIZE OM_NO_OP

#define inicjalizujWyslaniePakietu_CONSTRUCTOR inicjalizujWyslaniePakietu()

#define inicjalizujOdczytPm_SERIALIZE OM_NO_OP

#define inicjalizujOdczytPm_UNSERIALIZE OM_NO_OP

#define inicjalizujOdczytPm_CONSTRUCTOR inicjalizujOdczytPm()

#define Initialize_SERIALIZE OM_NO_OP

#define Initialize_UNSERIALIZE OM_NO_OP

#define Initialize_CONSTRUCTOR Initialize()

#define append_SERIALIZE OM_NO_OP

#define append_UNSERIALIZE OM_NO_OP

#define append_CONSTRUCTOR append()

#define chO3_SERIALIZE OM_NO_OP

#define chO3_UNSERIALIZE OM_NO_OP

#define chO3_CONSTRUCTOR chO3()

#define evWyslijDane_SERIALIZE OM_NO_OP

#define evWyslijDane_UNSERIALIZE OM_NO_OP

#define evWyslijDane_CONSTRUCTOR evWyslijDane()

#define wyslijDane_SERIALIZE OMADD_SER(valueBeingSent, x2String(myEvent->valueBeingSent))

#define wyslijDane_UNSERIALIZE OMADD_UNSER(double, valueBeingSent, OMDestructiveString2X)

#define wyslijDane_CONSTRUCTOR wyslijDane(valueBeingSent)

#define ev_SERIALIZE OM_NO_OP

#define ev_UNSERIALIZE OM_NO_OP

#define ev_CONSTRUCTOR ev()

#define evWyslijO_SERIALIZE OM_NO_OP

#define evWyslijO_UNSERIALIZE OM_NO_OP

#define evWyslijO_CONSTRUCTOR evWyslijO()

#define podajDalej_SERIALIZE OMADD_SER(valueBeingForwarded, x2String(myEvent->valueBeingForwarded))

#define podajDalej_UNSERIALIZE OMADD_UNSER(double, valueBeingForwarded, OMDestructiveString2X)

#define podajDalej_CONSTRUCTOR podajDalej(valueBeingForwarded)

#define evWlacz_SERIALIZE OM_NO_OP

#define evWlacz_UNSERIALIZE OM_NO_OP

#define evWlacz_CONSTRUCTOR evWlacz()

#define evWylacz_SERIALIZE OM_NO_OP

#define evWylacz_UNSERIALIZE OM_NO_OP

#define evWylacz_CONSTRUCTOR evWylacz()

#define evTrybOszczedzaniaEnergii_SERIALIZE OM_NO_OP

#define evTrybOszczedzaniaEnergii_UNSERIALIZE OM_NO_OP

#define evTrybOszczedzaniaEnergii_CONSTRUCTOR evTrybOszczedzaniaEnergii()

#define evRestart_SERIALIZE OM_NO_OP

#define evRestart_UNSERIALIZE OM_NO_OP

#define evRestart_CONSTRUCTOR evRestart()

#define evKalibruj_SERIALIZE OM_NO_OP

#define evKalibruj_UNSERIALIZE OM_NO_OP

#define evKalibruj_CONSTRUCTOR evKalibruj()

#define readCO_SERIALIZE OM_NO_OP

#define readCO_UNSERIALIZE OM_NO_OP

#define readCO_CONSTRUCTOR readCO()

#define readNO2_SERIALIZE OM_NO_OP

#define readNO2_UNSERIALIZE OM_NO_OP

#define readNO2_CONSTRUCTOR readNO2()

#define readSO2_SERIALIZE OM_NO_OP

#define readSO2_UNSERIALIZE OM_NO_OP

#define readSO2_CONSTRUCTOR readSO2()

#define readO3_SERIALIZE OM_NO_OP

#define readO3_UNSERIALIZE OM_NO_OP

#define readO3_CONSTRUCTOR readO3()

#define eventmessage_0_SERIALIZE OM_NO_OP

#define eventmessage_0_UNSERIALIZE OM_NO_OP

#define eventmessage_0_CONSTRUCTOR eventmessage_0()

#define create_SERIALIZE OMADD_SER(time, x2String(myEvent->time))

#define create_UNSERIALIZE OMADD_UNSER(long, time, OMDestructiveString2X)

#define create_CONSTRUCTOR create(time)

#define evSendAlert_CONSTRUCTOR evSendAlert(stationId, whichParticle)

#define evR_SERIALIZE OM_NO_OP

#define evR_UNSERIALIZE OM_NO_OP

#define evR_CONSTRUCTOR evR()

#define evInicjujWyslaniePakietu_SERIALIZE OM_NO_OP

#define evInicjujWyslaniePakietu_UNSERIALIZE OM_NO_OP

#define evInicjujWyslaniePakietu_CONSTRUCTOR evInicjujWyslaniePakietu()

#define evSendToReceiver_SERIALIZE OMADD_OMSER(data)

#define evSendToReceiver_UNSERIALIZE OMADD_OMUNSER(StationData*, data, OMDestructiveString2X)

#define evSendToReceiver_CONSTRUCTOR evSendToReceiver(data)

#define evKont_SERIALIZE OM_NO_OP

#define evKont_UNSERIALIZE OM_NO_OP

#define evKont_CONSTRUCTOR evKont()

#define potwierdzOdbior_SERIALIZE OM_NO_OP

#define potwierdzOdbior_UNSERIALIZE OM_NO_OP

#define potwierdzOdbior_CONSTRUCTOR potwierdzOdbior()

#define evGonnaSend_SERIALIZE OM_NO_OP

#define evGonnaSend_UNSERIALIZE OM_NO_OP

#define evGonnaSend_CONSTRUCTOR evGonnaSend()

#define evBegin_SERIALIZE OM_NO_OP

#define evBegin_UNSERIALIZE OM_NO_OP

#define evBegin_CONSTRUCTOR evBegin()

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

#define evWylac_SERIALIZE OM_NO_OP

#define evWylac_UNSERIALIZE OM_NO_OP

#define evWylac_CONSTRUCTOR evWylac()

#define czytajCzujniki_SERIALIZE OM_NO_OP

#define czytajCzujniki_UNSERIALIZE OM_NO_OP

#define czytajCzujniki_CONSTRUCTOR czytajCzujniki()

#define timerOdczy_SERIALIZE OM_NO_OP

#define timerOdczy_UNSERIALIZE OM_NO_OP

#define timerOdczy_CONSTRUCTOR timerOdczy()

#define timer_SERIALIZE OM_NO_OP

#define timer_UNSERIALIZE OM_NO_OP

#define timer_CONSTRUCTOR timer()

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

//## event inicjalizujWyslaniePakietu()
inicjalizujWyslaniePakietu::inicjalizujWyslaniePakietu() {
    NOTIFY_EVENT_CONSTRUCTOR(inicjalizujWyslaniePakietu)
    setId(inicjalizujWyslaniePakietu_Default_id);
}

bool inicjalizujWyslaniePakietu::isTypeOf(const short id) const {
    return (inicjalizujWyslaniePakietu_Default_id==id);
}

IMPLEMENT_META_EVENT_P(inicjalizujWyslaniePakietu, Default, Default, inicjalizujWyslaniePakietu())

//## event inicjalizujOdczytPm()
inicjalizujOdczytPm::inicjalizujOdczytPm() {
    NOTIFY_EVENT_CONSTRUCTOR(inicjalizujOdczytPm)
    setId(inicjalizujOdczytPm_Default_id);
}

bool inicjalizujOdczytPm::isTypeOf(const short id) const {
    return (inicjalizujOdczytPm_Default_id==id);
}

IMPLEMENT_META_EVENT_P(inicjalizujOdczytPm, Default, Default, inicjalizujOdczytPm())

//## event Initialize()
Initialize::Initialize() {
    NOTIFY_EVENT_CONSTRUCTOR(Initialize)
    setId(Initialize_Default_id);
}

bool Initialize::isTypeOf(const short id) const {
    return (Initialize_Default_id==id);
}

IMPLEMENT_META_EVENT_P(Initialize, Default, Default, Initialize())

//## event append()
append::append() {
    NOTIFY_EVENT_CONSTRUCTOR(append)
    setId(append_Default_id);
}

bool append::isTypeOf(const short id) const {
    return (append_Default_id==id);
}

IMPLEMENT_META_EVENT_P(append, Default, Default, append())

//## event chO3()
chO3::chO3() {
    NOTIFY_EVENT_CONSTRUCTOR(chO3)
    setId(chO3_Default_id);
}

bool chO3::isTypeOf(const short id) const {
    return (chO3_Default_id==id);
}

IMPLEMENT_META_EVENT_P(chO3, Default, Default, chO3())

//## event evWyslijDane()
evWyslijDane::evWyslijDane() {
    NOTIFY_EVENT_CONSTRUCTOR(evWyslijDane)
    setId(evWyslijDane_Default_id);
}

bool evWyslijDane::isTypeOf(const short id) const {
    return (evWyslijDane_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evWyslijDane, Default, Default, evWyslijDane())

//## event wyslijDane(double)
wyslijDane::wyslijDane() {
    NOTIFY_EVENT_CONSTRUCTOR(wyslijDane)
    setId(wyslijDane_Default_id);
}

wyslijDane::wyslijDane(double p_valueBeingSent) : valueBeingSent(p_valueBeingSent) {
    NOTIFY_EVENT_CONSTRUCTOR(wyslijDane)
    setId(wyslijDane_Default_id);
}

bool wyslijDane::isTypeOf(const short id) const {
    return (wyslijDane_Default_id==id);
}

IMPLEMENT_META_EVENT_P(wyslijDane, Default, Default, wyslijDane(double))

//## event ev()
ev::ev() {
    NOTIFY_EVENT_CONSTRUCTOR(ev)
    setId(ev_Default_id);
}

bool ev::isTypeOf(const short id) const {
    return (ev_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ev, Default, Default, ev())

//## event evWyslijO()
evWyslijO::evWyslijO() {
    NOTIFY_EVENT_CONSTRUCTOR(evWyslijO)
    setId(evWyslijO_Default_id);
}

bool evWyslijO::isTypeOf(const short id) const {
    return (evWyslijO_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evWyslijO, Default, Default, evWyslijO())

//## event podajDalej(double)
podajDalej::podajDalej() {
    NOTIFY_EVENT_CONSTRUCTOR(podajDalej)
    setId(podajDalej_Default_id);
}

podajDalej::podajDalej(double p_valueBeingForwarded) : valueBeingForwarded(p_valueBeingForwarded) {
    NOTIFY_EVENT_CONSTRUCTOR(podajDalej)
    setId(podajDalej_Default_id);
}

bool podajDalej::isTypeOf(const short id) const {
    return (podajDalej_Default_id==id);
}

IMPLEMENT_META_EVENT_P(podajDalej, Default, Default, podajDalej(double))

//## event evWlacz()
evWlacz::evWlacz() {
    NOTIFY_EVENT_CONSTRUCTOR(evWlacz)
    setId(evWlacz_Default_id);
}

bool evWlacz::isTypeOf(const short id) const {
    return (evWlacz_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evWlacz, Default, Default, evWlacz())

//## event evWylacz()
evWylacz::evWylacz() {
    NOTIFY_EVENT_CONSTRUCTOR(evWylacz)
    setId(evWylacz_Default_id);
}

bool evWylacz::isTypeOf(const short id) const {
    return (evWylacz_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evWylacz, Default, Default, evWylacz())

//## event evTrybOszczedzaniaEnergii()
evTrybOszczedzaniaEnergii::evTrybOszczedzaniaEnergii() {
    NOTIFY_EVENT_CONSTRUCTOR(evTrybOszczedzaniaEnergii)
    setId(evTrybOszczedzaniaEnergii_Default_id);
}

bool evTrybOszczedzaniaEnergii::isTypeOf(const short id) const {
    return (evTrybOszczedzaniaEnergii_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evTrybOszczedzaniaEnergii, Default, Default, evTrybOszczedzaniaEnergii())

//## event evRestart()
evRestart::evRestart() {
    NOTIFY_EVENT_CONSTRUCTOR(evRestart)
    setId(evRestart_Default_id);
}

bool evRestart::isTypeOf(const short id) const {
    return (evRestart_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evRestart, Default, Default, evRestart())

//## event evKalibruj()
evKalibruj::evKalibruj() {
    NOTIFY_EVENT_CONSTRUCTOR(evKalibruj)
    setId(evKalibruj_Default_id);
}

bool evKalibruj::isTypeOf(const short id) const {
    return (evKalibruj_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evKalibruj, Default, Default, evKalibruj())

//## event readCO()
readCO::readCO() {
    NOTIFY_EVENT_CONSTRUCTOR(readCO)
    setId(readCO_Default_id);
}

bool readCO::isTypeOf(const short id) const {
    return (readCO_Default_id==id);
}

IMPLEMENT_META_EVENT_P(readCO, Default, Default, readCO())

//## event readNO2()
readNO2::readNO2() {
    NOTIFY_EVENT_CONSTRUCTOR(readNO2)
    setId(readNO2_Default_id);
}

bool readNO2::isTypeOf(const short id) const {
    return (readNO2_Default_id==id);
}

IMPLEMENT_META_EVENT_P(readNO2, Default, Default, readNO2())

//## event readSO2()
readSO2::readSO2() {
    NOTIFY_EVENT_CONSTRUCTOR(readSO2)
    setId(readSO2_Default_id);
}

bool readSO2::isTypeOf(const short id) const {
    return (readSO2_Default_id==id);
}

IMPLEMENT_META_EVENT_P(readSO2, Default, Default, readSO2())

//## event readO3()
readO3::readO3() {
    NOTIFY_EVENT_CONSTRUCTOR(readO3)
    setId(readO3_Default_id);
}

bool readO3::isTypeOf(const short id) const {
    return (readO3_Default_id==id);
}

IMPLEMENT_META_EVENT_P(readO3, Default, Default, readO3())

//## event eventmessage_0()
eventmessage_0::eventmessage_0() {
    NOTIFY_EVENT_CONSTRUCTOR(eventmessage_0)
    setId(eventmessage_0_Default_id);
}

bool eventmessage_0::isTypeOf(const short id) const {
    return (eventmessage_0_Default_id==id);
}

IMPLEMENT_META_EVENT_P(eventmessage_0, Default, Default, eventmessage_0())

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

//## event evSendAlert(int,int)
evSendAlert::evSendAlert() {
    NOTIFY_EVENT_CONSTRUCTOR(evSendAlert)
    setId(evSendAlert_Default_id);
}

evSendAlert::evSendAlert(int p_stationId, int p_whichParticle) : stationId(p_stationId),whichParticle(p_whichParticle) {
    NOTIFY_EVENT_CONSTRUCTOR(evSendAlert)
    setId(evSendAlert_Default_id);
}

bool evSendAlert::isTypeOf(const short id) const {
    return (evSendAlert_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evSendAlert, Default, Default, evSendAlert(int,int))

//## event evR()
evR::evR() {
    NOTIFY_EVENT_CONSTRUCTOR(evR)
    setId(evR_Default_id);
}

bool evR::isTypeOf(const short id) const {
    return (evR_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evR, Default, Default, evR())

//## event evInicjujWyslaniePakietu()
evInicjujWyslaniePakietu::evInicjujWyslaniePakietu() {
    NOTIFY_EVENT_CONSTRUCTOR(evInicjujWyslaniePakietu)
    setId(evInicjujWyslaniePakietu_Default_id);
}

bool evInicjujWyslaniePakietu::isTypeOf(const short id) const {
    return (evInicjujWyslaniePakietu_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evInicjujWyslaniePakietu, Default, Default, evInicjujWyslaniePakietu())

//## event evSendToReceiver(StationData*)
evSendToReceiver::evSendToReceiver() {
    NOTIFY_EVENT_CONSTRUCTOR(evSendToReceiver)
    setId(evSendToReceiver_Default_id);
}

evSendToReceiver::evSendToReceiver(StationData* p_data) : data(p_data) {
    NOTIFY_EVENT_CONSTRUCTOR(evSendToReceiver)
    setId(evSendToReceiver_Default_id);
}

bool evSendToReceiver::isTypeOf(const short id) const {
    return (evSendToReceiver_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evSendToReceiver, Default, Default, evSendToReceiver(StationData*))

//## event evKont()
evKont::evKont() {
    NOTIFY_EVENT_CONSTRUCTOR(evKont)
    setId(evKont_Default_id);
}

bool evKont::isTypeOf(const short id) const {
    return (evKont_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evKont, Default, Default, evKont())

//## event potwierdzOdbior()
potwierdzOdbior::potwierdzOdbior() {
    NOTIFY_EVENT_CONSTRUCTOR(potwierdzOdbior)
    setId(potwierdzOdbior_Default_id);
}

bool potwierdzOdbior::isTypeOf(const short id) const {
    return (potwierdzOdbior_Default_id==id);
}

IMPLEMENT_META_EVENT_P(potwierdzOdbior, Default, Default, potwierdzOdbior())

//## event evGonnaSend()
evGonnaSend::evGonnaSend() {
    NOTIFY_EVENT_CONSTRUCTOR(evGonnaSend)
    setId(evGonnaSend_Default_id);
}

bool evGonnaSend::isTypeOf(const short id) const {
    return (evGonnaSend_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evGonnaSend, Default, Default, evGonnaSend())

//## event evBegin()
evBegin::evBegin() {
    NOTIFY_EVENT_CONSTRUCTOR(evBegin)
    setId(evBegin_Default_id);
}

bool evBegin::isTypeOf(const short id) const {
    return (evBegin_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evBegin, Default, Default, evBegin())

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

//## event evWylac()
evWylac::evWylac() {
    NOTIFY_EVENT_CONSTRUCTOR(evWylac)
    setId(evWylac_Default_id);
}

bool evWylac::isTypeOf(const short id) const {
    return (evWylac_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evWylac, Default, Default, evWylac())

//## event czytajCzujniki()
czytajCzujniki::czytajCzujniki() {
    NOTIFY_EVENT_CONSTRUCTOR(czytajCzujniki)
    setId(czytajCzujniki_Default_id);
}

bool czytajCzujniki::isTypeOf(const short id) const {
    return (czytajCzujniki_Default_id==id);
}

IMPLEMENT_META_EVENT_P(czytajCzujniki, Default, Default, czytajCzujniki())

//## event timerOdczy()
timerOdczy::timerOdczy() {
    NOTIFY_EVENT_CONSTRUCTOR(timerOdczy)
    setId(timerOdczy_Default_id);
}

bool timerOdczy::isTypeOf(const short id) const {
    return (timerOdczy_Default_id==id);
}

IMPLEMENT_META_EVENT_P(timerOdczy, Default, Default, timerOdczy())

//## event timer()
timer::timer() {
    NOTIFY_EVENT_CONSTRUCTOR(timer)
    setId(timer_Default_id);
}

bool timer::isTypeOf(const short id) const {
    return (timer_Default_id==id);
}

IMPLEMENT_META_EVENT_P(timer, Default, Default, timer())

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

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/
