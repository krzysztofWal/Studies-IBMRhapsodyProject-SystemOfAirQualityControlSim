/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Tue, 14, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Default.h
*********************************************************************/

#ifndef Default_H
#define Default_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class Barometer;

//## auto_generated
class CO_Sensor;

//## classInstance itsController
class Controller;

//## auto_generated
class Hygrometer;

//## auto_generated
class NO2_Sensor;

//## auto_generated
class O3_Sensor;

//## auto_generated
class PM10_Sensor;

//## auto_generated
class PM1_Sensor;

//## auto_generated
class PM2_5Sensor;

//## classInstance itsReceiver
class Receiver;

//## auto_generated
class SO2_Sensor;

//## auto_generated
class Sensor;

//## auto_generated
class StationData;

//## auto_generated
class Thermometer;

//## auto_generated
class Timer;

//## auto_generated
class iAktywujStacje;

//## auto_generated
class iCalibrateRequest;

//## auto_generated
class iConfirmAlertReceival;

//## auto_generated
class iConfirmDataReceival;

//## auto_generated
class iGetAlertDetails;

//## auto_generated
class iInform;

//## auto_generated
class iInitialize;

//## auto_generated
class iPrint;

//## auto_generated
class iSendAlert;

//## auto_generated
class iUspijStacje;

//#[ ignore
#define Initialize_Default_id 18601

#define sendReadFromSensor_Default_id 18602

#define create_Default_id 18603

#define evInicjujWyslaniePakietu_Default_id 18604

#define potwierdzOdbior_Default_id 18605

#define ConfirmRecival_Default_id 18606

#define Inform_Default_id 18607

#define SendAlert_Default_id 18608

#define serwZadajPakietu_Default_id 18609

#define readSensor_Default_id 18610

#define timerCzytajSensory_Default_id 18611

#define serwSkalibruj_Default_id 18612

#define callibrateCauseRequested_Default_id 18613

#define envSkalibruj_Default_id 18614

#define requestTime_Default_id 18615

#define provideTime_Default_id 18616

#define inicjujOdczytTimer_Default_id 18617

#define callibrated_Default_id 18618

#define potwierdzSygnalOdTimera_Default_id 18619

#define confirmAlertReceival_Default_id 18620

#define serwUspijStacje_Default_id 18621

#define envUspijStacje_Default_id 18622

#define serwAktywuj_Default_id 18623

#define envAktywuj_Default_id 18624

#define serwCzytajLog_Default_id 18625

#define envCzytajInfo_Default_id 18626

#define serwCzytajInfo_Default_id 18627

#define UspijStacje_Default_id 18628

#define AktywujStacje_Default_id 18629
//#]

//## package Default


//## type statusType
enum statusType {
    on = 1,
    standBy = 2
};

//## type sensorType
enum sensorType {
    o3,
    thermo,
    hygro,
    baro,
    so2,
    co,
    no2,
    pm1,
    pm2_5,
    pm10
};

//## classInstance itsController
extern Controller itsController;

//## classInstance itsReceiver
extern Receiver itsReceiver;

//## auto_generated
void Default_initRelations();

//## auto_generated
bool Default_startBehavior();

//#[ ignore
class Default_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Default_OMInitializer();
    
    //## auto_generated
    ~Default_OMInitializer();
};
//#]

//## event Initialize()
class Initialize : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedInitialize;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Initialize();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedInitialize : virtual public AOMEvent {
    DECLARE_META_EVENT(Initialize)
};
//#]
#endif // _OMINSTRUMENT

//## event sendReadFromSensor(double)
class sendReadFromSensor : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedsendReadFromSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    sendReadFromSensor();
    
    //## auto_generated
    sendReadFromSensor(double p_valueBeingSent);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    double valueBeingSent;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedsendReadFromSensor : virtual public AOMEvent {
    DECLARE_META_EVENT(sendReadFromSensor)
};
//#]
#endif // _OMINSTRUMENT

//## event create(long)
class create : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedcreate;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    create();
    
    //## auto_generated
    create(long p_time);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    long time;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedcreate : virtual public AOMEvent {
    DECLARE_META_EVENT(create)
};
//#]
#endif // _OMINSTRUMENT

//## event evInicjujWyslaniePakietu()
class evInicjujWyslaniePakietu : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevInicjujWyslaniePakietu;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evInicjujWyslaniePakietu();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevInicjujWyslaniePakietu : virtual public AOMEvent {
    DECLARE_META_EVENT(evInicjujWyslaniePakietu)
};
//#]
#endif // _OMINSTRUMENT

//## event potwierdzOdbior()
class potwierdzOdbior : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedpotwierdzOdbior;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    potwierdzOdbior();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedpotwierdzOdbior : virtual public AOMEvent {
    DECLARE_META_EVENT(potwierdzOdbior)
};
//#]
#endif // _OMINSTRUMENT

//## event ConfirmRecival()
class ConfirmRecival : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedConfirmRecival;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ConfirmRecival();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedConfirmRecival : virtual public AOMEvent {
    DECLARE_META_EVENT(ConfirmRecival)
};
//#]
#endif // _OMINSTRUMENT

//## event Inform()
class Inform : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedInform;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Inform();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedInform : virtual public AOMEvent {
    DECLARE_META_EVENT(Inform)
};
//#]
#endif // _OMINSTRUMENT

//## event SendAlert()
class SendAlert : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSendAlert;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SendAlert();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSendAlert : virtual public AOMEvent {
    DECLARE_META_EVENT(SendAlert)
};
//#]
#endif // _OMINSTRUMENT

//## event serwZadajPakietu()
class serwZadajPakietu : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedserwZadajPakietu;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    serwZadajPakietu();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedserwZadajPakietu : virtual public AOMEvent {
    DECLARE_META_EVENT(serwZadajPakietu)
};
//#]
#endif // _OMINSTRUMENT

//## event readSensor()
class readSensor : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreadSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    readSensor();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreadSensor : virtual public AOMEvent {
    DECLARE_META_EVENT(readSensor)
};
//#]
#endif // _OMINSTRUMENT

//## event timerCzytajSensory(unsigned long long)
class timerCzytajSensory : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedtimerCzytajSensory;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    timerCzytajSensory();
    
    //## auto_generated
    timerCzytajSensory(unsigned long long p_time);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    unsigned long long time;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedtimerCzytajSensory : virtual public AOMEvent {
    DECLARE_META_EVENT(timerCzytajSensory)
};
//#]
#endif // _OMINSTRUMENT

//## event serwSkalibruj()
class serwSkalibruj : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedserwSkalibruj;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    serwSkalibruj();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedserwSkalibruj : virtual public AOMEvent {
    DECLARE_META_EVENT(serwSkalibruj)
};
//#]
#endif // _OMINSTRUMENT

//## event callibrateCauseRequested()
class callibrateCauseRequested : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedcallibrateCauseRequested;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    callibrateCauseRequested();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedcallibrateCauseRequested : virtual public AOMEvent {
    DECLARE_META_EVENT(callibrateCauseRequested)
};
//#]
#endif // _OMINSTRUMENT

//## event envSkalibruj()
class envSkalibruj : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedenvSkalibruj;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    envSkalibruj();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedenvSkalibruj : virtual public AOMEvent {
    DECLARE_META_EVENT(envSkalibruj)
};
//#]
#endif // _OMINSTRUMENT

//## event requestTime()
class requestTime : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedrequestTime;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    requestTime();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedrequestTime : virtual public AOMEvent {
    DECLARE_META_EVENT(requestTime)
};
//#]
#endif // _OMINSTRUMENT

//## event provideTime(unsigned long long)
class provideTime : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedprovideTime;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    provideTime();
    
    //## auto_generated
    provideTime(unsigned long long p_time);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    unsigned long long time;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedprovideTime : virtual public AOMEvent {
    DECLARE_META_EVENT(provideTime)
};
//#]
#endif // _OMINSTRUMENT

//## event inicjujOdczytTimer()
class inicjujOdczytTimer : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedinicjujOdczytTimer;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    inicjujOdczytTimer();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedinicjujOdczytTimer : virtual public AOMEvent {
    DECLARE_META_EVENT(inicjujOdczytTimer)
};
//#]
#endif // _OMINSTRUMENT

//## event callibrated()
class callibrated : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedcallibrated;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    callibrated();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedcallibrated : virtual public AOMEvent {
    DECLARE_META_EVENT(callibrated)
};
//#]
#endif // _OMINSTRUMENT

//## event potwierdzSygnalOdTimera()
class potwierdzSygnalOdTimera : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedpotwierdzSygnalOdTimera;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    potwierdzSygnalOdTimera();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedpotwierdzSygnalOdTimera : virtual public AOMEvent {
    DECLARE_META_EVENT(potwierdzSygnalOdTimera)
};
//#]
#endif // _OMINSTRUMENT

//## event confirmAlertReceival()
class confirmAlertReceival : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedconfirmAlertReceival;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    confirmAlertReceival();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedconfirmAlertReceival : virtual public AOMEvent {
    DECLARE_META_EVENT(confirmAlertReceival)
};
//#]
#endif // _OMINSTRUMENT

//## event serwUspijStacje()
class serwUspijStacje : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedserwUspijStacje;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    serwUspijStacje();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedserwUspijStacje : virtual public AOMEvent {
    DECLARE_META_EVENT(serwUspijStacje)
};
//#]
#endif // _OMINSTRUMENT

//## event envUspijStacje()
class envUspijStacje : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedenvUspijStacje;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    envUspijStacje();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedenvUspijStacje : virtual public AOMEvent {
    DECLARE_META_EVENT(envUspijStacje)
};
//#]
#endif // _OMINSTRUMENT

//## event serwAktywuj()
class serwAktywuj : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedserwAktywuj;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    serwAktywuj();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedserwAktywuj : virtual public AOMEvent {
    DECLARE_META_EVENT(serwAktywuj)
};
//#]
#endif // _OMINSTRUMENT

//## event envAktywuj()
class envAktywuj : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedenvAktywuj;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    envAktywuj();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedenvAktywuj : virtual public AOMEvent {
    DECLARE_META_EVENT(envAktywuj)
};
//#]
#endif // _OMINSTRUMENT

//## event serwCzytajLog()
class serwCzytajLog : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedserwCzytajLog;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    serwCzytajLog();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedserwCzytajLog : virtual public AOMEvent {
    DECLARE_META_EVENT(serwCzytajLog)
};
//#]
#endif // _OMINSTRUMENT

//## event envCzytajInfo()
class envCzytajInfo : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedenvCzytajInfo;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    envCzytajInfo();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedenvCzytajInfo : virtual public AOMEvent {
    DECLARE_META_EVENT(envCzytajInfo)
};
//#]
#endif // _OMINSTRUMENT

//## event serwCzytajInfo()
class serwCzytajInfo : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedserwCzytajInfo;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    serwCzytajInfo();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedserwCzytajInfo : virtual public AOMEvent {
    DECLARE_META_EVENT(serwCzytajInfo)
};
//#]
#endif // _OMINSTRUMENT

//## event UspijStacje()
class UspijStacje : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUspijStacje;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UspijStacje();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUspijStacje : virtual public AOMEvent {
    DECLARE_META_EVENT(UspijStacje)
};
//#]
#endif // _OMINSTRUMENT

//## event AktywujStacje()
class AktywujStacje : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAktywujStacje;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    AktywujStacje();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAktywujStacje : virtual public AOMEvent {
    DECLARE_META_EVENT(AktywujStacje)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.h
*********************************************************************/
