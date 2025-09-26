#include "el205_can_adapter.h"

#include <QDebug>

el205_CAN_adapter::el205_CAN_adapter()
{

}

//---------------- список доступных COM портов ---------
QVector<QStringList> el205_CAN_adapter::searchListSerialPort()
{
    // qDebug() << "обработка списка COM портов";
    QString description;
    QString manufacturer;
    QString serialNumber;

    QList<QSerialPortInfo> serialPortInfos = QSerialPortInfo::availablePorts();

    QVector<QStringList> arrPortInfo; // массив атрибутов COM портов
    arrPortInfo.clear();

    // Выводим количество последовательных портов, которые может использовать текущая система
    qDebug() << "Total numbers of ports: " << serialPortInfos.count();


    // Добавить все доступные последовательные устройства вComboBoxв
    for (int i = 0; i < serialPortInfos.count(); i++)
    {
       QStringList list;

       description = serialPortInfos[i].description();
       manufacturer = serialPortInfos[i].manufacturer();
       serialNumber = serialPortInfos[i].serialNumber();

       list << serialPortInfos[i].portName()
            << (!description.isEmpty() ? description : "None")
            << (!manufacturer.isEmpty() ? manufacturer : "None")
            << (!serialNumber.isEmpty() ? serialNumber : "None")
            << serialPortInfos[i].systemLocation()
            << (serialPortInfos[i].vendorIdentifier() ? QString::number(serialPortInfos[i].vendorIdentifier(), 16) : "None")
            << (serialPortInfos[i].productIdentifier() ? QString::number(serialPortInfos[i].productIdentifier(), 16) : "None");
       arrPortInfo.append(list); // массив со списком атрибутов всех COM портов
    }
    return(arrPortInfo);
}
