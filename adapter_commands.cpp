#include "adapter_commands.h"
#include "iface.h"
#include <QDebug>
#include <QList>
#include <QStringList>


//-------------- Добавление контрольной суммы для адаптера EL205-1 -------------
QByteArray AddCRC(QString textCommand, int indexStartByte)
{
    // textCommand - текст команды без контрольной суммы
    // indexStartByte – индекс байта, с которого считается контрольная сумма

    char checkSum = 0;

    QByteArray addCheckSum = QByteArray::fromHex(textCommand.toUtf8() ); // переводим строку в массив
    int SizeCMD = addCheckSum.size();
    int i = 0;
    for (i = indexStartByte; i < SizeCMD; i++) // Начинаем считать для всех байт со 2-го

        {
            checkSum ^= addCheckSum[i];  // контрольная сумма по исключающему ИЛИ
        }
        addCheckSum.append(checkSum);
    return addCheckSum;
}

//-------------- подсчет контрольной суммы для адаптера EL205-1 -------------
quint8 calcCRC(QByteArray addCheckSum)
{
    // addCheckSum - проверяемый массив
    // indexStartByte – индекс байта, с которого считается контрольная сумма

    quint8 checkSum = 0;

    int SizeCMD = addCheckSum.size();
    for (int i = 0; i < SizeCMD; i++) // Начинаем считать для всех байт
        {
            checkSum ^= addCheckSum[i];  // контрольная сумма по исключающему ИЛИ
        }
    return checkSum;
}

//-------------- Обработка CAN посылки для адаптера EL205-1 --------
QString handleCAN(formatCanMessage canMessage, QString prefix)
{
    QString str = (QString::number(canMessage.numberSerialMessage, 10).rightJustified(3, '_') + prefix + " ID: " +
                   QString::number(canMessage.id_std_16, 16).rightJustified(4, '0') + " length: " +
                   QString::number(canMessage.dataLen, 10) +
                   " DATA:" + QString::fromUtf8(canMessage.data.toHex(' ')));
    return (str);
}


//-------------- Обработка дежурного ответа адаптера EL205-1 -----------------------------
QString handleAdapterAnswer(QByteArray answerArrayID, quint8 lengthDataAnswer, QByteArray answerArrayDATA)
{
    QString str = ("--ansAD-- ID:" + QString::fromUtf8(answerArrayID.toHex(' ')) +
                   " length: " + QString::number(lengthDataAnswer, 10) + " DATA:" +
                   QString::fromUtf8(answerArrayDATA.toHex(' ')));
    return (str);
}


//-------------- Парсинг потока из адаптера EL205-1 -----------------------------
QStringList handleUartParsing(
    QByteArray dataRead,  // принятай массив из CAN-адаптера
    bool checkStandart,   // флаг на вывод стандартных CAN сообщений
    bool checkExtended,   // флаг на вывод расширенных CAN сообщений
    bool checkAnswer,     // флаг на вывод ответов адаптера
    QVector<QString> regNumList,  // имена регистров, взятые из enum или из файла
    QVector<QString> sampleNumList,
    registerFields *regDataArray,  // эти поля регистров надо заполнить (элиас, данные, масштабы)
    samplesFields *sampleDataArray, // эти поля измерений надо заполнить (элиас, данные, масштабы)
    QHash<quint16, QByteArray> *canByIdStandart, // таблица стандартных CAN сообщений
    QHash<quint32, QByteArray> *canByIdExtended  // таблица расширенных CAN сообщений
) {
    formatCanMessage canMessage;

    QStringList parsingDataList;

    quint8 dataLength;
    QByteArray arrayDataForCRC; // посылка без двух стартовых байт и CRC
    quint8 CRC;  // CRC из посылки
    QString checkCRC = "crc-FALSE";
    bool CRC_OK = false;

    parsingDataList.clear();

    quint64 dataSize  = dataRead.size(); // размер полученных данных для парсинга

    qDebug() << "handleUartParsing. dataSize = " << dataSize;

    for (quint64 i=0; i<=(dataSize-2); i++) // минимальная длина сообщения - 2 байта
    {
       // qDebug() << "цикл парсинга. i = " << i;
      //   ошибка после этого !!

        if ((quint8(dataRead.at(i)) == AD_COM_ID_FIRST_BYTE)) // если вероятен первый пакет
        {
           // qDebug() << "вероятен первый пакет";

            switch (quint8(dataRead.at(i+1))) { // проверяем второй байт после стартового
                case AD_COM_ID_CAN_1 :{  // это CAN сообщение
              //  qDebug() << "это CAN сообщение. i = " << i;

                    if ((i + AD_COM_LENGTH_CAN + 1) > dataSize){ // проверка по минимальной длине
                        //qDebug() << "Неполное CAN сообщение. Проверка по остатку буфера";

                        parsingDataList.append("-- Неполное CAN сообщение --");

                        return (parsingDataList); // todo добавить склейку неполных сообщений!!!
                    }
                    else {

                        dataLength = quint8(dataRead[i+12]);
                      //  qDebug() << "проверка длины полей сообщения c учетом прочитанной длины. dataLength = " << dataLength;
                        //
                        if ((i+AD_COM_LENGTH_CAN-1+dataLength-8) > dataSize)
                        {
                         //  qDebug() << "Неполное CAN сообщение. Проверка по длине сообщения";
                           parsingDataList.append("-- Неполное CAN сообщение --");
                           return (parsingDataList); // todo добавить склейку неполных сообщений!!!!!!!
                        }

                        //---------- подсчет контрольной суммы -------------

                       // qDebug() << "подсчет контрольной суммы";

                        arrayDataForCRC = dataRead.mid((i+2), (12 + dataLength)); // посылка без двух стартовых байт и CRC

                        CRC = quint8(dataRead[i + 14 + dataLength]);  // CRC из посылки

                      //  qDebug() << "CRC = " << CRC;

                        if(calcCRC(arrayDataForCRC) == CRC){

                          //  qDebug() << "crc-OK";

                            CRC_OK = true;
                            checkCRC= "crc-OK";
                        }
                        else {
                            parsingDataList.append("-- Ошибка контрольной суммы --");
                          //  qDebug() << "Ошибка контрольной суммы ";
                            return (parsingDataList);
                        }
                    }

                    //-------- если длина сообщения достаточная, заполняем поля ID, DATA и проверяем формат
                    //-------- 4 байта ID_CAN, флаги, количество байт данных, 8 байт данных (с 7 по 20 позиции)

                       // qDebug() << "QByteArray arrayDataFromCAN = dataRead.mid((i+7), 14)";
                        QByteArray arrayDataFromCAN = dataRead.mid((i+7), 14); // 4 ID, 1 Flags, 1 Length, 8 DATA

                      //  QByteArray arrayID = dataRead.mid((i+7), 4); // ID сообщения 4 байта

                        quint8 time_stamp_1 = quint8(dataRead[i+3]);  // младший байт метки времени
                        quint8 time_stamp_2 = quint8(dataRead[i+4]);   // 2-й байт метки времени
                        quint8 time_stamp_3 = quint8(dataRead[i+5]);    // 3-й байт метки времени
                        quint8 time_stamp_4 = quint8(dataRead[i+6]);   // старший байт метки времени

                        quint8 id_1 = quint8(dataRead[i+7]);  // тело идентификатора
                        quint8 id_2 = quint8(dataRead[i+8]);   // заголовок идентификатора
                        quint8 id_3 = quint8(dataRead[i+9]);    // 3-й байт расширенного идентификатора
                        quint8 id_4 = quint8(dataRead[i+10]);   // старший байт расширенного идентификатора

                        quint8 lengthDataCAN = quint8(dataRead[i+12]);  // длина сообщения

                        //qDebug() << "dataSize - i:" << dataSize << " - " << i << " = " << (dataSize - i);

                        QByteArray arrayDATA = dataRead.mid((i+13), 8);

                        //qDebug() << "quint8 numberSerialMessage = quint8(dataRead[i+21]);";
                        quint8 numberSerialMessage = quint8(dataRead[i+21]);  // номер сообщения

                        canMessage.time_stamp_1 = time_stamp_1;  // формируем 32-х разрядную метку времени
                        canMessage.time_stamp_2 = time_stamp_2;
                        canMessage.time_stamp_3 = time_stamp_3;
                        canMessage.time_stamp_4 = time_stamp_4;
                        quint32 time_stamp_32 = canMessage.time_stamp_32;
                       // qDebug() << "метка времени: " << time_stamp_32;

                        canMessage.numberSerialMessage = numberSerialMessage; // todo вывести обработку из handleAllStandartDataCan
                        canMessage.id_1 = id_1;
                        canMessage.id_2 = id_2;
                        canMessage.id_3 = id_3;
                        canMessage.id_4 = id_4;
                        canMessage.data = arrayDATA;
                        canMessage.dataLen = lengthDataCAN;

                        //----- проверка формата CAN (расширенный/стандартный)
                        if(!(quint8(dataRead.at(i+11)) & AD_COM_EXT_CAN_FLAG)) // если стандартное сообщение
                        {
                          //  qDebug() << "Стандартное CAN сообщение №" << numberSerialMessage; // QString::number(quint8(dataRead[i+21]), 10);
                            QString standartFrame = handleCAN(canMessage, STD_PREFIX + checkCRC);

                            //------------ заполняем поля регистров стандартного фрэйма ----------
                           handleAllStandartDataCan(time_stamp_32, arrayDataFromCAN, regDataArray, regNumList, sampleDataArray, sampleNumList);

                           // заполняем хэш-таблицу с ключом по стандартному ID
                           canByIdStandart->insert(canMessage.id_std_16, arrayDATA); // новый id добавится, старый перезапишется

                            if(checkStandart) parsingDataList.append(standartFrame);  // выводим при чекбоксе
                        }
                        else
                        {
                           // qDebug() << "Расширенное CAN сообщение №";
                            QString extendedFrame = handleCAN(canMessage, EXT_PREFIX + checkCRC);
                            if(checkExtended) parsingDataList.append(extendedFrame);  // выводим при чекбоксе

                            // заполняем хэш-таблицу с ключом по стандартному ID
                            canByIdExtended->insert(canMessage.id_ext_32, arrayDATA); // новый id добавится, старый перезапишется
                        }
                    i=i+dataRead[i+2]+2; // перевод счетчика байт на начало следующего пакета минус 1
                } break;
                case AD_COM_ID_ANS_1 :{
                   // qDebug() << "switch: Дежурный ответ";
                    quint8 lengthDataAnswer = quint8(dataRead[i+2]);
                    if ((i+lengthDataAnswer) > dataSize && (lengthDataAnswer>6)){ // неполная посылка с ответом
                   // qDebug() << "switch: неполный дежурный ответ";
                    }
                    else{ // размер буфера данных больше или равен длине посылки
                        QByteArray answerArrayID = dataRead.mid((i+3), 4);
                        QByteArray answerArrayDATA = dataRead.mid((i+7), lengthDataAnswer-6);
                        QString adapterAnswer = handleAdapterAnswer(answerArrayID, lengthDataAnswer, answerArrayDATA);
                      //  qDebug() << "дежурный ответ: " << adapterAnswer;
                        if(checkAnswer) {
                             parsingDataList.append(adapterAnswer);
                        }
                        i = i + lengthDataAnswer+2;
                    }
                } break;
                case AD_COM_ID_ERR_1START_BYTE :{
                   // qDebug() << "ERR: пропущен первый стартовый байт при передаче";
                    parsingDataList.append("ERR: пропущен первый стартовый байт при передаче");
                    i+=1;
                } break;
                case AD_COM_ID_ERR_2START_BYTE :{
                  //  qDebug() << "ERR: пропущен второй стартовый байт при передаче";
                    parsingDataList.append("ERR: пропущен второй стартовый байт при передаче");
                    i+=1;
                } break;
                case AD_COM_ID_ERR_CHECK_SUM :{ // в адаптере к каждому ответу подмешан 0х 87 66

                  //  qDebug() << "в адаптере к каждому ответу подмешан 0х 87 66";

                    if(i + 3 <= dataSize){ // если есть еще три байта в потоке
                     //   qDebug() << "если есть еще три байта в потоке";
                        if((quint8(dataRead.at(i+2)) == AD_COM_ID_FIRST_BYTE) &&
                            ((quint8(dataRead.at(i+3))) == AD_COM_ID_ERR_CHECK_SUM)){
                         //   qDebug() << "ERR: неправильная контрольная сумма при передаче";
                            parsingDataList.append("ERR: неправильная контрольная сумма при передаче");
                         //   qDebug() << "ошибка CRC: " << dataRead[i] << ":" << dataRead[i+1];
                            i+=3;
                        }
                    }
                    i+=1;
                } break;
                case AD_COM_ID_OVER_LENGTH :{
                  //  qDebug() << "ERR: длина посылки более 40 бит";
                    parsingDataList.append("ERR: длина посылки более 40 бит");
                    i+=1;
                } break;
                case AD_COM_ID_ERR_TRANS_CAN :{
                  //  qDebug() << "ERR: ошибка при передаче CAN-сообщения";
                    parsingDataList.append("ERR: ошибка при передаче CAN-сообщения");
                    i+=1;
                } break;
                default:{
                   //  qDebug() << "Это был не стартовый бит, а случайно залетевшее число, похожее на него!!!";
                     parsingDataList.append("Это был не стартовый бит, а случайно залетевшее число, похожее на него!!!");
                } break;
            }
        }
    }
    return (parsingDataList);
}
