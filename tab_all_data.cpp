#include "fc_connect.h"
#include "ui_fc_connect.h"
#include "el205_can_adapter.h"

#include "stylehelper.h"

//------------------ Чтение потока из serialport -----------------
void MainWindow::readStream()
{
    QByteArray dataRead;    // принятая куча из COM- порта
    dataRead.clear();

   // qDebug() << "запуск чтения порта: readStream";

    QStringList parsingDataList;
    parsingDataList.clear();

        quint64 bytesFromAdapter = serial->bytesAvailable(); // поменять на quint!!!
        if (bytesFromAdapter > 8) // если пришло достаточное количество байт, то читаем
        {
            showNumberBitesAvailable(bytesFromAdapter);
            dataRead = serial->readAll();
            // принятые данные распишутся по структурам и возвращаютсяв виде форматированных строк ответа
            parsingDataList = handleUartParsing(dataRead,
                                                        //    checkStandart,
                                                        //    checkExtended,
                                                        //    checkAnswer,
                                                            regNumList,
                                                            sampleNumList,
                                                            regDataArray,
                                                            sampleDataArray,
                                                            &canByIdStandart,
                                                            &canByIdExtended);
        }

    showAnswerFromCan(parsingDataList);
}


// поле вывода количества полученных байт из CAN шины
void MainWindow::showNumberBitesAvailable(quint64 bytesFromAdapter){
    ui->lineEdit_availableByte->setText(QString::number(bytesFromAdapter, 10));
    // qDebug() << "прочитано " << QString::number(serial->bytesAvailable(), 10) << " байт";
}

void MainWindow::showAnswerFromCan(QStringList parsingDataList){

    ui->lineEdit_availableMessage->setText(QString::number(parsingDataList.size(), 10));
//    qDebug() << "размер emptyBufferCounter = " << emptyBufferCounter;
    QStringList messageDataList;
    messageDataList.clear();

    quint64 lengthOfParsingData = parsingDataList.size();
    quint64 numberOfMessage = 0;

    if (lengthOfParsingData > 0){ // если ответ не нулевой, выводим его в текстовое поле регулируемой длины
        for (int i = 0; i < lengthOfParsingData; i++){
            if(parsingDataList[i].contains(STD_PREFIX, Qt::CaseSensitive)){
                numberOfMessage++;
                if(ui->checkBox_canStandart->isChecked()) messageDataList.append(parsingDataList[i]);
            }
            if(parsingDataList[i].contains(EXT_PREFIX, Qt::CaseSensitive)){
                numberOfMessage++;
                if(ui->checkBox_canExtended->isChecked()) messageDataList.append(parsingDataList[i]);
            }
            if(parsingDataList[i].contains("ansAD", Qt::CaseSensitive)){
                if(ui->checkBox_adapterAnswer->isChecked()) messageDataList.append(parsingDataList[i]);
            }

        }
        if(ui->radioButton_byChekBox->isChecked()){
            ui->checkBox_canStandart->setEnabled(true);
            ui->checkBox_canExtended->setEnabled(true);
            ui->checkBox_adapterAnswer->setEnabled(true);

            ui->textEdit_dataRead->append(messageDataList.join("\n"));
        }

        ui->pushButton_setRegistersFromFile->setEnabled(true);
        if(numberOfMessage > 0) emptyBufferCounter = 0;
    }
    else ui->pushButton_setRegistersFromFile->setEnabled(false); // требует тестировки!!!!

    if(emptyBufferCounter < 25) {
        if(emptyBufferCounter > 15) init_setConfigAdapter(); // если не было ничего прочитано, повторно конфигурируем адаптер
        emptyBufferCounter++;
    }
    else {
        if(ui->checkBox_lossConnection->checkState()){
            //  qDebug() << "Вывод предупреждения про частоту кэн";
              QMessageBox::warning(this, "Внимание","Проверьте подключение к CAN шине и скорость передачи данных.");

        }
        emptyBufferCounter = 0;
    }
}

void MainWindow::displayData(){
    regDisplayTable();       // вывод таблицы регистров
    sampleDisplayTable();    // вывод таблицы измерений
    displayHashID();         // вывод принятых пакетов по ID
    checkStatus();           // вывод статуса инвертора
    checkVector();           // вывод векторов тока и напряжений
}


void MainWindow::on_pushButton_startRead_clicked() // запуск цикличного чтения потока данных
{
    init_setConfigAdapter(); // перед стартом повторно прописать частоту can шины

    // запретить менять настройки CAN
    ui->comboBox_canFreq->setEnabled(false);
    ui->comboBox_readAllCan->setEnabled(false);
    ui->pushButton_setConfigAdapter->setEnabled(false);
    // разрешенные кнопки
    ui->pushButton_stopRead->setEnabled(true);
    ui->pushButton_startRead->setEnabled(false);
    ui->pushButton_disconnect->setEnabled(false);

    timer->start((ui->lineEdit_freqSampl->text().toInt())); // чтение данных по CAN с периодом lineEdit_freqSampl

    timerPlotter->start((ui->lineEdit_freqPlot->text().toInt())); // время обновление графиков из lineEdit_freqPlot
    timerPlotterUF->start(1000);  // обновление графика U/f раз в секунду

    emit EL205->SignalStartCan();
}

void MainWindow::on_pushButton_readOnce_clicked()
{
    readStream();
}

void MainWindow::on_pushButton_stopRead_clicked()
{
    timer->stop();
    timerPlotter->stop();
    timerPlotterUF->stop();
    emptyBufferCounter = 0; // запускать таймер проверки связи с нуля

    emit EL205->SignalStopCan();
}

void MainWindow::on_pushButton_clear_clicked() // очистить поле вывода потока
{
    ui->textEdit_dataRead->clear();
}

//------- изменить максимальный размер блока для вывода выбранных посылок
void MainWindow::on_lineEdit_volumeTextRead_editingFinished()
{
      ui->textEdit_dataRead->document()->setMaximumBlockCount(ui->lineEdit_volumeTextRead->text().toInt());
}

//------- изменить частоту опроса CAN-адаптера
void MainWindow::on_lineEdit_freqSampl_editingFinished()
{
    timer->setInterval((ui->lineEdit_freqSampl->text().toInt()));
}


void MainWindow::slotStartCan(){
    qDebug() << "слот на запуск любого CAN адаптера";
    ui->pushButton_startInv->setEnabled(true);
    ui->pushButton_stopInv->setEnabled(true);
    ui->pushButton_alarmInv->setEnabled(true);
    ui->pushButton_startInv_panel->setEnabled(true);
    ui->pushButton_stopInv_panel->setEnabled(true);
    ui->pushButton_alarmInv_panel->setEnabled(true);

    ui->textEdit_invertorStatus->setEnabled(true);

    ui->lineEdit_currentFreq->setEnabled(true);
    ui->lineEdit_registerValue_1->setEnabled(true);
    ui->lineEdit_registerValue_2->setEnabled(true);
    ui->lineEdit_registerValue_3->setEnabled(true);

    ui->groupBox_UF->setEnabled(true);
    ui->table_UF->setEnabled(true);

   ui->statusbar->showMessage("Запущено чтение CAN");
}

void MainWindow::slotStopCan(){
    qDebug() << "слот на останов любого CAN адаптера";
    // разрешить менять настройки CAN
    ui->comboBox_canFreq->setEnabled(true);
    ui->comboBox_readAllCan->setEnabled(true);
    ui->pushButton_setConfigAdapter->setEnabled(true);
    // разрешенные кнопки
    ui->pushButton_stopRead->setEnabled(false);
    ui->pushButton_startRead->setEnabled(true);
    ui->pushButton_disconnect->setEnabled(true);
    ui->pushButton_setRegistersFromFile->setEnabled(false);

    ui->pushButton_startInv->setStyleSheet(StyleHelper::getDisableButtonStyle());
    ui->pushButton_stopInv->setStyleSheet(StyleHelper::getDisableButtonStyle());
    ui->pushButton_alarmInv->setStyleSheet(StyleHelper::getDisableButtonStyle());

    ui->pushButton_startInv->setEnabled(false);
    ui->pushButton_stopInv->setEnabled(false);
    ui->pushButton_alarmInv->setEnabled(false);

    ui->textEdit_invertorStatus->setEnabled(false);

    ui->horizontalSlider->setEnabled(false);

    ui->lineEdit_currentFreq->setEnabled(false);
    ui->lineEdit_registerValue_1->setEnabled(false);
    ui->lineEdit_registerValue_2->setEnabled(false);
    ui->lineEdit_registerValue_3->setEnabled(false);

    ui->groupBox_UF->setEnabled(false);
    ui->table_UF->setEnabled(false);

    ui->statusbar->showMessage("Остановка чтения CAN");
}
