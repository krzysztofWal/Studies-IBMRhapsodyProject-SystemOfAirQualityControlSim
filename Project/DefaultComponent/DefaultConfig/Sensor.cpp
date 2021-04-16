/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sensor
//!	Generated Date	: Tue, 14, Jul 2020  
	File Path	: DefaultComponent\DefaultConfig\Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Sensor.h"
//## link itsController
#include "Controller.h"
//#[ ignore
#define Default_Sensor_gen_SERIALIZE \
    aomsmethod->addAttribute("val1", x2String(val1));\
    aomsmethod->addAttribute("val2", x2String(val2));\
    aomsmethod->addAttribute("val3", x2String(val3));\
    aomsmethod->addAttribute("val4", x2String(val4));\
    aomsmethod->addAttribute("seed", x2String(seed));
#define OM_Default_Sensor_gen_1_SERIALIZE \
    aomsmethod->addAttribute("a", x2String(a));\
    aomsmethod->addAttribute("b", x2String(b));\
    aomsmethod->addAttribute("seed", x2String(seed));
#define Default_Sensor_Sensor_SERIALIZE OM_NO_OP

#define Default_Sensor_funcAb_SERIALIZE OM_NO_OP

#define Default_Sensor_getDescription_SERIALIZE OM_NO_OP

#define Default_Sensor_getId_SERIALIZE OM_NO_OP

#define Default_Sensor_readSensorFunc_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Sensor
Sensor::Sensor(IOxfActive* theActiveContext) : recentValue(0.0) {
    NOTIFY_ACTIVE_CONSTRUCTOR(Sensor, Sensor(), 0, Default_Sensor_Sensor_SERIALIZE);
    setActiveContext(this, true);
    itsController = NULL;
    initStatechart();
}

Sensor::~Sensor() {
    NOTIFY_DESTRUCTOR(~Sensor, true);
    cleanUpRelations();
}

double Sensor::gen(double val1, double val2, double val3, double val4, unsigned long long seed) {
    NOTIFY_OPERATION(gen, gen(double,double,double,double,unsigned long long), 5, Default_Sensor_gen_SERIALIZE);
    //#[ operation gen(double,double,double,double,unsigned long long)
    srand(seed);
    num = rand() / (RAND_MAX + 1.0)*100.0;
    //std::cout << "rand: " << num <<std::endl;
    if (num < 25) {
    return val1;
    } else if (num < 50) {
    return val2;
    } else if (num < 75) {
    return val3;
    } else {
    return val4;
    }
    //#]
}

double Sensor::gen(double a, double b, unsigned long long seed) {
    NOTIFY_OPERATION(gen, gen(double,double,unsigned long long), 3, OM_Default_Sensor_gen_1_SERIALIZE);
    //#[ operation gen(double,double,unsigned long long)
    srand(seed+recentValue*10);
    num = rand() / (RAND_MAX + 1.0)*100.0; 
    //std::cout << "gen() num: " << num << "\n";
    num = static_cast<double>(static_cast<int>(((num/100)*(b-a)+a)*10))/10;
    return num;
    
    
    //#]
}

std::string Sensor::getDescription() {
    NOTIFY_OPERATION(getDescription, getDescription(), 0, Default_Sensor_getDescription_SERIALIZE);
    //#[ operation getDescription()
    return description;
    //#]
}

int Sensor::getId() {
    NOTIFY_OPERATION(getId, getId(), 0, Default_Sensor_getId_SERIALIZE);
    //#[ operation getId()
    return id;
    //#]
}

void Sensor::readSensorFunc() {
    NOTIFY_OPERATION(readSensorFunc, readSensorFunc(), 0, Default_Sensor_readSensorFunc_SERIALIZE);
    //#[ operation readSensorFunc()
    //#]
}

Controller* Sensor::getItsController() const {
    return itsController;
}

void Sensor::setItsController(Controller* p_Controller) {
    itsController = p_Controller;
    if(p_Controller != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsController", p_Controller, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsController");
        }
}

bool Sensor::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void Sensor::setDescription(std::string p_description) {
    description = p_description;
}

void Sensor::setId(int p_id) {
    id = p_id;
}

double Sensor::getNum() const {
    return num;
}

void Sensor::setNum(double p_num) {
    num = p_num;
}

double Sensor::getRecentValue() const {
    return recentValue;
}

void Sensor::setRecentValue(double p_recentValue) {
    recentValue = p_recentValue;
}

void Sensor::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Sensor::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

void Sensor::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.OczekiwanieSensor");
        rootState_subState = OczekiwanieSensor;
        rootState_active = OczekiwanieSensor;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Sensor::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State OczekiwanieSensor
        case OczekiwanieSensor:
        {
            if(IS_EVENT_TYPE_OF(readSensor_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.OczekiwanieSensor");
                    //#[ transition 1 
                    readSensorFunc();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_7");
                    pushNullTransition();
                    rootState_subState = sendaction_7;
                    rootState_active = sendaction_7;
                    //#[ state sendaction_7.(Entry) 
                    itsController->GEN(sendReadFromSensor(recentValue));
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_7
        case sendaction_7:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_7");
                    NOTIFY_STATE_ENTERED("ROOT.OczekiwanieSensor");
                    rootState_subState = OczekiwanieSensor;
                    rootState_active = OczekiwanieSensor;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("id", x2String(myReal->id));
    aomsAttributes->addAttribute("description", UNKNOWN2STRING(myReal->description));
    aomsAttributes->addAttribute("recentValue", x2String(myReal->recentValue));
    aomsAttributes->addAttribute("num", x2String(myReal->num));
}

void OMAnimatedSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
}

void OMAnimatedSensor::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Sensor::OczekiwanieSensor:
        {
            OczekiwanieSensor_serializeStates(aomsState);
        }
        break;
        case Sensor::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSensor::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_7");
}

void OMAnimatedSensor::OczekiwanieSensor_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.OczekiwanieSensor");
}
//#]

IMPLEMENT_REACTIVE_META_P(Sensor, Default, Default, false, OMAnimatedSensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Sensor.cpp
*********************************************************************/
