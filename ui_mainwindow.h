/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "plot/qcustomplot.h"
#include "qpaintwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_register_map;
    QAction *actionCreate_register_map;
    QAction *actionQuit;
    QWidget *centralwidget;
    QGridLayout *gridLayout_21;
    QTabWidget *tabWidget_registerWidget;
    QWidget *tab_adapter;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_searchListPort;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_connect;
    QPushButton *pushButton_disconnect;
    QHBoxLayout *horizontalLayout_8;
    QListWidget *listWidget_portInfo;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox_serialPort;
    QLabel *label_nameOk;
    QLabel *label_baudRate;
    QComboBox *comboBox_baudRate;
    QLabel *label_baudOk;
    QLabel *label_parity;
    QComboBox *comboBox_parity;
    QLabel *label_parityOk;
    QLabel *label_dataBits;
    QComboBox *comboBox_dataBits;
    QLabel *label_dataOk;
    QLabel *label_stopBit;
    QComboBox *comboBox_stopBit;
    QLabel *label_stopOk;
    QLabel *label_flowBit;
    QComboBox *comboBox_flowBit;
    QLabel *label_flowOk;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_10;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QComboBox *comboBox_canFreq;
    QLabel *label_canFreq;
    QComboBox *comboBox_readAllCan;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_setConfigAdapter;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_settingsTiming;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *checkBox_canStandart;
    QCheckBox *checkBox_canExtended;
    QCheckBox *checkBox_adapterAnswer;
    QCheckBox *checkBox_lossConnection;
    QFormLayout *formLayout_3;
    QLabel *label_volumeTextRead;
    QLineEdit *lineEdit_volumeTextRead;
    QLabel *label_3;
    QLineEdit *lineEdit_availableByte;
    QLabel *label_6;
    QLineEdit *lineEdit_freqSampl;
    QRadioButton *radioButton_byChekBox;
    QRadioButton *radioButton_fromHashTable;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_startRead;
    QPushButton *pushButton_readOnce;
    QPushButton *pushButton_stopRead;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_clear;
    QTextEdit *textEdit_dataRead;
    QWidget *tab_selectAlias;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_9;
    QListWidget *listWidget_regNum;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_genFromEnum;
    QPushButton *pushButton_selectAll;
    QPushButton *pushButton_readRegFromFile;
    QPushButton *pushButton_resetAll;
    QVBoxLayout *verticalLayout_10;
    QTextEdit *textEdit_selectedRegNum;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_workDir;
    QPushButton *pushButton_saveRegToFile;
    QFormLayout *formLayout_5;
    QLabel *label_7;
    QLineEdit *lineEdit_workDir;
    QWidget *tab_registers;
    QGridLayout *gridLayout_9;
    QVBoxLayout *verticalLayout_14;
    QPushButton *pushButton_showPanel;
    QGroupBox *groupBox_controlPanel;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_hidePanel;
    QSpacerItem *horizontalSpacer_4;
    QFormLayout *formLayout_4;
    QLabel *label_freqInv;
    QLineEdit *lineEdit_currentFreq;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_2;
    QComboBox *comboBox_register_1;
    QLineEdit *lineEdit_registerValue_1;
    QComboBox *comboBox_register_2;
    QLineEdit *lineEdit_registerValue_2;
    QComboBox *comboBox_register_3;
    QLineEdit *lineEdit_registerValue_3;
    QSlider *horizontalSlider;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_startInv_panel;
    QPushButton *pushButton_stopInv_panel;
    QPushButton *pushButton_alarmInv_panel;
    QVBoxLayout *verticalLayout_6;
    QTextEdit *textEdit_invertorStatus;
    QPushButton *pushButton_saveTable;
    QTableWidget *tableRegister;
    QWidget *tab;
    QGridLayout *gridLayout_53;
    QVBoxLayout *verticalLayout_52;
    QListWidget *listWidget_sampleNum;
    QGridLayout *gridLayout_52;
    QPushButton *pushButton_genFromEnumSample;
    QPushButton *pushButton_selectAllSample;
    QPushButton *pushButton_readSampleFromFile;
    QPushButton *pushButton_resetAllSample;
    QVBoxLayout *verticalLayout_53;
    QTextEdit *textEdit_selectedSampleNum;
    QVBoxLayout *verticalLayout_51;
    QHBoxLayout *horizontalLayout_41;
    QPushButton *pushButton_workDirSample;
    QPushButton *pushButton_saveSampleToFile;
    QFormLayout *formLayout_21;
    QLabel *label_dirSample;
    QLineEdit *lineEdit_workDirSample;
    QWidget *tab_samples;
    QGridLayout *gridLayout_11;
    QTableWidget *tableSamples;
    QWidget *tab_checkRegisters;
    QGridLayout *gridLayout_15;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_loadTable;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_checkRegistersFromFile;
    QPushButton *pushButton_setRegistersFromFile;
    QSpacerItem *horizontalSpacer_3;
    QFormLayout *formLayout;
    QLabel *label_8;
    QLineEdit *lineEdit_registersFile;
    QTableWidget *tableFromFile;
    QWidget *tab_control;
    QGridLayout *gridLayout_18;
    QLineEdit *lineEdit_testCommand;
    QLabel *label_2;
    QPushButton *pushButton_sendCommand;
    QTextEdit *textEdit_testRegister;
    QTextEdit *textEdit_commandCRC;
    QWidget *tab_settings;
    QGridLayout *gridLayout_20;
    QHBoxLayout *horizontalLayout_18;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_startInv;
    QPushButton *pushButton_stopInv;
    QPushButton *pushButton_alarmInv;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_rstFlt;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pushButton_flashErrClr;
    QPushButton *pushButton_flashWrAll;
    QGridLayout *gridLayout_16;
    QGroupBox *groupBox_direction;
    QHBoxLayout *horizontalLayout_15;
    QRadioButton *radioButton_directRotation;
    QRadioButton *radioButton_reversRotation;
    QGroupBox *groupBox_resonansDemping;
    QVBoxLayout *verticalLayout_19;
    QRadioButton *radioButton_resDempAngle;
    QRadioButton *radioButton_resDempTorque;
    QRadioButton *radioButton_resDempPower;
    QGroupBox *groupBox_motorType;
    QHBoxLayout *horizontalLayout_16;
    QRadioButton *radioButton_async;
    QRadioButton *radioButton_vent;
    QGroupBox *groupBox_PWM_Type;
    QHBoxLayout *horizontalLayout_17;
    QRadioButton *radioButton_PWM_SIN;
    QRadioButton *radioButton_PWM_OVER1;
    QRadioButton *radioButton_PWM_OVER2;
    QGroupBox *groupBox_termosensMode;
    QVBoxLayout *verticalLayout_20;
    QRadioButton *radioButton_termosensorSingle;
    QRadioButton *radioButton_termosensorCritic;
    QRadioButton *radioButton_termosensorAll;
    QGroupBox *groupBox_convType;
    QHBoxLayout *horizontalLayout_14;
    QRadioButton *radioButton_trac;
    QRadioButton *radioButton_subpump;
    QGroupBox *groupBox_expBoard;
    QHBoxLayout *horizontalLayout_19;
    QRadioButton *radioButton_expLegacy;
    QRadioButton *radioButton_exp485;
    QRadioButton *radioButton_expSPI;
    QRadioButton *radioButton_expOthers;
    QVBoxLayout *verticalLayout_21;
    QGroupBox *groupBox_settings;
    QVBoxLayout *verticalLayout_13;
    QCheckBox *checkBox_powerMonitor;
    QCheckBox *checkBox_currSensOnFilter;
    QCheckBox *checkBox_rationingTime;
    QCheckBox *checkBox_enableZeroUdc;
    QCheckBox *checkBox_useOutInductance;
    QCheckBox *checkBox_powerIsRMS;
    QCheckBox *checkBox_harmonicAnalysis;
    QCheckBox *checkBox_pmmOn;
    QCheckBox *checkBox_pwmControl;
    QCheckBox *checkBox_paramsOutChange;
    QVBoxLayout *verticalLayout_22;
    QGroupBox *groupBox_converterDesign;
    QGridLayout *gridLayout_17;
    QRadioButton *radioButton_baseConverter;
    QRadioButton *radioButton_ISING_RDOUB;
    QRadioButton *radioButton_ITRIP_RSING;
    QRadioButton *radioButton_IQUAD_RSING_2;
    QRadioButton *radioButton_IDOUB_RDOUB;
    QRadioButton *radioButton_IQUAD_RSING;
    QRadioButton *radioButton_IQUAD_RDOUB_2;
    QRadioButton *radioButton_IQUAD_RDOUB;
    QRadioButton *radioButton_IDOUB_RSING;
    QRadioButton *radioButton_ITRIP_RDOUB;
    QRadioButton *radioButton_ISING_RSING;
    QSpacerItem *verticalSpacer_7;
    QGroupBox *groupBox_digOut;
    QVBoxLayout *verticalLayout_24;
    QCheckBox *checkBox_extOut_0;
    QCheckBox *checkBox_extOut_1;
    QCheckBox *checkBox_extOut_2;
    QSpacerItem *verticalSpacer_6;
    QFormLayout *formLayout_7;
    QLabel *label_10;
    QComboBox *comboBox_canFreqInv;
    QCheckBox *checkBox_allowCAN_freqChanges;
    QGridLayout *gridLayout_24;
    QLabel *label_status;
    QLabel *label_status_2;
    QLabel *label_status_3;
    QLabel *label_status_flt;
    QLabel *label_status_5;
    QLineEdit *lineEdit_status;
    QLineEdit *lineEdit_status_2;
    QLineEdit *lineEdit_status_3;
    QLineEdit *lineEdit_status_flt;
    QLineEdit *lineEdit_status_5;
    QTextEdit *textEdit_status;
    QTextEdit *textEdit_status_2;
    QTextEdit *textEdit_status_3;
    QTextEdit *textEdit_status_flt;
    QTextEdit *textEdit_status_5;
    QWidget *tab_plot;
    QGridLayout *gridLayout_14;
    QGridLayout *gridLayout_13;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_4;
    QGridLayout *gridLayout_12;
    QLineEdit *lineEdit_yAxis_1;
    QLineEdit *lineEdit_yAxis_2;
    QSlider *horizontalSlider_max_axis_2;
    QLineEdit *lineEdit_yAxis_1_min;
    QComboBox *comboBox_plot1;
    QSlider *horizontalSlider_max_axis_1;
    QComboBox *comboBox_plot2;
    QLineEdit *lineEdit_yAxis_2_min;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_26;
    QLabel *label_12;
    QLabel *label_startTimeStamp;
    QLabel *label_restartTimeStartStamp;
    QLabel *label_numberOfRestarts;
    QCustomPlot *widget_plot_1;
    QVBoxLayout *verticalLayout_17;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_9;
    QGridLayout *gridLayout_10;
    QLineEdit *lineEdit_yAxis_3;
    QLineEdit *lineEdit_yAxis_4_min;
    QComboBox *comboBox_plot3;
    QComboBox *comboBox_plot4;
    QLineEdit *lineEdit_yAxis_4;
    QLineEdit *lineEdit_yAxis_3_min;
    QSlider *horizontalSlider_max_axis_3;
    QSlider *horizontalSlider_max_axis_4;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_15;
    QPushButton *pushButton_holdPlot;
    QVBoxLayout *verticalLayout_12;
    QFormLayout *formLayout_6;
    QLabel *label_replotFreq;
    QLineEdit *lineEdit_freqPlot;
    QLabel *label_scalePlot;
    QLineEdit *lineEdit_scalePlot;
    QSlider *horizontalSlider_scalePlot;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_currentDate;
    QCustomPlot *widget_plot_2;
    QWidget *tab_vector;
    QGridLayout *gridLayout_19;
    QHBoxLayout *horizontalLayout_20;
    QPaintWidget *widget_paintVector;
    QVBoxLayout *verticalLayout_23;
    QFormLayout *formLayout_10;
    QLabel *label_Fconv;
    QLineEdit *lineEdit_Fconv;
    QLabel *label_Uconv;
    QLineEdit *lineEdit_Uconv;
    QLabel *label_uMax;
    QLineEdit *lineEdit_UconvMax;
    QCheckBox *checkBox_uPh;
    QCheckBox *checkBox_uLine;
    QFormLayout *formLayout_9;
    QLabel *label_Iconv_A;
    QLineEdit *lineEdit_IconvA;
    QLabel *label_Iconv_B;
    QLineEdit *lineEdit_IconvB;
    QLabel *label_Iconv_C;
    QLineEdit *lineEdit_IconvC;
    QLineEdit *lineEdit_IconvMax;
    QLabel *label_iMax;
    QCheckBox *checkBox_i;
    QFormLayout *formLayout_8;
    QLabel *label_Iconv_PhA;
    QLineEdit *lineEdit_PhA;
    QLabel *label_Iconv_PhB;
    QLineEdit *lineEdit_PhB;
    QLabel *label_Iconv_PhC;
    QLineEdit *lineEdit_PhC;
    QWidget *tab_u_f;
    QGridLayout *gridLayout_25;
    QVBoxLayout *verticalLayout_25;
    QGroupBox *groupBox_UF;
    QGridLayout *gridLayout_23;
    QGridLayout *gridLayout_22;
    QLabel *label_f_nom;
    QLineEdit *lineEdit_f_nom;
    QLabel *label_f_err;
    QLineEdit *lineEdit_f_err;
    QLabel *label_u_nom;
    QLineEdit *lineEdit_u_nom;
    QLabel *label_ku_start;
    QLineEdit *lineEdit_ku_start;
    QLabel *label_i_nom;
    QLineEdit *lineEdit_i_nom;
    QLabel *label_ki_start;
    QLineEdit *lineEdit_ki_start;
    QTableWidget *table_UF;
    QCustomPlot *widget_plot_UF;
    QMenuBar *menubar;
    QMenu *menuCAN_Adapter;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1105, 927);
        actionOpen_register_map = new QAction(MainWindow);
        actionOpen_register_map->setObjectName("actionOpen_register_map");
        actionCreate_register_map = new QAction(MainWindow);
        actionCreate_register_map->setObjectName("actionCreate_register_map");
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName("actionQuit");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout_21 = new QGridLayout(centralwidget);
        gridLayout_21->setObjectName("gridLayout_21");
        tabWidget_registerWidget = new QTabWidget(centralwidget);
        tabWidget_registerWidget->setObjectName("tabWidget_registerWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget_registerWidget->sizePolicy().hasHeightForWidth());
        tabWidget_registerWidget->setSizePolicy(sizePolicy1);
        tabWidget_registerWidget->setMinimumSize(QSize(0, 0));
        tab_adapter = new QWidget();
        tab_adapter->setObjectName("tab_adapter");
        gridLayout_3 = new QGridLayout(tab_adapter);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(5, 5, 5, 5);
        scrollArea = new QScrollArea(tab_adapter);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 1065, 810));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setHorizontalSpacing(7);
        gridLayout_4->setVerticalSpacing(2);
        gridLayout_4->setContentsMargins(0, 0, 6, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(30);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(3, -1, -1, -1);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, 6, 10, -1);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        pushButton_searchListPort = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_searchListPort->setObjectName("pushButton_searchListPort");

        horizontalLayout_7->addWidget(pushButton_searchListPort);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        pushButton_connect = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_connect->setObjectName("pushButton_connect");

        horizontalLayout_7->addWidget(pushButton_connect);

        pushButton_disconnect = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_disconnect->setObjectName("pushButton_disconnect");

        horizontalLayout_7->addWidget(pushButton_disconnect);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        listWidget_portInfo = new QListWidget(scrollAreaWidgetContents_2);
        listWidget_portInfo->setObjectName("listWidget_portInfo");

        horizontalLayout_8->addWidget(listWidget_portInfo);

        groupBox = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox_serialPort = new QComboBox(groupBox);
        comboBox_serialPort->setObjectName("comboBox_serialPort");

        gridLayout->addWidget(comboBox_serialPort, 0, 1, 1, 1);

        label_nameOk = new QLabel(groupBox);
        label_nameOk->setObjectName("label_nameOk");

        gridLayout->addWidget(label_nameOk, 0, 2, 1, 1);

        label_baudRate = new QLabel(groupBox);
        label_baudRate->setObjectName("label_baudRate");
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_baudRate->sizePolicy().hasHeightForWidth());
        label_baudRate->setSizePolicy(sizePolicy2);
        label_baudRate->setMinimumSize(QSize(85, 0));

        gridLayout->addWidget(label_baudRate, 1, 0, 1, 1);

        comboBox_baudRate = new QComboBox(groupBox);
        comboBox_baudRate->setObjectName("comboBox_baudRate");
        comboBox_baudRate->setMinimumSize(QSize(83, 0));

        gridLayout->addWidget(comboBox_baudRate, 1, 1, 1, 1);

        label_baudOk = new QLabel(groupBox);
        label_baudOk->setObjectName("label_baudOk");

        gridLayout->addWidget(label_baudOk, 1, 2, 1, 1);

        label_parity = new QLabel(groupBox);
        label_parity->setObjectName("label_parity");
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_parity->sizePolicy().hasHeightForWidth());
        label_parity->setSizePolicy(sizePolicy3);
        label_parity->setMinimumSize(QSize(85, 0));

        gridLayout->addWidget(label_parity, 2, 0, 1, 1);

        comboBox_parity = new QComboBox(groupBox);
        comboBox_parity->setObjectName("comboBox_parity");
        comboBox_parity->setMinimumSize(QSize(83, 0));

        gridLayout->addWidget(comboBox_parity, 2, 1, 1, 1);

        label_parityOk = new QLabel(groupBox);
        label_parityOk->setObjectName("label_parityOk");

        gridLayout->addWidget(label_parityOk, 2, 2, 1, 1);

        label_dataBits = new QLabel(groupBox);
        label_dataBits->setObjectName("label_dataBits");
        sizePolicy3.setHeightForWidth(label_dataBits->sizePolicy().hasHeightForWidth());
        label_dataBits->setSizePolicy(sizePolicy3);
        label_dataBits->setMinimumSize(QSize(85, 0));

        gridLayout->addWidget(label_dataBits, 3, 0, 1, 1);

        comboBox_dataBits = new QComboBox(groupBox);
        comboBox_dataBits->setObjectName("comboBox_dataBits");
        comboBox_dataBits->setMinimumSize(QSize(83, 0));

        gridLayout->addWidget(comboBox_dataBits, 3, 1, 1, 1);

        label_dataOk = new QLabel(groupBox);
        label_dataOk->setObjectName("label_dataOk");

        gridLayout->addWidget(label_dataOk, 3, 2, 1, 1);

        label_stopBit = new QLabel(groupBox);
        label_stopBit->setObjectName("label_stopBit");
        sizePolicy3.setHeightForWidth(label_stopBit->sizePolicy().hasHeightForWidth());
        label_stopBit->setSizePolicy(sizePolicy3);
        label_stopBit->setMinimumSize(QSize(85, 0));

        gridLayout->addWidget(label_stopBit, 4, 0, 1, 1);

        comboBox_stopBit = new QComboBox(groupBox);
        comboBox_stopBit->setObjectName("comboBox_stopBit");
        comboBox_stopBit->setMinimumSize(QSize(83, 0));

        gridLayout->addWidget(comboBox_stopBit, 4, 1, 1, 1);

        label_stopOk = new QLabel(groupBox);
        label_stopOk->setObjectName("label_stopOk");

        gridLayout->addWidget(label_stopOk, 4, 2, 1, 1);

        label_flowBit = new QLabel(groupBox);
        label_flowBit->setObjectName("label_flowBit");
        sizePolicy3.setHeightForWidth(label_flowBit->sizePolicy().hasHeightForWidth());
        label_flowBit->setSizePolicy(sizePolicy3);
        label_flowBit->setMinimumSize(QSize(85, 0));

        gridLayout->addWidget(label_flowBit, 5, 0, 1, 1);

        comboBox_flowBit = new QComboBox(groupBox);
        comboBox_flowBit->setObjectName("comboBox_flowBit");
        comboBox_flowBit->setMinimumSize(QSize(83, 0));

        gridLayout->addWidget(comboBox_flowBit, 5, 1, 1, 1);

        label_flowOk = new QLabel(groupBox);
        label_flowOk->setObjectName("label_flowOk");

        gridLayout->addWidget(label_flowOk, 5, 2, 1, 1);


        horizontalLayout_8->addWidget(groupBox);


        verticalLayout_2->addLayout(horizontalLayout_8);


        verticalLayout_8->addLayout(verticalLayout_2);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_2->setObjectName("groupBox_2");
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        horizontalLayout_10 = new QHBoxLayout(groupBox_2);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 3, 1, 1, 1);

        comboBox_canFreq = new QComboBox(groupBox_2);
        comboBox_canFreq->setObjectName("comboBox_canFreq");
        comboBox_canFreq->setMinimumSize(QSize(66, 20));

        gridLayout_2->addWidget(comboBox_canFreq, 1, 2, 1, 1);

        label_canFreq = new QLabel(groupBox_2);
        label_canFreq->setObjectName("label_canFreq");

        gridLayout_2->addWidget(label_canFreq, 1, 1, 1, 1);

        comboBox_readAllCan = new QComboBox(groupBox_2);
        comboBox_readAllCan->setObjectName("comboBox_readAllCan");

        gridLayout_2->addWidget(comboBox_readAllCan, 3, 2, 1, 1);


        horizontalLayout_10->addLayout(gridLayout_2);

        horizontalSpacer_7 = new QSpacerItem(182, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_7);

        pushButton_setConfigAdapter = new QPushButton(groupBox_2);
        pushButton_setConfigAdapter->setObjectName("pushButton_setConfigAdapter");
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_setConfigAdapter->sizePolicy().hasHeightForWidth());
        pushButton_setConfigAdapter->setSizePolicy(sizePolicy4);

        horizontalLayout_10->addWidget(pushButton_setConfigAdapter);


        verticalLayout_8->addWidget(groupBox_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        groupBox_settingsTiming = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_settingsTiming->setObjectName("groupBox_settingsTiming");
        horizontalLayout_9 = new QHBoxLayout(groupBox_settingsTiming);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        checkBox_canStandart = new QCheckBox(groupBox_settingsTiming);
        checkBox_canStandart->setObjectName("checkBox_canStandart");

        verticalLayout_7->addWidget(checkBox_canStandart);

        checkBox_canExtended = new QCheckBox(groupBox_settingsTiming);
        checkBox_canExtended->setObjectName("checkBox_canExtended");

        verticalLayout_7->addWidget(checkBox_canExtended);

        checkBox_adapterAnswer = new QCheckBox(groupBox_settingsTiming);
        checkBox_adapterAnswer->setObjectName("checkBox_adapterAnswer");

        verticalLayout_7->addWidget(checkBox_adapterAnswer);

        checkBox_lossConnection = new QCheckBox(groupBox_settingsTiming);
        checkBox_lossConnection->setObjectName("checkBox_lossConnection");

        verticalLayout_7->addWidget(checkBox_lossConnection);


        horizontalLayout_9->addLayout(verticalLayout_7);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_volumeTextRead = new QLabel(groupBox_settingsTiming);
        label_volumeTextRead->setObjectName("label_volumeTextRead");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_volumeTextRead);

        lineEdit_volumeTextRead = new QLineEdit(groupBox_settingsTiming);
        lineEdit_volumeTextRead->setObjectName("lineEdit_volumeTextRead");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEdit_volumeTextRead);

        label_3 = new QLabel(groupBox_settingsTiming);
        label_3->setObjectName("label_3");

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_3);

        lineEdit_availableByte = new QLineEdit(groupBox_settingsTiming);
        lineEdit_availableByte->setObjectName("lineEdit_availableByte");
        lineEdit_availableByte->setEnabled(false);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, lineEdit_availableByte);

        label_6 = new QLabel(groupBox_settingsTiming);
        label_6->setObjectName("label_6");

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_6);

        lineEdit_freqSampl = new QLineEdit(groupBox_settingsTiming);
        lineEdit_freqSampl->setObjectName("lineEdit_freqSampl");

        formLayout_3->setWidget(2, QFormLayout::FieldRole, lineEdit_freqSampl);

        radioButton_byChekBox = new QRadioButton(groupBox_settingsTiming);
        radioButton_byChekBox->setObjectName("radioButton_byChekBox");

        formLayout_3->setWidget(3, QFormLayout::LabelRole, radioButton_byChekBox);

        radioButton_fromHashTable = new QRadioButton(groupBox_settingsTiming);
        radioButton_fromHashTable->setObjectName("radioButton_fromHashTable");

        formLayout_3->setWidget(3, QFormLayout::FieldRole, radioButton_fromHashTable);


        horizontalLayout_9->addLayout(formLayout_3);


        verticalLayout_8->addWidget(groupBox_settingsTiming);


        horizontalLayout_11->addLayout(verticalLayout_8);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(7, 6, 5, 7);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_startRead = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_startRead->setObjectName("pushButton_startRead");

        horizontalLayout_2->addWidget(pushButton_startRead);

        pushButton_readOnce = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_readOnce->setObjectName("pushButton_readOnce");

        horizontalLayout_2->addWidget(pushButton_readOnce);

        pushButton_stopRead = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_stopRead->setObjectName("pushButton_stopRead");

        horizontalLayout_2->addWidget(pushButton_stopRead);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_clear = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_clear->setObjectName("pushButton_clear");

        horizontalLayout_2->addWidget(pushButton_clear);


        verticalLayout->addLayout(horizontalLayout_2);

        textEdit_dataRead = new QTextEdit(scrollAreaWidgetContents_2);
        textEdit_dataRead->setObjectName("textEdit_dataRead");

        verticalLayout->addWidget(textEdit_dataRead);


        horizontalLayout_11->addLayout(verticalLayout);


        gridLayout_4->addLayout(horizontalLayout_11, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout_3->addWidget(scrollArea, 0, 0, 1, 1);

        tabWidget_registerWidget->addTab(tab_adapter, QString());
        tab_selectAlias = new QWidget();
        tab_selectAlias->setObjectName("tab_selectAlias");
        gridLayout_5 = new QGridLayout(tab_selectAlias);
        gridLayout_5->setObjectName("gridLayout_5");
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        listWidget_regNum = new QListWidget(tab_selectAlias);
        listWidget_regNum->setObjectName("listWidget_regNum");

        verticalLayout_9->addWidget(listWidget_regNum);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setVerticalSpacing(10);
        gridLayout_6->setContentsMargins(7, 7, 7, 7);
        pushButton_genFromEnum = new QPushButton(tab_selectAlias);
        pushButton_genFromEnum->setObjectName("pushButton_genFromEnum");

        gridLayout_6->addWidget(pushButton_genFromEnum, 0, 0, 1, 1);

        pushButton_selectAll = new QPushButton(tab_selectAlias);
        pushButton_selectAll->setObjectName("pushButton_selectAll");

        gridLayout_6->addWidget(pushButton_selectAll, 0, 1, 1, 1);

        pushButton_readRegFromFile = new QPushButton(tab_selectAlias);
        pushButton_readRegFromFile->setObjectName("pushButton_readRegFromFile");

        gridLayout_6->addWidget(pushButton_readRegFromFile, 1, 0, 1, 1);

        pushButton_resetAll = new QPushButton(tab_selectAlias);
        pushButton_resetAll->setObjectName("pushButton_resetAll");

        gridLayout_6->addWidget(pushButton_resetAll, 1, 1, 1, 1);


        verticalLayout_9->addLayout(gridLayout_6);


        horizontalLayout_13->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(7, 7, 7, 7);
        textEdit_selectedRegNum = new QTextEdit(tab_selectAlias);
        textEdit_selectedRegNum->setObjectName("textEdit_selectedRegNum");

        verticalLayout_10->addWidget(textEdit_selectedRegNum);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        pushButton_workDir = new QPushButton(tab_selectAlias);
        pushButton_workDir->setObjectName("pushButton_workDir");

        horizontalLayout_6->addWidget(pushButton_workDir);

        pushButton_saveRegToFile = new QPushButton(tab_selectAlias);
        pushButton_saveRegToFile->setObjectName("pushButton_saveRegToFile");

        horizontalLayout_6->addWidget(pushButton_saveRegToFile);


        verticalLayout_10->addLayout(horizontalLayout_6);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName("formLayout_5");
        label_7 = new QLabel(tab_selectAlias);
        label_7->setObjectName("label_7");

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_7);

        lineEdit_workDir = new QLineEdit(tab_selectAlias);
        lineEdit_workDir->setObjectName("lineEdit_workDir");

        formLayout_5->setWidget(0, QFormLayout::FieldRole, lineEdit_workDir);


        verticalLayout_10->addLayout(formLayout_5);


        horizontalLayout_13->addLayout(verticalLayout_10);


        gridLayout_5->addLayout(horizontalLayout_13, 0, 0, 1, 1);

        tabWidget_registerWidget->addTab(tab_selectAlias, QString());
        tab_registers = new QWidget();
        tab_registers->setObjectName("tab_registers");
        gridLayout_9 = new QGridLayout(tab_registers);
        gridLayout_9->setObjectName("gridLayout_9");
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName("verticalLayout_14");
        pushButton_showPanel = new QPushButton(tab_registers);
        pushButton_showPanel->setObjectName("pushButton_showPanel");
        pushButton_showPanel->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(24);
        sizePolicy5.setHeightForWidth(pushButton_showPanel->sizePolicy().hasHeightForWidth());
        pushButton_showPanel->setSizePolicy(sizePolicy5);
        pushButton_showPanel->setMinimumSize(QSize(0, 24));

        verticalLayout_14->addWidget(pushButton_showPanel);

        groupBox_controlPanel = new QGroupBox(tab_registers);
        groupBox_controlPanel->setObjectName("groupBox_controlPanel");
        groupBox_controlPanel->setEnabled(true);
        gridLayout_8 = new QGridLayout(groupBox_controlPanel);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setContentsMargins(5, 5, 5, 5);
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName("gridLayout_7");
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_hidePanel = new QPushButton(groupBox_controlPanel);
        pushButton_hidePanel->setObjectName("pushButton_hidePanel");
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(pushButton_hidePanel->sizePolicy().hasHeightForWidth());
        pushButton_hidePanel->setSizePolicy(sizePolicy6);

        horizontalLayout->addWidget(pushButton_hidePanel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        horizontalLayout_5->addLayout(horizontalLayout);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName("formLayout_4");
        label_freqInv = new QLabel(groupBox_controlPanel);
        label_freqInv->setObjectName("label_freqInv");

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_freqInv);

        lineEdit_currentFreq = new QLineEdit(groupBox_controlPanel);
        lineEdit_currentFreq->setObjectName("lineEdit_currentFreq");
        sizePolicy6.setHeightForWidth(lineEdit_currentFreq->sizePolicy().hasHeightForWidth());
        lineEdit_currentFreq->setSizePolicy(sizePolicy6);
        lineEdit_currentFreq->setMinimumSize(QSize(100, 0));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, lineEdit_currentFreq);


        horizontalLayout_5->addLayout(formLayout_4);


        verticalLayout_11->addLayout(horizontalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        comboBox_register_1 = new QComboBox(groupBox_controlPanel);
        comboBox_register_1->setObjectName("comboBox_register_1");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, comboBox_register_1);

        lineEdit_registerValue_1 = new QLineEdit(groupBox_controlPanel);
        lineEdit_registerValue_1->setObjectName("lineEdit_registerValue_1");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_registerValue_1);

        comboBox_register_2 = new QComboBox(groupBox_controlPanel);
        comboBox_register_2->setObjectName("comboBox_register_2");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, comboBox_register_2);

        lineEdit_registerValue_2 = new QLineEdit(groupBox_controlPanel);
        lineEdit_registerValue_2->setObjectName("lineEdit_registerValue_2");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_registerValue_2);

        comboBox_register_3 = new QComboBox(groupBox_controlPanel);
        comboBox_register_3->setObjectName("comboBox_register_3");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, comboBox_register_3);

        lineEdit_registerValue_3 = new QLineEdit(groupBox_controlPanel);
        lineEdit_registerValue_3->setObjectName("lineEdit_registerValue_3");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_registerValue_3);


        verticalLayout_3->addLayout(formLayout_2);

        horizontalSlider = new QSlider(groupBox_controlPanel);
        horizontalSlider->setObjectName("horizontalSlider");
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(158);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy7);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSlider);


        verticalLayout_11->addLayout(verticalLayout_3);


        gridLayout_7->addLayout(verticalLayout_11, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(44, -1, -1, -1);
        pushButton_startInv_panel = new QPushButton(groupBox_controlPanel);
        pushButton_startInv_panel->setObjectName("pushButton_startInv_panel");
        QSizePolicy sizePolicy8(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(pushButton_startInv_panel->sizePolicy().hasHeightForWidth());
        pushButton_startInv_panel->setSizePolicy(sizePolicy8);
        pushButton_startInv_panel->setMinimumSize(QSize(100, 40));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        pushButton_startInv_panel->setFont(font);

        verticalLayout_4->addWidget(pushButton_startInv_panel);

        pushButton_stopInv_panel = new QPushButton(groupBox_controlPanel);
        pushButton_stopInv_panel->setObjectName("pushButton_stopInv_panel");
        sizePolicy8.setHeightForWidth(pushButton_stopInv_panel->sizePolicy().hasHeightForWidth());
        pushButton_stopInv_panel->setSizePolicy(sizePolicy8);
        pushButton_stopInv_panel->setMinimumSize(QSize(100, 40));
        pushButton_stopInv_panel->setFont(font);

        verticalLayout_4->addWidget(pushButton_stopInv_panel);

        pushButton_alarmInv_panel = new QPushButton(groupBox_controlPanel);
        pushButton_alarmInv_panel->setObjectName("pushButton_alarmInv_panel");
        sizePolicy8.setHeightForWidth(pushButton_alarmInv_panel->sizePolicy().hasHeightForWidth());
        pushButton_alarmInv_panel->setSizePolicy(sizePolicy8);
        pushButton_alarmInv_panel->setMinimumSize(QSize(100, 40));
        pushButton_alarmInv_panel->setFont(font);

        verticalLayout_4->addWidget(pushButton_alarmInv_panel);


        gridLayout_7->addLayout(verticalLayout_4, 0, 1, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(10, -1, -1, 3);
        textEdit_invertorStatus = new QTextEdit(groupBox_controlPanel);
        textEdit_invertorStatus->setObjectName("textEdit_invertorStatus");
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(textEdit_invertorStatus->sizePolicy().hasHeightForWidth());
        textEdit_invertorStatus->setSizePolicy(sizePolicy9);
        QFont font1;
        font1.setPointSize(9);
        textEdit_invertorStatus->setFont(font1);

        verticalLayout_6->addWidget(textEdit_invertorStatus);

        pushButton_saveTable = new QPushButton(groupBox_controlPanel);
        pushButton_saveTable->setObjectName("pushButton_saveTable");

        verticalLayout_6->addWidget(pushButton_saveTable);


        gridLayout_7->addLayout(verticalLayout_6, 0, 2, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 0, 0, 1, 1);


        verticalLayout_14->addWidget(groupBox_controlPanel);

        tableRegister = new QTableWidget(tab_registers);
        tableRegister->setObjectName("tableRegister");
        tableRegister->setEnabled(true);
        sizePolicy.setHeightForWidth(tableRegister->sizePolicy().hasHeightForWidth());
        tableRegister->setSizePolicy(sizePolicy);
        tableRegister->setMinimumSize(QSize(1000, 50));
        tableRegister->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);

        verticalLayout_14->addWidget(tableRegister);


        gridLayout_9->addLayout(verticalLayout_14, 0, 0, 1, 1);

        tabWidget_registerWidget->addTab(tab_registers, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_53 = new QGridLayout(tab);
        gridLayout_53->setObjectName("gridLayout_53");
        verticalLayout_52 = new QVBoxLayout();
        verticalLayout_52->setObjectName("verticalLayout_52");
        listWidget_sampleNum = new QListWidget(tab);
        listWidget_sampleNum->setObjectName("listWidget_sampleNum");

        verticalLayout_52->addWidget(listWidget_sampleNum);

        gridLayout_52 = new QGridLayout();
        gridLayout_52->setObjectName("gridLayout_52");
        pushButton_genFromEnumSample = new QPushButton(tab);
        pushButton_genFromEnumSample->setObjectName("pushButton_genFromEnumSample");

        gridLayout_52->addWidget(pushButton_genFromEnumSample, 0, 0, 1, 1);

        pushButton_selectAllSample = new QPushButton(tab);
        pushButton_selectAllSample->setObjectName("pushButton_selectAllSample");

        gridLayout_52->addWidget(pushButton_selectAllSample, 0, 1, 1, 1);

        pushButton_readSampleFromFile = new QPushButton(tab);
        pushButton_readSampleFromFile->setObjectName("pushButton_readSampleFromFile");

        gridLayout_52->addWidget(pushButton_readSampleFromFile, 1, 0, 1, 1);

        pushButton_resetAllSample = new QPushButton(tab);
        pushButton_resetAllSample->setObjectName("pushButton_resetAllSample");

        gridLayout_52->addWidget(pushButton_resetAllSample, 1, 1, 1, 1);


        verticalLayout_52->addLayout(gridLayout_52);


        gridLayout_53->addLayout(verticalLayout_52, 0, 0, 1, 1);

        verticalLayout_53 = new QVBoxLayout();
        verticalLayout_53->setObjectName("verticalLayout_53");
        textEdit_selectedSampleNum = new QTextEdit(tab);
        textEdit_selectedSampleNum->setObjectName("textEdit_selectedSampleNum");

        verticalLayout_53->addWidget(textEdit_selectedSampleNum);

        verticalLayout_51 = new QVBoxLayout();
        verticalLayout_51->setObjectName("verticalLayout_51");
        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setObjectName("horizontalLayout_41");
        pushButton_workDirSample = new QPushButton(tab);
        pushButton_workDirSample->setObjectName("pushButton_workDirSample");

        horizontalLayout_41->addWidget(pushButton_workDirSample);

        pushButton_saveSampleToFile = new QPushButton(tab);
        pushButton_saveSampleToFile->setObjectName("pushButton_saveSampleToFile");

        horizontalLayout_41->addWidget(pushButton_saveSampleToFile);


        verticalLayout_51->addLayout(horizontalLayout_41);

        formLayout_21 = new QFormLayout();
        formLayout_21->setObjectName("formLayout_21");
        label_dirSample = new QLabel(tab);
        label_dirSample->setObjectName("label_dirSample");

        formLayout_21->setWidget(0, QFormLayout::LabelRole, label_dirSample);

        lineEdit_workDirSample = new QLineEdit(tab);
        lineEdit_workDirSample->setObjectName("lineEdit_workDirSample");

        formLayout_21->setWidget(0, QFormLayout::FieldRole, lineEdit_workDirSample);


        verticalLayout_51->addLayout(formLayout_21);


        verticalLayout_53->addLayout(verticalLayout_51);


        gridLayout_53->addLayout(verticalLayout_53, 0, 1, 1, 1);

        tabWidget_registerWidget->addTab(tab, QString());
        tab_samples = new QWidget();
        tab_samples->setObjectName("tab_samples");
        gridLayout_11 = new QGridLayout(tab_samples);
        gridLayout_11->setObjectName("gridLayout_11");
        tableSamples = new QTableWidget(tab_samples);
        tableSamples->setObjectName("tableSamples");
        tableSamples->setEnabled(true);
        sizePolicy.setHeightForWidth(tableSamples->sizePolicy().hasHeightForWidth());
        tableSamples->setSizePolicy(sizePolicy);
        tableSamples->setMinimumSize(QSize(1000, 50));
        tableSamples->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);

        gridLayout_11->addWidget(tableSamples, 0, 0, 1, 1);

        tabWidget_registerWidget->addTab(tab_samples, QString());
        tab_checkRegisters = new QWidget();
        tab_checkRegisters->setObjectName("tab_checkRegisters");
        gridLayout_15 = new QGridLayout(tab_checkRegisters);
        gridLayout_15->setObjectName("gridLayout_15");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_3->setContentsMargins(3, -1, -1, -1);
        pushButton_loadTable = new QPushButton(tab_checkRegisters);
        pushButton_loadTable->setObjectName("pushButton_loadTable");
        pushButton_loadTable->setMinimumSize(QSize(200, 0));

        horizontalLayout_3->addWidget(pushButton_loadTable);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_checkRegistersFromFile = new QPushButton(tab_checkRegisters);
        pushButton_checkRegistersFromFile->setObjectName("pushButton_checkRegistersFromFile");

        horizontalLayout_3->addWidget(pushButton_checkRegistersFromFile);

        pushButton_setRegistersFromFile = new QPushButton(tab_checkRegisters);
        pushButton_setRegistersFromFile->setObjectName("pushButton_setRegistersFromFile");

        horizontalLayout_3->addWidget(pushButton_setRegistersFromFile);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_8 = new QLabel(tab_checkRegisters);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(40, 0));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_8);

        lineEdit_registersFile = new QLineEdit(tab_checkRegisters);
        lineEdit_registersFile->setObjectName("lineEdit_registersFile");
        lineEdit_registersFile->setMinimumSize(QSize(250, 0));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_registersFile);


        horizontalLayout_3->addLayout(formLayout);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        gridLayout_15->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        tableFromFile = new QTableWidget(tab_checkRegisters);
        tableFromFile->setObjectName("tableFromFile");
        tableFromFile->setEnabled(true);
        sizePolicy.setHeightForWidth(tableFromFile->sizePolicy().hasHeightForWidth());
        tableFromFile->setSizePolicy(sizePolicy);
        tableFromFile->setMinimumSize(QSize(1000, 50));
        tableFromFile->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);

        gridLayout_15->addWidget(tableFromFile, 1, 0, 1, 1);

        tabWidget_registerWidget->addTab(tab_checkRegisters, QString());
        tab_control = new QWidget();
        tab_control->setObjectName("tab_control");
        tab_control->setEnabled(true);
        gridLayout_18 = new QGridLayout(tab_control);
        gridLayout_18->setObjectName("gridLayout_18");
        lineEdit_testCommand = new QLineEdit(tab_control);
        lineEdit_testCommand->setObjectName("lineEdit_testCommand");

        gridLayout_18->addWidget(lineEdit_testCommand, 0, 0, 1, 2);

        label_2 = new QLabel(tab_control);
        label_2->setObjectName("label_2");

        gridLayout_18->addWidget(label_2, 1, 0, 1, 1);

        pushButton_sendCommand = new QPushButton(tab_control);
        pushButton_sendCommand->setObjectName("pushButton_sendCommand");

        gridLayout_18->addWidget(pushButton_sendCommand, 1, 1, 2, 1);

        textEdit_testRegister = new QTextEdit(tab_control);
        textEdit_testRegister->setObjectName("textEdit_testRegister");

        gridLayout_18->addWidget(textEdit_testRegister, 2, 2, 2, 1);

        textEdit_commandCRC = new QTextEdit(tab_control);
        textEdit_commandCRC->setObjectName("textEdit_commandCRC");

        gridLayout_18->addWidget(textEdit_commandCRC, 3, 0, 1, 2);

        tabWidget_registerWidget->addTab(tab_control, QString());
        tab_settings = new QWidget();
        tab_settings->setObjectName("tab_settings");
        gridLayout_20 = new QGridLayout(tab_settings);
        gridLayout_20->setObjectName("gridLayout_20");
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(-1, -1, 15, 5);
        pushButton_startInv = new QPushButton(tab_settings);
        pushButton_startInv->setObjectName("pushButton_startInv");
        sizePolicy8.setHeightForWidth(pushButton_startInv->sizePolicy().hasHeightForWidth());
        pushButton_startInv->setSizePolicy(sizePolicy8);
        pushButton_startInv->setMinimumSize(QSize(90, 30));

        verticalLayout_5->addWidget(pushButton_startInv);

        pushButton_stopInv = new QPushButton(tab_settings);
        pushButton_stopInv->setObjectName("pushButton_stopInv");
        sizePolicy8.setHeightForWidth(pushButton_stopInv->sizePolicy().hasHeightForWidth());
        pushButton_stopInv->setSizePolicy(sizePolicy8);
        pushButton_stopInv->setMinimumSize(QSize(90, 30));

        verticalLayout_5->addWidget(pushButton_stopInv);

        pushButton_alarmInv = new QPushButton(tab_settings);
        pushButton_alarmInv->setObjectName("pushButton_alarmInv");
        sizePolicy8.setHeightForWidth(pushButton_alarmInv->sizePolicy().hasHeightForWidth());
        pushButton_alarmInv->setSizePolicy(sizePolicy8);
        pushButton_alarmInv->setMinimumSize(QSize(90, 30));

        verticalLayout_5->addWidget(pushButton_alarmInv);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        pushButton_rstFlt = new QPushButton(tab_settings);
        pushButton_rstFlt->setObjectName("pushButton_rstFlt");
        sizePolicy8.setHeightForWidth(pushButton_rstFlt->sizePolicy().hasHeightForWidth());
        pushButton_rstFlt->setSizePolicy(sizePolicy8);
        pushButton_rstFlt->setMinimumSize(QSize(90, 0));

        verticalLayout_5->addWidget(pushButton_rstFlt);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);

        pushButton_flashErrClr = new QPushButton(tab_settings);
        pushButton_flashErrClr->setObjectName("pushButton_flashErrClr");
        sizePolicy8.setHeightForWidth(pushButton_flashErrClr->sizePolicy().hasHeightForWidth());
        pushButton_flashErrClr->setSizePolicy(sizePolicy8);
        pushButton_flashErrClr->setMinimumSize(QSize(90, 0));

        verticalLayout_5->addWidget(pushButton_flashErrClr);

        pushButton_flashWrAll = new QPushButton(tab_settings);
        pushButton_flashWrAll->setObjectName("pushButton_flashWrAll");
        sizePolicy8.setHeightForWidth(pushButton_flashWrAll->sizePolicy().hasHeightForWidth());
        pushButton_flashWrAll->setSizePolicy(sizePolicy8);
        pushButton_flashWrAll->setMinimumSize(QSize(90, 0));

        verticalLayout_5->addWidget(pushButton_flashWrAll);


        horizontalLayout_18->addLayout(verticalLayout_5);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setObjectName("gridLayout_16");
        groupBox_direction = new QGroupBox(tab_settings);
        groupBox_direction->setObjectName("groupBox_direction");
        groupBox_direction->setEnabled(false);
        sizePolicy8.setHeightForWidth(groupBox_direction->sizePolicy().hasHeightForWidth());
        groupBox_direction->setSizePolicy(sizePolicy8);
        groupBox_direction->setMinimumSize(QSize(220, 50));
        horizontalLayout_15 = new QHBoxLayout(groupBox_direction);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(-1, 5, -1, 5);
        radioButton_directRotation = new QRadioButton(groupBox_direction);
        radioButton_directRotation->setObjectName("radioButton_directRotation");

        horizontalLayout_15->addWidget(radioButton_directRotation);

        radioButton_reversRotation = new QRadioButton(groupBox_direction);
        radioButton_reversRotation->setObjectName("radioButton_reversRotation");

        horizontalLayout_15->addWidget(radioButton_reversRotation);


        gridLayout_16->addWidget(groupBox_direction, 0, 0, 1, 1);

        groupBox_resonansDemping = new QGroupBox(tab_settings);
        groupBox_resonansDemping->setObjectName("groupBox_resonansDemping");
        groupBox_resonansDemping->setEnabled(false);
        sizePolicy8.setHeightForWidth(groupBox_resonansDemping->sizePolicy().hasHeightForWidth());
        groupBox_resonansDemping->setSizePolicy(sizePolicy8);
        groupBox_resonansDemping->setMinimumSize(QSize(130, 100));
        verticalLayout_19 = new QVBoxLayout(groupBox_resonansDemping);
        verticalLayout_19->setObjectName("verticalLayout_19");
        radioButton_resDempAngle = new QRadioButton(groupBox_resonansDemping);
        radioButton_resDempAngle->setObjectName("radioButton_resDempAngle");

        verticalLayout_19->addWidget(radioButton_resDempAngle);

        radioButton_resDempTorque = new QRadioButton(groupBox_resonansDemping);
        radioButton_resDempTorque->setObjectName("radioButton_resDempTorque");

        verticalLayout_19->addWidget(radioButton_resDempTorque);

        radioButton_resDempPower = new QRadioButton(groupBox_resonansDemping);
        radioButton_resDempPower->setObjectName("radioButton_resDempPower");

        verticalLayout_19->addWidget(radioButton_resDempPower);


        gridLayout_16->addWidget(groupBox_resonansDemping, 0, 1, 2, 1);

        groupBox_motorType = new QGroupBox(tab_settings);
        groupBox_motorType->setObjectName("groupBox_motorType");
        groupBox_motorType->setEnabled(false);
        sizePolicy8.setHeightForWidth(groupBox_motorType->sizePolicy().hasHeightForWidth());
        groupBox_motorType->setSizePolicy(sizePolicy8);
        groupBox_motorType->setMinimumSize(QSize(220, 50));
        horizontalLayout_16 = new QHBoxLayout(groupBox_motorType);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalLayout_16->setContentsMargins(-1, 5, -1, 5);
        radioButton_async = new QRadioButton(groupBox_motorType);
        radioButton_async->setObjectName("radioButton_async");

        horizontalLayout_16->addWidget(radioButton_async);

        radioButton_vent = new QRadioButton(groupBox_motorType);
        radioButton_vent->setObjectName("radioButton_vent");
        QSizePolicy sizePolicy10(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(radioButton_vent->sizePolicy().hasHeightForWidth());
        radioButton_vent->setSizePolicy(sizePolicy10);

        horizontalLayout_16->addWidget(radioButton_vent);


        gridLayout_16->addWidget(groupBox_motorType, 1, 0, 1, 1);

        groupBox_PWM_Type = new QGroupBox(tab_settings);
        groupBox_PWM_Type->setObjectName("groupBox_PWM_Type");
        groupBox_PWM_Type->setEnabled(false);
        sizePolicy8.setHeightForWidth(groupBox_PWM_Type->sizePolicy().hasHeightForWidth());
        groupBox_PWM_Type->setSizePolicy(sizePolicy8);
        groupBox_PWM_Type->setMinimumSize(QSize(220, 50));
        horizontalLayout_17 = new QHBoxLayout(groupBox_PWM_Type);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_17->setContentsMargins(-1, 5, -1, 5);
        radioButton_PWM_SIN = new QRadioButton(groupBox_PWM_Type);
        radioButton_PWM_SIN->setObjectName("radioButton_PWM_SIN");

        horizontalLayout_17->addWidget(radioButton_PWM_SIN);

        radioButton_PWM_OVER1 = new QRadioButton(groupBox_PWM_Type);
        radioButton_PWM_OVER1->setObjectName("radioButton_PWM_OVER1");

        horizontalLayout_17->addWidget(radioButton_PWM_OVER1);

        radioButton_PWM_OVER2 = new QRadioButton(groupBox_PWM_Type);
        radioButton_PWM_OVER2->setObjectName("radioButton_PWM_OVER2");

        horizontalLayout_17->addWidget(radioButton_PWM_OVER2);


        gridLayout_16->addWidget(groupBox_PWM_Type, 2, 0, 1, 1);

        groupBox_termosensMode = new QGroupBox(tab_settings);
        groupBox_termosensMode->setObjectName("groupBox_termosensMode");
        groupBox_termosensMode->setEnabled(false);
        groupBox_termosensMode->setMinimumSize(QSize(130, 100));
        verticalLayout_20 = new QVBoxLayout(groupBox_termosensMode);
        verticalLayout_20->setObjectName("verticalLayout_20");
        radioButton_termosensorSingle = new QRadioButton(groupBox_termosensMode);
        radioButton_termosensorSingle->setObjectName("radioButton_termosensorSingle");

        verticalLayout_20->addWidget(radioButton_termosensorSingle);

        radioButton_termosensorCritic = new QRadioButton(groupBox_termosensMode);
        radioButton_termosensorCritic->setObjectName("radioButton_termosensorCritic");

        verticalLayout_20->addWidget(radioButton_termosensorCritic);

        radioButton_termosensorAll = new QRadioButton(groupBox_termosensMode);
        radioButton_termosensorAll->setObjectName("radioButton_termosensorAll");

        verticalLayout_20->addWidget(radioButton_termosensorAll);


        gridLayout_16->addWidget(groupBox_termosensMode, 2, 1, 2, 1);

        groupBox_convType = new QGroupBox(tab_settings);
        groupBox_convType->setObjectName("groupBox_convType");
        groupBox_convType->setEnabled(false);
        sizePolicy8.setHeightForWidth(groupBox_convType->sizePolicy().hasHeightForWidth());
        groupBox_convType->setSizePolicy(sizePolicy8);
        groupBox_convType->setMinimumSize(QSize(220, 50));
        horizontalLayout_14 = new QHBoxLayout(groupBox_convType);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_14->setContentsMargins(-1, 5, -1, 5);
        radioButton_trac = new QRadioButton(groupBox_convType);
        radioButton_trac->setObjectName("radioButton_trac");

        horizontalLayout_14->addWidget(radioButton_trac);

        radioButton_subpump = new QRadioButton(groupBox_convType);
        radioButton_subpump->setObjectName("radioButton_subpump");

        horizontalLayout_14->addWidget(radioButton_subpump);


        gridLayout_16->addWidget(groupBox_convType, 3, 0, 1, 1);

        groupBox_expBoard = new QGroupBox(tab_settings);
        groupBox_expBoard->setObjectName("groupBox_expBoard");
        groupBox_expBoard->setEnabled(false);
        sizePolicy8.setHeightForWidth(groupBox_expBoard->sizePolicy().hasHeightForWidth());
        groupBox_expBoard->setSizePolicy(sizePolicy8);
        groupBox_expBoard->setMinimumSize(QSize(355, 50));
        groupBox_expBoard->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        horizontalLayout_19 = new QHBoxLayout(groupBox_expBoard);
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        horizontalLayout_19->setContentsMargins(-1, 5, -1, 5);
        radioButton_expLegacy = new QRadioButton(groupBox_expBoard);
        radioButton_expLegacy->setObjectName("radioButton_expLegacy");

        horizontalLayout_19->addWidget(radioButton_expLegacy);

        radioButton_exp485 = new QRadioButton(groupBox_expBoard);
        radioButton_exp485->setObjectName("radioButton_exp485");

        horizontalLayout_19->addWidget(radioButton_exp485);

        radioButton_expSPI = new QRadioButton(groupBox_expBoard);
        radioButton_expSPI->setObjectName("radioButton_expSPI");

        horizontalLayout_19->addWidget(radioButton_expSPI);

        radioButton_expOthers = new QRadioButton(groupBox_expBoard);
        radioButton_expOthers->setObjectName("radioButton_expOthers");

        horizontalLayout_19->addWidget(radioButton_expOthers);


        gridLayout_16->addWidget(groupBox_expBoard, 4, 0, 1, 2);


        horizontalLayout_18->addLayout(gridLayout_16);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName("verticalLayout_21");
        verticalLayout_21->setContentsMargins(-1, -1, -1, 3);
        groupBox_settings = new QGroupBox(tab_settings);
        groupBox_settings->setObjectName("groupBox_settings");
        verticalLayout_13 = new QVBoxLayout(groupBox_settings);
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_13->setContentsMargins(-1, -1, -1, 0);
        checkBox_powerMonitor = new QCheckBox(groupBox_settings);
        checkBox_powerMonitor->setObjectName("checkBox_powerMonitor");
        checkBox_powerMonitor->setEnabled(false);

        verticalLayout_13->addWidget(checkBox_powerMonitor);

        checkBox_currSensOnFilter = new QCheckBox(groupBox_settings);
        checkBox_currSensOnFilter->setObjectName("checkBox_currSensOnFilter");
        checkBox_currSensOnFilter->setEnabled(false);

        verticalLayout_13->addWidget(checkBox_currSensOnFilter);

        checkBox_rationingTime = new QCheckBox(groupBox_settings);
        checkBox_rationingTime->setObjectName("checkBox_rationingTime");
        checkBox_rationingTime->setEnabled(false);

        verticalLayout_13->addWidget(checkBox_rationingTime);

        checkBox_enableZeroUdc = new QCheckBox(groupBox_settings);
        checkBox_enableZeroUdc->setObjectName("checkBox_enableZeroUdc");
        checkBox_enableZeroUdc->setEnabled(false);

        verticalLayout_13->addWidget(checkBox_enableZeroUdc);

        checkBox_useOutInductance = new QCheckBox(groupBox_settings);
        checkBox_useOutInductance->setObjectName("checkBox_useOutInductance");
        checkBox_useOutInductance->setEnabled(false);

        verticalLayout_13->addWidget(checkBox_useOutInductance);

        checkBox_powerIsRMS = new QCheckBox(groupBox_settings);
        checkBox_powerIsRMS->setObjectName("checkBox_powerIsRMS");
        checkBox_powerIsRMS->setEnabled(false);

        verticalLayout_13->addWidget(checkBox_powerIsRMS);

        checkBox_harmonicAnalysis = new QCheckBox(groupBox_settings);
        checkBox_harmonicAnalysis->setObjectName("checkBox_harmonicAnalysis");
        checkBox_harmonicAnalysis->setEnabled(false);
        sizePolicy10.setHeightForWidth(checkBox_harmonicAnalysis->sizePolicy().hasHeightForWidth());
        checkBox_harmonicAnalysis->setSizePolicy(sizePolicy10);

        verticalLayout_13->addWidget(checkBox_harmonicAnalysis);

        checkBox_pmmOn = new QCheckBox(groupBox_settings);
        checkBox_pmmOn->setObjectName("checkBox_pmmOn");
        checkBox_pmmOn->setEnabled(false);

        verticalLayout_13->addWidget(checkBox_pmmOn);

        checkBox_pwmControl = new QCheckBox(groupBox_settings);
        checkBox_pwmControl->setObjectName("checkBox_pwmControl");
        checkBox_pwmControl->setEnabled(false);

        verticalLayout_13->addWidget(checkBox_pwmControl);

        checkBox_paramsOutChange = new QCheckBox(groupBox_settings);
        checkBox_paramsOutChange->setObjectName("checkBox_paramsOutChange");
        checkBox_paramsOutChange->setEnabled(false);

        verticalLayout_13->addWidget(checkBox_paramsOutChange);


        verticalLayout_21->addWidget(groupBox_settings);


        horizontalLayout_18->addLayout(verticalLayout_21);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setObjectName("verticalLayout_22");
        groupBox_converterDesign = new QGroupBox(tab_settings);
        groupBox_converterDesign->setObjectName("groupBox_converterDesign");
        groupBox_converterDesign->setEnabled(false);
        gridLayout_17 = new QGridLayout(groupBox_converterDesign);
        gridLayout_17->setObjectName("gridLayout_17");
        radioButton_baseConverter = new QRadioButton(groupBox_converterDesign);
        radioButton_baseConverter->setObjectName("radioButton_baseConverter");

        gridLayout_17->addWidget(radioButton_baseConverter, 0, 0, 1, 1);

        radioButton_ISING_RDOUB = new QRadioButton(groupBox_converterDesign);
        radioButton_ISING_RDOUB->setObjectName("radioButton_ISING_RDOUB");

        gridLayout_17->addWidget(radioButton_ISING_RDOUB, 4, 0, 1, 1);

        radioButton_ITRIP_RSING = new QRadioButton(groupBox_converterDesign);
        radioButton_ITRIP_RSING->setObjectName("radioButton_ITRIP_RSING");

        gridLayout_17->addWidget(radioButton_ITRIP_RSING, 7, 0, 1, 1);

        radioButton_IQUAD_RSING_2 = new QRadioButton(groupBox_converterDesign);
        radioButton_IQUAD_RSING_2->setObjectName("radioButton_IQUAD_RSING_2");

        gridLayout_17->addWidget(radioButton_IQUAD_RSING_2, 6, 1, 1, 1);

        radioButton_IDOUB_RDOUB = new QRadioButton(groupBox_converterDesign);
        radioButton_IDOUB_RDOUB->setObjectName("radioButton_IDOUB_RDOUB");

        gridLayout_17->addWidget(radioButton_IDOUB_RDOUB, 6, 0, 1, 1);

        radioButton_IQUAD_RSING = new QRadioButton(groupBox_converterDesign);
        radioButton_IQUAD_RSING->setObjectName("radioButton_IQUAD_RSING");

        gridLayout_17->addWidget(radioButton_IQUAD_RSING, 4, 1, 1, 1);

        radioButton_IQUAD_RDOUB_2 = new QRadioButton(groupBox_converterDesign);
        radioButton_IQUAD_RDOUB_2->setObjectName("radioButton_IQUAD_RDOUB_2");

        gridLayout_17->addWidget(radioButton_IQUAD_RDOUB_2, 7, 1, 1, 1);

        radioButton_IQUAD_RDOUB = new QRadioButton(groupBox_converterDesign);
        radioButton_IQUAD_RDOUB->setObjectName("radioButton_IQUAD_RDOUB");

        gridLayout_17->addWidget(radioButton_IQUAD_RDOUB, 5, 1, 1, 1);

        radioButton_IDOUB_RSING = new QRadioButton(groupBox_converterDesign);
        radioButton_IDOUB_RSING->setObjectName("radioButton_IDOUB_RSING");

        gridLayout_17->addWidget(radioButton_IDOUB_RSING, 5, 0, 1, 1);

        radioButton_ITRIP_RDOUB = new QRadioButton(groupBox_converterDesign);
        radioButton_ITRIP_RDOUB->setObjectName("radioButton_ITRIP_RDOUB");

        gridLayout_17->addWidget(radioButton_ITRIP_RDOUB, 3, 1, 1, 1);

        radioButton_ISING_RSING = new QRadioButton(groupBox_converterDesign);
        radioButton_ISING_RSING->setObjectName("radioButton_ISING_RSING");

        gridLayout_17->addWidget(radioButton_ISING_RSING, 3, 0, 1, 1);


        verticalLayout_22->addWidget(groupBox_converterDesign);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_22->addItem(verticalSpacer_7);

        groupBox_digOut = new QGroupBox(tab_settings);
        groupBox_digOut->setObjectName("groupBox_digOut");
        verticalLayout_24 = new QVBoxLayout(groupBox_digOut);
        verticalLayout_24->setObjectName("verticalLayout_24");
        checkBox_extOut_0 = new QCheckBox(groupBox_digOut);
        checkBox_extOut_0->setObjectName("checkBox_extOut_0");
        checkBox_extOut_0->setEnabled(false);

        verticalLayout_24->addWidget(checkBox_extOut_0);

        checkBox_extOut_1 = new QCheckBox(groupBox_digOut);
        checkBox_extOut_1->setObjectName("checkBox_extOut_1");
        checkBox_extOut_1->setEnabled(false);

        verticalLayout_24->addWidget(checkBox_extOut_1);

        checkBox_extOut_2 = new QCheckBox(groupBox_digOut);
        checkBox_extOut_2->setObjectName("checkBox_extOut_2");
        checkBox_extOut_2->setEnabled(false);

        verticalLayout_24->addWidget(checkBox_extOut_2);


        verticalLayout_22->addWidget(groupBox_digOut);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_22->addItem(verticalSpacer_6);

        formLayout_7 = new QFormLayout();
        formLayout_7->setObjectName("formLayout_7");
        formLayout_7->setContentsMargins(-1, -1, -1, 4);
        label_10 = new QLabel(tab_settings);
        label_10->setObjectName("label_10");
        QSizePolicy sizePolicy11(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy11);

        formLayout_7->setWidget(2, QFormLayout::LabelRole, label_10);

        comboBox_canFreqInv = new QComboBox(tab_settings);
        comboBox_canFreqInv->setObjectName("comboBox_canFreqInv");
        sizePolicy4.setHeightForWidth(comboBox_canFreqInv->sizePolicy().hasHeightForWidth());
        comboBox_canFreqInv->setSizePolicy(sizePolicy4);

        formLayout_7->setWidget(2, QFormLayout::FieldRole, comboBox_canFreqInv);

        checkBox_allowCAN_freqChanges = new QCheckBox(tab_settings);
        checkBox_allowCAN_freqChanges->setObjectName("checkBox_allowCAN_freqChanges");

        formLayout_7->setWidget(1, QFormLayout::FieldRole, checkBox_allowCAN_freqChanges);


        verticalLayout_22->addLayout(formLayout_7);


        horizontalLayout_18->addLayout(verticalLayout_22);


        gridLayout_20->addLayout(horizontalLayout_18, 0, 0, 1, 1);

        gridLayout_24 = new QGridLayout();
        gridLayout_24->setObjectName("gridLayout_24");
        label_status = new QLabel(tab_settings);
        label_status->setObjectName("label_status");
        QSizePolicy sizePolicy12(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(label_status->sizePolicy().hasHeightForWidth());
        label_status->setSizePolicy(sizePolicy12);

        gridLayout_24->addWidget(label_status, 0, 0, 1, 1);

        label_status_2 = new QLabel(tab_settings);
        label_status_2->setObjectName("label_status_2");
        sizePolicy12.setHeightForWidth(label_status_2->sizePolicy().hasHeightForWidth());
        label_status_2->setSizePolicy(sizePolicy12);

        gridLayout_24->addWidget(label_status_2, 0, 1, 1, 1);

        label_status_3 = new QLabel(tab_settings);
        label_status_3->setObjectName("label_status_3");

        gridLayout_24->addWidget(label_status_3, 0, 2, 1, 1);

        label_status_flt = new QLabel(tab_settings);
        label_status_flt->setObjectName("label_status_flt");

        gridLayout_24->addWidget(label_status_flt, 0, 3, 1, 1);

        label_status_5 = new QLabel(tab_settings);
        label_status_5->setObjectName("label_status_5");

        gridLayout_24->addWidget(label_status_5, 0, 4, 1, 1);

        lineEdit_status = new QLineEdit(tab_settings);
        lineEdit_status->setObjectName("lineEdit_status");

        gridLayout_24->addWidget(lineEdit_status, 1, 0, 1, 1);

        lineEdit_status_2 = new QLineEdit(tab_settings);
        lineEdit_status_2->setObjectName("lineEdit_status_2");

        gridLayout_24->addWidget(lineEdit_status_2, 1, 1, 1, 1);

        lineEdit_status_3 = new QLineEdit(tab_settings);
        lineEdit_status_3->setObjectName("lineEdit_status_3");

        gridLayout_24->addWidget(lineEdit_status_3, 1, 2, 1, 1);

        lineEdit_status_flt = new QLineEdit(tab_settings);
        lineEdit_status_flt->setObjectName("lineEdit_status_flt");

        gridLayout_24->addWidget(lineEdit_status_flt, 1, 3, 1, 1);

        lineEdit_status_5 = new QLineEdit(tab_settings);
        lineEdit_status_5->setObjectName("lineEdit_status_5");

        gridLayout_24->addWidget(lineEdit_status_5, 1, 4, 1, 1);

        textEdit_status = new QTextEdit(tab_settings);
        textEdit_status->setObjectName("textEdit_status");

        gridLayout_24->addWidget(textEdit_status, 2, 0, 1, 1);

        textEdit_status_2 = new QTextEdit(tab_settings);
        textEdit_status_2->setObjectName("textEdit_status_2");

        gridLayout_24->addWidget(textEdit_status_2, 2, 1, 1, 1);

        textEdit_status_3 = new QTextEdit(tab_settings);
        textEdit_status_3->setObjectName("textEdit_status_3");

        gridLayout_24->addWidget(textEdit_status_3, 2, 2, 1, 1);

        textEdit_status_flt = new QTextEdit(tab_settings);
        textEdit_status_flt->setObjectName("textEdit_status_flt");

        gridLayout_24->addWidget(textEdit_status_flt, 2, 3, 1, 1);

        textEdit_status_5 = new QTextEdit(tab_settings);
        textEdit_status_5->setObjectName("textEdit_status_5");

        gridLayout_24->addWidget(textEdit_status_5, 2, 4, 1, 1);


        gridLayout_20->addLayout(gridLayout_24, 1, 0, 1, 1);

        tabWidget_registerWidget->addTab(tab_settings, QString());
        tab_plot = new QWidget();
        tab_plot->setObjectName("tab_plot");
        gridLayout_14 = new QGridLayout(tab_plot);
        gridLayout_14->setObjectName("gridLayout_14");
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName("gridLayout_13");
        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName("verticalLayout_18");
        label_4 = new QLabel(tab_plot);
        label_4->setObjectName("label_4");
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        label_4->setFont(font2);

        verticalLayout_18->addWidget(label_4);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName("gridLayout_12");
        lineEdit_yAxis_1 = new QLineEdit(tab_plot);
        lineEdit_yAxis_1->setObjectName("lineEdit_yAxis_1");
        sizePolicy4.setHeightForWidth(lineEdit_yAxis_1->sizePolicy().hasHeightForWidth());
        lineEdit_yAxis_1->setSizePolicy(sizePolicy4);

        gridLayout_12->addWidget(lineEdit_yAxis_1, 0, 2, 1, 1);

        lineEdit_yAxis_2 = new QLineEdit(tab_plot);
        lineEdit_yAxis_2->setObjectName("lineEdit_yAxis_2");
        sizePolicy4.setHeightForWidth(lineEdit_yAxis_2->sizePolicy().hasHeightForWidth());
        lineEdit_yAxis_2->setSizePolicy(sizePolicy4);

        gridLayout_12->addWidget(lineEdit_yAxis_2, 2, 2, 1, 1);

        horizontalSlider_max_axis_2 = new QSlider(tab_plot);
        horizontalSlider_max_axis_2->setObjectName("horizontalSlider_max_axis_2");
        sizePolicy4.setHeightForWidth(horizontalSlider_max_axis_2->sizePolicy().hasHeightForWidth());
        horizontalSlider_max_axis_2->setSizePolicy(sizePolicy4);
        horizontalSlider_max_axis_2->setOrientation(Qt::Horizontal);

        gridLayout_12->addWidget(horizontalSlider_max_axis_2, 3, 0, 1, 1);

        lineEdit_yAxis_1_min = new QLineEdit(tab_plot);
        lineEdit_yAxis_1_min->setObjectName("lineEdit_yAxis_1_min");
        sizePolicy4.setHeightForWidth(lineEdit_yAxis_1_min->sizePolicy().hasHeightForWidth());
        lineEdit_yAxis_1_min->setSizePolicy(sizePolicy4);

        gridLayout_12->addWidget(lineEdit_yAxis_1_min, 1, 2, 1, 1);

        comboBox_plot1 = new QComboBox(tab_plot);
        comboBox_plot1->setObjectName("comboBox_plot1");

        gridLayout_12->addWidget(comboBox_plot1, 0, 0, 1, 1);

        horizontalSlider_max_axis_1 = new QSlider(tab_plot);
        horizontalSlider_max_axis_1->setObjectName("horizontalSlider_max_axis_1");
        sizePolicy4.setHeightForWidth(horizontalSlider_max_axis_1->sizePolicy().hasHeightForWidth());
        horizontalSlider_max_axis_1->setSizePolicy(sizePolicy4);
        horizontalSlider_max_axis_1->setOrientation(Qt::Horizontal);

        gridLayout_12->addWidget(horizontalSlider_max_axis_1, 1, 0, 1, 1);

        comboBox_plot2 = new QComboBox(tab_plot);
        comboBox_plot2->setObjectName("comboBox_plot2");

        gridLayout_12->addWidget(comboBox_plot2, 2, 0, 1, 1);

        lineEdit_yAxis_2_min = new QLineEdit(tab_plot);
        lineEdit_yAxis_2_min->setObjectName("lineEdit_yAxis_2_min");
        sizePolicy4.setHeightForWidth(lineEdit_yAxis_2_min->sizePolicy().hasHeightForWidth());
        lineEdit_yAxis_2_min->setSizePolicy(sizePolicy4);

        gridLayout_12->addWidget(lineEdit_yAxis_2_min, 3, 2, 1, 1);


        verticalLayout_18->addLayout(gridLayout_12);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_18->addItem(verticalSpacer_3);

        gridLayout_26 = new QGridLayout();
        gridLayout_26->setObjectName("gridLayout_26");
        label_12 = new QLabel(tab_plot);
        label_12->setObjectName("label_12");

        gridLayout_26->addWidget(label_12, 1, 0, 1, 1);

        label_startTimeStamp = new QLabel(tab_plot);
        label_startTimeStamp->setObjectName("label_startTimeStamp");

        gridLayout_26->addWidget(label_startTimeStamp, 1, 1, 1, 1);

        label_restartTimeStartStamp = new QLabel(tab_plot);
        label_restartTimeStartStamp->setObjectName("label_restartTimeStartStamp");

        gridLayout_26->addWidget(label_restartTimeStartStamp, 0, 0, 1, 1);

        label_numberOfRestarts = new QLabel(tab_plot);
        label_numberOfRestarts->setObjectName("label_numberOfRestarts");

        gridLayout_26->addWidget(label_numberOfRestarts, 0, 1, 1, 1);


        verticalLayout_18->addLayout(gridLayout_26);


        gridLayout_13->addLayout(verticalLayout_18, 0, 1, 1, 1);

        widget_plot_1 = new QCustomPlot(tab_plot);
        widget_plot_1->setObjectName("widget_plot_1");
        sizePolicy.setHeightForWidth(widget_plot_1->sizePolicy().hasHeightForWidth());
        widget_plot_1->setSizePolicy(sizePolicy);

        gridLayout_13->addWidget(widget_plot_1, 0, 0, 1, 1);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName("verticalLayout_17");
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName("verticalLayout_16");
        label_9 = new QLabel(tab_plot);
        label_9->setObjectName("label_9");
        label_9->setFont(font2);

        verticalLayout_16->addWidget(label_9);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName("gridLayout_10");
        lineEdit_yAxis_3 = new QLineEdit(tab_plot);
        lineEdit_yAxis_3->setObjectName("lineEdit_yAxis_3");
        sizePolicy4.setHeightForWidth(lineEdit_yAxis_3->sizePolicy().hasHeightForWidth());
        lineEdit_yAxis_3->setSizePolicy(sizePolicy4);

        gridLayout_10->addWidget(lineEdit_yAxis_3, 0, 1, 1, 1);

        lineEdit_yAxis_4_min = new QLineEdit(tab_plot);
        lineEdit_yAxis_4_min->setObjectName("lineEdit_yAxis_4_min");
        sizePolicy4.setHeightForWidth(lineEdit_yAxis_4_min->sizePolicy().hasHeightForWidth());
        lineEdit_yAxis_4_min->setSizePolicy(sizePolicy4);

        gridLayout_10->addWidget(lineEdit_yAxis_4_min, 3, 1, 1, 1);

        comboBox_plot3 = new QComboBox(tab_plot);
        comboBox_plot3->setObjectName("comboBox_plot3");

        gridLayout_10->addWidget(comboBox_plot3, 0, 0, 1, 1);

        comboBox_plot4 = new QComboBox(tab_plot);
        comboBox_plot4->setObjectName("comboBox_plot4");

        gridLayout_10->addWidget(comboBox_plot4, 2, 0, 1, 1);

        lineEdit_yAxis_4 = new QLineEdit(tab_plot);
        lineEdit_yAxis_4->setObjectName("lineEdit_yAxis_4");
        sizePolicy4.setHeightForWidth(lineEdit_yAxis_4->sizePolicy().hasHeightForWidth());
        lineEdit_yAxis_4->setSizePolicy(sizePolicy4);

        gridLayout_10->addWidget(lineEdit_yAxis_4, 2, 1, 1, 1);

        lineEdit_yAxis_3_min = new QLineEdit(tab_plot);
        lineEdit_yAxis_3_min->setObjectName("lineEdit_yAxis_3_min");
        sizePolicy4.setHeightForWidth(lineEdit_yAxis_3_min->sizePolicy().hasHeightForWidth());
        lineEdit_yAxis_3_min->setSizePolicy(sizePolicy4);

        gridLayout_10->addWidget(lineEdit_yAxis_3_min, 1, 1, 1, 1);

        horizontalSlider_max_axis_3 = new QSlider(tab_plot);
        horizontalSlider_max_axis_3->setObjectName("horizontalSlider_max_axis_3");
        sizePolicy4.setHeightForWidth(horizontalSlider_max_axis_3->sizePolicy().hasHeightForWidth());
        horizontalSlider_max_axis_3->setSizePolicy(sizePolicy4);
        horizontalSlider_max_axis_3->setOrientation(Qt::Horizontal);

        gridLayout_10->addWidget(horizontalSlider_max_axis_3, 1, 0, 1, 1);

        horizontalSlider_max_axis_4 = new QSlider(tab_plot);
        horizontalSlider_max_axis_4->setObjectName("horizontalSlider_max_axis_4");
        sizePolicy4.setHeightForWidth(horizontalSlider_max_axis_4->sizePolicy().hasHeightForWidth());
        horizontalSlider_max_axis_4->setSizePolicy(sizePolicy4);
        horizontalSlider_max_axis_4->setOrientation(Qt::Horizontal);

        gridLayout_10->addWidget(horizontalSlider_max_axis_4, 3, 0, 1, 1);


        verticalLayout_16->addLayout(gridLayout_10);


        verticalLayout_17->addLayout(verticalLayout_16);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_17->addItem(verticalSpacer);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName("verticalLayout_15");
        pushButton_holdPlot = new QPushButton(tab_plot);
        pushButton_holdPlot->setObjectName("pushButton_holdPlot");

        verticalLayout_15->addWidget(pushButton_holdPlot);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName("formLayout_6");
        label_replotFreq = new QLabel(tab_plot);
        label_replotFreq->setObjectName("label_replotFreq");

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_replotFreq);

        lineEdit_freqPlot = new QLineEdit(tab_plot);
        lineEdit_freqPlot->setObjectName("lineEdit_freqPlot");
        sizePolicy4.setHeightForWidth(lineEdit_freqPlot->sizePolicy().hasHeightForWidth());
        lineEdit_freqPlot->setSizePolicy(sizePolicy4);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, lineEdit_freqPlot);

        label_scalePlot = new QLabel(tab_plot);
        label_scalePlot->setObjectName("label_scalePlot");

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_scalePlot);

        lineEdit_scalePlot = new QLineEdit(tab_plot);
        lineEdit_scalePlot->setObjectName("lineEdit_scalePlot");
        sizePolicy4.setHeightForWidth(lineEdit_scalePlot->sizePolicy().hasHeightForWidth());
        lineEdit_scalePlot->setSizePolicy(sizePolicy4);

        formLayout_6->setWidget(1, QFormLayout::FieldRole, lineEdit_scalePlot);


        verticalLayout_12->addLayout(formLayout_6);

        horizontalSlider_scalePlot = new QSlider(tab_plot);
        horizontalSlider_scalePlot->setObjectName("horizontalSlider_scalePlot");
        sizePolicy4.setHeightForWidth(horizontalSlider_scalePlot->sizePolicy().hasHeightForWidth());
        horizontalSlider_scalePlot->setSizePolicy(sizePolicy4);
        horizontalSlider_scalePlot->setOrientation(Qt::Horizontal);

        verticalLayout_12->addWidget(horizontalSlider_scalePlot);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_8);


        verticalLayout_15->addLayout(verticalLayout_12);

        label_currentDate = new QLabel(tab_plot);
        label_currentDate->setObjectName("label_currentDate");
        label_currentDate->setEnabled(true);
        label_currentDate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_currentDate->setMargin(0);

        verticalLayout_15->addWidget(label_currentDate);


        verticalLayout_17->addLayout(verticalLayout_15);


        gridLayout_13->addLayout(verticalLayout_17, 1, 1, 1, 1);

        widget_plot_2 = new QCustomPlot(tab_plot);
        widget_plot_2->setObjectName("widget_plot_2");
        sizePolicy.setHeightForWidth(widget_plot_2->sizePolicy().hasHeightForWidth());
        widget_plot_2->setSizePolicy(sizePolicy);

        gridLayout_13->addWidget(widget_plot_2, 1, 0, 1, 1);


        gridLayout_14->addLayout(gridLayout_13, 0, 0, 1, 1);

        tabWidget_registerWidget->addTab(tab_plot, QString());
        tab_vector = new QWidget();
        tab_vector->setObjectName("tab_vector");
        gridLayout_19 = new QGridLayout(tab_vector);
        gridLayout_19->setObjectName("gridLayout_19");
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(20);
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        widget_paintVector = new QPaintWidget(tab_vector);
        widget_paintVector->setObjectName("widget_paintVector");
        sizePolicy.setHeightForWidth(widget_paintVector->sizePolicy().hasHeightForWidth());
        widget_paintVector->setSizePolicy(sizePolicy);

        horizontalLayout_20->addWidget(widget_paintVector);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setObjectName("verticalLayout_23");
        formLayout_10 = new QFormLayout();
        formLayout_10->setObjectName("formLayout_10");
        label_Fconv = new QLabel(tab_vector);
        label_Fconv->setObjectName("label_Fconv");

        formLayout_10->setWidget(0, QFormLayout::LabelRole, label_Fconv);

        lineEdit_Fconv = new QLineEdit(tab_vector);
        lineEdit_Fconv->setObjectName("lineEdit_Fconv");
        sizePolicy10.setHeightForWidth(lineEdit_Fconv->sizePolicy().hasHeightForWidth());
        lineEdit_Fconv->setSizePolicy(sizePolicy10);

        formLayout_10->setWidget(0, QFormLayout::FieldRole, lineEdit_Fconv);

        label_Uconv = new QLabel(tab_vector);
        label_Uconv->setObjectName("label_Uconv");

        formLayout_10->setWidget(1, QFormLayout::LabelRole, label_Uconv);

        lineEdit_Uconv = new QLineEdit(tab_vector);
        lineEdit_Uconv->setObjectName("lineEdit_Uconv");
        sizePolicy10.setHeightForWidth(lineEdit_Uconv->sizePolicy().hasHeightForWidth());
        lineEdit_Uconv->setSizePolicy(sizePolicy10);

        formLayout_10->setWidget(1, QFormLayout::FieldRole, lineEdit_Uconv);

        label_uMax = new QLabel(tab_vector);
        label_uMax->setObjectName("label_uMax");

        formLayout_10->setWidget(2, QFormLayout::LabelRole, label_uMax);

        lineEdit_UconvMax = new QLineEdit(tab_vector);
        lineEdit_UconvMax->setObjectName("lineEdit_UconvMax");
        sizePolicy10.setHeightForWidth(lineEdit_UconvMax->sizePolicy().hasHeightForWidth());
        lineEdit_UconvMax->setSizePolicy(sizePolicy10);

        formLayout_10->setWidget(2, QFormLayout::FieldRole, lineEdit_UconvMax);

        checkBox_uPh = new QCheckBox(tab_vector);
        checkBox_uPh->setObjectName("checkBox_uPh");
        sizePolicy10.setHeightForWidth(checkBox_uPh->sizePolicy().hasHeightForWidth());
        checkBox_uPh->setSizePolicy(sizePolicy10);
        checkBox_uPh->setChecked(true);

        formLayout_10->setWidget(3, QFormLayout::FieldRole, checkBox_uPh);

        checkBox_uLine = new QCheckBox(tab_vector);
        checkBox_uLine->setObjectName("checkBox_uLine");
        checkBox_uLine->setChecked(false);

        formLayout_10->setWidget(4, QFormLayout::FieldRole, checkBox_uLine);


        verticalLayout_23->addLayout(formLayout_10);

        formLayout_9 = new QFormLayout();
        formLayout_9->setObjectName("formLayout_9");
        label_Iconv_A = new QLabel(tab_vector);
        label_Iconv_A->setObjectName("label_Iconv_A");

        formLayout_9->setWidget(0, QFormLayout::LabelRole, label_Iconv_A);

        lineEdit_IconvA = new QLineEdit(tab_vector);
        lineEdit_IconvA->setObjectName("lineEdit_IconvA");
        sizePolicy10.setHeightForWidth(lineEdit_IconvA->sizePolicy().hasHeightForWidth());
        lineEdit_IconvA->setSizePolicy(sizePolicy10);

        formLayout_9->setWidget(0, QFormLayout::FieldRole, lineEdit_IconvA);

        label_Iconv_B = new QLabel(tab_vector);
        label_Iconv_B->setObjectName("label_Iconv_B");

        formLayout_9->setWidget(1, QFormLayout::LabelRole, label_Iconv_B);

        lineEdit_IconvB = new QLineEdit(tab_vector);
        lineEdit_IconvB->setObjectName("lineEdit_IconvB");
        sizePolicy10.setHeightForWidth(lineEdit_IconvB->sizePolicy().hasHeightForWidth());
        lineEdit_IconvB->setSizePolicy(sizePolicy10);

        formLayout_9->setWidget(1, QFormLayout::FieldRole, lineEdit_IconvB);

        label_Iconv_C = new QLabel(tab_vector);
        label_Iconv_C->setObjectName("label_Iconv_C");

        formLayout_9->setWidget(2, QFormLayout::LabelRole, label_Iconv_C);

        lineEdit_IconvC = new QLineEdit(tab_vector);
        lineEdit_IconvC->setObjectName("lineEdit_IconvC");
        sizePolicy10.setHeightForWidth(lineEdit_IconvC->sizePolicy().hasHeightForWidth());
        lineEdit_IconvC->setSizePolicy(sizePolicy10);

        formLayout_9->setWidget(2, QFormLayout::FieldRole, lineEdit_IconvC);

        lineEdit_IconvMax = new QLineEdit(tab_vector);
        lineEdit_IconvMax->setObjectName("lineEdit_IconvMax");
        sizePolicy10.setHeightForWidth(lineEdit_IconvMax->sizePolicy().hasHeightForWidth());
        lineEdit_IconvMax->setSizePolicy(sizePolicy10);

        formLayout_9->setWidget(3, QFormLayout::FieldRole, lineEdit_IconvMax);

        label_iMax = new QLabel(tab_vector);
        label_iMax->setObjectName("label_iMax");

        formLayout_9->setWidget(3, QFormLayout::LabelRole, label_iMax);

        checkBox_i = new QCheckBox(tab_vector);
        checkBox_i->setObjectName("checkBox_i");
        checkBox_i->setChecked(true);

        formLayout_9->setWidget(4, QFormLayout::FieldRole, checkBox_i);


        verticalLayout_23->addLayout(formLayout_9);

        formLayout_8 = new QFormLayout();
        formLayout_8->setObjectName("formLayout_8");
        label_Iconv_PhA = new QLabel(tab_vector);
        label_Iconv_PhA->setObjectName("label_Iconv_PhA");

        formLayout_8->setWidget(0, QFormLayout::LabelRole, label_Iconv_PhA);

        lineEdit_PhA = new QLineEdit(tab_vector);
        lineEdit_PhA->setObjectName("lineEdit_PhA");
        sizePolicy10.setHeightForWidth(lineEdit_PhA->sizePolicy().hasHeightForWidth());
        lineEdit_PhA->setSizePolicy(sizePolicy10);

        formLayout_8->setWidget(0, QFormLayout::FieldRole, lineEdit_PhA);

        label_Iconv_PhB = new QLabel(tab_vector);
        label_Iconv_PhB->setObjectName("label_Iconv_PhB");

        formLayout_8->setWidget(1, QFormLayout::LabelRole, label_Iconv_PhB);

        lineEdit_PhB = new QLineEdit(tab_vector);
        lineEdit_PhB->setObjectName("lineEdit_PhB");
        sizePolicy10.setHeightForWidth(lineEdit_PhB->sizePolicy().hasHeightForWidth());
        lineEdit_PhB->setSizePolicy(sizePolicy10);

        formLayout_8->setWidget(1, QFormLayout::FieldRole, lineEdit_PhB);

        label_Iconv_PhC = new QLabel(tab_vector);
        label_Iconv_PhC->setObjectName("label_Iconv_PhC");

        formLayout_8->setWidget(2, QFormLayout::LabelRole, label_Iconv_PhC);

        lineEdit_PhC = new QLineEdit(tab_vector);
        lineEdit_PhC->setObjectName("lineEdit_PhC");
        sizePolicy10.setHeightForWidth(lineEdit_PhC->sizePolicy().hasHeightForWidth());
        lineEdit_PhC->setSizePolicy(sizePolicy10);

        formLayout_8->setWidget(2, QFormLayout::FieldRole, lineEdit_PhC);


        verticalLayout_23->addLayout(formLayout_8);


        horizontalLayout_20->addLayout(verticalLayout_23);


        gridLayout_19->addLayout(horizontalLayout_20, 0, 0, 1, 1);

        tabWidget_registerWidget->addTab(tab_vector, QString());
        tab_u_f = new QWidget();
        tab_u_f->setObjectName("tab_u_f");
        gridLayout_25 = new QGridLayout(tab_u_f);
        gridLayout_25->setObjectName("gridLayout_25");
        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName("verticalLayout_25");
        groupBox_UF = new QGroupBox(tab_u_f);
        groupBox_UF->setObjectName("groupBox_UF");
        groupBox_UF->setEnabled(false);
        gridLayout_23 = new QGridLayout(groupBox_UF);
        gridLayout_23->setObjectName("gridLayout_23");
        gridLayout_22 = new QGridLayout();
        gridLayout_22->setObjectName("gridLayout_22");
        label_f_nom = new QLabel(groupBox_UF);
        label_f_nom->setObjectName("label_f_nom");

        gridLayout_22->addWidget(label_f_nom, 0, 0, 1, 1);

        lineEdit_f_nom = new QLineEdit(groupBox_UF);
        lineEdit_f_nom->setObjectName("lineEdit_f_nom");

        gridLayout_22->addWidget(lineEdit_f_nom, 0, 1, 1, 1);

        label_f_err = new QLabel(groupBox_UF);
        label_f_err->setObjectName("label_f_err");

        gridLayout_22->addWidget(label_f_err, 0, 2, 1, 1);

        lineEdit_f_err = new QLineEdit(groupBox_UF);
        lineEdit_f_err->setObjectName("lineEdit_f_err");

        gridLayout_22->addWidget(lineEdit_f_err, 0, 3, 1, 1);

        label_u_nom = new QLabel(groupBox_UF);
        label_u_nom->setObjectName("label_u_nom");

        gridLayout_22->addWidget(label_u_nom, 1, 0, 1, 1);

        lineEdit_u_nom = new QLineEdit(groupBox_UF);
        lineEdit_u_nom->setObjectName("lineEdit_u_nom");

        gridLayout_22->addWidget(lineEdit_u_nom, 1, 1, 1, 1);

        label_ku_start = new QLabel(groupBox_UF);
        label_ku_start->setObjectName("label_ku_start");

        gridLayout_22->addWidget(label_ku_start, 1, 2, 1, 1);

        lineEdit_ku_start = new QLineEdit(groupBox_UF);
        lineEdit_ku_start->setObjectName("lineEdit_ku_start");

        gridLayout_22->addWidget(lineEdit_ku_start, 1, 3, 1, 1);

        label_i_nom = new QLabel(groupBox_UF);
        label_i_nom->setObjectName("label_i_nom");

        gridLayout_22->addWidget(label_i_nom, 2, 0, 1, 1);

        lineEdit_i_nom = new QLineEdit(groupBox_UF);
        lineEdit_i_nom->setObjectName("lineEdit_i_nom");

        gridLayout_22->addWidget(lineEdit_i_nom, 2, 1, 1, 1);

        label_ki_start = new QLabel(groupBox_UF);
        label_ki_start->setObjectName("label_ki_start");

        gridLayout_22->addWidget(label_ki_start, 2, 2, 1, 1);

        lineEdit_ki_start = new QLineEdit(groupBox_UF);
        lineEdit_ki_start->setObjectName("lineEdit_ki_start");

        gridLayout_22->addWidget(lineEdit_ki_start, 2, 3, 1, 1);


        gridLayout_23->addLayout(gridLayout_22, 0, 0, 1, 1);


        verticalLayout_25->addWidget(groupBox_UF);

        table_UF = new QTableWidget(tab_u_f);
        if (table_UF->columnCount() < 3)
            table_UF->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_UF->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_UF->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_UF->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (table_UF->rowCount() < 8)
            table_UF->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_UF->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_UF->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_UF->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table_UF->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table_UF->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table_UF->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        table_UF->setVerticalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        table_UF->setVerticalHeaderItem(7, __qtablewidgetitem10);
        table_UF->setObjectName("table_UF");
        table_UF->setEnabled(false);

        verticalLayout_25->addWidget(table_UF);


        gridLayout_25->addLayout(verticalLayout_25, 0, 0, 1, 1);

        widget_plot_UF = new QCustomPlot(tab_u_f);
        widget_plot_UF->setObjectName("widget_plot_UF");
        sizePolicy.setHeightForWidth(widget_plot_UF->sizePolicy().hasHeightForWidth());
        widget_plot_UF->setSizePolicy(sizePolicy);

        gridLayout_25->addWidget(widget_plot_UF, 0, 1, 1, 1);

        tabWidget_registerWidget->addTab(tab_u_f, QString());

        gridLayout_21->addWidget(tabWidget_registerWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1105, 26));
        menuCAN_Adapter = new QMenu(menubar);
        menuCAN_Adapter->setObjectName("menuCAN_Adapter");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        statusbar->setEnabled(true);
        statusbar->setFont(font2);
        statusbar->setStyleSheet(QString::fromUtf8("color: rgb(255, 85, 0)"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuCAN_Adapter->menuAction());
        menuCAN_Adapter->addAction(actionOpen_register_map);
        menuCAN_Adapter->addAction(actionCreate_register_map);
        menuCAN_Adapter->addSeparator();
        menuCAN_Adapter->addAction(actionQuit);

        retranslateUi(MainWindow);

        tabWidget_registerWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_register_map->setText(QCoreApplication::translate("MainWindow", "Open register map", nullptr));
        actionCreate_register_map->setText(QCoreApplication::translate("MainWindow", "Create register map", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        pushButton_searchListPort->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \320\277\320\276\321\200\321\202\320\276\320\262", nullptr));
        pushButton_connect->setText(QCoreApplication::translate("MainWindow", "connect", nullptr));
        pushButton_disconnect->setText(QCoreApplication::translate("MainWindow", "disconnect", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 COM-\320\277\320\276\321\200\321\202\320\260", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "port name", nullptr));
        label_nameOk->setText(QCoreApplication::translate("MainWindow", "ok", nullptr));
        label_baudRate->setText(QCoreApplication::translate("MainWindow", "baud rate", nullptr));
        label_baudOk->setText(QCoreApplication::translate("MainWindow", "ok", nullptr));
        label_parity->setText(QCoreApplication::translate("MainWindow", "parity", nullptr));
        label_parityOk->setText(QCoreApplication::translate("MainWindow", "ok", nullptr));
        label_dataBits->setText(QCoreApplication::translate("MainWindow", "data bits", nullptr));
        label_dataOk->setText(QCoreApplication::translate("MainWindow", "ok", nullptr));
        label_stopBit->setText(QCoreApplication::translate("MainWindow", "stop bit", nullptr));
        label_stopOk->setText(QCoreApplication::translate("MainWindow", "ok", nullptr));
        label_flowBit->setText(QCoreApplication::translate("MainWindow", "flow bit", nullptr));
        label_flowOk->setText(QCoreApplication::translate("MainWindow", "ok", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 CAN-\320\260\320\264\320\260\320\277\321\202\320\265\321\200\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\247\320\270\321\202\320\260\321\202\321\214 \320\262\321\201\320\265", nullptr));
        label_canFreq->setText(QCoreApplication::translate("MainWindow", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260 CAN", nullptr));
        pushButton_setConfigAdapter->setText(QCoreApplication::translate("MainWindow", "set config adapter", nullptr));
        groupBox_settingsTiming->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\321\202\321\200\320\276\320\273\321\214 \320\277\320\260\320\272\320\265\321\202\320\276\320\262", nullptr));
        checkBox_canStandart->setText(QCoreApplication::translate("MainWindow", "CAN standart", nullptr));
        checkBox_canExtended->setText(QCoreApplication::translate("MainWindow", "CAN extended", nullptr));
        checkBox_adapterAnswer->setText(QCoreApplication::translate("MainWindow", "adapter answer", nullptr));
        checkBox_lossConnection->setText(QCoreApplication::translate("MainWindow", "Loss of connection", nullptr));
        label_volumeTextRead->setText(QCoreApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\260\320\265\320\274\321\213\321\205 \321\201\321\202\321\200\320\276\320\272:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\277\321\200\320\270\320\275\321\217\321\202\320\276 \320\261\320\260\320\271\321\202:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260 \320\276\320\277\321\200\320\276\321\201\320\260, \320\274\321\201:", nullptr));
        lineEdit_freqSampl->setText(QCoreApplication::translate("MainWindow", "500", nullptr));
        radioButton_byChekBox->setText(QCoreApplication::translate("MainWindow", "ChekBox", nullptr));
        radioButton_fromHashTable->setText(QCoreApplication::translate("MainWindow", "HashTable", nullptr));
        pushButton_startRead->setText(QCoreApplication::translate("MainWindow", "Start read", nullptr));
        pushButton_readOnce->setText(QCoreApplication::translate("MainWindow", "Read it once", nullptr));
        pushButton_stopRead->setText(QCoreApplication::translate("MainWindow", "Stop read", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        tabWidget_registerWidget->setTabText(tabWidget_registerWidget->indexOf(tab_adapter), QCoreApplication::translate("MainWindow", "CAN adapter", nullptr));
        pushButton_genFromEnum->setText(QCoreApplication::translate("MainWindow", "Generate from enum", nullptr));
        pushButton_selectAll->setText(QCoreApplication::translate("MainWindow", "Select all", nullptr));
        pushButton_readRegFromFile->setText(QCoreApplication::translate("MainWindow", "Read from file", nullptr));
        pushButton_resetAll->setText(QCoreApplication::translate("MainWindow", "Reset all", nullptr));
        pushButton_workDir->setText(QCoreApplication::translate("MainWindow", "Work directory", nullptr));
        pushButton_saveRegToFile->setText(QCoreApplication::translate("MainWindow", "Save to file", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Dir:", nullptr));
        tabWidget_registerWidget->setTabText(tabWidget_registerWidget->indexOf(tab_selectAlias), QCoreApplication::translate("MainWindow", "Registers alias", nullptr));
        pushButton_showPanel->setText(QCoreApplication::translate("MainWindow", "Show panel", nullptr));
        groupBox_controlPanel->setTitle(QString());
        pushButton_hidePanel->setText(QCoreApplication::translate("MainWindow", "Hide panel", nullptr));
        label_freqInv->setText(QCoreApplication::translate("MainWindow", "F=", nullptr));
        pushButton_startInv_panel->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton_stopInv_panel->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        pushButton_alarmInv_panel->setText(QCoreApplication::translate("MainWindow", "Alarm", nullptr));
        pushButton_saveTable->setText(QCoreApplication::translate("MainWindow", "Save table", nullptr));
        tabWidget_registerWidget->setTabText(tabWidget_registerWidget->indexOf(tab_registers), QCoreApplication::translate("MainWindow", "Registers", nullptr));
        pushButton_genFromEnumSample->setText(QCoreApplication::translate("MainWindow", "Generate from enum", nullptr));
        pushButton_selectAllSample->setText(QCoreApplication::translate("MainWindow", "Select all", nullptr));
        pushButton_readSampleFromFile->setText(QCoreApplication::translate("MainWindow", "Read from file", nullptr));
        pushButton_resetAllSample->setText(QCoreApplication::translate("MainWindow", "Reset all", nullptr));
        pushButton_workDirSample->setText(QCoreApplication::translate("MainWindow", "Work directory", nullptr));
        pushButton_saveSampleToFile->setText(QCoreApplication::translate("MainWindow", "Save to file", nullptr));
        label_dirSample->setText(QCoreApplication::translate("MainWindow", "Dir:", nullptr));
        tabWidget_registerWidget->setTabText(tabWidget_registerWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Samples alias", nullptr));
        tabWidget_registerWidget->setTabText(tabWidget_registerWidget->indexOf(tab_samples), QCoreApplication::translate("MainWindow", "Samples", nullptr));
        pushButton_loadTable->setText(QCoreApplication::translate("MainWindow", "Load registers table", nullptr));
        pushButton_checkRegistersFromFile->setText(QCoreApplication::translate("MainWindow", "Check registers", nullptr));
        pushButton_setRegistersFromFile->setText(QCoreApplication::translate("MainWindow", "Set registers", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "File:", nullptr));
        tabWidget_registerWidget->setTabText(tabWidget_registerWidget->indexOf(tab_checkRegisters), QCoreApplication::translate("MainWindow", "Check registers", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\262\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\274\320\260\320\275\320\264\321\203", nullptr));
        pushButton_sendCommand->setText(QCoreApplication::translate("MainWindow", "Send command", nullptr));
        tabWidget_registerWidget->setTabText(tabWidget_registerWidget->indexOf(tab_control), QCoreApplication::translate("MainWindow", "Control", nullptr));
        pushButton_startInv->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        pushButton_stopInv->setText(QCoreApplication::translate("MainWindow", "STOP", nullptr));
        pushButton_alarmInv->setText(QCoreApplication::translate("MainWindow", "ALARM", nullptr));
        pushButton_rstFlt->setText(QCoreApplication::translate("MainWindow", "Reset fault", nullptr));
        pushButton_flashErrClr->setText(QCoreApplication::translate("MainWindow", "Flash err clr", nullptr));
        pushButton_flashWrAll->setText(QCoreApplication::translate("MainWindow", "Flash wr all", nullptr));
        groupBox_direction->setTitle(QCoreApplication::translate("MainWindow", "Direction", nullptr));
        radioButton_directRotation->setText(QCoreApplication::translate("MainWindow", "Direct", nullptr));
        radioButton_reversRotation->setText(QCoreApplication::translate("MainWindow", "Revers", nullptr));
        groupBox_resonansDemping->setTitle(QCoreApplication::translate("MainWindow", "Resonans demping", nullptr));
        radioButton_resDempAngle->setText(QCoreApplication::translate("MainWindow", "Angle", nullptr));
        radioButton_resDempTorque->setText(QCoreApplication::translate("MainWindow", "Torque", nullptr));
        radioButton_resDempPower->setText(QCoreApplication::translate("MainWindow", "Power", nullptr));
        groupBox_motorType->setTitle(QCoreApplication::translate("MainWindow", "Motor type", nullptr));
        radioButton_async->setText(QCoreApplication::translate("MainWindow", "Async", nullptr));
        radioButton_vent->setText(QCoreApplication::translate("MainWindow", "Vent", nullptr));
        groupBox_PWM_Type->setTitle(QCoreApplication::translate("MainWindow", "PWM type", nullptr));
        radioButton_PWM_SIN->setText(QCoreApplication::translate("MainWindow", "SIN", nullptr));
        radioButton_PWM_OVER1->setText(QCoreApplication::translate("MainWindow", "OVER1", nullptr));
        radioButton_PWM_OVER2->setText(QCoreApplication::translate("MainWindow", "OVER2", nullptr));
        groupBox_termosensMode->setTitle(QCoreApplication::translate("MainWindow", "Termosensor mode", nullptr));
        radioButton_termosensorSingle->setText(QCoreApplication::translate("MainWindow", "Single", nullptr));
        radioButton_termosensorCritic->setText(QCoreApplication::translate("MainWindow", "Critic", nullptr));
        radioButton_termosensorAll->setText(QCoreApplication::translate("MainWindow", "All", nullptr));
        groupBox_convType->setTitle(QCoreApplication::translate("MainWindow", "Conv type", nullptr));
        radioButton_trac->setText(QCoreApplication::translate("MainWindow", "Trac", nullptr));
        radioButton_subpump->setText(QCoreApplication::translate("MainWindow", "Subpump", nullptr));
        groupBox_expBoard->setTitle(QCoreApplication::translate("MainWindow", "Exp board", nullptr));
        radioButton_expLegacy->setText(QCoreApplication::translate("MainWindow", "Legacy", nullptr));
        radioButton_exp485->setText(QCoreApplication::translate("MainWindow", "485", nullptr));
        radioButton_expSPI->setText(QCoreApplication::translate("MainWindow", "SPI", nullptr));
        radioButton_expOthers->setText(QCoreApplication::translate("MainWindow", "Others", nullptr));
        groupBox_settings->setTitle(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        checkBox_powerMonitor->setText(QCoreApplication::translate("MainWindow", "Power monitor", nullptr));
        checkBox_currSensOnFilter->setText(QCoreApplication::translate("MainWindow", "Current sens on filter", nullptr));
        checkBox_rationingTime->setText(QCoreApplication::translate("MainWindow", "Accel/decel normalize", nullptr));
        checkBox_enableZeroUdc->setText(QCoreApplication::translate("MainWindow", "Enable zero Udc", nullptr));
        checkBox_useOutInductance->setText(QCoreApplication::translate("MainWindow", "Use out inductance", nullptr));
        checkBox_powerIsRMS->setText(QCoreApplication::translate("MainWindow", "Power is RMS", nullptr));
        checkBox_harmonicAnalysis->setText(QCoreApplication::translate("MainWindow", "Harmonic analysis", nullptr));
        checkBox_pmmOn->setText(QCoreApplication::translate("MainWindow", "PMM enable", nullptr));
        checkBox_pwmControl->setText(QCoreApplication::translate("MainWindow", "PWM control", nullptr));
        checkBox_paramsOutChange->setText(QCoreApplication::translate("MainWindow", "Params out change", nullptr));
        groupBox_converterDesign->setTitle(QCoreApplication::translate("MainWindow", "Converter design", nullptr));
        radioButton_baseConverter->setText(QCoreApplication::translate("MainWindow", "Base", nullptr));
        radioButton_ISING_RDOUB->setText(QCoreApplication::translate("MainWindow", "ISING RDOUB x1", nullptr));
        radioButton_ITRIP_RSING->setText(QCoreApplication::translate("MainWindow", "ITRIP RSING x1", nullptr));
        radioButton_IQUAD_RSING_2->setText(QCoreApplication::translate("MainWindow", "IQUAD RSING x2", nullptr));
        radioButton_IDOUB_RDOUB->setText(QCoreApplication::translate("MainWindow", "IDOUB RDOUB x1", nullptr));
        radioButton_IQUAD_RSING->setText(QCoreApplication::translate("MainWindow", "IQUAD RSING x1", nullptr));
        radioButton_IQUAD_RDOUB_2->setText(QCoreApplication::translate("MainWindow", "IQUAD RDOUB x2", nullptr));
        radioButton_IQUAD_RDOUB->setText(QCoreApplication::translate("MainWindow", "IQUAD RDOUB x1", nullptr));
        radioButton_IDOUB_RSING->setText(QCoreApplication::translate("MainWindow", "IDOUB RSING x1", nullptr));
        radioButton_ITRIP_RDOUB->setText(QCoreApplication::translate("MainWindow", "ITRIP RDOUB x1", nullptr));
        radioButton_ISING_RSING->setText(QCoreApplication::translate("MainWindow", "ISING RSING x1", nullptr));
        groupBox_digOut->setTitle(QCoreApplication::translate("MainWindow", "Digital outputs", nullptr));
        checkBox_extOut_0->setText(QCoreApplication::translate("MainWindow", "Ext OUT0", nullptr));
        checkBox_extOut_1->setText(QCoreApplication::translate("MainWindow", "Ext OUT1", nullptr));
        checkBox_extOut_2->setText(QCoreApplication::translate("MainWindow", "Ext OUT2", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "CAN freq", nullptr));
        checkBox_allowCAN_freqChanges->setText(QCoreApplication::translate("MainWindow", "Allow CAN freq changes", nullptr));
        label_status->setText(QCoreApplication::translate("MainWindow", "IREG_INV_STATUS", nullptr));
        label_status_2->setText(QCoreApplication::translate("MainWindow", "IREG_INV_STATUS2", nullptr));
        label_status_3->setText(QCoreApplication::translate("MainWindow", "IREG_INV_STATUS3", nullptr));
        label_status_flt->setText(QCoreApplication::translate("MainWindow", "IREG_INV_FAULT", nullptr));
        label_status_5->setText(QCoreApplication::translate("MainWindow", "IREG_INV_STATUS5", nullptr));
        tabWidget_registerWidget->setTabText(tabWidget_registerWidget->indexOf(tab_settings), QCoreApplication::translate("MainWindow", "Settings", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Registers", nullptr));
        lineEdit_yAxis_1_min->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lineEdit_yAxis_2_min->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "startTimeStamp=", nullptr));
        label_startTimeStamp->setText(QCoreApplication::translate("MainWindow", "----------", nullptr));
        label_restartTimeStartStamp->setText(QCoreApplication::translate("MainWindow", "waiting start stamp", nullptr));
        label_numberOfRestarts->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Samples", nullptr));
        lineEdit_yAxis_4_min->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lineEdit_yAxis_3_min->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_holdPlot->setText(QCoreApplication::translate("MainWindow", "HOLD", nullptr));
        label_replotFreq->setText(QCoreApplication::translate("MainWindow", "replot freq, ms", nullptr));
        lineEdit_freqPlot->setText(QCoreApplication::translate("MainWindow", "250", nullptr));
        label_scalePlot->setText(QCoreApplication::translate("MainWindow", "scale, ms", nullptr));
        lineEdit_scalePlot->setText(QCoreApplication::translate("MainWindow", "200000", nullptr));
        label_currentDate->setText(QCoreApplication::translate("MainWindow", "dd/MM/yy", nullptr));
        tabWidget_registerWidget->setTabText(tabWidget_registerWidget->indexOf(tab_plot), QCoreApplication::translate("MainWindow", "Plot", nullptr));
        label_Fconv->setText(QCoreApplication::translate("MainWindow", "Fconv", nullptr));
        label_Uconv->setText(QCoreApplication::translate("MainWindow", "Uconv", nullptr));
        label_uMax->setText(QCoreApplication::translate("MainWindow", "max", nullptr));
        lineEdit_UconvMax->setText(QCoreApplication::translate("MainWindow", "500", nullptr));
        checkBox_uPh->setText(QCoreApplication::translate("MainWindow", "U phase", nullptr));
        checkBox_uLine->setText(QCoreApplication::translate("MainWindow", "U line", nullptr));
        label_Iconv_A->setText(QCoreApplication::translate("MainWindow", "IA", nullptr));
        label_Iconv_B->setText(QCoreApplication::translate("MainWindow", "IB", nullptr));
        label_Iconv_C->setText(QCoreApplication::translate("MainWindow", "IC", nullptr));
        lineEdit_IconvMax->setText(QCoreApplication::translate("MainWindow", "500", nullptr));
        label_iMax->setText(QCoreApplication::translate("MainWindow", "max", nullptr));
        checkBox_i->setText(QCoreApplication::translate("MainWindow", "I", nullptr));
        label_Iconv_PhA->setText(QCoreApplication::translate("MainWindow", "PhA", nullptr));
        lineEdit_PhA->setText(QString());
        label_Iconv_PhB->setText(QCoreApplication::translate("MainWindow", "PhB", nullptr));
        lineEdit_PhB->setText(QString());
        label_Iconv_PhC->setText(QCoreApplication::translate("MainWindow", "PhC", nullptr));
        lineEdit_PhC->setText(QString());
        tabWidget_registerWidget->setTabText(tabWidget_registerWidget->indexOf(tab_vector), QCoreApplication::translate("MainWindow", "Vector", nullptr));
        groupBox_UF->setTitle(QCoreApplication::translate("MainWindow", "Set U/f", nullptr));
        label_f_nom->setText(QCoreApplication::translate("MainWindow", "Fnom =", nullptr));
        label_f_err->setText(QCoreApplication::translate("MainWindow", "Ferr =", nullptr));
        label_u_nom->setText(QCoreApplication::translate("MainWindow", "Unom =", nullptr));
        label_ku_start->setText(QCoreApplication::translate("MainWindow", "kUstart =", nullptr));
        label_i_nom->setText(QCoreApplication::translate("MainWindow", "Inom =", nullptr));
        label_ki_start->setText(QCoreApplication::translate("MainWindow", "kIstart =", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_UF->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "F, Hz", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_UF->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "U, V", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_UF->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "I, A", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table_UF->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "N", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table_UF->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = table_UF->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = table_UF->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = table_UF->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = table_UF->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = table_UF->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = table_UF->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        tabWidget_registerWidget->setTabText(tabWidget_registerWidget->indexOf(tab_u_f), QCoreApplication::translate("MainWindow", "U/F", nullptr));
        menuCAN_Adapter->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
