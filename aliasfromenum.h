#ifndef ALIASFROMENUM_H
#define ALIASFROMENUM_H

#include <QString>
#include<QFileDialog>
#include<QDebug>
#include<QListWidgetItem>

class AliasFromEnum
{
public:
    AliasFromEnum();
    QString changeWorkDir(QString currentWorkDir);
    QListWidget* readFromFile(QVector<QString> sampleNumList, QString workDirPath);
};

#endif // ALIASFROMENUM_H
