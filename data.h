#ifndef DATA_H
#define DATA_H

#include <QString>
#include <QVector>
#include <QPointF>
#include <QDebug>
#include "qmath.h"
class Data
{
public:
    QVector<double> x;
    QVector<double> y;
    bool ok;
    Data(QVector<QString> &m1, QVector<QString> &n1);
    Data(QVector<double> &dx, QVector<double> &dy);
    int pairs();//返回x，y两个容器的单个的元素个数,即返回容器元素对数
    double max_x();
    double min_x();
    double maxx2y();
    double minx2y();
    double range_x();
    double rangex2y();
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
    QVector<QVector<QPointF>> QPoints;//将数对转化为坐标点，二维容器，最上层存放了各个队列对应的点集，最内层为点集的点。
                                      //QPointF[0]为d1p，1 d1r，2 d2p，3 d2r，4 d3p，5 d3r。若后面的队列有的话，没有队列则也没有相应的QPointF[i]
    DataVec();
    DataVec(Data &a1p);
    DataVec(Data &a1p, Data &a1r);
    DataVec(Data &a1p, Data &a1r, Data &a2p, Data &a2r);
    DataVec(Data &a1p, Data &a1r, Data &a2p, Data &a2r, Data &a3p, Data &a3r);
    DataVec(DataVec &dv1);
    DataVec operator=(DataVec &dv2);
    double DataVecMax_X();
    double DataVecMin_X();
    double DataVecMax_Y();//暂时不想实现
    double DataVecMin_Y();//暂时不想实现
    double fullScale(double &b1);//y=b0+b1*x，只需要斜率
    double predict_y(double &b0, double &b1, double x);//通过拟合直线和自变量x求出的y的估计值
    double deltaLmax(double &b0, double &b1);//同上，最大偏差的求法
    double deltaLmax2(double &b0, double &b1);
    double Line(double &b0, double &b1); //线性度Linearity,理想线性输入y=b0+b1*x;
    Data* getMaxPairsDNP();//得到正行程中行数最多的dnp列，作为实现getCountsPoints新需求的方法
    Data* getMaxPairsDNR();//得到反行程中行数最多的dnr列，作为实现getCountsPoints新需求的方法
    Data* getMaxPairsDNX();//得到所有中行数最多的列
    double getCountsPoints();//得到标定点(以x定义下的每一个)循环次数，即给points赋值   使用会在Repeat中两个stdDevia（均已除以根号n）前面，以便于这两个函数不需要重复调用
                            //并且同时分别进行正反行程各点的标准偏差的计算,名字就不改了,最后得到整个分析过程的标准偏差，
                            //关于为什么不在最后除以根号n的解释：当存在几个点他们的循环次数不一样时不能直接除以根号n，所以选择在两个stdDevia先一步除以根号n
    double getCountsPoints2();//上个getCountsPoints的复刻版本，但不调用points
    //QVector<double> stdDeviaD();//正行程的各点标准偏差,, 废弃
    //QVector<double> stdDeviaI();//反行程的各点标准偏差,, 废弃
    double deltaHyster();//最大迟滞误差,取平均值的
    double deltaHyster2();//最大迟滞误差，取每条的
    double Hyster(double &b1); //迟滞性Hysteresis
    double Repeat(double &b1,int a=3);//重复性Repeatability，参数为置信因子，此处会用到stdDeviaD和stdDeviaI.getCountsPoints以及置信因子K算出的绝对误差
    double Repeat2(double &b1, int a=3);//上个Repeat的复刻版本，因为调用getCountsPoints2而重置
    int Cnfac(int a=3);//置信因子Confidence factor，上面将这简称为K,,废弃
    void Lsm(QVector<double> &b);//最小二乘法获取总的最小二乘曲线
    void BiP(QVector<double> &b);//两段点法求的直线
};
double average(double x, int num);
#endif // DATA_H
