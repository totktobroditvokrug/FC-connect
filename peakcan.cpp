#include "peakcan.h"
#include "adapter_commands.h"

#include <QDateTime>

#include <QDebug>


PeakCan::PeakCan()
{
    // qDebug() << testString; // НО И ТУТ ТОЖЕ ПАДАЕТ
}

QVector<QStringList> PeakCan::searchListPCanPlugin(){
    qDebug() << "слот поиска плагина";

    QString description;
    QString name;
    QString serialNumber;

    QVector<QStringList> arrPCanInfo; // массив атрибутов COM портов
    arrPCanInfo.clear();

    // проверка наличия плагина peakcan
    //    if (QCanBus::instance()->plugins().contains(QStringLiteral("peakcan"))) {
    //        qDebug("peakcan plugin available");
    //    } else {
    //        qDebug("peakcan plugin not available");
    //    }

    mCanDeviceInfo = QCanBus::instance()->availableDevices("peakcan"); // список устройств под PCan

    if (mCanDeviceInfo.isEmpty()){
        qDebug("Not find available peakcan device");
        return(arrPCanInfo);
    }

        qDebug("Find available peakcan device");


    // Добавить все доступные  устройства PCAN
    for (int i = 0; i < mCanDeviceInfo.count(); i++)
    {
        description = mCanDeviceInfo[i].description();
        name = mCanDeviceInfo[i].name();
        serialNumber = mCanDeviceInfo[i].serialNumber();

        QStringList list;

        list << (!name.isEmpty() ? name : "None")
             << (!description.isEmpty() ? description : "None")
             << (!serialNumber.isEmpty() ? serialNumber : "None")
             << ("PCAN device " + QString::number(i, 10))   ;
        arrPCanInfo.append(list); // массив со списком атрибутов доступных устройств PCAN
    }
    return(arrPCanInfo);

}

void PeakCan::processReceivedFrames()
{
    qDebug("Read Frame");

    //    if (!mCanDevice) {
    //        return;
    //    }

    //    QStringList parsingDataList;  // лист принятых сообщений
    //    parsingDataList.clear();

    //    formatCanMessage canMessage; // структура CAN сообщения

    //    QString checkCRC = "crc-OK";



    //    while(mCanDevice->framesAvailable()) {
    //        const QCanBusFrame frame = mCanDevice->readFrame();
    //        QString view;
    //        QString message;
    //        bool isExtendedFormat = frame.hasExtendedFrameFormat();

    //        message = handlePeakCanParsing(frame);

    //        //ui->textEdit_dataRead->append(message);

    //        if (frame.frameType() == QCanBusFrame::ErrorFrame) {
    //            view = mCanDevice->interpretErrorFrame(frame);
    //        } else {
    //            view = frame.toString();
    //        }

    //        const QString time = QString::fromLatin1("%1.%2  ")
    //                                 .arg(frame.timeStamp().seconds(), 10, 10, QLatin1Char(' '))
    //                                 .arg(frame.timeStamp().microSeconds()/100, 4, 10, QLatin1Char('0'));

    //        QString flags = QLatin1String(" --- ");
    //        if (frame.hasBitrateSwitch()) {
    //            flags[1] = QLatin1Char('B');
    //        }
    //        if (frame.hasErrorStateIndicator()) {
    //            flags[2] = QLatin1Char('E');
    //        }
    //        if (frame.hasLocalEcho()) {
    //            flags[3] = QLatin1Char('L');
    //        }

    //        QByteArray payload = frame.payload();

    //        if(isExtendedFormat) {

    //             QString extendedFrame = handleCAN(canMessage, EXT_PREFIX + checkCRC);
    //             qDebug() << extendedFrame;
    //            // if(checkExtended) parsingDataList.append(extendedFrame);  // выводим при чекбоксе
    //        }
    //        else {
    //            QString standartFrame = handleCAN(canMessage, STD_PREFIX + checkCRC);
    //            qDebug() << standartFrame;
    //        }





    //        //qDebug("0x%x  0x%x", frame.frameId(), (char)payload[0]);
    //        //qDebug("%s  %s  %s",time.toStdString().c_str(), flags.toStdString().c_str(), view.toStdString().c_str());

    //    }

    // вывод полученных сообщений
    //    if (parsingDataList.size() > 0){ // если ответ не нулевой, выводим его в текстовое поле регулируемой длины
    //        //if(ui->radioButton_byChekBox->isChecked()) ui->textEdit_dataRead->append(parsingDataList.join("\n"));
    //    }

}

void PeakCan::processErrors(QCanBusDevice::CanBusError error) const
{

    qDebug("Error handling");
    //    switch (error) {
    //    case QCanBusDevice::ReadError:
    //    case QCanBusDevice::WriteError:
    //    case QCanBusDevice::ConnectionError:
    //    case QCanBusDevice::ConfigurationError:
    //    case QCanBusDevice::UnknownError:
    //        qDebug("Error:%s", mCanDevice->errorString().toStdString().c_str());
    //        //m_status->setText(m_canDevice->errorString());
    //        break;
    //    default:
    //        break;
    //    }
}

// Send a message
void PeakCan::sendCaptureDeviceMsg(int canId)
{
    qDebug("canId:%d", canId);
    //    QCanBusFrame frame;
    //    uint StdId, ExtId;
    //    QByteArray payload;
    //    payload.resize(8);

    //    ExtId = 0x18EF80C8|(canId<<8);
    //    payload[0]= 0x70;
    //    payload[1]= 0xFF;
    //    payload[2]= 0xFF;
    //    payload[3]= 0xFF;
    //    payload[4]= 0xFF;
    //    payload[5]= 0xFF;
    //    payload[6]= 0xFF;
    //    payload[7]= 0xFF;

    //    frame.setFrameType(QCanBusFrame::DataFrame);
    //    frame.setExtendedFrameFormat(true); //
    //    frame.setTimeStamp(QDateTime::currentMSecsSinceEpoch());

    //    frame.setFrameId(ExtId);
    //    frame.setPayload(payload);

    //    if (mIsConnected) {
    //        mCanDevice->writeFrame(frame);
    //      //  msleep(25);
    //    }

}

//void PeakCan::msleep(uint msec)
//{
//    QTime sleepTime = QTime::currentTime().addMSecs(msec);
//    while(QTime::currentTime() < sleepTime) {
//        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
//    }
//}

void PeakCan::on_actionConnect_triggered()
{
    qDebug("Connect triggered");

    connectPeakCAN(); // перенести в if


    //    QString errString;

    //    // проверка наличия плагина peakcan
    //    if (QCanBus::instance()->plugins().contains(QStringLiteral("peakcan"))) {
    //        qDebug("peakcan plugin available");
    //        //ui->textEdit_messagePEAKCAN->setText("peakcan plugin available");
    //    } else {
    //        qDebug("peakcan plugin not available");
    //        //ui->textEdit_messagePEAKCAN->setText("peakcan plugin not available");
    //    }

    //    mCanDeviceInfo = QCanBus::instance()->availableDevices("peakcan");

    //    if (!mCanDeviceInfo.isEmpty()) {
    //    //    QList<QCanBusDeviceInfo> devicesList =  mCanDeviceInfo.begin()->name().toStdString().c_str();
    //        qDebug("%s", mCanDeviceInfo.begin()->name().toStdString().c_str());
    //        //ui->textEdit_messagePEAKCAN->append("available CAN devices:");
    //        //ui->textEdit_messagePEAKCAN->append(mCanDeviceInfo.begin()->name().toStdString().c_str());
    //        //for (auto rate : )
    //        // +
    //    } else {
    //        qDebug("Can not find available peakcan device");
    //        //ui->textEdit_messagePEAKCAN->append("Can not find available peakcan device");
    //    }



    //    mCanDevice = QCanBus::instance()->createDevice(QStringLiteral("peakcan"),
    //                                                   QStringLiteral("usb0"), &errString);
    //    if (!mCanDevice) {
    //        qDebug("ErrString:%s", errString.toStdString().c_str());
    //    } else {

    //        connect(mCanDevice, &QCanBusDevice::errorOccurred, this, &PeakCan::processErrors);
    //        connect(mCanDevice, &QCanBusDevice::framesReceived, this , &PeakCan::processReceivedFrames);

    //        //connect(m_canDevice, &QCanBusDevice::framesReceived, this, &MainWindow::processReceivedFrames);
    //        //connect(m_canDevice, &QCanBusDevice::framesWritten, this, &MainWindow::processFramesWritten);

    //        mCanDevice->setConfigurationParameter(QCanBusDevice::BitRateKey, SET_BIT_RATE_CAN_125); // baud rate
    //        //mCanDevice->setConfigurationParameter(QCanBusDevice::ErrorFilterKey, QVariant(0x1ffffff));

    //        connectPeakCAN();
    //    }
}

void PeakCan::connectPeakCAN()
{

    qDebug() << "connectPeakCAN";
    //    mIsConnected = mCanDevice->connectDevice();
    //    if (mIsConnected) {
    //        qDebug("CanDevice connect ok.");
    //    } else {
    //        qDebug("CanDevice connect error.");
    //    }
}

void PeakCan::disconnectPeakCAN()
{
    qDebug() << "disconnectPeakCAN";
    //   mCanDevice->disconnectDevice();

    qDebug("CanDevice is closed");
}

void PeakCan::setBitRatePeakCan(int commandCanFreqInv)
{
    //  if (!!mCanDevice) mCanDevice->setConfigurationParameter(QCanBusDevice::BitRateKey, commandCanFreqInv); // baud rate
    qDebug()<< "set BitRate peakcan:" << commandCanFreqInv;
}


QString PeakCan::handlePeakCanParsing(QCanBusFrame frame)
{
    QString message = "handlePeakCanParsing";
    //    message = frame.toString();
    qDebug()<< message;

    return(message);
} // форматирование данных от адаптера PEAKCAN
