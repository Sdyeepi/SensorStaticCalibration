#ifndef DATA_H
#define DATA_H

#include <QString>
#include <QVector>
#include <QPointF>
#include "qmath.h"
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
    QVector<double> points;//存储标定点(以x定义下的每一个)循环次数和两个特殊int转double数据,最后两个为dnp，dnr的pairs（）
    QVector<QVector<QPointF>> QPoints;//将数对转化为坐标点
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
    Data* getMaxPairsDNP();//得到正行程中行数最多的dnp列，作为实现getCountsPoints新需求的方法
    Data* getMaxPairsDNR();//得到反行程中行数最多的dnr列，作为实现getCountsPoints新需求的方法
    double getCountsPoints();//得到标定点(以x定义下的每一个)循环次数，即给points赋值   使用会在Repeat中两个stdDevia前面，以便于这两个函数不需要重复调用
                            //并且同时分别进行正反行程各点的标准偏差的计算,名字就不改了,最后得到整个分析过程的标准偏差
    //QVector<double> stdDeviaD();//正行程的各点标准偏差,, 废弃
    //QVector<double> stdDeviaI();//反行程的各点标准偏差,, 废弃
    double deltaHyster();//最大迟滞误差
    double Hyster(double &b1); //迟滞性Hysteresis
    double Repeat(int a=3);//重复性Repeatability，参数为置信因子，此处会用到stdDeviaD和stdDeviaI.getCountsPoints以及置信因子K算出的绝对误差
    int Cnfac(int a=3);//置信因子Confidence factor，上面将这简称为K,,废弃
    void Lsm(QVector<double> &b);//最小二乘法获取总的最小二乘曲线
    void BiP(QVector<double> &b);//两段点法求的直线
};

#endif // DATA_H
