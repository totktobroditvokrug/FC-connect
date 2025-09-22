#include "fc_connect.h"
#include "ui_fc_connect.h"
#include "el205_can_adapter.h"

#include "plot/qcustomplot.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{


    // объявление списка регистров и измерений с размерами, соответствующими enum
    regNumList = QVector<QString>(RegnumClass::IREG_INV_ALL_END_REGISTERS);
    sampleNumList = QVector<QString>(SampleCanIdClass::CAN_END_SAMPLE_ID);

    timer = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(readStream()));

    timerDate = new QTimer;
    connect(timerDate, SIGNAL(timeout()), this, SLOT(readCurrentDate()));

    ui->setupUi(this);
    setWindowTitle("FC connect");

    ui->tabWidget_registerWidget->setCurrentIndex(0); // окно при загрузке с настройками интерфейса

    ui->lineEdit_volumeTextRead->setText("50");
    ui->textEdit_dataRead->document()->setMaximumBlockCount(50); //

  //  ui->lineEdit_availableByte->setEnabled(false);

    serial = new QSerialPort;  // объявляем serial

    ui->tab_control->hide(); // скрыть вкладку-атавизм

    // работа со списками регистров и сэмплов

    regAlias = new AliasFromEnum;
    //qDebug() << regAlias->changeWorkDir();

    genRegFromEnum(); // заранее подгружаем список всех регистров инвертора
    genSampleFromEnum(); // заранее подгружаем список измерений инвертора

    initTabCan(); // установить активность кнопок
    createRegistersTable();
    createSamplesTable();
    initComboBoxRegister(); // три кастомных регистра в заголовке таблицы значений
    ui->checkBox_lossConnection->setChecked(true); // по умолчанию останавливаем процесс при потере связи
    on_pushButton_searchListPort_clicked(); // заранее загрузить доступные порты


    //работа с осциллограммами
    xPlot = QVector<double>(PLOT_MAX_SIZE_ARR);
    yPlot = QVector<double>(PLOT_MAX_SIZE_ARR);
    startTimeStamp = 0; // пока ноль, пытаемся присвоить пришедшее значение из адаптера
    addGraph();  // 2 графика с двумя осями

    plot_1_isBusy = false;
    plot_2_isBusy = false;

    addGraph_UF();
//    createTableUF();


    // работа со статусом инвертора
    initStatus();

    // работа с настройкой CAN адаптеров

    EL205 = new el205_CAN_adapter;
    connect(EL205, SIGNAL(SignalStartCan()), this, SLOT(slotStartCan()));
    connect(EL205, SIGNAL(SignalStopCan()), this, SLOT(slotStopCan()));

    timerDate->start(500); // обновляем дату два раза в секунду
    numberOfRestartsStartTime = 0; // обнуляем количество перезапусков при переполнении метки времени адаптера

    ui->statusbar->showMessage("FC-connect 1.10");

    cfg = new ConfigFile; // !!!! Объявление класса из configfile.h  !!!!!
    cfg->openConfigFile(); // Создание или открытие файла конфигурации

    workDirPath = cfg->setWorkDir(); // инициализация рабочей директории
    ui->lineEdit_workDir->setText(workDirPath);
    ui->lineEdit_workDirSample->setText(workDirPath);
}

MainWindow::~MainWindow()
{
    serial->close(); // освободить порт при закрытии программы
    delete ui;
}


