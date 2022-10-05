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
    int pairs();//返回x，y两个容器的单个的元素个数,即返回容器元素对数
    double max_x();
    double sumy();
    double sumx();
    double avey();//平均数y
    double avex();
    double sumx_2();
    double sumy_2();
    double sumxy();
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
    DataVec();
    DataVec(Data *a1p);
    DataVec(Data *a1p, Data *a1r);
    DataVec(Data *a1p, Data *a1r, Data *a2p, Data *a2r);
    DataVec(Data *a1p, Data *a1r, Data *a2p, Data *a2r, Data *a3p, Data *a3r);
    DataVec(DataVec &dv1);
    DataVec operator=(DataVec &dv2);
    double fullScale(double &b1);//y=b0+b1*x，只需要斜率
    double predict_y(double &b0, double &b1, double x);//通过拟合直线和自变量x求出的y的估计值
    double deltaLmax(double &b0, double &b1);//同上，最大偏差的求法
    double Line(double &b0, double &b1); //线性度Linearity,理想线性输入y=b0+b1*x;
    double stdDeviaD();//正行程的标准偏差
    double stdDeviaI();//反行程的标准偏差
    double deltaHyster();//最大迟滞误差
    double Hyster(double &b1); //迟滞性Hysteresis
    double Repeat();//重复性Repeatability，此处会用到stdDeviaD和stdDeviaI以及置信因子K算出的绝对误差
    int Cnfac(int a=3);//置信因子Confidence factor，上面将这简称为K
    void Lsm(QVector<double> &b);//最小二乘法获取总的最小二乘曲线
    void BiP(QVector<double> &b);//两段点法求的直线
};

#endif // DATA_H
