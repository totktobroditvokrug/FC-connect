#ifndef ADAPTER_COMMANDS_H
#define ADAPTER_COMMANDS_H

#include "iface.h"
#include <QString>
#include <QList>
#include <QStringList>

static QString AD_COM_SET_HEAD = "1C05"; // два стартовых байта посылки из ПК в адаптер

static QString AD_COM_SET_FREQ_CAN_125 = "1C05068046037800"; // 00 - 125 кб/с без CRC
static QString AD_COM_SET_FREQ_CAN_250 = "1C05068046037801"; // 01 - 250 кб/с без CRC
static QString AD_COM_SET_FREQ_CAN_500 = "1C05068046037802"; // 02 - 500 кб/с без CRC

static QString AD_COM_SET_READ_ALL_CAN = "1C05068046057900"; // читать все сообщения

static QByteArray AD_COM_ID_CAN = QByteArray::fromHex("875a"); // todo разобраться с единым форматом констант

static QString STD_PREFIX = " -stdCAN-"; //
static QString EXT_PREFIX = " -extCAN-"; //

const quint8 AD_COM_ID_FIRST_BYTE = 0x87;  // первый байт пакета

const quint8 AD_COM_LENGTH_CAN = 22;  // длина пакета с CAN сообщением
const quint8 AD_COM_LENGTH_MIN = 15;  // длина пакета с минимальным CAN сообщением
const quint8 AD_COM_LENGTH_ANS = 9;  // длина пакета с ответом на настройки без длины посылки. Длина в третьем байте
const quint8 AD_COM_LENGTH_ERR_N = 2;  // длина пакета с сообщением  об ошибках

const quint8 AD_COM_ID_CAN_0 = 0x87;
const quint8 AD_COM_ID_CAN_1 = 0x5a;       // второй байт идентификатор CAN
const quint8 AD_COM_ID_ANS_1 = 0x4b;       // второй байт идентификатор дежурного ответа

// Коды ошибок начинаются со второго байта
const quint8 AD_COM_ID_ERR_1START_BYTE = 0x64;       // пропущен первый стартовый байт при передаче
const quint8 AD_COM_ID_ERR_2START_BYTE = 0x65;       // пропущен второй стартовый байт при передаче
const quint8 AD_COM_ID_ERR_CHECK_SUM = 0x66;         // неправильная контрольная сумма при передаче
const quint8 AD_COM_ID_OVER_LENGTH = 0x67;           // длина посылки более 40 бит
const quint8 AD_COM_ID_ERR_TRANS_CAN = 0x68;         // Ошибка при передаче CAN-сообщения

const quint8 AD_COM_EXT_CAN_FLAG = 0x20;  // флаг расширенного CAN сообщения


struct formatCanMessage { // развертка для вывода на экран ID
    union { // 4 байта ID
        quint32 id_ext_32; // 16-ти битный идентификатор. Будет адресом массива всех данных
        struct {
            union {
                quint16 id_std_16; // 16-ти битный идентификатор. Будет адресом массива всех данных
                struct {           // идентификатор в двух 8-ми битных полях
                    quint8 id_1;   // id_body standart ID
                    quint8 id_2;   // id_hdr standart ID
                };
            };
            struct {         // идентификатор в двух 8-ми битных полях
                quint8 id_3; // 3-й байт id extended
                quint8 id_4; // 4-й байт id extended
            };
        };
    };
    union { // 4 байта ID
        quint32 time_stamp_32; // 16-ти битный идентификатор. Будет адресом массива всех данных
        struct {
                quint8 time_stamp_1;   // 1-й байт метки времени
                quint8 time_stamp_2;   // 2-й байт метки времени
                quint8 time_stamp_3;   // 3-й байт метки времени
                quint8 time_stamp_4;   // 4-й байт метки времени
        };
    };
    quint8 dataLen;          // длина переданных данных
    QByteArray data;  	// данные
    quint8 numberSerialMessage;  // под каким номером пришло сообщение
};

//-------------- Добавление контрольной суммы для адаптера EL205-1 -------------
QByteArray AddCRC(QString textCommand, int indexStartByte);

//-------------- Обработка CAN посылки для адаптера EL205-1 --------
QString handleCAN(formatCanMessage canMessage, QString prefix);

//-------------- Обработка ответа адаптера EL205-1 -----------------------------
QString handleAdapterAnswer(QByteArray answerArrayID, quint8 lengthDataAnswer, QByteArray answerArrayDATA);

//-------------- Парсинг потока адаптера EL205-1 -----------------------------
QStringList handleUartParsing(
        QByteArray dataRead,
        bool checkStandart,
        bool checkExtended,
        bool checkAnswer,
        QVector<QString> regNumList,
        QVector<QString> sampleNumList,
        registerFields *regDataArray,
        samplesFields *sampleDataArray,
        QHash<quint16, QByteArray> *canByIdStandart,
        QHash<quint32, QByteArray> *canByIdExtended);

#endif // ADAPTER_COMMANDS_H
