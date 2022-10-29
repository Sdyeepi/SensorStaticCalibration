#ifndef DATASTREAM_H
#define DATASTREAM_H

#include <QString>
#include <QDir>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
#include <QRegExp>

class datastream : public QDataStream
{
public:
    QVector<QStringList> ctnparts;//Vector(全部)->List(每一行)>String(每一块数据)
    //上行 为公共类数据成员
    datastream();
    datastream(QString &path_para);
    datastream(QString &path_para,  QStringList &contentList_para);
    QString getPath();
    QStringList& getContentList();
    QStringList& getContentParts();
    void ReadTxt();
    void WriteTxt(QStringList& outputList);
    void transferTxt2Forms();//用正则表达式
private:
    QString path;
    QStringList ctnList;//存储格式为list的每个String为一行，所以后面还得以类空格重新筛选
};

#endif // DATASTREAM_H
