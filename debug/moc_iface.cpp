/****************************************************************************
** Meta object code from reading C++ file 'iface.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../iface.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSRegnumClassENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSRegnumClassENDCLASS = QtMocHelpers::stringData(
    "RegnumClass",
    "regnum",
    "IREG_THYR_START_REGISTERS",
    "IREG_THYR_ANGLEREF",
    "IREG_THYR_STATUS",
    "IREG_THYR_CONTROL",
    "IREG_THYR_USHORTCIRCUIT",
    "IREG_THYR_END_REGISTERS",
    "IREG_IND_START_REGISTERS",
    "IREG_IND_STATUS",
    "IREG_IND_TEST_MOD_0",
    "IREG_IND_TEST_MOD_1",
    "IREG_IND_TEST_MOD_2",
    "IREG_IND_TEST_MOD_3",
    "IREG_IND_TEST0",
    "IREG_IND_TEST1",
    "IREG_IND_TEST2",
    "IREG_IND_TEST3",
    "IREG_IND_CTRL",
    "IREG_IND_END_REGISTERS",
    "IREG_MEAS_START_REGISTERS",
    "IREG_MEAS_OUTPUTS",
    "IREG_MEAS_INPUTS",
    "IREG_MEAS_OUTPUT_ENABLE",
    "IREG_MEAS_OUTPUT_DISABLE",
    "IREG_MEAS_VENT1_ON",
    "IREG_MEAS_VENT1_OFF",
    "IREG_MEAS_VENT1_SCAN_PERIOD",
    "IREG_MEAS_TFAULT",
    "IREG_MEAS_BAUDRATE",
    "IREG_MEAS_VENTL_ON",
    "IREG_MEAS_TEST_VAL",
    "IREG_MEAS_PREHEAT_ON",
    "IREG_MEAS_CTRL",
    "IREG_MEAS_STATUS",
    "IREG_MEAS_STS_ON",
    "IREG_MEAS_STS_OFF",
    "IREG_MEAS_END_REGISTERS",
    "IREG_DRIVERS_START_REGISTERS",
    "IREG_DRIVER0_STATUS",
    "IREG_DRIVER1_STATUS",
    "IREG_DRIVER2_STATUS",
    "IREG_DRIVER3_STATUS",
    "IREG_DRIVER0_CONTROL",
    "IREG_DRIVER1_CONTROL",
    "IREG_DRIVER2_CONTROL",
    "IREG_DRIVER3_CONTROL",
    "IREG_DRIVER0_FLT_LVL",
    "IREG_DRIVER0_DIF_ERR",
    "IREG_DRIVER1_FLT_LVL",
    "IREG_DRIVER1_DIF_ERR",
    "IREG_DRIVER2_FLT_LVL",
    "IREG_DRIVER2_DIF_ERR",
    "IREG_DRIVER3_FLT_LVL",
    "IREG_DRIVER3_DIF_ERR",
    "IREG_DRIVERS_END_REGISTERS",
    "IREG_INV_START_REGISTERS",
    "IREG_INV_CONTROL",
    "IREG_INV_CTRL2",
    "IREG_INV_STATUS",
    "IREG_INV_STATUS2",
    "IREG_INV_STATUS3",
    "IREG_INV_FAULT",
    "IREG_FREQ_REF",
    "IREG_FREQ",
    "IREG_START_FREQ",
    "IREG_FREQ_ERROR",
    "IREG_FREQ_REF_MAX",
    "IREG_T_SPEEDUP",
    "IREG_T_SPEEDDOWN",
    "IREG_T_ILIMIT_SPEEDDOWN",
    "IREG_T_ULOW_SPEEDDOWN",
    "IREG_CURRENT_REGULATOR",
    "IREG_REGULATOR_QUEUE1",
    "IREG_REGULATOR_QUEUE2",
    "IREG_REGULATOR_QUEUE3",
    "IREG_UOUT_PWM_COMP",
    "IREG_U_OUT_OFST",
    "IREG_FC_IRMS",
    "IREG_FC_OVERLOAD",
    "IREG_FC_T_OVERLOAD",
    "IREG_LF",
    "IREG_CF",
    "IREG_FC_U_SCALE",
    "IREG_FC_I_SCALE",
    "IREG_UD_LOW_FAULT",
    "IREG_UD_HIGH_FAULT",
    "IREG_CTRL3",
    "IREG_INV_STATUS5",
    "IREG_FREQ_PWM",
    "IREG_OVERPWM2_ANGLE",
    "IREG_OVERPWM_GAIN",
    "IREG_M_F_NOM",
    "IREG_M_U_NOM",
    "IREG_M_I_NOM",
    "IREG_LOUT_S",
    "IREG_M_IRMS",
    "IREG_M_TRMS",
    "IREG_M_I_FAST",
    "IREG_T_BLANK",
    "IREG_UF_U0",
    "IREG_IF_I0",
    "IREG_UF_F1",
    "IREG_UF_U1",
    "IREG_IF_I1",
    "IREG_UF_F2",
    "IREG_UF_U2",
    "IREG_IF_I2",
    "IREG_UF_F3",
    "IREG_UF_U3",
    "IREG_IF_I3",
    "IREG_UF_F4",
    "IREG_UF_U4",
    "IREG_IF_I4",
    "IREG_UF_F5",
    "IREG_UF_U5",
    "IREG_IF_I5",
    "IREG_UF_F6",
    "IREG_UF_U6",
    "IREG_IF_I6",
    "IREG_IFB_COMP",
    "IREG_F_VECT",
    "IREG_VFREQ_GAIN",
    "IREG_VFREQ_INTEG",
    "IREG_VUOUT_PROP",
    "IREG_VUOUT_INTEG",
    "IREG_VTOUF_INTEG",
    "IREG_MAX_VC_DF",
    "IREG_RES_PROP_GAIN",
    "IREG_RES_INT_GAIN",
    "IREG_RES_START_FREQ",
    "IREG_STARTUP_FREQ",
    "IREG_STARTUP_ANGLE_OSC",
    "IREG_STARTUP_OSC_COUNT",
    "IREG_STARTUP_ROTATIONS",
    "IREG_STARTUP_KU_PULSE",
    "IREG_STARTUP_I_LIM",
    "IREG_STARTUP_I_LIM_PULSE",
    "IREG_DECEL_F_MAX",
    "IREG_DECEL_U_MAX",
    "IREG_F_FORCE",
    "IREG_U_FORCE",
    "IREG_DECEL_SPEEDDOWN",
    "IREG_LOUT",
    "IREG_AST_UMEAS",
    "IREG_AST_IMEAS",
    "IREG_UD",
    "IREG_UOUT",
    "IREG_IA_RMS",
    "IREG_IB_RMS",
    "IREG_IC_RMS",
    "IREG_POUT_FAST",
    "IREG_M_EDS_MIN",
    "IREG_MOUT",
    "IREG_IOUT",
    "IREG_PHOUT",
    "IREG_POUT",
    "IREG_SOUT",
    "IREG_IA",
    "IREG_PHA",
    "IREG_IB",
    "IREG_PHB",
    "IREG_IC",
    "IREG_PHC",
    "IREG_M_P_MAX",
    "IREG_TORQUE_FB_COMP",
    "IREG_LM",
    "IREG_M_KI_START",
    "IREG_FC_DI_LEVEL",
    "IREG_M_EDS",
    "IREG_LINK_MNTR",
    "IREG_IRMS_T",
    "IREG_INV_STATUS4",
    "IREG_INV_T_FLT",
    "IREG_INV_TT_FLT",
    "IREG_INV_TAIR_FLT",
    "IREG_RM",
    "IREG_M_KU_START",
    "IREG_I_LIM_MAX_T",
    "IREG_I_LIM_ADD",
    "IREG_DECEL_I_LIM",
    "IREG_ROUT",
    "IREG_ZP",
    "IREG_LR",
    "IREG_RR",
    "IREG_FLSH_RD_ERR_CNT",
    "IREG_FRAME_LEN",
    "IREG_TEST0",
    "IREG_TEST1",
    "IREG_TEST2",
    "IREG_TEST3",
    "IREG_TEST4",
    "IREG_TEST5",
    "IREG_SA_CONST_INT",
    "IREG_SA_PHASE_INT",
    "IREG_SAVED_M_OUTPUTS",
    "IREG_SAVED_M_INPUTS",
    "IREG_SAVED_M_OUT_EN",
    "IREG_SAVED_M_OUT_DIS",
    "IREG_SAVED_M_CTRL",
    "IREG_SAVED_M_V1_SCAN_PD",
    "IREG_SAVED_M_BAUDRATE",
    "IREG_TEST_DIGITAL",
    "IREG_TEST_ANALOG",
    "IREG_SAVED_MEAS_STATUS",
    "IREG_FREQ_REF_HZ",
    "IREG_TEST_TYPE",
    "IREG_RES_IAMP_VALID",
    "IREG_THU_F_NUM",
    "IREG_STARTUP_ANGLE_SHIFT",
    "IREG_M_DELTA_FREQ",
    "IREG_TT_CRITIC",
    "IREG_INV_INT_CTRL",
    "IREG_INV_INT_STATUS",
    "IREG_SA_LIMIT",
    "IREG_DAC_GAIN_RT2",
    "IREG_M_TORQUE_SET",
    "IREG_K_LM_D",
    "IREG_I_LIM_QUANTUM",
    "IREG_SAVED_VENT1_ON",
    "IREG_SAVED_VENT1_OFF",
    "IREG_SAVED_VENTL_ON",
    "IREG_SAVED_PREHEAT_ON",
    "IREG_INV_ALL_END_REGISTERS"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRegnumClassENDCLASS_t {
    uint offsetsAndSizes[448];
    char stringdata0[12];
    char stringdata1[7];
    char stringdata2[26];
    char stringdata3[19];
    char stringdata4[17];
    char stringdata5[18];
    char stringdata6[24];
    char stringdata7[24];
    char stringdata8[25];
    char stringdata9[16];
    char stringdata10[20];
    char stringdata11[20];
    char stringdata12[20];
    char stringdata13[20];
    char stringdata14[15];
    char stringdata15[15];
    char stringdata16[15];
    char stringdata17[15];
    char stringdata18[14];
    char stringdata19[23];
    char stringdata20[26];
    char stringdata21[18];
    char stringdata22[17];
    char stringdata23[24];
    char stringdata24[25];
    char stringdata25[19];
    char stringdata26[20];
    char stringdata27[28];
    char stringdata28[17];
    char stringdata29[19];
    char stringdata30[19];
    char stringdata31[19];
    char stringdata32[21];
    char stringdata33[15];
    char stringdata34[17];
    char stringdata35[17];
    char stringdata36[18];
    char stringdata37[24];
    char stringdata38[29];
    char stringdata39[20];
    char stringdata40[20];
    char stringdata41[20];
    char stringdata42[20];
    char stringdata43[21];
    char stringdata44[21];
    char stringdata45[21];
    char stringdata46[21];
    char stringdata47[21];
    char stringdata48[21];
    char stringdata49[21];
    char stringdata50[21];
    char stringdata51[21];
    char stringdata52[21];
    char stringdata53[21];
    char stringdata54[21];
    char stringdata55[27];
    char stringdata56[25];
    char stringdata57[17];
    char stringdata58[15];
    char stringdata59[16];
    char stringdata60[17];
    char stringdata61[17];
    char stringdata62[15];
    char stringdata63[14];
    char stringdata64[10];
    char stringdata65[16];
    char stringdata66[16];
    char stringdata67[18];
    char stringdata68[15];
    char stringdata69[17];
    char stringdata70[24];
    char stringdata71[22];
    char stringdata72[23];
    char stringdata73[22];
    char stringdata74[22];
    char stringdata75[22];
    char stringdata76[19];
    char stringdata77[16];
    char stringdata78[13];
    char stringdata79[17];
    char stringdata80[19];
    char stringdata81[8];
    char stringdata82[8];
    char stringdata83[16];
    char stringdata84[16];
    char stringdata85[18];
    char stringdata86[19];
    char stringdata87[11];
    char stringdata88[17];
    char stringdata89[14];
    char stringdata90[20];
    char stringdata91[18];
    char stringdata92[13];
    char stringdata93[13];
    char stringdata94[13];
    char stringdata95[12];
    char stringdata96[12];
    char stringdata97[12];
    char stringdata98[14];
    char stringdata99[13];
    char stringdata100[11];
    char stringdata101[11];
    char stringdata102[11];
    char stringdata103[11];
    char stringdata104[11];
    char stringdata105[11];
    char stringdata106[11];
    char stringdata107[11];
    char stringdata108[11];
    char stringdata109[11];
    char stringdata110[11];
    char stringdata111[11];
    char stringdata112[11];
    char stringdata113[11];
    char stringdata114[11];
    char stringdata115[11];
    char stringdata116[11];
    char stringdata117[11];
    char stringdata118[11];
    char stringdata119[11];
    char stringdata120[14];
    char stringdata121[12];
    char stringdata122[16];
    char stringdata123[17];
    char stringdata124[16];
    char stringdata125[17];
    char stringdata126[17];
    char stringdata127[15];
    char stringdata128[19];
    char stringdata129[18];
    char stringdata130[20];
    char stringdata131[18];
    char stringdata132[23];
    char stringdata133[23];
    char stringdata134[23];
    char stringdata135[22];
    char stringdata136[19];
    char stringdata137[25];
    char stringdata138[17];
    char stringdata139[17];
    char stringdata140[13];
    char stringdata141[13];
    char stringdata142[21];
    char stringdata143[10];
    char stringdata144[15];
    char stringdata145[15];
    char stringdata146[8];
    char stringdata147[10];
    char stringdata148[12];
    char stringdata149[12];
    char stringdata150[12];
    char stringdata151[15];
    char stringdata152[15];
    char stringdata153[10];
    char stringdata154[10];
    char stringdata155[11];
    char stringdata156[10];
    char stringdata157[10];
    char stringdata158[8];
    char stringdata159[9];
    char stringdata160[8];
    char stringdata161[9];
    char stringdata162[8];
    char stringdata163[9];
    char stringdata164[13];
    char stringdata165[20];
    char stringdata166[8];
    char stringdata167[16];
    char stringdata168[17];
    char stringdata169[11];
    char stringdata170[15];
    char stringdata171[12];
    char stringdata172[17];
    char stringdata173[15];
    char stringdata174[16];
    char stringdata175[18];
    char stringdata176[8];
    char stringdata177[16];
    char stringdata178[17];
    char stringdata179[15];
    char stringdata180[17];
    char stringdata181[10];
    char stringdata182[8];
    char stringdata183[8];
    char stringdata184[8];
    char stringdata185[21];
    char stringdata186[15];
    char stringdata187[11];
    char stringdata188[11];
    char stringdata189[11];
    char stringdata190[11];
    char stringdata191[11];
    char stringdata192[11];
    char stringdata193[18];
    char stringdata194[18];
    char stringdata195[21];
    char stringdata196[20];
    char stringdata197[20];
    char stringdata198[21];
    char stringdata199[18];
    char stringdata200[24];
    char stringdata201[22];
    char stringdata202[18];
    char stringdata203[17];
    char stringdata204[23];
    char stringdata205[17];
    char stringdata206[15];
    char stringdata207[20];
    char stringdata208[15];
    char stringdata209[25];
    char stringdata210[18];
    char stringdata211[15];
    char stringdata212[18];
    char stringdata213[20];
    char stringdata214[14];
    char stringdata215[18];
    char stringdata216[18];
    char stringdata217[12];
    char stringdata218[19];
    char stringdata219[20];
    char stringdata220[21];
    char stringdata221[20];
    char stringdata222[22];
    char stringdata223[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRegnumClassENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRegnumClassENDCLASS_t qt_meta_stringdata_CLASSRegnumClassENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "RegnumClass"
        QT_MOC_LITERAL(12, 6),  // "regnum"
        QT_MOC_LITERAL(19, 25),  // "IREG_THYR_START_REGISTERS"
        QT_MOC_LITERAL(45, 18),  // "IREG_THYR_ANGLEREF"
        QT_MOC_LITERAL(64, 16),  // "IREG_THYR_STATUS"
        QT_MOC_LITERAL(81, 17),  // "IREG_THYR_CONTROL"
        QT_MOC_LITERAL(99, 23),  // "IREG_THYR_USHORTCIRCUIT"
        QT_MOC_LITERAL(123, 23),  // "IREG_THYR_END_REGISTERS"
        QT_MOC_LITERAL(147, 24),  // "IREG_IND_START_REGISTERS"
        QT_MOC_LITERAL(172, 15),  // "IREG_IND_STATUS"
        QT_MOC_LITERAL(188, 19),  // "IREG_IND_TEST_MOD_0"
        QT_MOC_LITERAL(208, 19),  // "IREG_IND_TEST_MOD_1"
        QT_MOC_LITERAL(228, 19),  // "IREG_IND_TEST_MOD_2"
        QT_MOC_LITERAL(248, 19),  // "IREG_IND_TEST_MOD_3"
        QT_MOC_LITERAL(268, 14),  // "IREG_IND_TEST0"
        QT_MOC_LITERAL(283, 14),  // "IREG_IND_TEST1"
        QT_MOC_LITERAL(298, 14),  // "IREG_IND_TEST2"
        QT_MOC_LITERAL(313, 14),  // "IREG_IND_TEST3"
        QT_MOC_LITERAL(328, 13),  // "IREG_IND_CTRL"
        QT_MOC_LITERAL(342, 22),  // "IREG_IND_END_REGISTERS"
        QT_MOC_LITERAL(365, 25),  // "IREG_MEAS_START_REGISTERS"
        QT_MOC_LITERAL(391, 17),  // "IREG_MEAS_OUTPUTS"
        QT_MOC_LITERAL(409, 16),  // "IREG_MEAS_INPUTS"
        QT_MOC_LITERAL(426, 23),  // "IREG_MEAS_OUTPUT_ENABLE"
        QT_MOC_LITERAL(450, 24),  // "IREG_MEAS_OUTPUT_DISABLE"
        QT_MOC_LITERAL(475, 18),  // "IREG_MEAS_VENT1_ON"
        QT_MOC_LITERAL(494, 19),  // "IREG_MEAS_VENT1_OFF"
        QT_MOC_LITERAL(514, 27),  // "IREG_MEAS_VENT1_SCAN_PERIOD"
        QT_MOC_LITERAL(542, 16),  // "IREG_MEAS_TFAULT"
        QT_MOC_LITERAL(559, 18),  // "IREG_MEAS_BAUDRATE"
        QT_MOC_LITERAL(578, 18),  // "IREG_MEAS_VENTL_ON"
        QT_MOC_LITERAL(597, 18),  // "IREG_MEAS_TEST_VAL"
        QT_MOC_LITERAL(616, 20),  // "IREG_MEAS_PREHEAT_ON"
        QT_MOC_LITERAL(637, 14),  // "IREG_MEAS_CTRL"
        QT_MOC_LITERAL(652, 16),  // "IREG_MEAS_STATUS"
        QT_MOC_LITERAL(669, 16),  // "IREG_MEAS_STS_ON"
        QT_MOC_LITERAL(686, 17),  // "IREG_MEAS_STS_OFF"
        QT_MOC_LITERAL(704, 23),  // "IREG_MEAS_END_REGISTERS"
        QT_MOC_LITERAL(728, 28),  // "IREG_DRIVERS_START_REGISTERS"
        QT_MOC_LITERAL(757, 19),  // "IREG_DRIVER0_STATUS"
        QT_MOC_LITERAL(777, 19),  // "IREG_DRIVER1_STATUS"
        QT_MOC_LITERAL(797, 19),  // "IREG_DRIVER2_STATUS"
        QT_MOC_LITERAL(817, 19),  // "IREG_DRIVER3_STATUS"
        QT_MOC_LITERAL(837, 20),  // "IREG_DRIVER0_CONTROL"
        QT_MOC_LITERAL(858, 20),  // "IREG_DRIVER1_CONTROL"
        QT_MOC_LITERAL(879, 20),  // "IREG_DRIVER2_CONTROL"
        QT_MOC_LITERAL(900, 20),  // "IREG_DRIVER3_CONTROL"
        QT_MOC_LITERAL(921, 20),  // "IREG_DRIVER0_FLT_LVL"
        QT_MOC_LITERAL(942, 20),  // "IREG_DRIVER0_DIF_ERR"
        QT_MOC_LITERAL(963, 20),  // "IREG_DRIVER1_FLT_LVL"
        QT_MOC_LITERAL(984, 20),  // "IREG_DRIVER1_DIF_ERR"
        QT_MOC_LITERAL(1005, 20),  // "IREG_DRIVER2_FLT_LVL"
        QT_MOC_LITERAL(1026, 20),  // "IREG_DRIVER2_DIF_ERR"
        QT_MOC_LITERAL(1047, 20),  // "IREG_DRIVER3_FLT_LVL"
        QT_MOC_LITERAL(1068, 20),  // "IREG_DRIVER3_DIF_ERR"
        QT_MOC_LITERAL(1089, 26),  // "IREG_DRIVERS_END_REGISTERS"
        QT_MOC_LITERAL(1116, 24),  // "IREG_INV_START_REGISTERS"
        QT_MOC_LITERAL(1141, 16),  // "IREG_INV_CONTROL"
        QT_MOC_LITERAL(1158, 14),  // "IREG_INV_CTRL2"
        QT_MOC_LITERAL(1173, 15),  // "IREG_INV_STATUS"
        QT_MOC_LITERAL(1189, 16),  // "IREG_INV_STATUS2"
        QT_MOC_LITERAL(1206, 16),  // "IREG_INV_STATUS3"
        QT_MOC_LITERAL(1223, 14),  // "IREG_INV_FAULT"
        QT_MOC_LITERAL(1238, 13),  // "IREG_FREQ_REF"
        QT_MOC_LITERAL(1252, 9),  // "IREG_FREQ"
        QT_MOC_LITERAL(1262, 15),  // "IREG_START_FREQ"
        QT_MOC_LITERAL(1278, 15),  // "IREG_FREQ_ERROR"
        QT_MOC_LITERAL(1294, 17),  // "IREG_FREQ_REF_MAX"
        QT_MOC_LITERAL(1312, 14),  // "IREG_T_SPEEDUP"
        QT_MOC_LITERAL(1327, 16),  // "IREG_T_SPEEDDOWN"
        QT_MOC_LITERAL(1344, 23),  // "IREG_T_ILIMIT_SPEEDDOWN"
        QT_MOC_LITERAL(1368, 21),  // "IREG_T_ULOW_SPEEDDOWN"
        QT_MOC_LITERAL(1390, 22),  // "IREG_CURRENT_REGULATOR"
        QT_MOC_LITERAL(1413, 21),  // "IREG_REGULATOR_QUEUE1"
        QT_MOC_LITERAL(1435, 21),  // "IREG_REGULATOR_QUEUE2"
        QT_MOC_LITERAL(1457, 21),  // "IREG_REGULATOR_QUEUE3"
        QT_MOC_LITERAL(1479, 18),  // "IREG_UOUT_PWM_COMP"
        QT_MOC_LITERAL(1498, 15),  // "IREG_U_OUT_OFST"
        QT_MOC_LITERAL(1514, 12),  // "IREG_FC_IRMS"
        QT_MOC_LITERAL(1527, 16),  // "IREG_FC_OVERLOAD"
        QT_MOC_LITERAL(1544, 18),  // "IREG_FC_T_OVERLOAD"
        QT_MOC_LITERAL(1563, 7),  // "IREG_LF"
        QT_MOC_LITERAL(1571, 7),  // "IREG_CF"
        QT_MOC_LITERAL(1579, 15),  // "IREG_FC_U_SCALE"
        QT_MOC_LITERAL(1595, 15),  // "IREG_FC_I_SCALE"
        QT_MOC_LITERAL(1611, 17),  // "IREG_UD_LOW_FAULT"
        QT_MOC_LITERAL(1629, 18),  // "IREG_UD_HIGH_FAULT"
        QT_MOC_LITERAL(1648, 10),  // "IREG_CTRL3"
        QT_MOC_LITERAL(1659, 16),  // "IREG_INV_STATUS5"
        QT_MOC_LITERAL(1676, 13),  // "IREG_FREQ_PWM"
        QT_MOC_LITERAL(1690, 19),  // "IREG_OVERPWM2_ANGLE"
        QT_MOC_LITERAL(1710, 17),  // "IREG_OVERPWM_GAIN"
        QT_MOC_LITERAL(1728, 12),  // "IREG_M_F_NOM"
        QT_MOC_LITERAL(1741, 12),  // "IREG_M_U_NOM"
        QT_MOC_LITERAL(1754, 12),  // "IREG_M_I_NOM"
        QT_MOC_LITERAL(1767, 11),  // "IREG_LOUT_S"
        QT_MOC_LITERAL(1779, 11),  // "IREG_M_IRMS"
        QT_MOC_LITERAL(1791, 11),  // "IREG_M_TRMS"
        QT_MOC_LITERAL(1803, 13),  // "IREG_M_I_FAST"
        QT_MOC_LITERAL(1817, 12),  // "IREG_T_BLANK"
        QT_MOC_LITERAL(1830, 10),  // "IREG_UF_U0"
        QT_MOC_LITERAL(1841, 10),  // "IREG_IF_I0"
        QT_MOC_LITERAL(1852, 10),  // "IREG_UF_F1"
        QT_MOC_LITERAL(1863, 10),  // "IREG_UF_U1"
        QT_MOC_LITERAL(1874, 10),  // "IREG_IF_I1"
        QT_MOC_LITERAL(1885, 10),  // "IREG_UF_F2"
        QT_MOC_LITERAL(1896, 10),  // "IREG_UF_U2"
        QT_MOC_LITERAL(1907, 10),  // "IREG_IF_I2"
        QT_MOC_LITERAL(1918, 10),  // "IREG_UF_F3"
        QT_MOC_LITERAL(1929, 10),  // "IREG_UF_U3"
        QT_MOC_LITERAL(1940, 10),  // "IREG_IF_I3"
        QT_MOC_LITERAL(1951, 10),  // "IREG_UF_F4"
        QT_MOC_LITERAL(1962, 10),  // "IREG_UF_U4"
        QT_MOC_LITERAL(1973, 10),  // "IREG_IF_I4"
        QT_MOC_LITERAL(1984, 10),  // "IREG_UF_F5"
        QT_MOC_LITERAL(1995, 10),  // "IREG_UF_U5"
        QT_MOC_LITERAL(2006, 10),  // "IREG_IF_I5"
        QT_MOC_LITERAL(2017, 10),  // "IREG_UF_F6"
        QT_MOC_LITERAL(2028, 10),  // "IREG_UF_U6"
        QT_MOC_LITERAL(2039, 10),  // "IREG_IF_I6"
        QT_MOC_LITERAL(2050, 13),  // "IREG_IFB_COMP"
        QT_MOC_LITERAL(2064, 11),  // "IREG_F_VECT"
        QT_MOC_LITERAL(2076, 15),  // "IREG_VFREQ_GAIN"
        QT_MOC_LITERAL(2092, 16),  // "IREG_VFREQ_INTEG"
        QT_MOC_LITERAL(2109, 15),  // "IREG_VUOUT_PROP"
        QT_MOC_LITERAL(2125, 16),  // "IREG_VUOUT_INTEG"
        QT_MOC_LITERAL(2142, 16),  // "IREG_VTOUF_INTEG"
        QT_MOC_LITERAL(2159, 14),  // "IREG_MAX_VC_DF"
        QT_MOC_LITERAL(2174, 18),  // "IREG_RES_PROP_GAIN"
        QT_MOC_LITERAL(2193, 17),  // "IREG_RES_INT_GAIN"
        QT_MOC_LITERAL(2211, 19),  // "IREG_RES_START_FREQ"
        QT_MOC_LITERAL(2231, 17),  // "IREG_STARTUP_FREQ"
        QT_MOC_LITERAL(2249, 22),  // "IREG_STARTUP_ANGLE_OSC"
        QT_MOC_LITERAL(2272, 22),  // "IREG_STARTUP_OSC_COUNT"
        QT_MOC_LITERAL(2295, 22),  // "IREG_STARTUP_ROTATIONS"
        QT_MOC_LITERAL(2318, 21),  // "IREG_STARTUP_KU_PULSE"
        QT_MOC_LITERAL(2340, 18),  // "IREG_STARTUP_I_LIM"
        QT_MOC_LITERAL(2359, 24),  // "IREG_STARTUP_I_LIM_PULSE"
        QT_MOC_LITERAL(2384, 16),  // "IREG_DECEL_F_MAX"
        QT_MOC_LITERAL(2401, 16),  // "IREG_DECEL_U_MAX"
        QT_MOC_LITERAL(2418, 12),  // "IREG_F_FORCE"
        QT_MOC_LITERAL(2431, 12),  // "IREG_U_FORCE"
        QT_MOC_LITERAL(2444, 20),  // "IREG_DECEL_SPEEDDOWN"
        QT_MOC_LITERAL(2465, 9),  // "IREG_LOUT"
        QT_MOC_LITERAL(2475, 14),  // "IREG_AST_UMEAS"
        QT_MOC_LITERAL(2490, 14),  // "IREG_AST_IMEAS"
        QT_MOC_LITERAL(2505, 7),  // "IREG_UD"
        QT_MOC_LITERAL(2513, 9),  // "IREG_UOUT"
        QT_MOC_LITERAL(2523, 11),  // "IREG_IA_RMS"
        QT_MOC_LITERAL(2535, 11),  // "IREG_IB_RMS"
        QT_MOC_LITERAL(2547, 11),  // "IREG_IC_RMS"
        QT_MOC_LITERAL(2559, 14),  // "IREG_POUT_FAST"
        QT_MOC_LITERAL(2574, 14),  // "IREG_M_EDS_MIN"
        QT_MOC_LITERAL(2589, 9),  // "IREG_MOUT"
        QT_MOC_LITERAL(2599, 9),  // "IREG_IOUT"
        QT_MOC_LITERAL(2609, 10),  // "IREG_PHOUT"
        QT_MOC_LITERAL(2620, 9),  // "IREG_POUT"
        QT_MOC_LITERAL(2630, 9),  // "IREG_SOUT"
        QT_MOC_LITERAL(2640, 7),  // "IREG_IA"
        QT_MOC_LITERAL(2648, 8),  // "IREG_PHA"
        QT_MOC_LITERAL(2657, 7),  // "IREG_IB"
        QT_MOC_LITERAL(2665, 8),  // "IREG_PHB"
        QT_MOC_LITERAL(2674, 7),  // "IREG_IC"
        QT_MOC_LITERAL(2682, 8),  // "IREG_PHC"
        QT_MOC_LITERAL(2691, 12),  // "IREG_M_P_MAX"
        QT_MOC_LITERAL(2704, 19),  // "IREG_TORQUE_FB_COMP"
        QT_MOC_LITERAL(2724, 7),  // "IREG_LM"
        QT_MOC_LITERAL(2732, 15),  // "IREG_M_KI_START"
        QT_MOC_LITERAL(2748, 16),  // "IREG_FC_DI_LEVEL"
        QT_MOC_LITERAL(2765, 10),  // "IREG_M_EDS"
        QT_MOC_LITERAL(2776, 14),  // "IREG_LINK_MNTR"
        QT_MOC_LITERAL(2791, 11),  // "IREG_IRMS_T"
        QT_MOC_LITERAL(2803, 16),  // "IREG_INV_STATUS4"
        QT_MOC_LITERAL(2820, 14),  // "IREG_INV_T_FLT"
        QT_MOC_LITERAL(2835, 15),  // "IREG_INV_TT_FLT"
        QT_MOC_LITERAL(2851, 17),  // "IREG_INV_TAIR_FLT"
        QT_MOC_LITERAL(2869, 7),  // "IREG_RM"
        QT_MOC_LITERAL(2877, 15),  // "IREG_M_KU_START"
        QT_MOC_LITERAL(2893, 16),  // "IREG_I_LIM_MAX_T"
        QT_MOC_LITERAL(2910, 14),  // "IREG_I_LIM_ADD"
        QT_MOC_LITERAL(2925, 16),  // "IREG_DECEL_I_LIM"
        QT_MOC_LITERAL(2942, 9),  // "IREG_ROUT"
        QT_MOC_LITERAL(2952, 7),  // "IREG_ZP"
        QT_MOC_LITERAL(2960, 7),  // "IREG_LR"
        QT_MOC_LITERAL(2968, 7),  // "IREG_RR"
        QT_MOC_LITERAL(2976, 20),  // "IREG_FLSH_RD_ERR_CNT"
        QT_MOC_LITERAL(2997, 14),  // "IREG_FRAME_LEN"
        QT_MOC_LITERAL(3012, 10),  // "IREG_TEST0"
        QT_MOC_LITERAL(3023, 10),  // "IREG_TEST1"
        QT_MOC_LITERAL(3034, 10),  // "IREG_TEST2"
        QT_MOC_LITERAL(3045, 10),  // "IREG_TEST3"
        QT_MOC_LITERAL(3056, 10),  // "IREG_TEST4"
        QT_MOC_LITERAL(3067, 10),  // "IREG_TEST5"
        QT_MOC_LITERAL(3078, 17),  // "IREG_SA_CONST_INT"
        QT_MOC_LITERAL(3096, 17),  // "IREG_SA_PHASE_INT"
        QT_MOC_LITERAL(3114, 20),  // "IREG_SAVED_M_OUTPUTS"
        QT_MOC_LITERAL(3135, 19),  // "IREG_SAVED_M_INPUTS"
        QT_MOC_LITERAL(3155, 19),  // "IREG_SAVED_M_OUT_EN"
        QT_MOC_LITERAL(3175, 20),  // "IREG_SAVED_M_OUT_DIS"
        QT_MOC_LITERAL(3196, 17),  // "IREG_SAVED_M_CTRL"
        QT_MOC_LITERAL(3214, 23),  // "IREG_SAVED_M_V1_SCAN_PD"
        QT_MOC_LITERAL(3238, 21),  // "IREG_SAVED_M_BAUDRATE"
        QT_MOC_LITERAL(3260, 17),  // "IREG_TEST_DIGITAL"
        QT_MOC_LITERAL(3278, 16),  // "IREG_TEST_ANALOG"
        QT_MOC_LITERAL(3295, 22),  // "IREG_SAVED_MEAS_STATUS"
        QT_MOC_LITERAL(3318, 16),  // "IREG_FREQ_REF_HZ"
        QT_MOC_LITERAL(3335, 14),  // "IREG_TEST_TYPE"
        QT_MOC_LITERAL(3350, 19),  // "IREG_RES_IAMP_VALID"
        QT_MOC_LITERAL(3370, 14),  // "IREG_THU_F_NUM"
        QT_MOC_LITERAL(3385, 24),  // "IREG_STARTUP_ANGLE_SHIFT"
        QT_MOC_LITERAL(3410, 17),  // "IREG_M_DELTA_FREQ"
        QT_MOC_LITERAL(3428, 14),  // "IREG_TT_CRITIC"
        QT_MOC_LITERAL(3443, 17),  // "IREG_INV_INT_CTRL"
        QT_MOC_LITERAL(3461, 19),  // "IREG_INV_INT_STATUS"
        QT_MOC_LITERAL(3481, 13),  // "IREG_SA_LIMIT"
        QT_MOC_LITERAL(3495, 17),  // "IREG_DAC_GAIN_RT2"
        QT_MOC_LITERAL(3513, 17),  // "IREG_M_TORQUE_SET"
        QT_MOC_LITERAL(3531, 11),  // "IREG_K_LM_D"
        QT_MOC_LITERAL(3543, 18),  // "IREG_I_LIM_QUANTUM"
        QT_MOC_LITERAL(3562, 19),  // "IREG_SAVED_VENT1_ON"
        QT_MOC_LITERAL(3582, 20),  // "IREG_SAVED_VENT1_OFF"
        QT_MOC_LITERAL(3603, 19),  // "IREG_SAVED_VENTL_ON"
        QT_MOC_LITERAL(3623, 21),  // "IREG_SAVED_PREHEAT_ON"
        QT_MOC_LITERAL(3645, 26)   // "IREG_INV_ALL_END_REGISTERS"
    },
    "RegnumClass",
    "regnum",
    "IREG_THYR_START_REGISTERS",
    "IREG_THYR_ANGLEREF",
    "IREG_THYR_STATUS",
    "IREG_THYR_CONTROL",
    "IREG_THYR_USHORTCIRCUIT",
    "IREG_THYR_END_REGISTERS",
    "IREG_IND_START_REGISTERS",
    "IREG_IND_STATUS",
    "IREG_IND_TEST_MOD_0",
    "IREG_IND_TEST_MOD_1",
    "IREG_IND_TEST_MOD_2",
    "IREG_IND_TEST_MOD_3",
    "IREG_IND_TEST0",
    "IREG_IND_TEST1",
    "IREG_IND_TEST2",
    "IREG_IND_TEST3",
    "IREG_IND_CTRL",
    "IREG_IND_END_REGISTERS",
    "IREG_MEAS_START_REGISTERS",
    "IREG_MEAS_OUTPUTS",
    "IREG_MEAS_INPUTS",
    "IREG_MEAS_OUTPUT_ENABLE",
    "IREG_MEAS_OUTPUT_DISABLE",
    "IREG_MEAS_VENT1_ON",
    "IREG_MEAS_VENT1_OFF",
    "IREG_MEAS_VENT1_SCAN_PERIOD",
    "IREG_MEAS_TFAULT",
    "IREG_MEAS_BAUDRATE",
    "IREG_MEAS_VENTL_ON",
    "IREG_MEAS_TEST_VAL",
    "IREG_MEAS_PREHEAT_ON",
    "IREG_MEAS_CTRL",
    "IREG_MEAS_STATUS",
    "IREG_MEAS_STS_ON",
    "IREG_MEAS_STS_OFF",
    "IREG_MEAS_END_REGISTERS",
    "IREG_DRIVERS_START_REGISTERS",
    "IREG_DRIVER0_STATUS",
    "IREG_DRIVER1_STATUS",
    "IREG_DRIVER2_STATUS",
    "IREG_DRIVER3_STATUS",
    "IREG_DRIVER0_CONTROL",
    "IREG_DRIVER1_CONTROL",
    "IREG_DRIVER2_CONTROL",
    "IREG_DRIVER3_CONTROL",
    "IREG_DRIVER0_FLT_LVL",
    "IREG_DRIVER0_DIF_ERR",
    "IREG_DRIVER1_FLT_LVL",
    "IREG_DRIVER1_DIF_ERR",
    "IREG_DRIVER2_FLT_LVL",
    "IREG_DRIVER2_DIF_ERR",
    "IREG_DRIVER3_FLT_LVL",
    "IREG_DRIVER3_DIF_ERR",
    "IREG_DRIVERS_END_REGISTERS",
    "IREG_INV_START_REGISTERS",
    "IREG_INV_CONTROL",
    "IREG_INV_CTRL2",
    "IREG_INV_STATUS",
    "IREG_INV_STATUS2",
    "IREG_INV_STATUS3",
    "IREG_INV_FAULT",
    "IREG_FREQ_REF",
    "IREG_FREQ",
    "IREG_START_FREQ",
    "IREG_FREQ_ERROR",
    "IREG_FREQ_REF_MAX",
    "IREG_T_SPEEDUP",
    "IREG_T_SPEEDDOWN",
    "IREG_T_ILIMIT_SPEEDDOWN",
    "IREG_T_ULOW_SPEEDDOWN",
    "IREG_CURRENT_REGULATOR",
    "IREG_REGULATOR_QUEUE1",
    "IREG_REGULATOR_QUEUE2",
    "IREG_REGULATOR_QUEUE3",
    "IREG_UOUT_PWM_COMP",
    "IREG_U_OUT_OFST",
    "IREG_FC_IRMS",
    "IREG_FC_OVERLOAD",
    "IREG_FC_T_OVERLOAD",
    "IREG_LF",
    "IREG_CF",
    "IREG_FC_U_SCALE",
    "IREG_FC_I_SCALE",
    "IREG_UD_LOW_FAULT",
    "IREG_UD_HIGH_FAULT",
    "IREG_CTRL3",
    "IREG_INV_STATUS5",
    "IREG_FREQ_PWM",
    "IREG_OVERPWM2_ANGLE",
    "IREG_OVERPWM_GAIN",
    "IREG_M_F_NOM",
    "IREG_M_U_NOM",
    "IREG_M_I_NOM",
    "IREG_LOUT_S",
    "IREG_M_IRMS",
    "IREG_M_TRMS",
    "IREG_M_I_FAST",
    "IREG_T_BLANK",
    "IREG_UF_U0",
    "IREG_IF_I0",
    "IREG_UF_F1",
    "IREG_UF_U1",
    "IREG_IF_I1",
    "IREG_UF_F2",
    "IREG_UF_U2",
    "IREG_IF_I2",
    "IREG_UF_F3",
    "IREG_UF_U3",
    "IREG_IF_I3",
    "IREG_UF_F4",
    "IREG_UF_U4",
    "IREG_IF_I4",
    "IREG_UF_F5",
    "IREG_UF_U5",
    "IREG_IF_I5",
    "IREG_UF_F6",
    "IREG_UF_U6",
    "IREG_IF_I6",
    "IREG_IFB_COMP",
    "IREG_F_VECT",
    "IREG_VFREQ_GAIN",
    "IREG_VFREQ_INTEG",
    "IREG_VUOUT_PROP",
    "IREG_VUOUT_INTEG",
    "IREG_VTOUF_INTEG",
    "IREG_MAX_VC_DF",
    "IREG_RES_PROP_GAIN",
    "IREG_RES_INT_GAIN",
    "IREG_RES_START_FREQ",
    "IREG_STARTUP_FREQ",
    "IREG_STARTUP_ANGLE_OSC",
    "IREG_STARTUP_OSC_COUNT",
    "IREG_STARTUP_ROTATIONS",
    "IREG_STARTUP_KU_PULSE",
    "IREG_STARTUP_I_LIM",
    "IREG_STARTUP_I_LIM_PULSE",
    "IREG_DECEL_F_MAX",
    "IREG_DECEL_U_MAX",
    "IREG_F_FORCE",
    "IREG_U_FORCE",
    "IREG_DECEL_SPEEDDOWN",
    "IREG_LOUT",
    "IREG_AST_UMEAS",
    "IREG_AST_IMEAS",
    "IREG_UD",
    "IREG_UOUT",
    "IREG_IA_RMS",
    "IREG_IB_RMS",
    "IREG_IC_RMS",
    "IREG_POUT_FAST",
    "IREG_M_EDS_MIN",
    "IREG_MOUT",
    "IREG_IOUT",
    "IREG_PHOUT",
    "IREG_POUT",
    "IREG_SOUT",
    "IREG_IA",
    "IREG_PHA",
    "IREG_IB",
    "IREG_PHB",
    "IREG_IC",
    "IREG_PHC",
    "IREG_M_P_MAX",
    "IREG_TORQUE_FB_COMP",
    "IREG_LM",
    "IREG_M_KI_START",
    "IREG_FC_DI_LEVEL",
    "IREG_M_EDS",
    "IREG_LINK_MNTR",
    "IREG_IRMS_T",
    "IREG_INV_STATUS4",
    "IREG_INV_T_FLT",
    "IREG_INV_TT_FLT",
    "IREG_INV_TAIR_FLT",
    "IREG_RM",
    "IREG_M_KU_START",
    "IREG_I_LIM_MAX_T",
    "IREG_I_LIM_ADD",
    "IREG_DECEL_I_LIM",
    "IREG_ROUT",
    "IREG_ZP",
    "IREG_LR",
    "IREG_RR",
    "IREG_FLSH_RD_ERR_CNT",
    "IREG_FRAME_LEN",
    "IREG_TEST0",
    "IREG_TEST1",
    "IREG_TEST2",
    "IREG_TEST3",
    "IREG_TEST4",
    "IREG_TEST5",
    "IREG_SA_CONST_INT",
    "IREG_SA_PHASE_INT",
    "IREG_SAVED_M_OUTPUTS",
    "IREG_SAVED_M_INPUTS",
    "IREG_SAVED_M_OUT_EN",
    "IREG_SAVED_M_OUT_DIS",
    "IREG_SAVED_M_CTRL",
    "IREG_SAVED_M_V1_SCAN_PD",
    "IREG_SAVED_M_BAUDRATE",
    "IREG_TEST_DIGITAL",
    "IREG_TEST_ANALOG",
    "IREG_SAVED_MEAS_STATUS",
    "IREG_FREQ_REF_HZ",
    "IREG_TEST_TYPE",
    "IREG_RES_IAMP_VALID",
    "IREG_THU_F_NUM",
    "IREG_STARTUP_ANGLE_SHIFT",
    "IREG_M_DELTA_FREQ",
    "IREG_TT_CRITIC",
    "IREG_INV_INT_CTRL",
    "IREG_INV_INT_STATUS",
    "IREG_SA_LIMIT",
    "IREG_DAC_GAIN_RT2",
    "IREG_M_TORQUE_SET",
    "IREG_K_LM_D",
    "IREG_I_LIM_QUANTUM",
    "IREG_SAVED_VENT1_ON",
    "IREG_SAVED_VENT1_OFF",
    "IREG_SAVED_VENTL_ON",
    "IREG_SAVED_PREHEAT_ON",
    "IREG_INV_ALL_END_REGISTERS"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRegnumClassENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,  222,   19,

 // enum data: key, value
       2, uint(RegnumClass::IREG_THYR_START_REGISTERS),
       3, uint(RegnumClass::IREG_THYR_ANGLEREF),
       4, uint(RegnumClass::IREG_THYR_STATUS),
       5, uint(RegnumClass::IREG_THYR_CONTROL),
       6, uint(RegnumClass::IREG_THYR_USHORTCIRCUIT),
       7, uint(RegnumClass::IREG_THYR_END_REGISTERS),
       8, uint(RegnumClass::IREG_IND_START_REGISTERS),
       9, uint(RegnumClass::IREG_IND_STATUS),
      10, uint(RegnumClass::IREG_IND_TEST_MOD_0),
      11, uint(RegnumClass::IREG_IND_TEST_MOD_1),
      12, uint(RegnumClass::IREG_IND_TEST_MOD_2),
      13, uint(RegnumClass::IREG_IND_TEST_MOD_3),
      14, uint(RegnumClass::IREG_IND_TEST0),
      15, uint(RegnumClass::IREG_IND_TEST1),
      16, uint(RegnumClass::IREG_IND_TEST2),
      17, uint(RegnumClass::IREG_IND_TEST3),
      18, uint(RegnumClass::IREG_IND_CTRL),
      19, uint(RegnumClass::IREG_IND_END_REGISTERS),
      20, uint(RegnumClass::IREG_MEAS_START_REGISTERS),
      21, uint(RegnumClass::IREG_MEAS_OUTPUTS),
      22, uint(RegnumClass::IREG_MEAS_INPUTS),
      23, uint(RegnumClass::IREG_MEAS_OUTPUT_ENABLE),
      24, uint(RegnumClass::IREG_MEAS_OUTPUT_DISABLE),
      25, uint(RegnumClass::IREG_MEAS_VENT1_ON),
      26, uint(RegnumClass::IREG_MEAS_VENT1_OFF),
      27, uint(RegnumClass::IREG_MEAS_VENT1_SCAN_PERIOD),
      28, uint(RegnumClass::IREG_MEAS_TFAULT),
      29, uint(RegnumClass::IREG_MEAS_BAUDRATE),
      30, uint(RegnumClass::IREG_MEAS_VENTL_ON),
      31, uint(RegnumClass::IREG_MEAS_TEST_VAL),
      32, uint(RegnumClass::IREG_MEAS_PREHEAT_ON),
      33, uint(RegnumClass::IREG_MEAS_CTRL),
      34, uint(RegnumClass::IREG_MEAS_STATUS),
      35, uint(RegnumClass::IREG_MEAS_STS_ON),
      36, uint(RegnumClass::IREG_MEAS_STS_OFF),
      37, uint(RegnumClass::IREG_MEAS_END_REGISTERS),
      38, uint(RegnumClass::IREG_DRIVERS_START_REGISTERS),
      39, uint(RegnumClass::IREG_DRIVER0_STATUS),
      40, uint(RegnumClass::IREG_DRIVER1_STATUS),
      41, uint(RegnumClass::IREG_DRIVER2_STATUS),
      42, uint(RegnumClass::IREG_DRIVER3_STATUS),
      43, uint(RegnumClass::IREG_DRIVER0_CONTROL),
      44, uint(RegnumClass::IREG_DRIVER1_CONTROL),
      45, uint(RegnumClass::IREG_DRIVER2_CONTROL),
      46, uint(RegnumClass::IREG_DRIVER3_CONTROL),
      47, uint(RegnumClass::IREG_DRIVER0_FLT_LVL),
      48, uint(RegnumClass::IREG_DRIVER0_DIF_ERR),
      49, uint(RegnumClass::IREG_DRIVER1_FLT_LVL),
      50, uint(RegnumClass::IREG_DRIVER1_DIF_ERR),
      51, uint(RegnumClass::IREG_DRIVER2_FLT_LVL),
      52, uint(RegnumClass::IREG_DRIVER2_DIF_ERR),
      53, uint(RegnumClass::IREG_DRIVER3_FLT_LVL),
      54, uint(RegnumClass::IREG_DRIVER3_DIF_ERR),
      55, uint(RegnumClass::IREG_DRIVERS_END_REGISTERS),
      56, uint(RegnumClass::IREG_INV_START_REGISTERS),
      57, uint(RegnumClass::IREG_INV_CONTROL),
      58, uint(RegnumClass::IREG_INV_CTRL2),
      59, uint(RegnumClass::IREG_INV_STATUS),
      60, uint(RegnumClass::IREG_INV_STATUS2),
      61, uint(RegnumClass::IREG_INV_STATUS3),
      62, uint(RegnumClass::IREG_INV_FAULT),
      63, uint(RegnumClass::IREG_FREQ_REF),
      64, uint(RegnumClass::IREG_FREQ),
      65, uint(RegnumClass::IREG_START_FREQ),
      66, uint(RegnumClass::IREG_FREQ_ERROR),
      67, uint(RegnumClass::IREG_FREQ_REF_MAX),
      68, uint(RegnumClass::IREG_T_SPEEDUP),
      69, uint(RegnumClass::IREG_T_SPEEDDOWN),
      70, uint(RegnumClass::IREG_T_ILIMIT_SPEEDDOWN),
      71, uint(RegnumClass::IREG_T_ULOW_SPEEDDOWN),
      72, uint(RegnumClass::IREG_CURRENT_REGULATOR),
      73, uint(RegnumClass::IREG_REGULATOR_QUEUE1),
      74, uint(RegnumClass::IREG_REGULATOR_QUEUE2),
      75, uint(RegnumClass::IREG_REGULATOR_QUEUE3),
      76, uint(RegnumClass::IREG_UOUT_PWM_COMP),
      77, uint(RegnumClass::IREG_U_OUT_OFST),
      78, uint(RegnumClass::IREG_FC_IRMS),
      79, uint(RegnumClass::IREG_FC_OVERLOAD),
      80, uint(RegnumClass::IREG_FC_T_OVERLOAD),
      81, uint(RegnumClass::IREG_LF),
      82, uint(RegnumClass::IREG_CF),
      83, uint(RegnumClass::IREG_FC_U_SCALE),
      84, uint(RegnumClass::IREG_FC_I_SCALE),
      85, uint(RegnumClass::IREG_UD_LOW_FAULT),
      86, uint(RegnumClass::IREG_UD_HIGH_FAULT),
      87, uint(RegnumClass::IREG_CTRL3),
      88, uint(RegnumClass::IREG_INV_STATUS5),
      89, uint(RegnumClass::IREG_FREQ_PWM),
      90, uint(RegnumClass::IREG_OVERPWM2_ANGLE),
      91, uint(RegnumClass::IREG_OVERPWM_GAIN),
      92, uint(RegnumClass::IREG_M_F_NOM),
      93, uint(RegnumClass::IREG_M_U_NOM),
      94, uint(RegnumClass::IREG_M_I_NOM),
      95, uint(RegnumClass::IREG_LOUT_S),
      96, uint(RegnumClass::IREG_M_IRMS),
      97, uint(RegnumClass::IREG_M_TRMS),
      98, uint(RegnumClass::IREG_M_I_FAST),
      99, uint(RegnumClass::IREG_T_BLANK),
     100, uint(RegnumClass::IREG_UF_U0),
     101, uint(RegnumClass::IREG_IF_I0),
     102, uint(RegnumClass::IREG_UF_F1),
     103, uint(RegnumClass::IREG_UF_U1),
     104, uint(RegnumClass::IREG_IF_I1),
     105, uint(RegnumClass::IREG_UF_F2),
     106, uint(RegnumClass::IREG_UF_U2),
     107, uint(RegnumClass::IREG_IF_I2),
     108, uint(RegnumClass::IREG_UF_F3),
     109, uint(RegnumClass::IREG_UF_U3),
     110, uint(RegnumClass::IREG_IF_I3),
     111, uint(RegnumClass::IREG_UF_F4),
     112, uint(RegnumClass::IREG_UF_U4),
     113, uint(RegnumClass::IREG_IF_I4),
     114, uint(RegnumClass::IREG_UF_F5),
     115, uint(RegnumClass::IREG_UF_U5),
     116, uint(RegnumClass::IREG_IF_I5),
     117, uint(RegnumClass::IREG_UF_F6),
     118, uint(RegnumClass::IREG_UF_U6),
     119, uint(RegnumClass::IREG_IF_I6),
     120, uint(RegnumClass::IREG_IFB_COMP),
     121, uint(RegnumClass::IREG_F_VECT),
     122, uint(RegnumClass::IREG_VFREQ_GAIN),
     123, uint(RegnumClass::IREG_VFREQ_INTEG),
     124, uint(RegnumClass::IREG_VUOUT_PROP),
     125, uint(RegnumClass::IREG_VUOUT_INTEG),
     126, uint(RegnumClass::IREG_VTOUF_INTEG),
     127, uint(RegnumClass::IREG_MAX_VC_DF),
     128, uint(RegnumClass::IREG_RES_PROP_GAIN),
     129, uint(RegnumClass::IREG_RES_INT_GAIN),
     130, uint(RegnumClass::IREG_RES_START_FREQ),
     131, uint(RegnumClass::IREG_STARTUP_FREQ),
     132, uint(RegnumClass::IREG_STARTUP_ANGLE_OSC),
     133, uint(RegnumClass::IREG_STARTUP_OSC_COUNT),
     134, uint(RegnumClass::IREG_STARTUP_ROTATIONS),
     135, uint(RegnumClass::IREG_STARTUP_KU_PULSE),
     136, uint(RegnumClass::IREG_STARTUP_I_LIM),
     137, uint(RegnumClass::IREG_STARTUP_I_LIM_PULSE),
     138, uint(RegnumClass::IREG_DECEL_F_MAX),
     139, uint(RegnumClass::IREG_DECEL_U_MAX),
     140, uint(RegnumClass::IREG_F_FORCE),
     141, uint(RegnumClass::IREG_U_FORCE),
     142, uint(RegnumClass::IREG_DECEL_SPEEDDOWN),
     143, uint(RegnumClass::IREG_LOUT),
     144, uint(RegnumClass::IREG_AST_UMEAS),
     145, uint(RegnumClass::IREG_AST_IMEAS),
     146, uint(RegnumClass::IREG_UD),
     147, uint(RegnumClass::IREG_UOUT),
     148, uint(RegnumClass::IREG_IA_RMS),
     149, uint(RegnumClass::IREG_IB_RMS),
     150, uint(RegnumClass::IREG_IC_RMS),
     151, uint(RegnumClass::IREG_POUT_FAST),
     152, uint(RegnumClass::IREG_M_EDS_MIN),
     153, uint(RegnumClass::IREG_MOUT),
     154, uint(RegnumClass::IREG_IOUT),
     155, uint(RegnumClass::IREG_PHOUT),
     156, uint(RegnumClass::IREG_POUT),
     157, uint(RegnumClass::IREG_SOUT),
     158, uint(RegnumClass::IREG_IA),
     159, uint(RegnumClass::IREG_PHA),
     160, uint(RegnumClass::IREG_IB),
     161, uint(RegnumClass::IREG_PHB),
     162, uint(RegnumClass::IREG_IC),
     163, uint(RegnumClass::IREG_PHC),
     164, uint(RegnumClass::IREG_M_P_MAX),
     165, uint(RegnumClass::IREG_TORQUE_FB_COMP),
     166, uint(RegnumClass::IREG_LM),
     167, uint(RegnumClass::IREG_M_KI_START),
     168, uint(RegnumClass::IREG_FC_DI_LEVEL),
     169, uint(RegnumClass::IREG_M_EDS),
     170, uint(RegnumClass::IREG_LINK_MNTR),
     171, uint(RegnumClass::IREG_IRMS_T),
     172, uint(RegnumClass::IREG_INV_STATUS4),
     173, uint(RegnumClass::IREG_INV_T_FLT),
     174, uint(RegnumClass::IREG_INV_TT_FLT),
     175, uint(RegnumClass::IREG_INV_TAIR_FLT),
     176, uint(RegnumClass::IREG_RM),
     177, uint(RegnumClass::IREG_M_KU_START),
     178, uint(RegnumClass::IREG_I_LIM_MAX_T),
     179, uint(RegnumClass::IREG_I_LIM_ADD),
     180, uint(RegnumClass::IREG_DECEL_I_LIM),
     181, uint(RegnumClass::IREG_ROUT),
     182, uint(RegnumClass::IREG_ZP),
     183, uint(RegnumClass::IREG_LR),
     184, uint(RegnumClass::IREG_RR),
     185, uint(RegnumClass::IREG_FLSH_RD_ERR_CNT),
     186, uint(RegnumClass::IREG_FRAME_LEN),
     187, uint(RegnumClass::IREG_TEST0),
     188, uint(RegnumClass::IREG_TEST1),
     189, uint(RegnumClass::IREG_TEST2),
     190, uint(RegnumClass::IREG_TEST3),
     191, uint(RegnumClass::IREG_TEST4),
     192, uint(RegnumClass::IREG_TEST5),
     193, uint(RegnumClass::IREG_SA_CONST_INT),
     194, uint(RegnumClass::IREG_SA_PHASE_INT),
     195, uint(RegnumClass::IREG_SAVED_M_OUTPUTS),
     196, uint(RegnumClass::IREG_SAVED_M_INPUTS),
     197, uint(RegnumClass::IREG_SAVED_M_OUT_EN),
     198, uint(RegnumClass::IREG_SAVED_M_OUT_DIS),
     199, uint(RegnumClass::IREG_SAVED_M_CTRL),
     200, uint(RegnumClass::IREG_SAVED_M_V1_SCAN_PD),
     201, uint(RegnumClass::IREG_SAVED_M_BAUDRATE),
     202, uint(RegnumClass::IREG_TEST_DIGITAL),
     203, uint(RegnumClass::IREG_TEST_ANALOG),
     204, uint(RegnumClass::IREG_SAVED_MEAS_STATUS),
     205, uint(RegnumClass::IREG_FREQ_REF_HZ),
     206, uint(RegnumClass::IREG_TEST_TYPE),
     207, uint(RegnumClass::IREG_RES_IAMP_VALID),
     208, uint(RegnumClass::IREG_THU_F_NUM),
     209, uint(RegnumClass::IREG_STARTUP_ANGLE_SHIFT),
     210, uint(RegnumClass::IREG_M_DELTA_FREQ),
     211, uint(RegnumClass::IREG_TT_CRITIC),
     212, uint(RegnumClass::IREG_INV_INT_CTRL),
     213, uint(RegnumClass::IREG_INV_INT_STATUS),
     214, uint(RegnumClass::IREG_SA_LIMIT),
     215, uint(RegnumClass::IREG_DAC_GAIN_RT2),
     216, uint(RegnumClass::IREG_M_TORQUE_SET),
     217, uint(RegnumClass::IREG_K_LM_D),
     218, uint(RegnumClass::IREG_I_LIM_QUANTUM),
     219, uint(RegnumClass::IREG_SAVED_VENT1_ON),
     220, uint(RegnumClass::IREG_SAVED_VENT1_OFF),
     221, uint(RegnumClass::IREG_SAVED_VENTL_ON),
     222, uint(RegnumClass::IREG_SAVED_PREHEAT_ON),
     223, uint(RegnumClass::IREG_INV_ALL_END_REGISTERS),

       0        // eod
};

Q_CONSTINIT const QMetaObject RegnumClass::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSRegnumClassENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRegnumClassENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRegnumClassENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RegnumClass, std::true_type>
    >,
    nullptr
} };

void RegnumClass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *RegnumClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RegnumClass::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRegnumClassENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RegnumClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSampleCanIdClassENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSampleCanIdClassENDCLASS = QtMocHelpers::stringData(
    "SampleCanIdClass",
    "fccanid",
    "CAN_START_SAMPLE_ID",
    "CAN_THYR_SAMPLES",
    "CAN_THYR_UDC",
    "CAN_THYR_DR0_TT1",
    "CAN_THYR_TCPU",
    "CAN_THYR_Uu",
    "CAN_THYR_Uv",
    "CAN_THYR_Uw",
    "CAN_THYR_DR0_TT2",
    "CAN_THYR_T3",
    "CAN_THYR_TAIR",
    "CAN_THYR_DR1_TT1",
    "CAN_THYR_DR1_TT2",
    "CAN_THYR_SAMPLES_END",
    "CAN_IND_SAMPLES",
    "CAN_IND_ADC1",
    "CAN_IND_SAMPLES_END",
    "CAN_MEASURE_SAMPLES",
    "CAN_MEAS_T1",
    "CAN_MEAS_T2",
    "CAN_MEAS_T3",
    "CAN_MEAS_T4",
    "CAN_MEAS_T5",
    "CAN_MEAS_T6",
    "CAN_MEAS_T7",
    "CAN_MEASURE_SAMPLES_END",
    "CAN_DRIVERS_SAMPLES",
    "CAN_DR0_TAIR",
    "CAN_DR0_TCPU",
    "CAN_DR0_PH0_T1",
    "CAN_DR0_USRC",
    "CAN_DR1_TAIR",
    "CAN_DR1_TCPU",
    "CAN_DR0_PH1_T1",
    "CAN_DR1_USRC",
    "CAN_DR2_TAIR",
    "CAN_DR2_TCPU",
    "CAN_DR0_PH2_T1",
    "CAN_DR2_USRC",
    "CAN_DEXT_TAIR",
    "CAN_DEXT_TCPU",
    "CAN_DEXT_T1",
    "CAN_DEXT_USRC",
    "CAN_DR0_PH0_T2",
    "CAN_DR0_PH1_T2",
    "CAN_DR0_PH2_T2",
    "CAN_DEXT_T2",
    "CAN_DR0_PH0_T3",
    "CAN_DR0_PH1_T3",
    "CAN_DR0_PH2_T3",
    "CAN_DEXT_T3",
    "CAN_DR0_PH0_T4",
    "CAN_DR0_PH1_T4",
    "CAN_DR0_PH2_T4",
    "CAN_DEXT_T4",
    "CAN_DR1_PH0_T1",
    "CAN_DR1_PH0_T2",
    "CAN_DR1_PH0_T3",
    "CAN_DR1_PH0_T4",
    "CAN_DR1_PH1_T1",
    "CAN_DR1_PH1_T2",
    "CAN_DR1_PH1_T3",
    "CAN_DR1_PH1_T4",
    "CAN_DR1_PH2_T1",
    "CAN_DR1_PH2_T2",
    "CAN_DR1_PH2_T3",
    "CAN_DR1_PH2_T4",
    "CAN_DEXT_T5",
    "CAN_DEXT_T6",
    "CAN_DEXT_T7",
    "CAN_DEXT_T8",
    "CAN_DEXT_T9",
    "CAN_DEXT_T10",
    "CAN_DEXT_T11",
    "CAN_DEXT_T12",
    "CAN_DRIVERS_SAMPLES_END",
    "CAN_INVERTOR_SAMPLES",
    "CAN_INV_UD",
    "CAN_INV_IA",
    "CAN_INV_IB",
    "CAN_INV_IC",
    "CAN_INV_SMP0",
    "CAN_INV_SMP1",
    "CAN_INV_SMP2",
    "CAN_INV_AIN1",
    "CAN_INV_AIN2",
    "CAN_INV_FIRMWARE_VER",
    "CAN_INV_PFAST",
    "CAN_INV_MOUT",
    "CAN_INV_TEXT",
    "CAN_INV_ID",
    "CAN_INV_PS_IND_ADC1",
    "CAN_INVERTOR_SAMPLES_END",
    "CAN_END_SAMPLE_ID"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSampleCanIdClassENDCLASS_t {
    uint offsetsAndSizes[192];
    char stringdata0[17];
    char stringdata1[8];
    char stringdata2[20];
    char stringdata3[17];
    char stringdata4[13];
    char stringdata5[17];
    char stringdata6[14];
    char stringdata7[12];
    char stringdata8[12];
    char stringdata9[12];
    char stringdata10[17];
    char stringdata11[12];
    char stringdata12[14];
    char stringdata13[17];
    char stringdata14[17];
    char stringdata15[21];
    char stringdata16[16];
    char stringdata17[13];
    char stringdata18[20];
    char stringdata19[20];
    char stringdata20[12];
    char stringdata21[12];
    char stringdata22[12];
    char stringdata23[12];
    char stringdata24[12];
    char stringdata25[12];
    char stringdata26[12];
    char stringdata27[24];
    char stringdata28[20];
    char stringdata29[13];
    char stringdata30[13];
    char stringdata31[15];
    char stringdata32[13];
    char stringdata33[13];
    char stringdata34[13];
    char stringdata35[15];
    char stringdata36[13];
    char stringdata37[13];
    char stringdata38[13];
    char stringdata39[15];
    char stringdata40[13];
    char stringdata41[14];
    char stringdata42[14];
    char stringdata43[12];
    char stringdata44[14];
    char stringdata45[15];
    char stringdata46[15];
    char stringdata47[15];
    char stringdata48[12];
    char stringdata49[15];
    char stringdata50[15];
    char stringdata51[15];
    char stringdata52[12];
    char stringdata53[15];
    char stringdata54[15];
    char stringdata55[15];
    char stringdata56[12];
    char stringdata57[15];
    char stringdata58[15];
    char stringdata59[15];
    char stringdata60[15];
    char stringdata61[15];
    char stringdata62[15];
    char stringdata63[15];
    char stringdata64[15];
    char stringdata65[15];
    char stringdata66[15];
    char stringdata67[15];
    char stringdata68[15];
    char stringdata69[12];
    char stringdata70[12];
    char stringdata71[12];
    char stringdata72[12];
    char stringdata73[12];
    char stringdata74[13];
    char stringdata75[13];
    char stringdata76[13];
    char stringdata77[24];
    char stringdata78[21];
    char stringdata79[11];
    char stringdata80[11];
    char stringdata81[11];
    char stringdata82[11];
    char stringdata83[13];
    char stringdata84[13];
    char stringdata85[13];
    char stringdata86[13];
    char stringdata87[13];
    char stringdata88[21];
    char stringdata89[14];
    char stringdata90[13];
    char stringdata91[13];
    char stringdata92[11];
    char stringdata93[20];
    char stringdata94[25];
    char stringdata95[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSampleCanIdClassENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSampleCanIdClassENDCLASS_t qt_meta_stringdata_CLASSSampleCanIdClassENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "SampleCanIdClass"
        QT_MOC_LITERAL(17, 7),  // "fccanid"
        QT_MOC_LITERAL(25, 19),  // "CAN_START_SAMPLE_ID"
        QT_MOC_LITERAL(45, 16),  // "CAN_THYR_SAMPLES"
        QT_MOC_LITERAL(62, 12),  // "CAN_THYR_UDC"
        QT_MOC_LITERAL(75, 16),  // "CAN_THYR_DR0_TT1"
        QT_MOC_LITERAL(92, 13),  // "CAN_THYR_TCPU"
        QT_MOC_LITERAL(106, 11),  // "CAN_THYR_Uu"
        QT_MOC_LITERAL(118, 11),  // "CAN_THYR_Uv"
        QT_MOC_LITERAL(130, 11),  // "CAN_THYR_Uw"
        QT_MOC_LITERAL(142, 16),  // "CAN_THYR_DR0_TT2"
        QT_MOC_LITERAL(159, 11),  // "CAN_THYR_T3"
        QT_MOC_LITERAL(171, 13),  // "CAN_THYR_TAIR"
        QT_MOC_LITERAL(185, 16),  // "CAN_THYR_DR1_TT1"
        QT_MOC_LITERAL(202, 16),  // "CAN_THYR_DR1_TT2"
        QT_MOC_LITERAL(219, 20),  // "CAN_THYR_SAMPLES_END"
        QT_MOC_LITERAL(240, 15),  // "CAN_IND_SAMPLES"
        QT_MOC_LITERAL(256, 12),  // "CAN_IND_ADC1"
        QT_MOC_LITERAL(269, 19),  // "CAN_IND_SAMPLES_END"
        QT_MOC_LITERAL(289, 19),  // "CAN_MEASURE_SAMPLES"
        QT_MOC_LITERAL(309, 11),  // "CAN_MEAS_T1"
        QT_MOC_LITERAL(321, 11),  // "CAN_MEAS_T2"
        QT_MOC_LITERAL(333, 11),  // "CAN_MEAS_T3"
        QT_MOC_LITERAL(345, 11),  // "CAN_MEAS_T4"
        QT_MOC_LITERAL(357, 11),  // "CAN_MEAS_T5"
        QT_MOC_LITERAL(369, 11),  // "CAN_MEAS_T6"
        QT_MOC_LITERAL(381, 11),  // "CAN_MEAS_T7"
        QT_MOC_LITERAL(393, 23),  // "CAN_MEASURE_SAMPLES_END"
        QT_MOC_LITERAL(417, 19),  // "CAN_DRIVERS_SAMPLES"
        QT_MOC_LITERAL(437, 12),  // "CAN_DR0_TAIR"
        QT_MOC_LITERAL(450, 12),  // "CAN_DR0_TCPU"
        QT_MOC_LITERAL(463, 14),  // "CAN_DR0_PH0_T1"
        QT_MOC_LITERAL(478, 12),  // "CAN_DR0_USRC"
        QT_MOC_LITERAL(491, 12),  // "CAN_DR1_TAIR"
        QT_MOC_LITERAL(504, 12),  // "CAN_DR1_TCPU"
        QT_MOC_LITERAL(517, 14),  // "CAN_DR0_PH1_T1"
        QT_MOC_LITERAL(532, 12),  // "CAN_DR1_USRC"
        QT_MOC_LITERAL(545, 12),  // "CAN_DR2_TAIR"
        QT_MOC_LITERAL(558, 12),  // "CAN_DR2_TCPU"
        QT_MOC_LITERAL(571, 14),  // "CAN_DR0_PH2_T1"
        QT_MOC_LITERAL(586, 12),  // "CAN_DR2_USRC"
        QT_MOC_LITERAL(599, 13),  // "CAN_DEXT_TAIR"
        QT_MOC_LITERAL(613, 13),  // "CAN_DEXT_TCPU"
        QT_MOC_LITERAL(627, 11),  // "CAN_DEXT_T1"
        QT_MOC_LITERAL(639, 13),  // "CAN_DEXT_USRC"
        QT_MOC_LITERAL(653, 14),  // "CAN_DR0_PH0_T2"
        QT_MOC_LITERAL(668, 14),  // "CAN_DR0_PH1_T2"
        QT_MOC_LITERAL(683, 14),  // "CAN_DR0_PH2_T2"
        QT_MOC_LITERAL(698, 11),  // "CAN_DEXT_T2"
        QT_MOC_LITERAL(710, 14),  // "CAN_DR0_PH0_T3"
        QT_MOC_LITERAL(725, 14),  // "CAN_DR0_PH1_T3"
        QT_MOC_LITERAL(740, 14),  // "CAN_DR0_PH2_T3"
        QT_MOC_LITERAL(755, 11),  // "CAN_DEXT_T3"
        QT_MOC_LITERAL(767, 14),  // "CAN_DR0_PH0_T4"
        QT_MOC_LITERAL(782, 14),  // "CAN_DR0_PH1_T4"
        QT_MOC_LITERAL(797, 14),  // "CAN_DR0_PH2_T4"
        QT_MOC_LITERAL(812, 11),  // "CAN_DEXT_T4"
        QT_MOC_LITERAL(824, 14),  // "CAN_DR1_PH0_T1"
        QT_MOC_LITERAL(839, 14),  // "CAN_DR1_PH0_T2"
        QT_MOC_LITERAL(854, 14),  // "CAN_DR1_PH0_T3"
        QT_MOC_LITERAL(869, 14),  // "CAN_DR1_PH0_T4"
        QT_MOC_LITERAL(884, 14),  // "CAN_DR1_PH1_T1"
        QT_MOC_LITERAL(899, 14),  // "CAN_DR1_PH1_T2"
        QT_MOC_LITERAL(914, 14),  // "CAN_DR1_PH1_T3"
        QT_MOC_LITERAL(929, 14),  // "CAN_DR1_PH1_T4"
        QT_MOC_LITERAL(944, 14),  // "CAN_DR1_PH2_T1"
        QT_MOC_LITERAL(959, 14),  // "CAN_DR1_PH2_T2"
        QT_MOC_LITERAL(974, 14),  // "CAN_DR1_PH2_T3"
        QT_MOC_LITERAL(989, 14),  // "CAN_DR1_PH2_T4"
        QT_MOC_LITERAL(1004, 11),  // "CAN_DEXT_T5"
        QT_MOC_LITERAL(1016, 11),  // "CAN_DEXT_T6"
        QT_MOC_LITERAL(1028, 11),  // "CAN_DEXT_T7"
        QT_MOC_LITERAL(1040, 11),  // "CAN_DEXT_T8"
        QT_MOC_LITERAL(1052, 11),  // "CAN_DEXT_T9"
        QT_MOC_LITERAL(1064, 12),  // "CAN_DEXT_T10"
        QT_MOC_LITERAL(1077, 12),  // "CAN_DEXT_T11"
        QT_MOC_LITERAL(1090, 12),  // "CAN_DEXT_T12"
        QT_MOC_LITERAL(1103, 23),  // "CAN_DRIVERS_SAMPLES_END"
        QT_MOC_LITERAL(1127, 20),  // "CAN_INVERTOR_SAMPLES"
        QT_MOC_LITERAL(1148, 10),  // "CAN_INV_UD"
        QT_MOC_LITERAL(1159, 10),  // "CAN_INV_IA"
        QT_MOC_LITERAL(1170, 10),  // "CAN_INV_IB"
        QT_MOC_LITERAL(1181, 10),  // "CAN_INV_IC"
        QT_MOC_LITERAL(1192, 12),  // "CAN_INV_SMP0"
        QT_MOC_LITERAL(1205, 12),  // "CAN_INV_SMP1"
        QT_MOC_LITERAL(1218, 12),  // "CAN_INV_SMP2"
        QT_MOC_LITERAL(1231, 12),  // "CAN_INV_AIN1"
        QT_MOC_LITERAL(1244, 12),  // "CAN_INV_AIN2"
        QT_MOC_LITERAL(1257, 20),  // "CAN_INV_FIRMWARE_VER"
        QT_MOC_LITERAL(1278, 13),  // "CAN_INV_PFAST"
        QT_MOC_LITERAL(1292, 12),  // "CAN_INV_MOUT"
        QT_MOC_LITERAL(1305, 12),  // "CAN_INV_TEXT"
        QT_MOC_LITERAL(1318, 10),  // "CAN_INV_ID"
        QT_MOC_LITERAL(1329, 19),  // "CAN_INV_PS_IND_ADC1"
        QT_MOC_LITERAL(1349, 24),  // "CAN_INVERTOR_SAMPLES_END"
        QT_MOC_LITERAL(1374, 17)   // "CAN_END_SAMPLE_ID"
    },
    "SampleCanIdClass",
    "fccanid",
    "CAN_START_SAMPLE_ID",
    "CAN_THYR_SAMPLES",
    "CAN_THYR_UDC",
    "CAN_THYR_DR0_TT1",
    "CAN_THYR_TCPU",
    "CAN_THYR_Uu",
    "CAN_THYR_Uv",
    "CAN_THYR_Uw",
    "CAN_THYR_DR0_TT2",
    "CAN_THYR_T3",
    "CAN_THYR_TAIR",
    "CAN_THYR_DR1_TT1",
    "CAN_THYR_DR1_TT2",
    "CAN_THYR_SAMPLES_END",
    "CAN_IND_SAMPLES",
    "CAN_IND_ADC1",
    "CAN_IND_SAMPLES_END",
    "CAN_MEASURE_SAMPLES",
    "CAN_MEAS_T1",
    "CAN_MEAS_T2",
    "CAN_MEAS_T3",
    "CAN_MEAS_T4",
    "CAN_MEAS_T5",
    "CAN_MEAS_T6",
    "CAN_MEAS_T7",
    "CAN_MEASURE_SAMPLES_END",
    "CAN_DRIVERS_SAMPLES",
    "CAN_DR0_TAIR",
    "CAN_DR0_TCPU",
    "CAN_DR0_PH0_T1",
    "CAN_DR0_USRC",
    "CAN_DR1_TAIR",
    "CAN_DR1_TCPU",
    "CAN_DR0_PH1_T1",
    "CAN_DR1_USRC",
    "CAN_DR2_TAIR",
    "CAN_DR2_TCPU",
    "CAN_DR0_PH2_T1",
    "CAN_DR2_USRC",
    "CAN_DEXT_TAIR",
    "CAN_DEXT_TCPU",
    "CAN_DEXT_T1",
    "CAN_DEXT_USRC",
    "CAN_DR0_PH0_T2",
    "CAN_DR0_PH1_T2",
    "CAN_DR0_PH2_T2",
    "CAN_DEXT_T2",
    "CAN_DR0_PH0_T3",
    "CAN_DR0_PH1_T3",
    "CAN_DR0_PH2_T3",
    "CAN_DEXT_T3",
    "CAN_DR0_PH0_T4",
    "CAN_DR0_PH1_T4",
    "CAN_DR0_PH2_T4",
    "CAN_DEXT_T4",
    "CAN_DR1_PH0_T1",
    "CAN_DR1_PH0_T2",
    "CAN_DR1_PH0_T3",
    "CAN_DR1_PH0_T4",
    "CAN_DR1_PH1_T1",
    "CAN_DR1_PH1_T2",
    "CAN_DR1_PH1_T3",
    "CAN_DR1_PH1_T4",
    "CAN_DR1_PH2_T1",
    "CAN_DR1_PH2_T2",
    "CAN_DR1_PH2_T3",
    "CAN_DR1_PH2_T4",
    "CAN_DEXT_T5",
    "CAN_DEXT_T6",
    "CAN_DEXT_T7",
    "CAN_DEXT_T8",
    "CAN_DEXT_T9",
    "CAN_DEXT_T10",
    "CAN_DEXT_T11",
    "CAN_DEXT_T12",
    "CAN_DRIVERS_SAMPLES_END",
    "CAN_INVERTOR_SAMPLES",
    "CAN_INV_UD",
    "CAN_INV_IA",
    "CAN_INV_IB",
    "CAN_INV_IC",
    "CAN_INV_SMP0",
    "CAN_INV_SMP1",
    "CAN_INV_SMP2",
    "CAN_INV_AIN1",
    "CAN_INV_AIN2",
    "CAN_INV_FIRMWARE_VER",
    "CAN_INV_PFAST",
    "CAN_INV_MOUT",
    "CAN_INV_TEXT",
    "CAN_INV_ID",
    "CAN_INV_PS_IND_ADC1",
    "CAN_INVERTOR_SAMPLES_END",
    "CAN_END_SAMPLE_ID"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSampleCanIdClassENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,   94,   19,

 // enum data: key, value
       2, uint(SampleCanIdClass::CAN_START_SAMPLE_ID),
       3, uint(SampleCanIdClass::CAN_THYR_SAMPLES),
       4, uint(SampleCanIdClass::CAN_THYR_UDC),
       5, uint(SampleCanIdClass::CAN_THYR_DR0_TT1),
       6, uint(SampleCanIdClass::CAN_THYR_TCPU),
       7, uint(SampleCanIdClass::CAN_THYR_Uu),
       8, uint(SampleCanIdClass::CAN_THYR_Uv),
       9, uint(SampleCanIdClass::CAN_THYR_Uw),
      10, uint(SampleCanIdClass::CAN_THYR_DR0_TT2),
      11, uint(SampleCanIdClass::CAN_THYR_T3),
      12, uint(SampleCanIdClass::CAN_THYR_TAIR),
      13, uint(SampleCanIdClass::CAN_THYR_DR1_TT1),
      14, uint(SampleCanIdClass::CAN_THYR_DR1_TT2),
      15, uint(SampleCanIdClass::CAN_THYR_SAMPLES_END),
      16, uint(SampleCanIdClass::CAN_IND_SAMPLES),
      17, uint(SampleCanIdClass::CAN_IND_ADC1),
      18, uint(SampleCanIdClass::CAN_IND_SAMPLES_END),
      19, uint(SampleCanIdClass::CAN_MEASURE_SAMPLES),
      20, uint(SampleCanIdClass::CAN_MEAS_T1),
      21, uint(SampleCanIdClass::CAN_MEAS_T2),
      22, uint(SampleCanIdClass::CAN_MEAS_T3),
      23, uint(SampleCanIdClass::CAN_MEAS_T4),
      24, uint(SampleCanIdClass::CAN_MEAS_T5),
      25, uint(SampleCanIdClass::CAN_MEAS_T6),
      26, uint(SampleCanIdClass::CAN_MEAS_T7),
      27, uint(SampleCanIdClass::CAN_MEASURE_SAMPLES_END),
      28, uint(SampleCanIdClass::CAN_DRIVERS_SAMPLES),
      29, uint(SampleCanIdClass::CAN_DR0_TAIR),
      30, uint(SampleCanIdClass::CAN_DR0_TCPU),
      31, uint(SampleCanIdClass::CAN_DR0_PH0_T1),
      32, uint(SampleCanIdClass::CAN_DR0_USRC),
      33, uint(SampleCanIdClass::CAN_DR1_TAIR),
      34, uint(SampleCanIdClass::CAN_DR1_TCPU),
      35, uint(SampleCanIdClass::CAN_DR0_PH1_T1),
      36, uint(SampleCanIdClass::CAN_DR1_USRC),
      37, uint(SampleCanIdClass::CAN_DR2_TAIR),
      38, uint(SampleCanIdClass::CAN_DR2_TCPU),
      39, uint(SampleCanIdClass::CAN_DR0_PH2_T1),
      40, uint(SampleCanIdClass::CAN_DR2_USRC),
      41, uint(SampleCanIdClass::CAN_DEXT_TAIR),
      42, uint(SampleCanIdClass::CAN_DEXT_TCPU),
      43, uint(SampleCanIdClass::CAN_DEXT_T1),
      44, uint(SampleCanIdClass::CAN_DEXT_USRC),
      45, uint(SampleCanIdClass::CAN_DR0_PH0_T2),
      46, uint(SampleCanIdClass::CAN_DR0_PH1_T2),
      47, uint(SampleCanIdClass::CAN_DR0_PH2_T2),
      48, uint(SampleCanIdClass::CAN_DEXT_T2),
      49, uint(SampleCanIdClass::CAN_DR0_PH0_T3),
      50, uint(SampleCanIdClass::CAN_DR0_PH1_T3),
      51, uint(SampleCanIdClass::CAN_DR0_PH2_T3),
      52, uint(SampleCanIdClass::CAN_DEXT_T3),
      53, uint(SampleCanIdClass::CAN_DR0_PH0_T4),
      54, uint(SampleCanIdClass::CAN_DR0_PH1_T4),
      55, uint(SampleCanIdClass::CAN_DR0_PH2_T4),
      56, uint(SampleCanIdClass::CAN_DEXT_T4),
      57, uint(SampleCanIdClass::CAN_DR1_PH0_T1),
      58, uint(SampleCanIdClass::CAN_DR1_PH0_T2),
      59, uint(SampleCanIdClass::CAN_DR1_PH0_T3),
      60, uint(SampleCanIdClass::CAN_DR1_PH0_T4),
      61, uint(SampleCanIdClass::CAN_DR1_PH1_T1),
      62, uint(SampleCanIdClass::CAN_DR1_PH1_T2),
      63, uint(SampleCanIdClass::CAN_DR1_PH1_T3),
      64, uint(SampleCanIdClass::CAN_DR1_PH1_T4),
      65, uint(SampleCanIdClass::CAN_DR1_PH2_T1),
      66, uint(SampleCanIdClass::CAN_DR1_PH2_T2),
      67, uint(SampleCanIdClass::CAN_DR1_PH2_T3),
      68, uint(SampleCanIdClass::CAN_DR1_PH2_T4),
      69, uint(SampleCanIdClass::CAN_DEXT_T5),
      70, uint(SampleCanIdClass::CAN_DEXT_T6),
      71, uint(SampleCanIdClass::CAN_DEXT_T7),
      72, uint(SampleCanIdClass::CAN_DEXT_T8),
      73, uint(SampleCanIdClass::CAN_DEXT_T9),
      74, uint(SampleCanIdClass::CAN_DEXT_T10),
      75, uint(SampleCanIdClass::CAN_DEXT_T11),
      76, uint(SampleCanIdClass::CAN_DEXT_T12),
      77, uint(SampleCanIdClass::CAN_DRIVERS_SAMPLES_END),
      78, uint(SampleCanIdClass::CAN_INVERTOR_SAMPLES),
      79, uint(SampleCanIdClass::CAN_INV_UD),
      80, uint(SampleCanIdClass::CAN_INV_IA),
      81, uint(SampleCanIdClass::CAN_INV_IB),
      82, uint(SampleCanIdClass::CAN_INV_IC),
      83, uint(SampleCanIdClass::CAN_INV_SMP0),
      84, uint(SampleCanIdClass::CAN_INV_SMP1),
      85, uint(SampleCanIdClass::CAN_INV_SMP2),
      86, uint(SampleCanIdClass::CAN_INV_AIN1),
      87, uint(SampleCanIdClass::CAN_INV_AIN2),
      88, uint(SampleCanIdClass::CAN_INV_FIRMWARE_VER),
      89, uint(SampleCanIdClass::CAN_INV_PFAST),
      90, uint(SampleCanIdClass::CAN_INV_MOUT),
      91, uint(SampleCanIdClass::CAN_INV_TEXT),
      92, uint(SampleCanIdClass::CAN_INV_ID),
      93, uint(SampleCanIdClass::CAN_INV_PS_IND_ADC1),
      94, uint(SampleCanIdClass::CAN_INVERTOR_SAMPLES_END),
      95, uint(SampleCanIdClass::CAN_END_SAMPLE_ID),

       0        // eod
};

Q_CONSTINIT const QMetaObject SampleCanIdClass::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSSampleCanIdClassENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSampleCanIdClassENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSampleCanIdClassENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SampleCanIdClass, std::true_type>
    >,
    nullptr
} };

void SampleCanIdClass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *SampleCanIdClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SampleCanIdClass::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSampleCanIdClassENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SampleCanIdClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
