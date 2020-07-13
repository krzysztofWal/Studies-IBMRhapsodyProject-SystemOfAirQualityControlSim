/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Mon, 13, Jul 2020  
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

//## event evSendToReceiver(StationData*)
class StationData;

//## auto_generated
class Thermometer;

//## auto_generated
class Timer;

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

//#[ ignore
#define inicjalizujWyslaniePakietu_Default_id 18601

#define inicjalizujOdczytPm_Default_id 18602

#define Initialize_Default_id 18603

#define append_Default_id 18604

#define chO3_Default_id 18605

#define evWyslijDane_Default_id 18606

#define wyslijDane_Default_id 18607

#define ev_Default_id 18608

#define evWyslijO_Default_id 18609

#define podajDalej_Default_id 18610

#define evWlacz_Default_id 18611

#define evWylacz_Default_id 18612

#define evTrybOszczedzaniaEnergii_Default_id 18613

#define evRestart_Default_id 18614

#define evKalibruj_Default_id 18615

#define readCO_Default_id 18616

#define readNO2_Default_id 18617

#define readSO2_Default_id 18618

#define readO3_Default_id 18619

#define create_Default_id 18620

#define evSendAlert_Default_id 18621

#define evR_Default_id 18622

#define evInicjujWyslaniePakietu_Default_id 18623

#define evSendToReceiver_Default_id 18624

#define evKont_Default_id 18625

#define potwierdzOdbior_Default_id 18626

#define evGonnaSend_Default_id 18627

#define evBegin_Default_id 18628

#define ConfirmRecival_Default_id 18629

#define Inform_Default_id 18630

#define SendAlert_Default_id 18631

#define serwZadajPakietu_Default_id 18632

#define evWylac_Default_id 18633

#define czytajCzujniki_Default_id 18634

#define timerOdczy_Default_id 18635

#define timer_Default_id 18636

#define timerCzytajSensory_Default_id 18637

#define serwSkalibruj_Default_id 18638

#define callibrateCauseRequested_Default_id 18639

#define envSkalibruj_Default_id 18640

#define requestTime_Default_id 18641

#define provideTime_Default_id 18642

#define inicjujOdczytTimer_Default_id 18643

#define callibrated_Default_id 18644

#define potwierdzSygnalOdTimera_Default_id 18645

#define confirmAlertReceival_Default_id 18646

#define serwUspijStacje_Default_id 18647

#define envUspijStacje_Default_id 18648

#define serwAktywuj_Default_id 18649

#define envAktywuj_Default_id 18650

#define envCzytajLog_Default_id 18651

#define serwCzytajLog_Default_id 18652

#define eventmessage_0_Default_id 18653
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

//## event inicjalizujWyslaniePakietu()
class inicjalizujWyslaniePakietu : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedinicjalizujWyslaniePakietu;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    inicjalizujWyslaniePakietu();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedinicjalizujWyslaniePakietu : virtual public AOMEvent {
    DECLARE_META_EVENT(inicjalizujWyslaniePakietu)
};
//#]
#endif // _OMINSTRUMENT

//## event inicjalizujOdczytPm()
class inicjalizujOdczytPm : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedinicjalizujOdczytPm;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    inicjalizujOdczytPm();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedinicjalizujOdczytPm : virtual public AOMEvent {
    DECLARE_META_EVENT(inicjalizujOdczytPm)
};
//#]
#endif // _OMINSTRUMENT

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

//## event append()
class append : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedappend;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    append();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedappend : virtual public AOMEvent {
    DECLARE_META_EVENT(append)
};
//#]
#endif // _OMINSTRUMENT

//## event chO3()
class chO3 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedchO3;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    chO3();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedchO3 : virtual public AOMEvent {
    DECLARE_META_EVENT(chO3)
};
//#]
#endif // _OMINSTRUMENT

//## event evWyslijDane()
class evWyslijDane : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevWyslijDane;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evWyslijDane();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevWyslijDane : virtual public AOMEvent {
    DECLARE_META_EVENT(evWyslijDane)
};
//#]
#endif // _OMINSTRUMENT

//## event wyslijDane(double)
class wyslijDane : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedwyslijDane;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    wyslijDane();
    
    //## auto_generated
    wyslijDane(double p_valueBeingSent);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    double valueBeingSent;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedwyslijDane : virtual public AOMEvent {
    DECLARE_META_EVENT(wyslijDane)
};
//#]
#endif // _OMINSTRUMENT

//## event ev()
class ev : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev : virtual public AOMEvent {
    DECLARE_META_EVENT(ev)
};
//#]
#endif // _OMINSTRUMENT

//## event evWyslijO()
class evWyslijO : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevWyslijO;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evWyslijO();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevWyslijO : virtual public AOMEvent {
    DECLARE_META_EVENT(evWyslijO)
};
//#]
#endif // _OMINSTRUMENT

//## event podajDalej(double)
class podajDalej : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedpodajDalej;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    podajDalej();
    
    //## auto_generated
    podajDalej(double p_valueBeingForwarded);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    double valueBeingForwarded;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedpodajDalej : virtual public AOMEvent {
    DECLARE_META_EVENT(podajDalej)
};
//#]
#endif // _OMINSTRUMENT

//## event evWlacz()
class evWlacz : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevWlacz;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evWlacz();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevWlacz : virtual public AOMEvent {
    DECLARE_META_EVENT(evWlacz)
};
//#]
#endif // _OMINSTRUMENT

//## event evWylacz()
class evWylacz : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevWylacz;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evWylacz();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevWylacz : virtual public AOMEvent {
    DECLARE_META_EVENT(evWylacz)
};
//#]
#endif // _OMINSTRUMENT

//## event evTrybOszczedzaniaEnergii()
class evTrybOszczedzaniaEnergii : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevTrybOszczedzaniaEnergii;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evTrybOszczedzaniaEnergii();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevTrybOszczedzaniaEnergii : virtual public AOMEvent {
    DECLARE_META_EVENT(evTrybOszczedzaniaEnergii)
};
//#]
#endif // _OMINSTRUMENT

//## event evRestart()
class evRestart : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevRestart;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evRestart();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevRestart : virtual public AOMEvent {
    DECLARE_META_EVENT(evRestart)
};
//#]
#endif // _OMINSTRUMENT

//## event evKalibruj()
class evKalibruj : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevKalibruj;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evKalibruj();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevKalibruj : virtual public AOMEvent {
    DECLARE_META_EVENT(evKalibruj)
};
//#]
#endif // _OMINSTRUMENT

//## event readCO()
class readCO : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreadCO;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    readCO();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreadCO : virtual public AOMEvent {
    DECLARE_META_EVENT(readCO)
};
//#]
#endif // _OMINSTRUMENT

//## event readNO2()
class readNO2 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreadNO2;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    readNO2();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreadNO2 : virtual public AOMEvent {
    DECLARE_META_EVENT(readNO2)
};
//#]
#endif // _OMINSTRUMENT

//## event readSO2()
class readSO2 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreadSO2;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    readSO2();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreadSO2 : virtual public AOMEvent {
    DECLARE_META_EVENT(readSO2)
};
//#]
#endif // _OMINSTRUMENT

//## event readO3()
class readO3 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreadO3;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    readO3();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreadO3 : virtual public AOMEvent {
    DECLARE_META_EVENT(readO3)
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

//## event evSendAlert(int,int)
class evSendAlert : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSendAlert;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSendAlert();
    
    //## auto_generated
    evSendAlert(int p_stationId, int p_whichParticle);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    int stationId;		//## auto_generated
    
    int whichParticle;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSendAlert : virtual public AOMEvent {
    DECLARE_META_EVENT(evSendAlert)
};
//#]
#endif // _OMINSTRUMENT

//## event evR()
class evR : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevR;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evR();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevR : virtual public AOMEvent {
    DECLARE_META_EVENT(evR)
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

//## event evSendToReceiver(StationData*)
class evSendToReceiver : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSendToReceiver;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSendToReceiver();
    
    //## auto_generated
    evSendToReceiver(StationData* p_data);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    StationData* data;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSendToReceiver : virtual public AOMEvent {
    DECLARE_META_EVENT(evSendToReceiver)
};
//#]
#endif // _OMINSTRUMENT

//## event evKont()
class evKont : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevKont;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evKont();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevKont : virtual public AOMEvent {
    DECLARE_META_EVENT(evKont)
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

//## event evGonnaSend()
class evGonnaSend : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevGonnaSend;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evGonnaSend();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevGonnaSend : virtual public AOMEvent {
    DECLARE_META_EVENT(evGonnaSend)
};
//#]
#endif // _OMINSTRUMENT

//## event evBegin()
class evBegin : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevBegin;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evBegin();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevBegin : virtual public AOMEvent {
    DECLARE_META_EVENT(evBegin)
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

//## event evWylac()
class evWylac : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevWylac;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evWylac();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevWylac : virtual public AOMEvent {
    DECLARE_META_EVENT(evWylac)
};
//#]
#endif // _OMINSTRUMENT

//## event czytajCzujniki()
class czytajCzujniki : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedczytajCzujniki;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    czytajCzujniki();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedczytajCzujniki : virtual public AOMEvent {
    DECLARE_META_EVENT(czytajCzujniki)
};
//#]
#endif // _OMINSTRUMENT

//## event timerOdczy()
class timerOdczy : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedtimerOdczy;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    timerOdczy();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedtimerOdczy : virtual public AOMEvent {
    DECLARE_META_EVENT(timerOdczy)
};
//#]
#endif // _OMINSTRUMENT

//## event timer()
class timer : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedtimer;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    timer();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedtimer : virtual public AOMEvent {
    DECLARE_META_EVENT(timer)
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

//## event envCzytajLog()
class envCzytajLog : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedenvCzytajLog;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    envCzytajLog();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedenvCzytajLog : virtual public AOMEvent {
    DECLARE_META_EVENT(envCzytajLog)
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

//## event eventmessage_0()
class eventmessage_0 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedeventmessage_0;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    eventmessage_0();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedeventmessage_0 : virtual public AOMEvent {
    DECLARE_META_EVENT(eventmessage_0)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.h
*********************************************************************/
