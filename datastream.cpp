#include "datastream.h"


datastream::datastream(QString &path_para)
{
    path = path_para;
}

datastream::datastream(QString &path_para, QStringList &contentList_para)
{
    path = path_para;
    ctnList = contentList_para;
}

QString datastream::getPath()
{
    return path;
}

QStringList &datastream::getContentList()
{
    return ctnList;
}

bool datastream::ReadTxt()
{
    QFile file(path);
    //qDebug()<<"path:"<<path;//看看输出什么
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QMessageBox::warning(NULL, QString("出错了"), QString("文件打开失败"));
        return 0;
    }
    QTextStream in(&file);
    while(!in.atEnd()){
        ctnList.append(in.readLine());
    }
    return 1;
    //qDebug()<<"contentList:"<<ctnList;
}

void datastream::transferTxt2Forms()
{
    QRegExp rx(QString("(([-+]?)(\\d+)((\\.\\d*)?))"));
    for(QStringList::Iterator iterSL=ctnList.begin();iterSL != ctnList.end();iterSL++){
        iterSL->replace(QString("\t"), QString(","));
        iterSL->replace(QString(" "), QString(","));
        QStringList list;
        int position = 0;
        while((position = rx.indexIn(*iterSL, position)) != -1){
            list << rx.cap(1);
            position += rx.matchedLength();
        }
        ctnparts.append(list);
    }
    /*qDebug()<<"contentList:"<<contentList;
    qDebug()<<"contentparts"<<contentparts;*/
    //debug测试成功
}
