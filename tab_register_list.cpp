#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "aliasfromenum.h"



// выбор домашней директории с файлами инвертора

void MainWindow::on_pushButton_workDir_clicked() // из окна регистров
{
    cfg->getWorkDir(regAlias->changeWorkDir(cfg->setWorkDir())); // сохранить новое значение рабочей директории
    cfg->rewriteConfig();     // перезаписать файл конфигурации
    workDirPath = cfg->setWorkDir();
    ui->lineEdit_workDir->setText(workDirPath);
    ui->lineEdit_workDirSample->setText(workDirPath);
}

void MainWindow::on_pushButton_workDirSample_clicked() // из окна сэмплов
{
    cfg->getWorkDir(regAlias->changeWorkDir(cfg->setWorkDir())); // сохранить новое значение рабочей директории
    cfg->rewriteConfig();     // перезаписать файл конфигурации
    workDirPath = cfg->setWorkDir();
    ui->lineEdit_workDir->setText(workDirPath);
    ui->lineEdit_workDirSample->setText(workDirPath);
}



// генерация списка регистров из перечисления в проекте инвертора
void MainWindow::on_pushButton_genFromEnum_clicked()
{
    genRegFromEnum();
}

// генерация списка сэмплов из перечисления в проекте инвертора
void MainWindow::on_pushButton_genFromEnumSample_clicked()
{
    genSampleFromEnum();
}


// todo создать под генерацию списков общую функцию в классе
void MainWindow::genRegFromEnum()
{
    QString message = "Генерация списка всех регистров ПЧ";
    regNumList = RegnumClass::regnumArray();
    ui->listWidget_regNum->clear();
    int sizeArray = regNumList.size();
    for (int i = 0; i < sizeArray; i++) {
        QListWidgetItem *item = new QListWidgetItem;
        item->setText(QString::number(i, 10) + ": " + regNumList.at(i));
        item->setCheckState(Qt::Unchecked);
        ui->listWidget_regNum->addItem(item);
    }
    ui->statusbar->showMessage(message);
}

void MainWindow::genSampleFromEnum()
{
    QString message = "Генерация списка измерений ПЧ";
    sampleNumList  = SampleCanIdClass::fccanidArray();
    ui->listWidget_sampleNum->clear();
    int sizeArray = sampleNumList.size();
    for (int i = SampleCanIdClass::CAN_START_SAMPLE_ID; i < sizeArray; i++) { // отображать только samples
        QListWidgetItem *item = new QListWidgetItem;
        item->setText(QString::number(i, 10) + ": " + sampleNumList.at(i));
        item->setCheckState(Qt::Unchecked);
        ui->listWidget_sampleNum->addItem(item);
    }
    ui->statusbar->showMessage(message);
}


// запись регистров и сэмплов в файл. todo сделать общую функцию в классе

void MainWindow::on_pushButton_saveRegToFile_clicked()
{
    QString helperFile;
    helperFile = "Сохраняется файл РЕГИСТРОВ";
    QFileDialog dialogSave;
    QString pathSave = dialogSave.getSaveFileName(nullptr, helperFile, workDirPath, "Текстовый файл (*.txt)");
    QString message;

    QFile file(pathSave);
     // Открываем файл, создаем, если его не существует
    if((file.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Truncate))){
        QTextStream stream(&file);
        stream << ui->textEdit_selectedRegNum->toPlainText();
        message = "Карта регистров записана в файл ";
        file.close();
    }
    else message = "Ошибка записи файла ";

    ui->statusbar->showMessage(message + pathSave);
}

void MainWindow::on_pushButton_saveSampleToFile_clicked()
{
    QString helperFile;
    helperFile = "Сохраняется файл ИЗМЕРЕНИЙ";
    QFileDialog dialogSave;
    QString pathSave = dialogSave.getSaveFileName(nullptr, helperFile, workDirPath, "Текстовый файл (*.txt)");
    QString message;

    QFile file(pathSave);
     // Открываем файл, создаем, если его не существует
    if((file.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Truncate))){
        QTextStream stream(&file);
        stream << ui->textEdit_selectedSampleNum->toPlainText();
        message = "Карта измерений записана в файл ";
        file.close();
    }
    else message = "Ошибка записи файла ";

    ui->statusbar->showMessage(message + pathSave);
}



// прочитать из файла список регистров. todo сделать общую функцию в классе
void MainWindow::on_pushButton_readRegFromFile_clicked()
{
    QString helperFile;
    helperFile = "Выберите файл РЕГИСТРОВ";
    QString message;
    QFileDialog dialogOpen;
    QString fileName = dialogOpen.getOpenFileName(nullptr, helperFile, workDirPath, "Текстовый файл (*.txt)");
    QFile file(fileName);
    if(file.open(QIODevice::ReadWrite | QIODevice::Text)){
        QTextStream stream(&file);
        QString readStr = stream.readAll();
        QStringList stringArray = readStr.split("\n");
        int length = stringArray.size();

        ui->listWidget_regNum->clear();

        for (int i = 0; i < length; i++) {
            QListWidgetItem *item = new QListWidgetItem;

            QStringList separateNum = stringArray.at(i).split(":", Qt::SkipEmptyParts); // разделяем номер и имя
            if (separateNum.size() != 2){
                message = "Неверный формат списка ";
            }
            else {
                quint8 index = quint8(separateNum[0].toInt()); // номер до :
                QString name = separateNum[1].simplified();              // строка после :
                item->setText(stringArray.at(i));
                item->setCheckState(Qt::Unchecked);

                // инициализируем имена регистров !!! Непонятно, зачем. todo (если только пользователь хочет свои имена...)
                regNumList[index] = name;
                ui->listWidget_regNum->addItem(item);
                message = "Прочитаны регистры из файла ";
            }
        }
        file.close();
    }
    else message = "Ошибка чтения файла ";

    ui->statusbar->showMessage(message + fileName);
}

// прочитать из файла список измерений. todo сделать общую функцию в классе
void MainWindow::on_pushButton_readSampleFromFile_clicked()
{
//    ui->listWidget_sampleNum->regAlias->readFromFile(sampleNumList, workDirPath);
    QString helperFile;
    helperFile = "Выберите файл ИЗМЕРЕНИЙ";
    QString message;
    QFileDialog dialogOpen;
    QString fileName = dialogOpen.getOpenFileName(nullptr, helperFile, workDirPath, "Текстовый файл (*.txt)");
    QFile file(fileName);
    if(file.open(QIODevice::ReadWrite | QIODevice::Text)){
        QTextStream stream(&file);
        QString readStr = stream.readAll();
        QStringList stringArray = readStr.split("\n");
        int length = stringArray.size();

        ui->listWidget_sampleNum->clear();

        for (int i = 0; i < length; i++) {
            QListWidgetItem *item = new QListWidgetItem;

            QStringList separateNum = stringArray.at(i).split(":", Qt::SkipEmptyParts); // разделяем номер и имя
            if (separateNum.size() != 2){
                message = "Неверный формат списка ";
            }
            else {
                quint8 index = quint8(separateNum[0].toInt()); // номер до :
                QString name = separateNum[1].simplified();              // строка после :
                item->setText(stringArray.at(i));
                item->setCheckState(Qt::Unchecked);

                sampleNumList[index] = name;
                ui->listWidget_sampleNum->addItem(item);
                message = "Прочитан список измерений из файла ";
            }
        }
        file.close();
    }
    else message = "Ошибка чтения файла ";

    ui->statusbar->showMessage(message + fileName);
}


//-------- добавить выбранный регистр в таблицу и виджет просмотра
void MainWindow::addItemFromlistwidget(QListWidgetItem *item, quint8 index, QString regName){

    item->setForeground(Qt::red);
    regDataArray[index].displayed = true;
    ui->textEdit_selectedRegNum->append(item->text());
    addRowRegistersTable(index, regName); // добавляем выбранный регистр в таблицу
}

//-------- удалить выбранный регистр из таблицы и виджета просмотра
void MainWindow::deleteItemFromlistwidget(QListWidgetItem *item, quint8 index){
    item->setForeground(Qt::black);
    regDataArray[index].displayed = false;
    deleteRowRegistersTable(index);
    ui->textEdit_selectedRegNum->clear();
    int countRegnum = ui->listWidget_regNum->count();
    for(int i = 0; i < countRegnum; i++){
        QListWidgetItem *itemRegNum = ui->listWidget_regNum->item(i);
        if(itemRegNum->checkState() == Qt::Checked) ui->textEdit_selectedRegNum->append(itemRegNum->text());
    }
}

//------- ручной выбор регистров для вывода на экран
void MainWindow::on_listWidget_regNum_itemClicked(QListWidgetItem *item)
{
    QStringList separateNum = item->text().split(":", Qt::SkipEmptyParts); // разделяем номер и имя
    quint8 index = quint8(separateNum[0].toInt()); // номер до :
    QString regName = separateNum[1].simplified();              // строка после :

    if(item->checkState() == Qt::Checked) {
        addItemFromlistwidget(item, index, regName);
    }
    else {
        deleteItemFromlistwidget(item, index);
    }
}


//------- ручной выбор списка измерений для вывода на экран
void MainWindow::on_listWidget_sampleNum_itemClicked(QListWidgetItem *item)
{
    QStringList separateNum = item->text().split(":", Qt::SkipEmptyParts); // разделяем номер и имя
    int index = separateNum[0].toInt(); // номер до :
    QString sampleName = separateNum[1].simplified();              // строка после :

    if(item->checkState() == Qt::Checked) {
        addSampleFromlistwidget(item, index, sampleName);
    }
    else {
        deleteSampleFromlistwidget(item, index);
    }
}

//-------- добавить выбранный элемент измерений  в таблицу и виджет просмотра
void MainWindow::addSampleFromlistwidget(QListWidgetItem *item, int index, QString sampleName){
    item->setForeground(Qt::red);
    sampleDataArray[index].displayed = true;
    ui->textEdit_selectedSampleNum->append(item->text());
    addRowSamplesTable(index, sampleName); // добавляем выбранный регистр в таблицу
}

//-------- удалить выбранный элемент измерений  из таблицы и виджета просмотра
void MainWindow::deleteSampleFromlistwidget(QListWidgetItem *item, int index){
    item->setForeground(Qt::black);
    sampleDataArray[index].displayed = false;
    deleteRowSamplesTable(index);

    // чудовищная по скоростиисполнения реализация!!!!!! переделать todo
    ui->textEdit_selectedSampleNum->clear();
    int countRegnum = ui->listWidget_sampleNum->count();
    for(int i = 0; i < countRegnum; i++){
        QListWidgetItem *itemSampleNum = ui->listWidget_sampleNum->item(i);
        if(itemSampleNum->checkState() == Qt::Checked) ui->textEdit_selectedSampleNum->append(itemSampleNum->text());
    }
}

// выбрать весь список регистров. todo сделать общую функцию в классе
void MainWindow::on_pushButton_selectAll_clicked()
{
    int countNum;
    countNum = ui->listWidget_regNum->count();

    for(int i = 0; i < countNum; i++){
        QListWidgetItem *currentItem = nullptr;

        currentItem = ui->listWidget_regNum->item(i);

        QStringList separateNum = currentItem->text().split(":", Qt::SkipEmptyParts); // разделяем номер и имя
        int index = separateNum[0].toInt(); // номер до :
        QString name = separateNum[1].simplified(); // строка после :

        ui->listWidget_regNum->item(i)->setCheckState(Qt::Checked);
        addItemFromlistwidget(currentItem, quint8(index), name);
    }
}

// выбрать весь список измерений. todo сделать общую функцию в классе
void MainWindow::on_pushButton_selectAllSample_clicked()
{
    int countNum;
    countNum = ui->listWidget_sampleNum->count();

    for(int i = 0; i < countNum; i++){
        QListWidgetItem *currentItem = nullptr;

        currentItem = ui->listWidget_sampleNum->item(i);

        QStringList separateNum = currentItem->text().split(":", Qt::SkipEmptyParts); // разделяем номер и имя
        int index = separateNum[0].toInt(); // номер до :
        QString name = separateNum[1].simplified(); // строка после :

        ui->listWidget_sampleNum->item(i)->setCheckState(Qt::Checked);
        addSampleFromlistwidget(currentItem, index, name);
    }
}


// сбросить весь список регистров. todo сделать общую функцию в классе
void MainWindow::on_pushButton_resetAll_clicked()
{
    int countNum;
    countNum = ui->listWidget_regNum->count();
    for(int i = 0; i < countNum; i++){
        QListWidgetItem *item = nullptr;
        item = ui->listWidget_regNum->item(i);

        QStringList separateNum = item->text().split(":", Qt::SkipEmptyParts); // разделяем номер и имя
        quint8 index = quint8(separateNum[0].toInt()); // номер до :
        item->setCheckState(Qt::Unchecked);
        item->setForeground(Qt::black);
        regDataArray[index].displayed = false;
    }
    createRegistersTable();
    ui->textEdit_selectedRegNum->clear();
}

// сбросить весь список измерений. todo сделать общую функцию в классе
void MainWindow::on_pushButton_resetAllSample_clicked()
{
    int countNum;
    countNum = ui->listWidget_sampleNum->count();
    for(int i = 0; i < countNum; i++){
        QListWidgetItem *item = nullptr;
        item = ui->listWidget_sampleNum->item(i);

        QStringList separateNum = item->text().split(":", Qt::SkipEmptyParts); // разделяем номер и имя
        quint8 index = quint8(separateNum[0].toInt()); // номер до :
        item->setCheckState(Qt::Unchecked);
        item->setForeground(Qt::black);
        sampleDataArray[index].displayed = false;
    }

    createSamplesTable();
    ui->textEdit_selectedSampleNum->clear();
}

