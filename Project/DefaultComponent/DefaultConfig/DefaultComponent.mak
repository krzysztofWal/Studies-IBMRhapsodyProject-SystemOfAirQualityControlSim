
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

SIMULINK_CONFIG=False
!IF "$(SIMULINK_CONFIG)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "OM_WITH_CLEANUP"
!ENDIF


!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC10x86$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x86 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\ProgramData\IBM\Rational\Rhapsody\8.3.1\Share"
RHPROOT="C:\Program Files\IBM\Rational\Rhapsody\8.3.1"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  Sensor.obj \
  O3_Sensor.obj \
  Controller.obj \
  Thermometer.obj \
  Hygrometer.obj \
  Barometer.obj \
  StationData.obj \
  Receiver.obj \
  CO_Sensor.obj \
  SO2_Sensor.obj \
  NO2_Sensor.obj \
  PM1_Sensor.obj \
  PM2_5Sensor.obj \
  PM10_Sensor.obj \
  iPrint.obj \
  iInitialize.obj \
  iInform.obj \
  iConfirmDataReceival.obj \
  iSendAlert.obj \
  iGetAlertDetails.obj \
  iCalibrateRequest.obj \
  Timer.obj \
  iConfirmAlertReceival.obj \
  Default.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






Sensor.obj : Sensor.cpp Sensor.h    Default.h Controller.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Sensor.obj" "Sensor.cpp" 



O3_Sensor.obj : O3_Sensor.cpp O3_Sensor.h    Default.h Controller.h Sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"O3_Sensor.obj" "O3_Sensor.cpp" 



Controller.obj : Controller.cpp Controller.h    Default.h O3_Sensor.h Thermometer.h Hygrometer.h Barometer.h CO_Sensor.h SO2_Sensor.h NO2_Sensor.h PM10_Sensor.h PM2_5Sensor.h PM1_Sensor.h Timer.h StationData.h iInform.h iSendAlert.h iPrint.h Sensor.h iInitialize.h iConfirmDataReceival.h iGetAlertDetails.h iCalibrateRequest.h iConfirmAlertReceival.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Controller.obj" "Controller.cpp" 



Thermometer.obj : Thermometer.cpp Thermometer.h    Default.h Controller.h Sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Thermometer.obj" "Thermometer.cpp" 



Hygrometer.obj : Hygrometer.cpp Hygrometer.h    Default.h Controller.h Sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Hygrometer.obj" "Hygrometer.cpp" 



Barometer.obj : Barometer.cpp Barometer.h    Default.h Controller.h Sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Barometer.obj" "Barometer.cpp" 



StationData.obj : StationData.cpp StationData.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"StationData.obj" "StationData.cpp" 



Receiver.obj : Receiver.cpp Receiver.h    Default.h StationData.h iPrint.h iInitialize.h iConfirmDataReceival.h iGetAlertDetails.h iCalibrateRequest.h iConfirmAlertReceival.h iInform.h iSendAlert.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Receiver.obj" "Receiver.cpp" 



CO_Sensor.obj : CO_Sensor.cpp CO_Sensor.h    Default.h Controller.h Sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CO_Sensor.obj" "CO_Sensor.cpp" 



SO2_Sensor.obj : SO2_Sensor.cpp SO2_Sensor.h    Default.h Controller.h Sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SO2_Sensor.obj" "SO2_Sensor.cpp" 



NO2_Sensor.obj : NO2_Sensor.cpp NO2_Sensor.h    Default.h Controller.h Sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"NO2_Sensor.obj" "NO2_Sensor.cpp" 



PM1_Sensor.obj : PM1_Sensor.cpp PM1_Sensor.h    Default.h Controller.h Sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PM1_Sensor.obj" "PM1_Sensor.cpp" 



PM2_5Sensor.obj : PM2_5Sensor.cpp PM2_5Sensor.h    Default.h Controller.h Sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PM2_5Sensor.obj" "PM2_5Sensor.cpp" 



PM10_Sensor.obj : PM10_Sensor.cpp PM10_Sensor.h    Default.h Controller.h Sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PM10_Sensor.obj" "PM10_Sensor.cpp" 



iPrint.obj : iPrint.cpp iPrint.h    Default.h StationData.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"iPrint.obj" "iPrint.cpp" 



iInitialize.obj : iInitialize.cpp iInitialize.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"iInitialize.obj" "iInitialize.cpp" 



iInform.obj : iInform.cpp iInform.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"iInform.obj" "iInform.cpp" 



iConfirmDataReceival.obj : iConfirmDataReceival.cpp iConfirmDataReceival.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"iConfirmDataReceival.obj" "iConfirmDataReceival.cpp" 



iSendAlert.obj : iSendAlert.cpp iSendAlert.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"iSendAlert.obj" "iSendAlert.cpp" 



iGetAlertDetails.obj : iGetAlertDetails.cpp iGetAlertDetails.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"iGetAlertDetails.obj" "iGetAlertDetails.cpp" 



iCalibrateRequest.obj : iCalibrateRequest.cpp iCalibrateRequest.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"iCalibrateRequest.obj" "iCalibrateRequest.cpp" 



Timer.obj : Timer.cpp Timer.h    Default.h Controller.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Timer.obj" "Timer.cpp" 



iConfirmAlertReceival.obj : iConfirmAlertReceival.cpp iConfirmAlertReceival.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"iConfirmAlertReceival.obj" "iConfirmAlertReceival.cpp" 



Default.obj : Default.cpp Default.h    StationData.h Sensor.h O3_Sensor.h Controller.h Thermometer.h Hygrometer.h Barometer.h Receiver.h CO_Sensor.h SO2_Sensor.h NO2_Sensor.h PM1_Sensor.h PM2_5Sensor.h PM10_Sensor.h iPrint.h iInitialize.h iInform.h iConfirmDataReceival.h iSendAlert.h iGetAlertDetails.h iCalibrateRequest.h Timer.h iConfirmAlertReceival.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Default.obj" "Default.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist Sensor.obj erase Sensor.obj
	if exist O3_Sensor.obj erase O3_Sensor.obj
	if exist Controller.obj erase Controller.obj
	if exist Thermometer.obj erase Thermometer.obj
	if exist Hygrometer.obj erase Hygrometer.obj
	if exist Barometer.obj erase Barometer.obj
	if exist StationData.obj erase StationData.obj
	if exist Receiver.obj erase Receiver.obj
	if exist CO_Sensor.obj erase CO_Sensor.obj
	if exist SO2_Sensor.obj erase SO2_Sensor.obj
	if exist NO2_Sensor.obj erase NO2_Sensor.obj
	if exist PM1_Sensor.obj erase PM1_Sensor.obj
	if exist PM2_5Sensor.obj erase PM2_5Sensor.obj
	if exist PM10_Sensor.obj erase PM10_Sensor.obj
	if exist iPrint.obj erase iPrint.obj
	if exist iInitialize.obj erase iInitialize.obj
	if exist iInform.obj erase iInform.obj
	if exist iConfirmDataReceival.obj erase iConfirmDataReceival.obj
	if exist iSendAlert.obj erase iSendAlert.obj
	if exist iGetAlertDetails.obj erase iGetAlertDetails.obj
	if exist iCalibrateRequest.obj erase iCalibrateRequest.obj
	if exist Timer.obj erase Timer.obj
	if exist iConfirmAlertReceival.obj erase iConfirmAlertReceival.obj
	if exist Default.obj erase Default.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
