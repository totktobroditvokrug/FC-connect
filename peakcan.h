#ifndef PEAKCAN_H
#define PEAKCAN_H

#include <QObject>

#include <QList>

#include <QString>

#include <QCanBus>
#include <QCanBusFrame>
#include <QCanBusDevice>
#include <QCanBusDeviceInfo>


// Частота CAN шины

const int SET_BIT_RATE_CAN_125 = 125000;    // - 125 кб/с
const int SET_BIT_RATE_CAN_250 = 250000;    // - 250 кб/с
const int SET_BIT_RATE_CAN_500 = 500000;    // - 500 кб/с



class PeakCan : public QObject
{
    Q_OBJECT
public:
    PeakCan();

    // PEAKCAN
    bool mIsOpened;		// peak-can open state
    bool mIsConnected;  // PEAK-CAN connection status
    QCanBusDevice *mCanDevice = nullptr;

    QList<QCanBusDeviceInfo> mCanDeviceInfo;

    QVector<QStringList> searchListPCanPlugin();   // список устройств PeakCAN


    void processReceivedFrames();

    void processErrors(QCanBusDevice::CanBusError error) const;
    // Send a message
    void sendCaptureDeviceMsg(int canId);

    //void msleep(uint msec)


    void on_actionConnect_triggered();
    void connectPeakCAN();

    void disconnectPeakCAN();

    void setBitRatePeakCan(int commandCanFreqInv);


    QString handlePeakCanParsing(QCanBusFrame frame); // форматирование данных от адаптера PEAKCAN




private:

public slots:

};

#endif // PEAKCAN_H
