#ifndef DATA_H
#define DATA_H

#include <QString>
#include <QVector>
class Data
{
public:
    QVector<double> x;
    QVector<double> y;
    bool ok;
    Data(QVector<QString> &m1, QVector<QString> &n1);
    double sumy();
    double sumx();
    double avey();//平均数y
    double avex();
    double sumx_2();
    double sumy_2();
    double a_sumx_2();
    double a_sumy_2();
};

class DataVec{
public:
    Data *d1p;
    Data *d1r;
    Data *d2p;
    Data *d2r;
    Data *d3p;
    Data *d3r;
    DataVec(Data *a1p, Data *a2p=nullptr, Data *a3p=nullptr, Data *a1r=nullptr, Data *a2r=nullptr, Data *a3r=nullptr);
    double Line(double &b0, double &b1); //线性度Linearity,理想线性输入y=b0+b1x;
    double Hyster(); //迟滞性Hysteresis
    double Repeat();//重复性Repeatability
    int Cnfac();//置信因子Confidence factor
    double stdDeviation();
};

#endif // DATA_H
