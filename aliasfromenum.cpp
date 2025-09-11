#include "aliasfromenum.h"

AliasFromEnum::AliasFromEnum()
{

}

QString AliasFromEnum::changeWorkDir(QString currentWorkDir){
    qDebug()<< "AliasFromEnum: смена директории";
    QString workDirPath;
    workDirPath = QFileDialog::getExistingDirectory(nullptr, "Directory Dialog", currentWorkDir);
    if(!workDirPath.isEmpty()) currentWorkDir = workDirPath ;
    return currentWorkDir;
}

// прочитать из файла список измерений. todo сделать общую функцию в классе
QListWidget* AliasFromEnum::readFromFile(QVector<QString> numList, QString workDirPath)
{
    QListWidget *listNum = new QListWidget;
    listNum->clear();

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

//        ui->listWidget_sampleNum->clear();


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

                numList[index] = name;
                //ui->listWidget_sampleNum->addItem(item);
                listNum->addItem(item);
                message = "Прочитан список измерений из файла ";
            }
        }
        file.close();
    }
    else message = "Ошибка чтения файла ";

   // ui->statusbar->showMessage(message + fileName);
    return listNum;
}
