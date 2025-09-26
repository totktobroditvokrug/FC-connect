#ifndef EL205_CAN_ADAPTER_H
#define EL205_CAN_ADAPTER_H

#include <QObject>
#include <QList>
#include <QSerialPortInfo>

class el205_CAN_adapter : public QObject
{
    Q_OBJECT
public:
    el205_CAN_adapter();

    // список доступных COM портов
    QVector<QStringList> searchListSerialPort();

signals:
    void SignalEnabledCAN(); // запускается любым адаптером для активации параметров связи
    void SignalStartCan();
    void SignalStopCan();

public slots:


};

#endif // EL205_CAN_ADAPTER_H
