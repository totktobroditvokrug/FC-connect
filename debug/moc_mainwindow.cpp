/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "readCurrentDate",
    "",
    "initTabCan",
    "on_pushButton_searchListPort_clicked",
    "on_pushButton_connect_clicked",
    "on_pushButton_disconnect_clicked",
    "on_pushButton_startRead_clicked",
    "on_pushButton_readOnce_clicked",
    "on_pushButton_stopRead_clicked",
    "on_pushButton_clear_clicked",
    "on_comboBox_canFreq_currentIndexChanged",
    "index",
    "on_comboBox_readAllCan_currentIndexChanged",
    "on_pushButton_setConfigAdapter_clicked",
    "init_setConfigAdapter",
    "writeSerialPort",
    "dataWriteString",
    "readSerialPort",
    "readStream",
    "on_lineEdit_volumeTextRead_editingFinished",
    "on_lineEdit_freqSampl_editingFinished",
    "on_actionQuit_triggered",
    "on_actionOpen_register_map_triggered",
    "on_actionCreate_register_map_triggered",
    "genRegFromEnum",
    "on_pushButton_saveRegToFile_clicked",
    "on_pushButton_readRegFromFile_clicked",
    "on_listWidget_regNum_itemClicked",
    "QListWidgetItem*",
    "item",
    "on_pushButton_selectAll_clicked",
    "on_pushButton_resetAll_clicked",
    "addItemFromlistwidget",
    "regName",
    "deleteItemFromlistwidget",
    "initComboBoxRegister",
    "genSampleFromEnum",
    "createSamplesTable",
    "on_listWidget_sampleNum_itemClicked",
    "addSampleFromlistwidget",
    "deleteSampleFromlistwidget",
    "addRowSamplesTable",
    "sampleName",
    "deleteRowSamplesTable",
    "sampleDisplayTable",
    "displayHashID",
    "createRegistersTable",
    "addRowRegistersTable",
    "deleteRowRegistersTable",
    "regDisplayTable",
    "createTableFromFile",
    "addRowTableFromFile",
    "lineFromFile",
    "getFreqInv",
    "getRegisterInv",
    "regNum",
    "valueInt",
    "setRegistersCombobox",
    "glueString",
    "data",
    "registerInv",
    "glueAdapterHeader",
    "scaledValue",
    "value",
    "scale",
    "max",
    "on_pushButton_sendCommand_clicked",
    "on_pushButton_startInv_panel_clicked",
    "on_pushButton_stopInv_panel_clicked",
    "on_pushButton_alarmInv_panel_clicked",
    "on_pushButton_startInv_clicked",
    "on_pushButton_stopInv_clicked",
    "on_pushButton_alarmInv_clicked",
    "on_tableRegister_cellChanged",
    "row",
    "column",
    "on_tableRegister_cellDoubleClicked",
    "on_pushButton_saveTable_clicked",
    "on_pushButton_loadTable_clicked",
    "on_pushButton_checkRegistersFromFile_clicked",
    "checkValueRegister",
    "i",
    "on_pushButton_setRegistersFromFile_clicked",
    "on_horizontalSlider_valueChanged",
    "setSelectedRegisterSlider",
    "on_lineEdit_registerValue_1_selectionChanged",
    "on_lineEdit_registerValue_2_selectionChanged",
    "on_lineEdit_registerValue_3_selectionChanged",
    "on_horizontalSlider_sliderReleased",
    "on_pushButton_showPanel_clicked",
    "on_pushButton_hidePanel_clicked",
    "on_pushButton_workDir_clicked",
    "on_pushButton_genFromEnum_clicked",
    "checkVector",
    "addGraph",
    "addPointToGraph",
    "on_pushButton_holdPlot_clicked",
    "on_comboBox_plot1_currentIndexChanged",
    "on_comboBox_plot2_currentIndexChanged",
    "on_comboBox_plot3_currentIndexChanged",
    "on_comboBox_plot4_currentIndexChanged",
    "on_horizontalSlider_max_axis_1_valueChanged",
    "on_horizontalSlider_max_axis_2_valueChanged",
    "on_horizontalSlider_max_axis_3_valueChanged",
    "on_horizontalSlider_max_axis_4_valueChanged",
    "on_lineEdit_yAxis_1_editingFinished",
    "on_lineEdit_yAxis_2_editingFinished",
    "on_lineEdit_yAxis_3_editingFinished",
    "on_lineEdit_yAxis_4_editingFinished",
    "init_scale",
    "on_horizontalSlider_scalePlot_valueChanged",
    "on_lineEdit_scalePlot_editingFinished",
    "initStatus",
    "checkStatus",
    "checkInvStatus",
    "checkInvStatus_2",
    "checkInvStatus_3",
    "checkInvStatus_flt",
    "checkInvStatus_5",
    "on_lineEdit_freqPlot_editingFinished",
    "on_radioButton_directRotation_clicked",
    "checked",
    "on_radioButton_reversRotation_clicked",
    "on_radioButton_async_clicked",
    "on_radioButton_vent_clicked",
    "on_radioButton_PWM_SIN_clicked",
    "on_radioButton_PWM_OVER1_clicked",
    "on_radioButton_PWM_OVER2_clicked",
    "on_checkBox_harmonicAnalysis_clicked",
    "on_pushButton_rstFlt_clicked",
    "on_radioButton_resDempAngle_clicked",
    "on_radioButton_resDempTorque_clicked",
    "on_radioButton_resDempPower_clicked",
    "on_radioButton_termosensorSingle_clicked",
    "on_radioButton_termosensorCritic_clicked",
    "on_radioButton_termosensorAll_clicked",
    "on_checkBox_powerMonitor_clicked",
    "on_checkBox_currSensOnFilter_clicked",
    "on_checkBox_rationingTime_clicked",
    "on_checkBox_enableZeroUdc_clicked",
    "on_checkBox_useOutInductance_clicked",
    "on_checkBox_powerIsRMS_clicked",
    "on_checkBox_pmmOn_clicked",
    "on_radioButton_expLegacy_clicked",
    "on_radioButton_exp485_clicked",
    "on_radioButton_expSPI_clicked",
    "on_radioButton_expOthers_clicked",
    "on_radioButton_trac_clicked",
    "on_radioButton_subpump_clicked",
    "on_comboBox_canFreqInv_currentIndexChanged",
    "on_checkBox_allowCAN_freqChanges_clicked",
    "on_checkBox_extOut_0_clicked",
    "on_checkBox_extOut_1_clicked",
    "on_checkBox_extOut_2_clicked",
    "on_radioButton_baseConverter_clicked",
    "on_radioButton_ISING_RSING_clicked",
    "on_radioButton_IQUAD_RDOUB_2_clicked",
    "on_radioButton_ISING_RDOUB_clicked",
    "on_radioButton_IDOUB_RSING_clicked",
    "on_radioButton_IDOUB_RDOUB_clicked",
    "on_radioButton_ITRIP_RSING_clicked",
    "on_radioButton_ITRIP_RDOUB_clicked",
    "on_radioButton_IQUAD_RSING_clicked",
    "on_radioButton_IQUAD_RDOUB_clicked",
    "on_radioButton_IQUAD_RSING_2_clicked",
    "on_pushButton_flashErrClr_clicked",
    "on_pushButton_flashWrAll_clicked",
    "on_listWidget_portInfo_itemClicked",
    "addGraph_UF",
    "addPointUF",
    "checkUF",
    "on_table_UF_cellDoubleClicked",
    "on_table_UF_cellChanged",
    "on_lineEdit_f_nom_editingFinished",
    "on_lineEdit_f_err_editingFinished",
    "on_lineEdit_u_nom_editingFinished",
    "on_lineEdit_ku_start_editingFinished",
    "on_lineEdit_i_nom_editingFinished",
    "on_lineEdit_ki_start_editingFinished",
    "on_checkBox_pwmControl_clicked",
    "on_checkBox_paramsOutChange_clicked",
    "on_pushButton_workDirSample_clicked",
    "on_pushButton_genFromEnumSample_clicked",
    "on_pushButton_saveSampleToFile_clicked",
    "on_pushButton_readSampleFromFile_clicked",
    "on_pushButton_selectAllSample_clicked",
    "on_pushButton_resetAllSample_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[376];
    char stringdata0[11];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[37];
    char stringdata5[30];
    char stringdata6[33];
    char stringdata7[32];
    char stringdata8[31];
    char stringdata9[31];
    char stringdata10[28];
    char stringdata11[40];
    char stringdata12[6];
    char stringdata13[43];
    char stringdata14[39];
    char stringdata15[22];
    char stringdata16[16];
    char stringdata17[16];
    char stringdata18[15];
    char stringdata19[11];
    char stringdata20[43];
    char stringdata21[38];
    char stringdata22[24];
    char stringdata23[37];
    char stringdata24[39];
    char stringdata25[15];
    char stringdata26[36];
    char stringdata27[38];
    char stringdata28[33];
    char stringdata29[17];
    char stringdata30[5];
    char stringdata31[32];
    char stringdata32[31];
    char stringdata33[22];
    char stringdata34[8];
    char stringdata35[25];
    char stringdata36[21];
    char stringdata37[18];
    char stringdata38[19];
    char stringdata39[36];
    char stringdata40[24];
    char stringdata41[27];
    char stringdata42[19];
    char stringdata43[11];
    char stringdata44[22];
    char stringdata45[19];
    char stringdata46[14];
    char stringdata47[21];
    char stringdata48[21];
    char stringdata49[24];
    char stringdata50[16];
    char stringdata51[20];
    char stringdata52[20];
    char stringdata53[13];
    char stringdata54[11];
    char stringdata55[15];
    char stringdata56[7];
    char stringdata57[9];
    char stringdata58[21];
    char stringdata59[11];
    char stringdata60[5];
    char stringdata61[12];
    char stringdata62[18];
    char stringdata63[12];
    char stringdata64[6];
    char stringdata65[6];
    char stringdata66[4];
    char stringdata67[34];
    char stringdata68[37];
    char stringdata69[36];
    char stringdata70[37];
    char stringdata71[31];
    char stringdata72[30];
    char stringdata73[31];
    char stringdata74[29];
    char stringdata75[4];
    char stringdata76[7];
    char stringdata77[35];
    char stringdata78[32];
    char stringdata79[32];
    char stringdata80[45];
    char stringdata81[19];
    char stringdata82[2];
    char stringdata83[43];
    char stringdata84[33];
    char stringdata85[26];
    char stringdata86[45];
    char stringdata87[45];
    char stringdata88[45];
    char stringdata89[35];
    char stringdata90[32];
    char stringdata91[32];
    char stringdata92[30];
    char stringdata93[34];
    char stringdata94[12];
    char stringdata95[9];
    char stringdata96[16];
    char stringdata97[31];
    char stringdata98[38];
    char stringdata99[38];
    char stringdata100[38];
    char stringdata101[38];
    char stringdata102[44];
    char stringdata103[44];
    char stringdata104[44];
    char stringdata105[44];
    char stringdata106[36];
    char stringdata107[36];
    char stringdata108[36];
    char stringdata109[36];
    char stringdata110[11];
    char stringdata111[43];
    char stringdata112[38];
    char stringdata113[11];
    char stringdata114[12];
    char stringdata115[15];
    char stringdata116[17];
    char stringdata117[17];
    char stringdata118[19];
    char stringdata119[17];
    char stringdata120[37];
    char stringdata121[38];
    char stringdata122[8];
    char stringdata123[38];
    char stringdata124[29];
    char stringdata125[28];
    char stringdata126[31];
    char stringdata127[33];
    char stringdata128[33];
    char stringdata129[37];
    char stringdata130[29];
    char stringdata131[36];
    char stringdata132[37];
    char stringdata133[36];
    char stringdata134[41];
    char stringdata135[41];
    char stringdata136[38];
    char stringdata137[33];
    char stringdata138[37];
    char stringdata139[34];
    char stringdata140[34];
    char stringdata141[37];
    char stringdata142[31];
    char stringdata143[26];
    char stringdata144[33];
    char stringdata145[30];
    char stringdata146[30];
    char stringdata147[33];
    char stringdata148[28];
    char stringdata149[31];
    char stringdata150[43];
    char stringdata151[41];
    char stringdata152[29];
    char stringdata153[29];
    char stringdata154[29];
    char stringdata155[37];
    char stringdata156[35];
    char stringdata157[37];
    char stringdata158[35];
    char stringdata159[35];
    char stringdata160[35];
    char stringdata161[35];
    char stringdata162[35];
    char stringdata163[35];
    char stringdata164[35];
    char stringdata165[37];
    char stringdata166[34];
    char stringdata167[33];
    char stringdata168[35];
    char stringdata169[12];
    char stringdata170[11];
    char stringdata171[8];
    char stringdata172[30];
    char stringdata173[24];
    char stringdata174[34];
    char stringdata175[34];
    char stringdata176[34];
    char stringdata177[37];
    char stringdata178[34];
    char stringdata179[37];
    char stringdata180[31];
    char stringdata181[36];
    char stringdata182[36];
    char stringdata183[40];
    char stringdata184[39];
    char stringdata185[41];
    char stringdata186[38];
    char stringdata187[37];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 15),  // "readCurrentDate"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 10),  // "initTabCan"
        QT_MOC_LITERAL(39, 36),  // "on_pushButton_searchListPort_..."
        QT_MOC_LITERAL(76, 29),  // "on_pushButton_connect_clicked"
        QT_MOC_LITERAL(106, 32),  // "on_pushButton_disconnect_clicked"
        QT_MOC_LITERAL(139, 31),  // "on_pushButton_startRead_clicked"
        QT_MOC_LITERAL(171, 30),  // "on_pushButton_readOnce_clicked"
        QT_MOC_LITERAL(202, 30),  // "on_pushButton_stopRead_clicked"
        QT_MOC_LITERAL(233, 27),  // "on_pushButton_clear_clicked"
        QT_MOC_LITERAL(261, 39),  // "on_comboBox_canFreq_currentIn..."
        QT_MOC_LITERAL(301, 5),  // "index"
        QT_MOC_LITERAL(307, 42),  // "on_comboBox_readAllCan_curren..."
        QT_MOC_LITERAL(350, 38),  // "on_pushButton_setConfigAdapte..."
        QT_MOC_LITERAL(389, 21),  // "init_setConfigAdapter"
        QT_MOC_LITERAL(411, 15),  // "writeSerialPort"
        QT_MOC_LITERAL(427, 15),  // "dataWriteString"
        QT_MOC_LITERAL(443, 14),  // "readSerialPort"
        QT_MOC_LITERAL(458, 10),  // "readStream"
        QT_MOC_LITERAL(469, 42),  // "on_lineEdit_volumeTextRead_ed..."
        QT_MOC_LITERAL(512, 37),  // "on_lineEdit_freqSampl_editing..."
        QT_MOC_LITERAL(550, 23),  // "on_actionQuit_triggered"
        QT_MOC_LITERAL(574, 36),  // "on_actionOpen_register_map_tr..."
        QT_MOC_LITERAL(611, 38),  // "on_actionCreate_register_map_..."
        QT_MOC_LITERAL(650, 14),  // "genRegFromEnum"
        QT_MOC_LITERAL(665, 35),  // "on_pushButton_saveRegToFile_c..."
        QT_MOC_LITERAL(701, 37),  // "on_pushButton_readRegFromFile..."
        QT_MOC_LITERAL(739, 32),  // "on_listWidget_regNum_itemClicked"
        QT_MOC_LITERAL(772, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(789, 4),  // "item"
        QT_MOC_LITERAL(794, 31),  // "on_pushButton_selectAll_clicked"
        QT_MOC_LITERAL(826, 30),  // "on_pushButton_resetAll_clicked"
        QT_MOC_LITERAL(857, 21),  // "addItemFromlistwidget"
        QT_MOC_LITERAL(879, 7),  // "regName"
        QT_MOC_LITERAL(887, 24),  // "deleteItemFromlistwidget"
        QT_MOC_LITERAL(912, 20),  // "initComboBoxRegister"
        QT_MOC_LITERAL(933, 17),  // "genSampleFromEnum"
        QT_MOC_LITERAL(951, 18),  // "createSamplesTable"
        QT_MOC_LITERAL(970, 35),  // "on_listWidget_sampleNum_itemC..."
        QT_MOC_LITERAL(1006, 23),  // "addSampleFromlistwidget"
        QT_MOC_LITERAL(1030, 26),  // "deleteSampleFromlistwidget"
        QT_MOC_LITERAL(1057, 18),  // "addRowSamplesTable"
        QT_MOC_LITERAL(1076, 10),  // "sampleName"
        QT_MOC_LITERAL(1087, 21),  // "deleteRowSamplesTable"
        QT_MOC_LITERAL(1109, 18),  // "sampleDisplayTable"
        QT_MOC_LITERAL(1128, 13),  // "displayHashID"
        QT_MOC_LITERAL(1142, 20),  // "createRegistersTable"
        QT_MOC_LITERAL(1163, 20),  // "addRowRegistersTable"
        QT_MOC_LITERAL(1184, 23),  // "deleteRowRegistersTable"
        QT_MOC_LITERAL(1208, 15),  // "regDisplayTable"
        QT_MOC_LITERAL(1224, 19),  // "createTableFromFile"
        QT_MOC_LITERAL(1244, 19),  // "addRowTableFromFile"
        QT_MOC_LITERAL(1264, 12),  // "lineFromFile"
        QT_MOC_LITERAL(1277, 10),  // "getFreqInv"
        QT_MOC_LITERAL(1288, 14),  // "getRegisterInv"
        QT_MOC_LITERAL(1303, 6),  // "regNum"
        QT_MOC_LITERAL(1310, 8),  // "valueInt"
        QT_MOC_LITERAL(1319, 20),  // "setRegistersCombobox"
        QT_MOC_LITERAL(1340, 10),  // "glueString"
        QT_MOC_LITERAL(1351, 4),  // "data"
        QT_MOC_LITERAL(1356, 11),  // "registerInv"
        QT_MOC_LITERAL(1368, 17),  // "glueAdapterHeader"
        QT_MOC_LITERAL(1386, 11),  // "scaledValue"
        QT_MOC_LITERAL(1398, 5),  // "value"
        QT_MOC_LITERAL(1404, 5),  // "scale"
        QT_MOC_LITERAL(1410, 3),  // "max"
        QT_MOC_LITERAL(1414, 33),  // "on_pushButton_sendCommand_cli..."
        QT_MOC_LITERAL(1448, 36),  // "on_pushButton_startInv_panel_..."
        QT_MOC_LITERAL(1485, 35),  // "on_pushButton_stopInv_panel_c..."
        QT_MOC_LITERAL(1521, 36),  // "on_pushButton_alarmInv_panel_..."
        QT_MOC_LITERAL(1558, 30),  // "on_pushButton_startInv_clicked"
        QT_MOC_LITERAL(1589, 29),  // "on_pushButton_stopInv_clicked"
        QT_MOC_LITERAL(1619, 30),  // "on_pushButton_alarmInv_clicked"
        QT_MOC_LITERAL(1650, 28),  // "on_tableRegister_cellChanged"
        QT_MOC_LITERAL(1679, 3),  // "row"
        QT_MOC_LITERAL(1683, 6),  // "column"
        QT_MOC_LITERAL(1690, 34),  // "on_tableRegister_cellDoubleCl..."
        QT_MOC_LITERAL(1725, 31),  // "on_pushButton_saveTable_clicked"
        QT_MOC_LITERAL(1757, 31),  // "on_pushButton_loadTable_clicked"
        QT_MOC_LITERAL(1789, 44),  // "on_pushButton_checkRegistersF..."
        QT_MOC_LITERAL(1834, 18),  // "checkValueRegister"
        QT_MOC_LITERAL(1853, 1),  // "i"
        QT_MOC_LITERAL(1855, 42),  // "on_pushButton_setRegistersFro..."
        QT_MOC_LITERAL(1898, 32),  // "on_horizontalSlider_valueChanged"
        QT_MOC_LITERAL(1931, 25),  // "setSelectedRegisterSlider"
        QT_MOC_LITERAL(1957, 44),  // "on_lineEdit_registerValue_1_s..."
        QT_MOC_LITERAL(2002, 44),  // "on_lineEdit_registerValue_2_s..."
        QT_MOC_LITERAL(2047, 44),  // "on_lineEdit_registerValue_3_s..."
        QT_MOC_LITERAL(2092, 34),  // "on_horizontalSlider_sliderRel..."
        QT_MOC_LITERAL(2127, 31),  // "on_pushButton_showPanel_clicked"
        QT_MOC_LITERAL(2159, 31),  // "on_pushButton_hidePanel_clicked"
        QT_MOC_LITERAL(2191, 29),  // "on_pushButton_workDir_clicked"
        QT_MOC_LITERAL(2221, 33),  // "on_pushButton_genFromEnum_cli..."
        QT_MOC_LITERAL(2255, 11),  // "checkVector"
        QT_MOC_LITERAL(2267, 8),  // "addGraph"
        QT_MOC_LITERAL(2276, 15),  // "addPointToGraph"
        QT_MOC_LITERAL(2292, 30),  // "on_pushButton_holdPlot_clicked"
        QT_MOC_LITERAL(2323, 37),  // "on_comboBox_plot1_currentInde..."
        QT_MOC_LITERAL(2361, 37),  // "on_comboBox_plot2_currentInde..."
        QT_MOC_LITERAL(2399, 37),  // "on_comboBox_plot3_currentInde..."
        QT_MOC_LITERAL(2437, 37),  // "on_comboBox_plot4_currentInde..."
        QT_MOC_LITERAL(2475, 43),  // "on_horizontalSlider_max_axis_..."
        QT_MOC_LITERAL(2519, 43),  // "on_horizontalSlider_max_axis_..."
        QT_MOC_LITERAL(2563, 43),  // "on_horizontalSlider_max_axis_..."
        QT_MOC_LITERAL(2607, 43),  // "on_horizontalSlider_max_axis_..."
        QT_MOC_LITERAL(2651, 35),  // "on_lineEdit_yAxis_1_editingFi..."
        QT_MOC_LITERAL(2687, 35),  // "on_lineEdit_yAxis_2_editingFi..."
        QT_MOC_LITERAL(2723, 35),  // "on_lineEdit_yAxis_3_editingFi..."
        QT_MOC_LITERAL(2759, 35),  // "on_lineEdit_yAxis_4_editingFi..."
        QT_MOC_LITERAL(2795, 10),  // "init_scale"
        QT_MOC_LITERAL(2806, 42),  // "on_horizontalSlider_scalePlot..."
        QT_MOC_LITERAL(2849, 37),  // "on_lineEdit_scalePlot_editing..."
        QT_MOC_LITERAL(2887, 10),  // "initStatus"
        QT_MOC_LITERAL(2898, 11),  // "checkStatus"
        QT_MOC_LITERAL(2910, 14),  // "checkInvStatus"
        QT_MOC_LITERAL(2925, 16),  // "checkInvStatus_2"
        QT_MOC_LITERAL(2942, 16),  // "checkInvStatus_3"
        QT_MOC_LITERAL(2959, 18),  // "checkInvStatus_flt"
        QT_MOC_LITERAL(2978, 16),  // "checkInvStatus_5"
        QT_MOC_LITERAL(2995, 36),  // "on_lineEdit_freqPlot_editingF..."
        QT_MOC_LITERAL(3032, 37),  // "on_radioButton_directRotation..."
        QT_MOC_LITERAL(3070, 7),  // "checked"
        QT_MOC_LITERAL(3078, 37),  // "on_radioButton_reversRotation..."
        QT_MOC_LITERAL(3116, 28),  // "on_radioButton_async_clicked"
        QT_MOC_LITERAL(3145, 27),  // "on_radioButton_vent_clicked"
        QT_MOC_LITERAL(3173, 30),  // "on_radioButton_PWM_SIN_clicked"
        QT_MOC_LITERAL(3204, 32),  // "on_radioButton_PWM_OVER1_clicked"
        QT_MOC_LITERAL(3237, 32),  // "on_radioButton_PWM_OVER2_clicked"
        QT_MOC_LITERAL(3270, 36),  // "on_checkBox_harmonicAnalysis_..."
        QT_MOC_LITERAL(3307, 28),  // "on_pushButton_rstFlt_clicked"
        QT_MOC_LITERAL(3336, 35),  // "on_radioButton_resDempAngle_c..."
        QT_MOC_LITERAL(3372, 36),  // "on_radioButton_resDempTorque_..."
        QT_MOC_LITERAL(3409, 35),  // "on_radioButton_resDempPower_c..."
        QT_MOC_LITERAL(3445, 40),  // "on_radioButton_termosensorSin..."
        QT_MOC_LITERAL(3486, 40),  // "on_radioButton_termosensorCri..."
        QT_MOC_LITERAL(3527, 37),  // "on_radioButton_termosensorAll..."
        QT_MOC_LITERAL(3565, 32),  // "on_checkBox_powerMonitor_clicked"
        QT_MOC_LITERAL(3598, 36),  // "on_checkBox_currSensOnFilter_..."
        QT_MOC_LITERAL(3635, 33),  // "on_checkBox_rationingTime_cli..."
        QT_MOC_LITERAL(3669, 33),  // "on_checkBox_enableZeroUdc_cli..."
        QT_MOC_LITERAL(3703, 36),  // "on_checkBox_useOutInductance_..."
        QT_MOC_LITERAL(3740, 30),  // "on_checkBox_powerIsRMS_clicked"
        QT_MOC_LITERAL(3771, 25),  // "on_checkBox_pmmOn_clicked"
        QT_MOC_LITERAL(3797, 32),  // "on_radioButton_expLegacy_clicked"
        QT_MOC_LITERAL(3830, 29),  // "on_radioButton_exp485_clicked"
        QT_MOC_LITERAL(3860, 29),  // "on_radioButton_expSPI_clicked"
        QT_MOC_LITERAL(3890, 32),  // "on_radioButton_expOthers_clicked"
        QT_MOC_LITERAL(3923, 27),  // "on_radioButton_trac_clicked"
        QT_MOC_LITERAL(3951, 30),  // "on_radioButton_subpump_clicked"
        QT_MOC_LITERAL(3982, 42),  // "on_comboBox_canFreqInv_curren..."
        QT_MOC_LITERAL(4025, 40),  // "on_checkBox_allowCAN_freqChan..."
        QT_MOC_LITERAL(4066, 28),  // "on_checkBox_extOut_0_clicked"
        QT_MOC_LITERAL(4095, 28),  // "on_checkBox_extOut_1_clicked"
        QT_MOC_LITERAL(4124, 28),  // "on_checkBox_extOut_2_clicked"
        QT_MOC_LITERAL(4153, 36),  // "on_radioButton_baseConverter_..."
        QT_MOC_LITERAL(4190, 34),  // "on_radioButton_ISING_RSING_cl..."
        QT_MOC_LITERAL(4225, 36),  // "on_radioButton_IQUAD_RDOUB_2_..."
        QT_MOC_LITERAL(4262, 34),  // "on_radioButton_ISING_RDOUB_cl..."
        QT_MOC_LITERAL(4297, 34),  // "on_radioButton_IDOUB_RSING_cl..."
        QT_MOC_LITERAL(4332, 34),  // "on_radioButton_IDOUB_RDOUB_cl..."
        QT_MOC_LITERAL(4367, 34),  // "on_radioButton_ITRIP_RSING_cl..."
        QT_MOC_LITERAL(4402, 34),  // "on_radioButton_ITRIP_RDOUB_cl..."
        QT_MOC_LITERAL(4437, 34),  // "on_radioButton_IQUAD_RSING_cl..."
        QT_MOC_LITERAL(4472, 34),  // "on_radioButton_IQUAD_RDOUB_cl..."
        QT_MOC_LITERAL(4507, 36),  // "on_radioButton_IQUAD_RSING_2_..."
        QT_MOC_LITERAL(4544, 33),  // "on_pushButton_flashErrClr_cli..."
        QT_MOC_LITERAL(4578, 32),  // "on_pushButton_flashWrAll_clicked"
        QT_MOC_LITERAL(4611, 34),  // "on_listWidget_portInfo_itemCl..."
        QT_MOC_LITERAL(4646, 11),  // "addGraph_UF"
        QT_MOC_LITERAL(4658, 10),  // "addPointUF"
        QT_MOC_LITERAL(4669, 7),  // "checkUF"
        QT_MOC_LITERAL(4677, 29),  // "on_table_UF_cellDoubleClicked"
        QT_MOC_LITERAL(4707, 23),  // "on_table_UF_cellChanged"
        QT_MOC_LITERAL(4731, 33),  // "on_lineEdit_f_nom_editingFini..."
        QT_MOC_LITERAL(4765, 33),  // "on_lineEdit_f_err_editingFini..."
        QT_MOC_LITERAL(4799, 33),  // "on_lineEdit_u_nom_editingFini..."
        QT_MOC_LITERAL(4833, 36),  // "on_lineEdit_ku_start_editingF..."
        QT_MOC_LITERAL(4870, 33),  // "on_lineEdit_i_nom_editingFini..."
        QT_MOC_LITERAL(4904, 36),  // "on_lineEdit_ki_start_editingF..."
        QT_MOC_LITERAL(4941, 30),  // "on_checkBox_pwmControl_clicked"
        QT_MOC_LITERAL(4972, 35),  // "on_checkBox_paramsOutChange_c..."
        QT_MOC_LITERAL(5008, 35),  // "on_pushButton_workDirSample_c..."
        QT_MOC_LITERAL(5044, 39),  // "on_pushButton_genFromEnumSamp..."
        QT_MOC_LITERAL(5084, 38),  // "on_pushButton_saveSampleToFil..."
        QT_MOC_LITERAL(5123, 40),  // "on_pushButton_readSampleFromF..."
        QT_MOC_LITERAL(5164, 37),  // "on_pushButton_selectAllSample..."
        QT_MOC_LITERAL(5202, 36)   // "on_pushButton_resetAllSample_..."
    },
    "MainWindow",
    "readCurrentDate",
    "",
    "initTabCan",
    "on_pushButton_searchListPort_clicked",
    "on_pushButton_connect_clicked",
    "on_pushButton_disconnect_clicked",
    "on_pushButton_startRead_clicked",
    "on_pushButton_readOnce_clicked",
    "on_pushButton_stopRead_clicked",
    "on_pushButton_clear_clicked",
    "on_comboBox_canFreq_currentIndexChanged",
    "index",
    "on_comboBox_readAllCan_currentIndexChanged",
    "on_pushButton_setConfigAdapter_clicked",
    "init_setConfigAdapter",
    "writeSerialPort",
    "dataWriteString",
    "readSerialPort",
    "readStream",
    "on_lineEdit_volumeTextRead_editingFinished",
    "on_lineEdit_freqSampl_editingFinished",
    "on_actionQuit_triggered",
    "on_actionOpen_register_map_triggered",
    "on_actionCreate_register_map_triggered",
    "genRegFromEnum",
    "on_pushButton_saveRegToFile_clicked",
    "on_pushButton_readRegFromFile_clicked",
    "on_listWidget_regNum_itemClicked",
    "QListWidgetItem*",
    "item",
    "on_pushButton_selectAll_clicked",
    "on_pushButton_resetAll_clicked",
    "addItemFromlistwidget",
    "regName",
    "deleteItemFromlistwidget",
    "initComboBoxRegister",
    "genSampleFromEnum",
    "createSamplesTable",
    "on_listWidget_sampleNum_itemClicked",
    "addSampleFromlistwidget",
    "deleteSampleFromlistwidget",
    "addRowSamplesTable",
    "sampleName",
    "deleteRowSamplesTable",
    "sampleDisplayTable",
    "displayHashID",
    "createRegistersTable",
    "addRowRegistersTable",
    "deleteRowRegistersTable",
    "regDisplayTable",
    "createTableFromFile",
    "addRowTableFromFile",
    "lineFromFile",
    "getFreqInv",
    "getRegisterInv",
    "regNum",
    "valueInt",
    "setRegistersCombobox",
    "glueString",
    "data",
    "registerInv",
    "glueAdapterHeader",
    "scaledValue",
    "value",
    "scale",
    "max",
    "on_pushButton_sendCommand_clicked",
    "on_pushButton_startInv_panel_clicked",
    "on_pushButton_stopInv_panel_clicked",
    "on_pushButton_alarmInv_panel_clicked",
    "on_pushButton_startInv_clicked",
    "on_pushButton_stopInv_clicked",
    "on_pushButton_alarmInv_clicked",
    "on_tableRegister_cellChanged",
    "row",
    "column",
    "on_tableRegister_cellDoubleClicked",
    "on_pushButton_saveTable_clicked",
    "on_pushButton_loadTable_clicked",
    "on_pushButton_checkRegistersFromFile_clicked",
    "checkValueRegister",
    "i",
    "on_pushButton_setRegistersFromFile_clicked",
    "on_horizontalSlider_valueChanged",
    "setSelectedRegisterSlider",
    "on_lineEdit_registerValue_1_selectionChanged",
    "on_lineEdit_registerValue_2_selectionChanged",
    "on_lineEdit_registerValue_3_selectionChanged",
    "on_horizontalSlider_sliderReleased",
    "on_pushButton_showPanel_clicked",
    "on_pushButton_hidePanel_clicked",
    "on_pushButton_workDir_clicked",
    "on_pushButton_genFromEnum_clicked",
    "checkVector",
    "addGraph",
    "addPointToGraph",
    "on_pushButton_holdPlot_clicked",
    "on_comboBox_plot1_currentIndexChanged",
    "on_comboBox_plot2_currentIndexChanged",
    "on_comboBox_plot3_currentIndexChanged",
    "on_comboBox_plot4_currentIndexChanged",
    "on_horizontalSlider_max_axis_1_valueChanged",
    "on_horizontalSlider_max_axis_2_valueChanged",
    "on_horizontalSlider_max_axis_3_valueChanged",
    "on_horizontalSlider_max_axis_4_valueChanged",
    "on_lineEdit_yAxis_1_editingFinished",
    "on_lineEdit_yAxis_2_editingFinished",
    "on_lineEdit_yAxis_3_editingFinished",
    "on_lineEdit_yAxis_4_editingFinished",
    "init_scale",
    "on_horizontalSlider_scalePlot_valueChanged",
    "on_lineEdit_scalePlot_editingFinished",
    "initStatus",
    "checkStatus",
    "checkInvStatus",
    "checkInvStatus_2",
    "checkInvStatus_3",
    "checkInvStatus_flt",
    "checkInvStatus_5",
    "on_lineEdit_freqPlot_editingFinished",
    "on_radioButton_directRotation_clicked",
    "checked",
    "on_radioButton_reversRotation_clicked",
    "on_radioButton_async_clicked",
    "on_radioButton_vent_clicked",
    "on_radioButton_PWM_SIN_clicked",
    "on_radioButton_PWM_OVER1_clicked",
    "on_radioButton_PWM_OVER2_clicked",
    "on_checkBox_harmonicAnalysis_clicked",
    "on_pushButton_rstFlt_clicked",
    "on_radioButton_resDempAngle_clicked",
    "on_radioButton_resDempTorque_clicked",
    "on_radioButton_resDempPower_clicked",
    "on_radioButton_termosensorSingle_clicked",
    "on_radioButton_termosensorCritic_clicked",
    "on_radioButton_termosensorAll_clicked",
    "on_checkBox_powerMonitor_clicked",
    "on_checkBox_currSensOnFilter_clicked",
    "on_checkBox_rationingTime_clicked",
    "on_checkBox_enableZeroUdc_clicked",
    "on_checkBox_useOutInductance_clicked",
    "on_checkBox_powerIsRMS_clicked",
    "on_checkBox_pmmOn_clicked",
    "on_radioButton_expLegacy_clicked",
    "on_radioButton_exp485_clicked",
    "on_radioButton_expSPI_clicked",
    "on_radioButton_expOthers_clicked",
    "on_radioButton_trac_clicked",
    "on_radioButton_subpump_clicked",
    "on_comboBox_canFreqInv_currentIndexChanged",
    "on_checkBox_allowCAN_freqChanges_clicked",
    "on_checkBox_extOut_0_clicked",
    "on_checkBox_extOut_1_clicked",
    "on_checkBox_extOut_2_clicked",
    "on_radioButton_baseConverter_clicked",
    "on_radioButton_ISING_RSING_clicked",
    "on_radioButton_IQUAD_RDOUB_2_clicked",
    "on_radioButton_ISING_RDOUB_clicked",
    "on_radioButton_IDOUB_RSING_clicked",
    "on_radioButton_IDOUB_RDOUB_clicked",
    "on_radioButton_ITRIP_RSING_clicked",
    "on_radioButton_ITRIP_RDOUB_clicked",
    "on_radioButton_IQUAD_RSING_clicked",
    "on_radioButton_IQUAD_RDOUB_clicked",
    "on_radioButton_IQUAD_RSING_2_clicked",
    "on_pushButton_flashErrClr_clicked",
    "on_pushButton_flashWrAll_clicked",
    "on_listWidget_portInfo_itemClicked",
    "addGraph_UF",
    "addPointUF",
    "checkUF",
    "on_table_UF_cellDoubleClicked",
    "on_table_UF_cellChanged",
    "on_lineEdit_f_nom_editingFinished",
    "on_lineEdit_f_err_editingFinished",
    "on_lineEdit_u_nom_editingFinished",
    "on_lineEdit_ku_start_editingFinished",
    "on_lineEdit_i_nom_editingFinished",
    "on_lineEdit_ki_start_editingFinished",
    "on_checkBox_pwmControl_clicked",
    "on_checkBox_paramsOutChange_clicked",
    "on_pushButton_workDirSample_clicked",
    "on_pushButton_genFromEnumSample_clicked",
    "on_pushButton_saveSampleToFile_clicked",
    "on_pushButton_readSampleFromFile_clicked",
    "on_pushButton_selectAllSample_clicked",
    "on_pushButton_resetAllSample_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
     168,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0, 1022,    2, 0x08,    1 /* Private */,
       3,    0, 1023,    2, 0x08,    2 /* Private */,
       4,    0, 1024,    2, 0x08,    3 /* Private */,
       5,    0, 1025,    2, 0x08,    4 /* Private */,
       6,    0, 1026,    2, 0x08,    5 /* Private */,
       7,    0, 1027,    2, 0x08,    6 /* Private */,
       8,    0, 1028,    2, 0x08,    7 /* Private */,
       9,    0, 1029,    2, 0x08,    8 /* Private */,
      10,    0, 1030,    2, 0x08,    9 /* Private */,
      11,    1, 1031,    2, 0x08,   10 /* Private */,
      13,    1, 1034,    2, 0x08,   12 /* Private */,
      14,    0, 1037,    2, 0x08,   14 /* Private */,
      15,    0, 1038,    2, 0x08,   15 /* Private */,
      16,    1, 1039,    2, 0x08,   16 /* Private */,
      18,    0, 1042,    2, 0x08,   18 /* Private */,
      19,    0, 1043,    2, 0x08,   19 /* Private */,
      20,    0, 1044,    2, 0x08,   20 /* Private */,
      21,    0, 1045,    2, 0x08,   21 /* Private */,
      22,    0, 1046,    2, 0x08,   22 /* Private */,
      23,    0, 1047,    2, 0x08,   23 /* Private */,
      24,    0, 1048,    2, 0x08,   24 /* Private */,
      25,    0, 1049,    2, 0x08,   25 /* Private */,
      26,    0, 1050,    2, 0x08,   26 /* Private */,
      27,    0, 1051,    2, 0x08,   27 /* Private */,
      28,    1, 1052,    2, 0x08,   28 /* Private */,
      31,    0, 1055,    2, 0x08,   30 /* Private */,
      32,    0, 1056,    2, 0x08,   31 /* Private */,
      33,    3, 1057,    2, 0x08,   32 /* Private */,
      35,    2, 1064,    2, 0x08,   36 /* Private */,
      36,    0, 1069,    2, 0x08,   39 /* Private */,
      37,    0, 1070,    2, 0x08,   40 /* Private */,
      38,    0, 1071,    2, 0x08,   41 /* Private */,
      39,    1, 1072,    2, 0x08,   42 /* Private */,
      40,    3, 1075,    2, 0x08,   44 /* Private */,
      41,    2, 1082,    2, 0x08,   48 /* Private */,
      42,    2, 1087,    2, 0x08,   51 /* Private */,
      44,    1, 1092,    2, 0x08,   54 /* Private */,
      45,    0, 1095,    2, 0x08,   56 /* Private */,
      46,    0, 1096,    2, 0x08,   57 /* Private */,
      47,    0, 1097,    2, 0x08,   58 /* Private */,
      48,    2, 1098,    2, 0x08,   59 /* Private */,
      49,    1, 1103,    2, 0x08,   62 /* Private */,
      50,    0, 1106,    2, 0x08,   64 /* Private */,
      51,    0, 1107,    2, 0x08,   65 /* Private */,
      52,    1, 1108,    2, 0x08,   66 /* Private */,
      54,    0, 1111,    2, 0x08,   68 /* Private */,
      55,    2, 1112,    2, 0x08,   69 /* Private */,
      58,    0, 1117,    2, 0x08,   72 /* Private */,
      59,    2, 1118,    2, 0x08,   73 /* Private */,
      62,    0, 1123,    2, 0x08,   76 /* Private */,
      63,    3, 1124,    2, 0x08,   77 /* Private */,
      67,    0, 1131,    2, 0x08,   81 /* Private */,
      68,    0, 1132,    2, 0x08,   82 /* Private */,
      69,    0, 1133,    2, 0x08,   83 /* Private */,
      70,    0, 1134,    2, 0x08,   84 /* Private */,
      71,    0, 1135,    2, 0x08,   85 /* Private */,
      72,    0, 1136,    2, 0x08,   86 /* Private */,
      73,    0, 1137,    2, 0x08,   87 /* Private */,
      74,    2, 1138,    2, 0x08,   88 /* Private */,
      77,    2, 1143,    2, 0x08,   91 /* Private */,
      78,    0, 1148,    2, 0x08,   94 /* Private */,
      79,    0, 1149,    2, 0x08,   95 /* Private */,
      80,    0, 1150,    2, 0x08,   96 /* Private */,
      81,    2, 1151,    2, 0x08,   97 /* Private */,
      83,    0, 1156,    2, 0x08,  100 /* Private */,
      84,    1, 1157,    2, 0x08,  101 /* Private */,
      85,    1, 1160,    2, 0x08,  103 /* Private */,
      86,    0, 1163,    2, 0x08,  105 /* Private */,
      87,    0, 1164,    2, 0x08,  106 /* Private */,
      88,    0, 1165,    2, 0x08,  107 /* Private */,
      89,    0, 1166,    2, 0x08,  108 /* Private */,
      90,    0, 1167,    2, 0x08,  109 /* Private */,
      91,    0, 1168,    2, 0x08,  110 /* Private */,
      92,    0, 1169,    2, 0x08,  111 /* Private */,
      93,    0, 1170,    2, 0x08,  112 /* Private */,
      94,    0, 1171,    2, 0x08,  113 /* Private */,
      95,    0, 1172,    2, 0x08,  114 /* Private */,
      96,    0, 1173,    2, 0x08,  115 /* Private */,
      97,    0, 1174,    2, 0x08,  116 /* Private */,
      98,    1, 1175,    2, 0x08,  117 /* Private */,
      99,    1, 1178,    2, 0x08,  119 /* Private */,
     100,    1, 1181,    2, 0x08,  121 /* Private */,
     101,    1, 1184,    2, 0x08,  123 /* Private */,
     102,    1, 1187,    2, 0x08,  125 /* Private */,
     103,    1, 1190,    2, 0x08,  127 /* Private */,
     104,    1, 1193,    2, 0x08,  129 /* Private */,
     105,    1, 1196,    2, 0x08,  131 /* Private */,
     106,    0, 1199,    2, 0x08,  133 /* Private */,
     107,    0, 1200,    2, 0x08,  134 /* Private */,
     108,    0, 1201,    2, 0x08,  135 /* Private */,
     109,    0, 1202,    2, 0x08,  136 /* Private */,
     110,    0, 1203,    2, 0x08,  137 /* Private */,
     111,    1, 1204,    2, 0x08,  138 /* Private */,
     112,    0, 1207,    2, 0x08,  140 /* Private */,
     113,    0, 1208,    2, 0x08,  141 /* Private */,
     114,    0, 1209,    2, 0x08,  142 /* Private */,
     115,    0, 1210,    2, 0x08,  143 /* Private */,
     116,    0, 1211,    2, 0x08,  144 /* Private */,
     117,    0, 1212,    2, 0x08,  145 /* Private */,
     118,    0, 1213,    2, 0x08,  146 /* Private */,
     119,    0, 1214,    2, 0x08,  147 /* Private */,
     120,    0, 1215,    2, 0x08,  148 /* Private */,
     121,    1, 1216,    2, 0x08,  149 /* Private */,
     123,    1, 1219,    2, 0x08,  151 /* Private */,
     124,    1, 1222,    2, 0x08,  153 /* Private */,
     125,    1, 1225,    2, 0x08,  155 /* Private */,
     126,    1, 1228,    2, 0x08,  157 /* Private */,
     127,    1, 1231,    2, 0x08,  159 /* Private */,
     128,    1, 1234,    2, 0x08,  161 /* Private */,
     129,    1, 1237,    2, 0x08,  163 /* Private */,
     130,    0, 1240,    2, 0x08,  165 /* Private */,
     131,    1, 1241,    2, 0x08,  166 /* Private */,
     132,    1, 1244,    2, 0x08,  168 /* Private */,
     133,    1, 1247,    2, 0x08,  170 /* Private */,
     134,    1, 1250,    2, 0x08,  172 /* Private */,
     135,    1, 1253,    2, 0x08,  174 /* Private */,
     136,    1, 1256,    2, 0x08,  176 /* Private */,
     137,    1, 1259,    2, 0x08,  178 /* Private */,
     138,    1, 1262,    2, 0x08,  180 /* Private */,
     139,    1, 1265,    2, 0x08,  182 /* Private */,
     140,    1, 1268,    2, 0x08,  184 /* Private */,
     141,    1, 1271,    2, 0x08,  186 /* Private */,
     142,    1, 1274,    2, 0x08,  188 /* Private */,
     143,    1, 1277,    2, 0x08,  190 /* Private */,
     144,    1, 1280,    2, 0x08,  192 /* Private */,
     145,    1, 1283,    2, 0x08,  194 /* Private */,
     146,    1, 1286,    2, 0x08,  196 /* Private */,
     147,    1, 1289,    2, 0x08,  198 /* Private */,
     148,    1, 1292,    2, 0x08,  200 /* Private */,
     149,    1, 1295,    2, 0x08,  202 /* Private */,
     150,    1, 1298,    2, 0x08,  204 /* Private */,
     151,    1, 1301,    2, 0x08,  206 /* Private */,
     152,    1, 1304,    2, 0x08,  208 /* Private */,
     153,    1, 1307,    2, 0x08,  210 /* Private */,
     154,    1, 1310,    2, 0x08,  212 /* Private */,
     155,    1, 1313,    2, 0x08,  214 /* Private */,
     156,    1, 1316,    2, 0x08,  216 /* Private */,
     157,    1, 1319,    2, 0x08,  218 /* Private */,
     158,    1, 1322,    2, 0x08,  220 /* Private */,
     159,    1, 1325,    2, 0x08,  222 /* Private */,
     160,    1, 1328,    2, 0x08,  224 /* Private */,
     161,    1, 1331,    2, 0x08,  226 /* Private */,
     162,    1, 1334,    2, 0x08,  228 /* Private */,
     163,    1, 1337,    2, 0x08,  230 /* Private */,
     164,    1, 1340,    2, 0x08,  232 /* Private */,
     165,    1, 1343,    2, 0x08,  234 /* Private */,
     166,    0, 1346,    2, 0x08,  236 /* Private */,
     167,    0, 1347,    2, 0x08,  237 /* Private */,
     168,    1, 1348,    2, 0x08,  238 /* Private */,
     169,    0, 1351,    2, 0x08,  240 /* Private */,
     170,    0, 1352,    2, 0x08,  241 /* Private */,
     171,    0, 1353,    2, 0x08,  242 /* Private */,
     172,    2, 1354,    2, 0x08,  243 /* Private */,
     173,    2, 1359,    2, 0x08,  246 /* Private */,
     174,    0, 1364,    2, 0x08,  249 /* Private */,
     175,    0, 1365,    2, 0x08,  250 /* Private */,
     176,    0, 1366,    2, 0x08,  251 /* Private */,
     177,    0, 1367,    2, 0x08,  252 /* Private */,
     178,    0, 1368,    2, 0x08,  253 /* Private */,
     179,    0, 1369,    2, 0x08,  254 /* Private */,
     180,    0, 1370,    2, 0x08,  255 /* Private */,
     181,    0, 1371,    2, 0x08,  256 /* Private */,
     182,    0, 1372,    2, 0x08,  257 /* Private */,
     183,    0, 1373,    2, 0x08,  258 /* Private */,
     184,    0, 1374,    2, 0x08,  259 /* Private */,
     185,    0, 1375,    2, 0x08,  260 /* Private */,
     186,    0, 1376,    2, 0x08,  261 /* Private */,
     187,    0, 1377,    2, 0x08,  262 /* Private */,

 // slots: parameters
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::QByteArray,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29, QMetaType::UChar, QMetaType::QString,   30,   12,   34,
    QMetaType::Void, 0x80000000 | 29, QMetaType::UChar,   30,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 29, QMetaType::Int, QMetaType::QString,   30,   12,   34,
    QMetaType::Void, 0x80000000 | 29, QMetaType::Int,   30,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   12,   43,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   12,   34,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   53,
    QMetaType::Void,
    QMetaType::QString, QMetaType::Int, QMetaType::Short,   56,   57,
    QMetaType::Void,
    QMetaType::QString, QMetaType::UShort, QMetaType::UChar,   60,   61,
    QMetaType::QString,
    QMetaType::QString, QMetaType::Short, QMetaType::Short, QMetaType::Short,   64,   65,   66,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   75,   76,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   75,   76,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   82,   64,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   64,
    QMetaType::Void, QMetaType::Int,   56,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   64,
    QMetaType::Void, QMetaType::Int,   64,
    QMetaType::Void, QMetaType::Int,   64,
    QMetaType::Void, QMetaType::Int,   64,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   64,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   75,   76,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   75,   76,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'readCurrentDate'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'initTabCan'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_searchListPort_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_connect_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_disconnect_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_startRead_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_readOnce_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_stopRead_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clear_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_comboBox_canFreq_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_comboBox_readAllCan_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButton_setConfigAdapter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'init_setConfigAdapter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'writeSerialPort'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'readSerialPort'
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'readStream'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_volumeTextRead_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_freqSampl_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionQuit_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionOpen_register_map_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCreate_register_map_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'genRegFromEnum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_saveRegToFile_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_readRegFromFile_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_listWidget_regNum_itemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'on_pushButton_selectAll_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_resetAll_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addItemFromlistwidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint8, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'deleteItemFromlistwidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint8, std::false_type>,
        // method 'initComboBoxRegister'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'genSampleFromEnum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createSamplesTable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_listWidget_sampleNum_itemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'addSampleFromlistwidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'deleteSampleFromlistwidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'addRowSamplesTable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'deleteRowSamplesTable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sampleDisplayTable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displayHashID'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createRegistersTable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addRowRegistersTable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'deleteRowRegistersTable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'regDisplayTable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createTableFromFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addRowTableFromFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getFreqInv'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getRegisterInv'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint16, std::false_type>,
        // method 'setRegistersCombobox'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'glueString'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint8, std::false_type>,
        // method 'glueAdapterHeader'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'scaledValue'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint16, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint16, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint16, std::false_type>,
        // method 'on_pushButton_sendCommand_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_startInv_panel_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_stopInv_panel_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_alarmInv_panel_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_startInv_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_stopInv_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_alarmInv_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableRegister_cellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableRegister_cellDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButton_saveTable_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_loadTable_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_checkRegistersFromFile_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkValueRegister'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButton_setRegistersFromFile_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_horizontalSlider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setSelectedRegisterSlider'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_lineEdit_registerValue_1_selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_registerValue_2_selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_registerValue_3_selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_horizontalSlider_sliderReleased'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_showPanel_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_hidePanel_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_workDir_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_genFromEnum_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkVector'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addGraph'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addPointToGraph'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_holdPlot_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_comboBox_plot1_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_comboBox_plot2_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_comboBox_plot3_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_comboBox_plot4_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_horizontalSlider_max_axis_1_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_horizontalSlider_max_axis_2_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_horizontalSlider_max_axis_3_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_horizontalSlider_max_axis_4_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_lineEdit_yAxis_1_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_yAxis_2_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_yAxis_3_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_yAxis_4_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'init_scale'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_horizontalSlider_scalePlot_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_lineEdit_scalePlot_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'initStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkInvStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkInvStatus_2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkInvStatus_3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkInvStatus_flt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkInvStatus_5'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_freqPlot_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_radioButton_directRotation_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_reversRotation_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_async_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_vent_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_PWM_SIN_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_PWM_OVER1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_PWM_OVER2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_checkBox_harmonicAnalysis_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_pushButton_rstFlt_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_radioButton_resDempAngle_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_resDempTorque_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_resDempPower_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_termosensorSingle_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_termosensorCritic_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_termosensorAll_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_checkBox_powerMonitor_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_checkBox_currSensOnFilter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_checkBox_rationingTime_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_checkBox_enableZeroUdc_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_checkBox_useOutInductance_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_checkBox_powerIsRMS_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_checkBox_pmmOn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_expLegacy_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_exp485_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_expSPI_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_expOthers_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_trac_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_subpump_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_comboBox_canFreqInv_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_checkBox_allowCAN_freqChanges_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_checkBox_extOut_0_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_checkBox_extOut_1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_checkBox_extOut_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_baseConverter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_ISING_RSING_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_IQUAD_RDOUB_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_ISING_RDOUB_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_IDOUB_RSING_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_IDOUB_RDOUB_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_ITRIP_RSING_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_ITRIP_RDOUB_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_IQUAD_RSING_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_IQUAD_RDOUB_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_IQUAD_RSING_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_pushButton_flashErrClr_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_flashWrAll_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_listWidget_portInfo_itemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'addGraph_UF'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addPointUF'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkUF'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_table_UF_cellDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_table_UF_cellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_lineEdit_f_nom_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_f_err_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_u_nom_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_ku_start_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_i_nom_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_ki_start_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBox_pwmControl_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBox_paramsOutChange_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_workDirSample_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_genFromEnumSample_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_saveSampleToFile_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_readSampleFromFile_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_selectAllSample_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_resetAllSample_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QString _r = _t->readCurrentDate();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->initTabCan(); break;
        case 2: _t->on_pushButton_searchListPort_clicked(); break;
        case 3: _t->on_pushButton_connect_clicked(); break;
        case 4: _t->on_pushButton_disconnect_clicked(); break;
        case 5: _t->on_pushButton_startRead_clicked(); break;
        case 6: _t->on_pushButton_readOnce_clicked(); break;
        case 7: _t->on_pushButton_stopRead_clicked(); break;
        case 8: _t->on_pushButton_clear_clicked(); break;
        case 9: _t->on_comboBox_canFreq_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->on_comboBox_readAllCan_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->on_pushButton_setConfigAdapter_clicked(); break;
        case 12: _t->init_setConfigAdapter(); break;
        case 13: _t->writeSerialPort((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: { QByteArray _r = _t->readSerialPort();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->readStream(); break;
        case 16: _t->on_lineEdit_volumeTextRead_editingFinished(); break;
        case 17: _t->on_lineEdit_freqSampl_editingFinished(); break;
        case 18: _t->on_actionQuit_triggered(); break;
        case 19: _t->on_actionOpen_register_map_triggered(); break;
        case 20: _t->on_actionCreate_register_map_triggered(); break;
        case 21: _t->genRegFromEnum(); break;
        case 22: _t->on_pushButton_saveRegToFile_clicked(); break;
        case 23: _t->on_pushButton_readRegFromFile_clicked(); break;
        case 24: _t->on_listWidget_regNum_itemClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 25: _t->on_pushButton_selectAll_clicked(); break;
        case 26: _t->on_pushButton_resetAll_clicked(); break;
        case 27: _t->addItemFromlistwidget((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint8>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 28: _t->deleteItemFromlistwidget((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint8>>(_a[2]))); break;
        case 29: _t->initComboBoxRegister(); break;
        case 30: _t->genSampleFromEnum(); break;
        case 31: _t->createSamplesTable(); break;
        case 32: _t->on_listWidget_sampleNum_itemClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 33: _t->addSampleFromlistwidget((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 34: _t->deleteSampleFromlistwidget((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 35: _t->addRowSamplesTable((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 36: _t->deleteRowSamplesTable((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 37: _t->sampleDisplayTable(); break;
        case 38: _t->displayHashID(); break;
        case 39: _t->createRegistersTable(); break;
        case 40: _t->addRowRegistersTable((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 41: _t->deleteRowRegistersTable((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 42: _t->regDisplayTable(); break;
        case 43: _t->createTableFromFile(); break;
        case 44: _t->addRowTableFromFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 45: _t->getFreqInv(); break;
        case 46: { QString _r = _t->getRegisterInv((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint16>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 47: _t->setRegistersCombobox(); break;
        case 48: { QString _r = _t->glueString((*reinterpret_cast< std::add_pointer_t<quint16>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint8>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 49: { QString _r = _t->glueAdapterHeader();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 50: { QString _r = _t->scaledValue((*reinterpret_cast< std::add_pointer_t<qint16>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint16>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<qint16>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 51: _t->on_pushButton_sendCommand_clicked(); break;
        case 52: _t->on_pushButton_startInv_panel_clicked(); break;
        case 53: _t->on_pushButton_stopInv_panel_clicked(); break;
        case 54: _t->on_pushButton_alarmInv_panel_clicked(); break;
        case 55: _t->on_pushButton_startInv_clicked(); break;
        case 56: _t->on_pushButton_stopInv_clicked(); break;
        case 57: _t->on_pushButton_alarmInv_clicked(); break;
        case 58: _t->on_tableRegister_cellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 59: _t->on_tableRegister_cellDoubleClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 60: _t->on_pushButton_saveTable_clicked(); break;
        case 61: _t->on_pushButton_loadTable_clicked(); break;
        case 62: _t->on_pushButton_checkRegistersFromFile_clicked(); break;
        case 63: _t->checkValueRegister((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 64: _t->on_pushButton_setRegistersFromFile_clicked(); break;
        case 65: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 66: _t->setSelectedRegisterSlider((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 67: _t->on_lineEdit_registerValue_1_selectionChanged(); break;
        case 68: _t->on_lineEdit_registerValue_2_selectionChanged(); break;
        case 69: _t->on_lineEdit_registerValue_3_selectionChanged(); break;
        case 70: _t->on_horizontalSlider_sliderReleased(); break;
        case 71: _t->on_pushButton_showPanel_clicked(); break;
        case 72: _t->on_pushButton_hidePanel_clicked(); break;
        case 73: _t->on_pushButton_workDir_clicked(); break;
        case 74: _t->on_pushButton_genFromEnum_clicked(); break;
        case 75: _t->checkVector(); break;
        case 76: _t->addGraph(); break;
        case 77: _t->addPointToGraph(); break;
        case 78: _t->on_pushButton_holdPlot_clicked(); break;
        case 79: _t->on_comboBox_plot1_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 80: _t->on_comboBox_plot2_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 81: _t->on_comboBox_plot3_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 82: _t->on_comboBox_plot4_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 83: _t->on_horizontalSlider_max_axis_1_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 84: _t->on_horizontalSlider_max_axis_2_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 85: _t->on_horizontalSlider_max_axis_3_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 86: _t->on_horizontalSlider_max_axis_4_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 87: _t->on_lineEdit_yAxis_1_editingFinished(); break;
        case 88: _t->on_lineEdit_yAxis_2_editingFinished(); break;
        case 89: _t->on_lineEdit_yAxis_3_editingFinished(); break;
        case 90: _t->on_lineEdit_yAxis_4_editingFinished(); break;
        case 91: _t->init_scale(); break;
        case 92: _t->on_horizontalSlider_scalePlot_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 93: _t->on_lineEdit_scalePlot_editingFinished(); break;
        case 94: _t->initStatus(); break;
        case 95: _t->checkStatus(); break;
        case 96: _t->checkInvStatus(); break;
        case 97: _t->checkInvStatus_2(); break;
        case 98: _t->checkInvStatus_3(); break;
        case 99: _t->checkInvStatus_flt(); break;
        case 100: _t->checkInvStatus_5(); break;
        case 101: _t->on_lineEdit_freqPlot_editingFinished(); break;
        case 102: _t->on_radioButton_directRotation_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 103: _t->on_radioButton_reversRotation_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 104: _t->on_radioButton_async_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 105: _t->on_radioButton_vent_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 106: _t->on_radioButton_PWM_SIN_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 107: _t->on_radioButton_PWM_OVER1_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 108: _t->on_radioButton_PWM_OVER2_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 109: _t->on_checkBox_harmonicAnalysis_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 110: _t->on_pushButton_rstFlt_clicked(); break;
        case 111: _t->on_radioButton_resDempAngle_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 112: _t->on_radioButton_resDempTorque_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 113: _t->on_radioButton_resDempPower_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 114: _t->on_radioButton_termosensorSingle_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 115: _t->on_radioButton_termosensorCritic_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 116: _t->on_radioButton_termosensorAll_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 117: _t->on_checkBox_powerMonitor_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 118: _t->on_checkBox_currSensOnFilter_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 119: _t->on_checkBox_rationingTime_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 120: _t->on_checkBox_enableZeroUdc_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 121: _t->on_checkBox_useOutInductance_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 122: _t->on_checkBox_powerIsRMS_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 123: _t->on_checkBox_pmmOn_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 124: _t->on_radioButton_expLegacy_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 125: _t->on_radioButton_exp485_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 126: _t->on_radioButton_expSPI_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 127: _t->on_radioButton_expOthers_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 128: _t->on_radioButton_trac_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 129: _t->on_radioButton_subpump_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 130: _t->on_comboBox_canFreqInv_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 131: _t->on_checkBox_allowCAN_freqChanges_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 132: _t->on_checkBox_extOut_0_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 133: _t->on_checkBox_extOut_1_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 134: _t->on_checkBox_extOut_2_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 135: _t->on_radioButton_baseConverter_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 136: _t->on_radioButton_ISING_RSING_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 137: _t->on_radioButton_IQUAD_RDOUB_2_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 138: _t->on_radioButton_ISING_RDOUB_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 139: _t->on_radioButton_IDOUB_RSING_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 140: _t->on_radioButton_IDOUB_RDOUB_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 141: _t->on_radioButton_ITRIP_RSING_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 142: _t->on_radioButton_ITRIP_RDOUB_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 143: _t->on_radioButton_IQUAD_RSING_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 144: _t->on_radioButton_IQUAD_RDOUB_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 145: _t->on_radioButton_IQUAD_RSING_2_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 146: _t->on_pushButton_flashErrClr_clicked(); break;
        case 147: _t->on_pushButton_flashWrAll_clicked(); break;
        case 148: _t->on_listWidget_portInfo_itemClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 149: _t->addGraph_UF(); break;
        case 150: _t->addPointUF(); break;
        case 151: _t->checkUF(); break;
        case 152: _t->on_table_UF_cellDoubleClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 153: _t->on_table_UF_cellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 154: _t->on_lineEdit_f_nom_editingFinished(); break;
        case 155: _t->on_lineEdit_f_err_editingFinished(); break;
        case 156: _t->on_lineEdit_u_nom_editingFinished(); break;
        case 157: _t->on_lineEdit_ku_start_editingFinished(); break;
        case 158: _t->on_lineEdit_i_nom_editingFinished(); break;
        case 159: _t->on_lineEdit_ki_start_editingFinished(); break;
        case 160: _t->on_checkBox_pwmControl_clicked(); break;
        case 161: _t->on_checkBox_paramsOutChange_clicked(); break;
        case 162: _t->on_pushButton_workDirSample_clicked(); break;
        case 163: _t->on_pushButton_genFromEnumSample_clicked(); break;
        case 164: _t->on_pushButton_saveSampleToFile_clicked(); break;
        case 165: _t->on_pushButton_readSampleFromFile_clicked(); break;
        case 166: _t->on_pushButton_selectAllSample_clicked(); break;
        case 167: _t->on_pushButton_resetAllSample_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 168)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 168;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 168)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 168;
    }
    return _id;
}
QT_WARNING_POP
