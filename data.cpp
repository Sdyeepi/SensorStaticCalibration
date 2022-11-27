#include "data.h"
//此处添加了检查QString是否为空，来决定是否录入数据，同时保证了数据的有序性
Data::Data(QVector<QString> &m1, QVector<QString> &n1)                              //proved
{
    for(int i = 0;i < m1.size() && i < n1.size();i++){
        if(m1[i] != NULL && n1[i] != NULL){
            x.push_back(m1[i].toDouble(&ok));
            y.push_back(n1[i].toDouble(&ok));
        }
    }
    /*for(int i = 0;i < n1.size();i++){
        if(n1[i] !=NULL)
            y.push_back(n1[i].toDouble(&ok));
    }*/
    //此处注释掉，保证成对录入数据
}

Data::Data(QVector<double> &dx, QVector<double> &dy)
{
    x = dx;
    y = dy;
}
int Data::pairs(){                                                                  //proved
    return x.size();
}

double Data::max_x()                                                                //proved
{
    double max = x[x.size() - 1];
    for(int i = x.size() - 1;i >= 0;i--){
        if(max < x[i])
            max = x[i];
    }
    return max;
}

double Data::min_x()
{
    double min = x[0];
    for(int i = 0;i < x.size();i++){
        if(min > x[i])
            min = x[i];
    }
    return min;
}

double Data::maxx2y()
{
    double max = max_x();
    for(int i = x.size()-1;i >= 0;i--){
        if(max == x[i])
            return y[i];
    }
    return 0;
}

double Data::minx2y()
{
    double min = min_x();
    for(int i = 0;i < x.size();i++){
        if(min == x[i])
            return y[i];
    }
    return 0;
}

double Data::range_x()
{
    double max = x[0];
    double min = x[0];
    for(int i = 0;i < x.size();i++){
        if(max < x[i])
            max = x[i];
        if(min > x[i])
            min = x[i];
    }
    return max - min;
}

double Data::rangex2y()
{
    return maxx2y() - minx2y();
}

double Data::sumx(){                                                                //proved
    double sum = 0;
    for(int i = 0;i < x.size();i++){
        sum += x[i];
    }
    return sum;
}
double Data::sumy(){                                                                //proved
    double sum = 0;
    for(int i = 0;i < y.size();i++){
        sum += y[i];
    }
    return sum;
}

double Data::avex(){                                                                //unused
    return sumx()/x.size();
}
double Data::avey(){                                                                //unused
    return sumy()/y.size();
}

double Data::sumx_2(){                                                              //proved
    double sum = 0;
    for(int i = 0;i < x.size();i++){
        sum += x[i] * x[i];
    }
    return sum;
}
double Data::sumy_2(){                                                              //proved
    double sum = 0;
    for(int i = 0;i < y.size();i++){
        sum += y[i] * y[i];
    }
    return sum;
}
double Data::sumxy(){                                                               //proved
    double sum = 0;
    for(int i = 0;i <x.size();i++){
        sum += x[i] * y[i];
    }
    return sum;
}

double Data::a_sumx_2(){                                                            //unused
    return sumx_2()/x.size();
}
double Data::a_sumy_2(){                                                            //unused
    return sumy_2()/y.size();
}
DataVec::DataVec()                                                                  //won't be used
{
    d1p = nullptr;
    d2p = nullptr;
    d3p = nullptr;
    d1r = nullptr;
    d2r = nullptr;
    d3r = nullptr;
    points.resize(0);
    QPoints.resize(0);
}

DataVec::DataVec(Data &a1p){                                                        //proved
    d1p = &a1p;
    d2p = nullptr;
    d3p = nullptr;
    d1r = nullptr;
    d2r = nullptr;
    d3r = nullptr;
    points.resize(d1p->pairs());
    QPoints.resize(1);
    QPoints[0].resize(d1p->pairs());
    for(int i = 0;i < d1p->pairs();i++){
        QPoints[0][i] = QPointF(d1p->x[i], d1p->y[i]);
    }
}//测试用
DataVec::DataVec(Data &a1p, Data &a1r){                                             //proved
    d1p = &a1p;
    d1r = &a1r;
    d2p = nullptr;
    d2r = nullptr;
    d3p = nullptr;
    d3r = nullptr;
    Data *dnp = getMaxPairsDNP();
    Data *dnr = getMaxPairsDNR();
    if(dnr != d1p){
        points.resize(dnp->pairs() + dnr->pairs());
    }
    else points.resize(dnp->pairs());
    QPoints.resize(2);
    for(int i = 0;i < 2;i++){
        QPoints[i].resize(select(i)->pairs());
        for(int j = 0;j < select(i)->pairs();j++){
            QPoints[i][j] = QPointF(select(i)->x[j], select(i)->y[j]);
        }
    }
}
DataVec::DataVec(Data &a1p, Data &a1r, Data &a2p, Data &a2r){                       //proved
    d1p = &a1p;
    d1r = &a1r;
    d2p = &a2p;
    d2r = &a2r;
    d3p = nullptr;
    d3r = nullptr;
    Data *dnp = getMaxPairsDNP();
    Data *dnr = getMaxPairsDNR();
    if(dnr != d1p){
        points.resize(dnp->pairs() + dnr->pairs());
    }
    else points.resize(dnp->pairs());
    QPoints.resize(4);
    for(int i = 0;i < 4;i++){
        QPoints[i].resize(select(i)->pairs());
        for(int j = 0;j < select(i)->pairs();j++){
            QPoints[i][j] = QPointF(select(i)->x[j], select(i)->y[j]);
        }
    }
}
DataVec::DataVec(Data &a1p, Data &a1r, Data &a2p, Data &a2r, Data &a3p, Data &a3r)  //proved
{
    d1p = &a1p;
    d2p = &a2p;
    d3p = &a3p;
    d1r = &a1r;
    d2r = &a2r;
    d3r = &a3r;
    Data *dnp = getMaxPairsDNP();
    Data *dnr = getMaxPairsDNR();
    if(dnr != d1p){
        points.resize(dnp->pairs() + dnr->pairs());
    }
    else points.resize(dnp->pairs());
    QPoints.resize(6);
    for(int i = 0;i < 6;i++){
        QPoints[i].resize(select(i)->pairs());
        for(int j = 0;j < select(i)->pairs();j++){
            QPoints[i][j] = QPointF(select(i)->x[j], select(i)->y[j]);
        }
    }
}

DataVec::DataVec(DataVec &dv1)                                                      //proved
{
    d1p = dv1.d1p;
    d2p = dv1.d2p;
    d3p = dv1.d3p;
    d1r = dv1.d1r;
    d2r = dv1.d2r;
    d3r = dv1.d3r;
    points = dv1.points;
    QPoints = dv1.QPoints;
}

DataVec DataVec::operator=(DataVec &dv2)                                            //proved
{
    d1p = dv2.d1p;
    d2p = dv2.d2p;
    d3p = dv2.d3p;
    d1r = dv2.d1r;
    d2r = dv2.d2r;
    d3r = dv2.d3r;
    points = dv2.points;
    QPoints = dv2.QPoints;
    return *this;
}

Data* DataVec::select(int n)
{
    switch (n) {
    case 6:
        return d3r;
    case 5:
        return d3p;
    case 4:
        return d2r;
    case 3:
        return d2p;
    case 2:
        return d1r;
    default:
        return d1p;
    }
}

double DataVec::DataVecMax_X()
{
    return getMaxPairsDNX()->max_x();
}

double DataVec::DataVecMin_X()
{
    return getMaxPairsDNX()->min_x();
}

double DataVec::fullScale(double &b1)                                               //proved,算法需要改，d1p（输入列和第一列）的自变量量程不一定最大
{
    return d1p->range_x() * b1 ;
}

double DataVec::predict_y(double &b0, double &b1, double x)
{
    return b0 + b1 * x;
}

double DataVec::deltaLmax2(double &b0, double &b1)                            //proved,但不采用，理由见中间
{
    double delta1 = 0;
    QVector<double> deltas;
    //计算同一x下的平均值,不考虑过于复杂，直接面对3对正方行程吧
    for(int i = 0;i < d1p->pairs();i++){
        deltas.append((d1p->y[i] + d1r->y[i] + d2p->y[i] + d2r->y[i] + d3p->y[i] + d3r->y[i]) / 6);
        deltas[i] = qAbs(deltas[i] - predict_y(b0, b1, d1p->x[i]));
    }
    for(int i = 0;i < deltas.size();i++){
        delta1 = delta1>deltas[i]?delta1:deltas[i];
    }
    return delta1;
    //原算法
    /*    for(int i = 0;i < d1p->y.size();i++){
        if(delta1 < qAbs(d1p->y[i] - predict_y(b0, b1, d1p->x[i])))
            delta1 = qAbs(d1p->y[i] - predict_y(b0, b1, d1p->x[i]));
    }
    if(d1r != nullptr){
        for(int i = 0;i < d1r->y.size();i++){
            if(delta1 < qAbs(d1r->y[i] - predict_y(b0, b1, d1r->x[i])))
                delta1 = qAbs(d1r->y[i] - predict_y(b0, b1, d1r->x[i]));
        }
    }
    if(d2p != nullptr){
        for(int i = 0;i < d2p->y.size();i++){
            if(delta1 < qAbs(d2p->y[i] - predict_y(b0, b1, d2p->x[i])))
                delta1 = qAbs(d2p->y[i] - predict_y(b0, b1, d2p->x[i]));
        }
    }
    if(d2r != nullptr){
        for(int i = 0;i < d2r->y.size();i++){
            if(delta1 < qAbs(d2r->y[i] - predict_y(b0, b1, d2r->x[i])))
                delta1 = qAbs(d2r->y[i] - predict_y(b0, b1, d2r->x[i]));
        }
    }
    if(d3p != nullptr){
        for(int i = 0;i < d3p->y.size();i++){
            if(delta1 < qAbs(d3p->y[i] - predict_y(b0, b1, d3p->x[i])))
                delta1 = qAbs(d3p->y[i] - predict_y(b0, b1, d3p->x[i]));
        }
    }
    if(d3r != nullptr){
        for(int i = 0;i < d3r->y.size();i++){
            if(delta1 < qAbs(d3r->y[i] - predict_y(b0, b1, d3r->x[i])))
                delta1 = qAbs(d3r->y[i] - predict_y(b0, b1, d3r->x[i]));
        }
    }
    return delta1;*/

}

double DataVec::deltaLmax(double &b0, double &b1)                                   //proved,在采用
{
    QVector<QVector<double>> xyaver(2);
    Data* dnx = getMaxPairsDNX();
    if(d1r!=nullptr&&d2p!=nullptr&&d2r!=nullptr&&d3p!=nullptr&&d3r!=nullptr){
        int counts = 0;
        xyaver[0] = dnx->x;
        xyaver[1].resize(dnx->pairs());
        for(int i = 0; i < dnx->pairs();i++){
            for(int j = 0; j < d1p->pairs();j++){
                if(dnx->x[i] == d1p->x[j]){
                    xyaver[1][i] += d1p->y[j];
                    counts++;
                    break;
                }
            }
            for(int j = 0; j < d2p->pairs();j++){
                if(dnx->x[i] == d2p->x[j]){
                    xyaver[1][i] += d2p->y[j];
                    counts++;
                    break;
                }
            }
            for(int j = 0; j < d3p->pairs();j++){
                if(dnx->x[i] == d3p->x[j]){
                    xyaver[1][i] += d3p->y[j];
                    counts++;
                    break;
                }
            }
            for(int j = 0; j < d1r->pairs();j++){
                if(dnx->x[i] == d1r->x[j]){
                    xyaver[1][i] += d1r->y[j];
                    counts++;
                    break;
                }
            }
            for(int j = 0; j < d2r->pairs();j++){
                if(dnx->x[i] == d2r->x[j]){
                    xyaver[1][i] += d2r->y[j];
                    counts++;
                    break;
                }
            }
            for(int j = 0; j < d3r->pairs();j++){
                if(dnx->x[i] == d3r->x[j]){
                    xyaver[1][i] += d3r->y[j];
                    counts++;
                    break;
                }
            }
            xyaver[1][i] = xyaver[1][i] / counts;
            counts = 0;
        }
        //上面是计算所有列的y的平均值，现在计算各平均值与预测直线的差值
        for(int i = 0; i < xyaver[1].size();i++){
            xyaver[1][i] = qAbs(xyaver[1][i] - predict_y(b0, b1, xyaver[0][i]));
        }
        //上面的xyaver[1]的所有值已经是原各平均值与预测直线的差值的绝对值，现在求这些绝对值的最大值
        for(int i = 1; i < xyaver[1].size();i++){
            xyaver[1][0] = xyaver[1][0]>xyaver[1][i] ? xyaver[1][0] : xyaver[1][i];
        }
        return xyaver[1][0];//xyaver[1][0]为用来存储最大值的地方
    }
    else if(d1r!=nullptr&&d2p!=nullptr&&d2r!=nullptr&&d3p!=nullptr){
        int counts = 0;
        xyaver[0] = dnx->x;
        xyaver[1].resize(dnx->pairs());
        for(int i = 0; i < dnx->pairs();i++){
            for(int j = 0; j < d1p->pairs();j++){
                if(dnx->x[i] == d1p->x[j]){
                    xyaver[1][i] += d1p->y[j];
                    counts++;
                    break;
                }
            }
            for(int j = 0; j < d2p->pairs();j++){
                if(dnx->x[i] == d2p->x[j]){
                    xyaver[1][i] += d2p->y[j];
                    counts++;
                    break;
                }
            }
            for(int j = 0; j < d3p->pairs();j++){
                if(dnx->x[i] == d3p->x[j]){
                    xyaver[1][i] += d3p->y[j];
                    counts++;
                    break;
                }
            }
            for(int j = 0; j < d1r->pairs();j++){
                if(dnx->x[i] == d1r->x[j]){
                    xyaver[1][i] += d1r->y[j];
                    counts++;
                    break;
                }
            }
            for(int j = 0; j < d2r->pairs();j++){
                if(dnx->x[i] == d2r->x[j]){
                    xyaver[1][i] += d2r->y[j];
                    counts++;
                    break;
                }
            }
            xyaver[1][i] = xyaver[1][i] / counts;
            counts = 0;
        }
        for(int i = 0; i < xyaver[1].size();i++){
            xyaver[1][i] = qAbs(xyaver[1][i] - predict_y(b0, b1, xyaver[0][i]));
        }
        for(int i = 1; i < xyaver[1].size();i++){
            xyaver[1][0] = xyaver[1][0]>xyaver[1][i] ? xyaver[1][0] : xyaver[1][i];
        }
        return xyaver[1][0];
    }
    else if(d1r!=nullptr&&d2p!=nullptr&&d2r!=nullptr){
        int counts = 0;
        xyaver[0] = dnx->x;
        xyaver[1].resize(dnx->pairs());
        for(int i = 0; i < dnx->pairs();i++){
            for(int j = 0; j < d1p->pairs();j++){
                if(dnx->x[i] == d1p->x[j]){
                    xyaver[1][i] += d1p->y[j];
                    counts++;
                    break;
                }
            }
            for(int j = 0; j < d2p->pairs();j++){
                if(dnx->x[i] == d2p->x[j]){
                    xyaver[1][i] += d2p->y[j];
                    counts++;
                    break;
                }
            }
            for(int j = 0; j < d1r->pairs();j++){
                if(dnx->x[i] == d1r->x[j]){
                    xyaver[1][i] += d1r->y[j];
                    counts++;
                    break;
                }
            }
            for(int j = 0; j < d2r->pairs();j++){
                if(dnx->x[i] == d2r->x[j]){
                    xyaver[1][i] += d2r->y[j];
                    counts++;
                    break;
                }
            }
            xyaver[1][i] = xyaver[1][i] / counts;
            counts = 0;
        }
        for(int i = 0; i < xyaver[1].size();i++){
            xyaver[1][i] = qAbs(xyaver[1][i] - predict_y(b0, b1, xyaver[0][i]));
        }
        for(int i = 1; i < xyaver[1].size();i++){
            xyaver[1][0] = xyaver[1][0]>xyaver[1][i] ? xyaver[1][0] : xyaver[1][i];
        }
        return xyaver[1][0];
    }
    else if(d1r!=nullptr&&d2p!=nullptr){
        int counts = 0;
        xyaver[0] = dnx->x;
        xyaver[1].resize(dnx->pairs());
        for(int i = 0; i < dnx->pairs();i++){
            for(int j = 0; j < d1p->pairs();j++){
                if(dnx->x[i] == d1p->x[j]){
                    xyaver[1][i] += d1p->y[j];
                    counts++;
                    break;
                }
            }
            for(int j = 0; j < d2p->pairs();j++){
                if(dnx->x[i] == d2p->x[j]){
                    xyaver[1][i] += d2p->y[j];
                    counts++;
                    break;
                }
            }
            for(int j = 0; j < d1r->pairs();j++){
                if(dnx->x[i] == d1r->x[j]){
                    xyaver[1][i] += d1r->y[j];
                    counts++;
                    break;
                }
            }
            xyaver[1][i] = xyaver[1][i] / counts;
            counts = 0;
        }
        for(int i = 0; i < xyaver[1].size();i++){
            xyaver[1][i] = qAbs(xyaver[1][i] - predict_y(b0, b1, xyaver[0][i]));
        }
        for(int i = 1; i < xyaver[1].size();i++){
            xyaver[1][0] = xyaver[1][0]>xyaver[1][i] ? xyaver[1][0] : xyaver[1][i];
        }
        return xyaver[1][0];
    }
    else if(d1r!=nullptr){
        int counts = 0;
        xyaver[0] = dnx->x;
        xyaver[1].resize(dnx->pairs());
        for(int i = 0; i < dnx->pairs();i++){
            for(int j = 0; j < d1p->pairs();j++){
                if(dnx->x[i] == d1p->x[j]){
                    xyaver[1][i] += d1p->y[j];
                    counts++;
                    break;
                }
            }
            for(int j = 0; j < d1r->pairs();j++){
                if(dnx->x[i] == d1r->x[j]){
                    xyaver[1][i] += d1r->y[j];
                    counts++;
                    break;
                }
            }
            xyaver[1][i] = xyaver[1][i] / counts;
            counts = 0;
        }
        for(int i = 0; i < xyaver[1].size();i++){
            xyaver[1][i] = qAbs(xyaver[1][i] - predict_y(b0, b1, xyaver[0][i]));
        }
        for(int i = 1; i < xyaver[1].size();i++){
            xyaver[1][0] = xyaver[1][0]>xyaver[1][i] ? xyaver[1][0] : xyaver[1][i];
        }
        return xyaver[1][0];
    }
    else{
        xyaver[0] = d1p->x;
        xyaver[1] = d1p->y;
        for(int i = 0; i < xyaver.size();i++){
            xyaver[1][i] = qAbs(xyaver[1][i] - predict_y(b0, b1, xyaver[0][i]));
        }
        for(int i = 1; i < xyaver.size();i++){
            xyaver[1][0] = xyaver[1][0]>xyaver[1][i] ? xyaver[1][0] : xyaver[1][i];
        }
        return xyaver[1][0];
    }
}

double DataVec::Line(double &b0, double &b1)                                        //proved
{
    return deltaLmax(b0, b1) / fullScale(b1) * 100;//此处为百分数，已×100
}

Data *DataVec::getMaxPairsDNP()                                                     //proved
{
    if(d1p!=nullptr&&d2p!=nullptr&&d3p!=nullptr){
            if(d1p->pairs()>=d2p->pairs()&&d1p->pairs()>=d3p->pairs())
                return d1p;
            else if(d2p->pairs()>=d1p->pairs()&&d2p->pairs()>=d3p->pairs())
                return d2p;
            else return d3p;
        }
    else if(d1p!=nullptr&&d2p!=nullptr){
            if(d1p->pairs()>=d2p->pairs())
                return d1p;
            else return d2p;
        }
    else return d1p;
}

Data *DataVec::getMaxPairsDNR()                                                     //proved
{
    if(d1r!=nullptr&&d2r!=nullptr&&d3r!=nullptr){
            if(d1r->pairs()>=d2r->pairs()&&d1r->pairs()>=d3r->pairs())
                return d1r;
            else if(d2r->pairs()>=d1r->pairs()&&d2r->pairs()>=d3r->pairs())
                return d2r;
            else return d3r;
        }
    else if(d1r!=nullptr&&d2r!=nullptr){
            if(d1r->pairs()>=d2r->pairs())
                return d1r;
            else return d2r;
        }
    else if (d1r!=nullptr)
        return d1r;//此处用函数记得检验d1r是否为空
    return d1p;//返回d1p说明无其他dnr
}

Data *DataVec::getMaxPairsDNX()                                                     //proved
{
    if(getMaxPairsDNP()->pairs() >= getMaxPairsDNR()->pairs())
        return getMaxPairsDNP();
    else return getMaxPairsDNR();
}

double DataVec::getCountsPoints()                                                   //proved，最小二乘法用
{
    //计算各x定义标定点的循环次数，以d1p的x为基础定点，所以要求为第一列正行程必须为覆盖全自变量x的完整队列
    //否则将引入较麻烦的算法实现
    //以下是d1p x的定点算法，设想中关于解决这要求的算法是选择出行数最多的dnx列(2022.10.07 22:30,还未改算法，需要用到Data*getMaxPairsDNX())
    //已改 2022.10.10
    Data *dnp = getMaxPairsDNP();
    Data *dnr = getMaxPairsDNR();
    int a = dnp->pairs();
    int b = dnr->pairs();
    QVector<double> sump(a,0);
    QVector<double> sumr(b,0);
    QVector<double> pNum1(a, 0);
    QVector<double> pNum2(a, 0);
    QVector<double> pNum3(a, 0);
    QVector<double> rNum1(b, 0);
    QVector<double> rNum2(b, 0);
    QVector<double> rNum3(b, 0);
    QVector<double> pDevia(a, 0);
    QVector<double> rDevia(b, 0);
    double stdp = 0;
    double stdr = 0;
    double stD4All = 0;
    for(int i = 0;i < a;i++){
        if(d1p != nullptr)
        {
            for(int j = 0;j < d1p->pairs();j++){
                if(dnp->x[i]==d1p->x[j]){
                    points[i]++;
                    sump[i] += d1p->y[j];
                    pNum1[i] = d1p->y[j];
                    break;
                }
            }
        }
        if(d2p != nullptr)
        {
            for(int j = 0;j < d2p->pairs();j++){
                if(dnp->x[i]==d2p->x[j]){
                    points[i]++;
                    sump[i] += d2p->y[j];
                    pNum2[i] = d2p->y[j];
                    break;
                }
            }
        }
        if(d3p != nullptr)
        {
            for(int j = 0;j < d3p->pairs();j++){
                if(dnp->x[i]==d3p->x[j]){
                    points[i]++;
                    sump[i] += d3p->y[j];
                    pNum3[i] = d3p->y[j];
                    break;
                }
            }
        }
        sump[i] = sump[i]/points[i];//此处成为相同x下正行程所有y值的平均值
    }
    if(dnr != d1p){
        for(int i = 0;i < b;i++){
            if(d1r != nullptr)
            {
                for(int j = 0;j < d1r->pairs();j++){
                    if(dnr->x[i]==d1r->x[j]){
                        points[i + a]++;
                        sumr[i] += d1r->y[j];
                        rNum1[i] = d1r->y[j];
                        break;
                    }
                }
            }
            if(d2r != nullptr)
            {
                for(int j = 0;j < d2r->pairs();j++){
                    if(dnr->x[i]==d2r->x[j]){
                        points[i + a]++;
                        sumr[i] += d2r->y[j];
                        rNum2[i] = d2r->y[j];
                        break;
                    }
                }
            }
            if(d3r != nullptr)
            {
                for(int j = 0;j < d3r->pairs();j++){
                    if(dnr->x[i]==d3r->x[j]){
                        points[i + a]++;
                        sumr[i] += d3r->y[j];
                        rNum3[i] = d3r->y[j];
                        break;
                    }
                }
            }
            sumr[i] = sumr[i] / points[i + a];//此处成为相同x下反行程所有y值的平均值
        }
    }
    //以下是计算残差平方并存入相应的位置
    for(int i = 0;i < a;i++){
        if(pNum1[i] != 0)
            pNum1[i] = (pNum1[i] - sump[i]) * (pNum1[i] - sump[i]);
        if(pNum2[i] != 0)
            pNum2[i] = (pNum2[i] - sump[i]) * (pNum2[i] - sump[i]);
        if(pNum3[i] != 0)
            pNum3[i] = (pNum3[i] - sump[i]) * (pNum3[i] - sump[i]);
    }
    for(int j = 0;j < b;j++){
        if(rNum1[j] != 0)
            rNum1[j] = (rNum1[j] - sumr[j]) * (rNum1[j] - sumr[j]);
        if(rNum2[j] != 0)
            rNum2[j] = (rNum2[j] - sumr[j]) * (rNum2[j] - sumr[j]);
        if(rNum3[j] != 0)
            rNum3[j] = (rNum3[j] - sumr[j]) * (rNum3[j] - sumr[j]);
    }
    //以下是残差平方和计算，并存入pDevia，rDevia
    for(int i = 0;i < a;i++){
        pDevia[i] += pNum1[i] + pNum2[i] + pNum3[i];
        pDevia[i] = pDevia[i] / points[i] / (points[i] - 1);                //都是没有求根号的，此处除以n和n-1之积
    }
    for(int i = 0;i < b;i++){
        rDevia[i] += rNum1[i] + rNum2[i] + rNum3[i];
        rDevia[i] = rDevia[i] / points[i + a] / (points[i + a] - 1);        //都是没有求根号的，此处除以n和n-1之积
    }
    //计算最后整个测试过程的标准偏差
    for(int i = 0;i < a;i++){
        stdp += pDevia[i];
    }
    for(int i = 0;i < b;i++){
        stdr += rDevia[i];
    }
    stD4All = (stdp + stdr) / (a + b);
    return qSqrt(stD4All);
}

double DataVec::getCountsPoints2()              //proved,两端点法采用
{
    Data *dnp = getMaxPairsDNP();
    Data *dnr = getMaxPairsDNR();
    int a = dnp->pairs();
    int b = dnr->pairs();
    QVector<double> sump(a,0);
    QVector<double> sumr(b,0);
    QVector<double> pNum1(a, 0);
    QVector<double> pNum2(a, 0);
    QVector<double> pNum3(a, 0);
    QVector<double> rNum1(b, 0);
    QVector<double> rNum2(b, 0);
    QVector<double> rNum3(b, 0);
    QVector<double> pDevia(a, 0);
    QVector<double> rDevia(b, 0);
    double stdp = 0;
    double stdr = 0;
    double stD4All = 0;
    for(int i = 0;i < a;i++){
        if(d1p != nullptr)
        {
            for(int j = 0;j < d1p->pairs();j++){
                if(dnp->x[i]==d1p->x[j]){
                    sump[i] += d1p->y[j];
                    pNum1[i] = d1p->y[j];
                    break;
                }
            }
        }
        if(d2p != nullptr)
        {
            for(int j = 0;j < d2p->pairs();j++){
                if(dnp->x[i]==d2p->x[j]){
                    sump[i] += d2p->y[j];
                    pNum2[i] = d2p->y[j];
                    break;
                }
            }
        }
        if(d3p != nullptr)
        {
            for(int j = 0;j < d3p->pairs();j++){
                if(dnp->x[i]==d3p->x[j]){
                    sump[i] += d3p->y[j];
                    pNum3[i] = d3p->y[j];
                    break;
                }
            }
        }
        sump[i] = sump[i]/points[i];//此处成为相同x下正行程所有y值的平均值
    }
    if(dnr != d1p){
        for(int i = 0;i < b;i++){
            if(d1r != nullptr)
            {
                for(int j = 0;j < d1r->pairs();j++){
                    if(dnr->x[i]==d1r->x[j]){
                        sumr[i] += d1r->y[j];
                        rNum1[i] = d1r->y[j];
                        break;
                    }
                }
            }
            if(d2r != nullptr)
            {
                for(int j = 0;j < d2r->pairs();j++){
                    if(dnr->x[i]==d2r->x[j]){
                        sumr[i] += d2r->y[j];
                        rNum2[i] = d2r->y[j];
                        break;
                    }
                }
            }
            if(d3r != nullptr)
            {
                for(int j = 0;j < d3r->pairs();j++){
                    if(dnr->x[i]==d3r->x[j]){
                        sumr[i] += d3r->y[j];
                        rNum3[i] = d3r->y[j];
                        break;
                    }
                }
            }
            sumr[i] = sumr[i] / points[i + a];//此处成为相同x下反行程所有y值的平均值
        }
    }
    //以下是计算残差平方并存入相应的位置
    for(int i = 0;i < a;i++){
        if(pNum1[i] != 0)
            pNum1[i] = (pNum1[i] - sump[i]) * (pNum1[i] - sump[i]);
        if(pNum2[i] != 0)
            pNum2[i] = (pNum2[i] - sump[i]) * (pNum2[i] - sump[i]);
        if(pNum3[i] != 0)
            pNum3[i] = (pNum3[i] - sump[i]) * (pNum3[i] - sump[i]);
    }
    for(int j = 0;j < b;j++){
        if(rNum1[j] != 0)
            rNum1[j] = (rNum1[j] - sumr[j]) * (rNum1[j] - sumr[j]);
        if(rNum2[j] != 0)
            rNum2[j] = (rNum2[j] - sumr[j]) * (rNum2[j] - sumr[j]);
        if(rNum3[j] != 0)
            rNum3[j] = (rNum3[j] - sumr[j]) * (rNum3[j] - sumr[j]);
    }
    //以下是残差平方和计算，并存入pDevia，rDevia
    for(int i = 0;i < a;i++){
        pDevia[i] += pNum1[i] + pNum2[i] + pNum3[i];
        pDevia[i] = pDevia[i] / points[i] / (points[i] - 1);                //都是没有求根号的，此处除以n和n-1之积
    }
    for(int i = 0;i < b;i++){
        rDevia[i] += rNum1[i] + rNum2[i] + rNum3[i];
        rDevia[i] = rDevia[i] / points[i + a] / (points[i + a] - 1);        //都是没有求根号的，此处除以n和n-1之积
    }
    //计算最后整个测试过程的标准偏差
    for(int i = 0;i < a;i++){
        stdp += pDevia[i];
    }
    for(int i = 0;i < b;i++){
        stdr += rDevia[i];
    }
    stD4All = (stdp + stdr) / (a + b);
    return qSqrt(stD4All);
}

double DataVec::deltaHyster2()                                                       //proved ，未采用
{
    //考虑到是成对输入构造Data函数，所以如果某列中缺单个数，会导致各列y的数值对应x不同（即错位），所以初版要求中间不能空数,下面是新算法
    //要保证不错位的话，则需要判断对应x相同，在计算正反行程的偏差前需添加if(dnp->x[i] == dnr->x[i]),但这也可能错位，故使用反行程用，dnr->[j]
        //这个也是把三条直线全部分开算，没有算平均值再求取滞后量
    double sum[4] = {0, 0, 0, 0};
    if(d1r != nullptr){
        for(int i = 0;i < d1p->y.size();i++){
            for(int j = 0;j < d1r->y.size();j++){
                if(d1p->x[i] == d1r->x[j]){
                    if(sum[0] < qAbs(d1p->y[i] - d1r->y[j]))
                        sum[0] = qAbs(d1p->y[i] - d1r->y[j]);
                }
            }
        }
        sum[3] += 1;
    }
    if((d2p != nullptr)&&(d2r != nullptr)){
        for(int i = 0;i < d2p->y.size();i++){
            for(int j = 0;j < d2r->y.size();j++){
                if(d2p->x[i] == d2r->x[j]){
                    if(sum[1] < qAbs(d2p->y[i] - d2r->y[j]))
                        sum[1] = qAbs(d2p->y[i] - d2r->y[j]);
                }
            }
        }
        sum[3] += 1;
    }
    if((d3p != nullptr)&&(d3r != nullptr)){
        for(int i = 0;i < d3p->y.size();i++){
            for(int j = 0;j < d3r->y.size();j++){
                if(d3p->x[i] == d3r->x[j]){
                    if(sum[0] < qAbs(d3p->y[i] - d3r->y[j]))
                        sum[0] = qAbs(d3p->y[i] - d3r->y[j]);
                }
            }
        }
        sum[3] += 1;
    }
    if(!sum[3])
        return 0;                   //返回0表示没有成对的正反行程
    return (sum[0] + sum[1] + sum[2]) / sum[3];
}

double DataVec::deltaHyster()                                       //proved        已采用
{
    double temp = 0;
    int counts1 = 0;
    int counts2 = 0;
    QVector<QVector<double>> xpr4aver;
    if(d1r!=nullptr&&d2p!=nullptr&&d2r!=nullptr&&d3p!=nullptr&&d3r!=nullptr){
        Data* dnx = getMaxPairsDNX();
        xpr4aver.resize(3);
        xpr4aver[0].resize(dnx->pairs());
        xpr4aver[1].resize(dnx->pairs());
        xpr4aver[2].resize(dnx->pairs());
        for(int i = 0;i < dnx->pairs();i++){
            xpr4aver[0][i] = dnx->x[i];
            for(int j = 0;j < d1p->pairs();j++){
                if(d1p->x[j] == dnx->x[i]){
                    counts1++;
                    xpr4aver[1][i] += d1p->y[j];
                    break;
                }
            }
            for(int j = 0;j < d2p->pairs();j++){
                if(d2p->x[j] == dnx->x[i]){
                    counts1++;
                    xpr4aver[1][i] += d2p->y[j];
                    break;
                }
            }
            for(int j = 0;j < d3p->pairs();j++){
                if(d3p->x[j] == dnx->x[i]){
                    counts1++;
                    xpr4aver[1][i] += d3p->y[j];
                    break;
                }
            }
            for(int j = 0;j < d1r->pairs();j++){
                if(d1r->x[j] == dnx->x[i]){
                    counts2++;
                    xpr4aver[2][i] += d1r->y[j];
                    break;
                }
            }
            for(int j = 0;j < d2r->pairs();j++){
                if(d2r->x[j] == dnx->x[i]){
                    counts2++;
                    xpr4aver[2][i] += d2r->y[j];
                    break;
                }
            }
            for(int j = 0;j < d3r->pairs();j++){
                if(d3r->x[j] == dnx->x[i]){
                    counts2++;
                    xpr4aver[2][i] += d3r->y[j];
                    break;
                }
            }
            xpr4aver[1][i] = xpr4aver[1][i] / counts1;
            xpr4aver[2][i] = xpr4aver[2][i] / counts2;
            counts1 = 0;
            counts2 = 0;
        }
        //此处已经收集了三对直线的平均值，xpr4aver成功x，p——average，r——average,接下来是计算deltaHyster
        temp = qAbs(xpr4aver[1][0] - xpr4aver[2][0]);
        for(int i = 1;i < dnx->pairs();i++){
            temp = temp > qAbs(xpr4aver[1][i] - xpr4aver[2][i]) ? temp : qAbs(xpr4aver[1][i] - xpr4aver[2][i]);
        }
        return temp;
    }
    else if(d1r!=nullptr&&d2p!=nullptr&&d2r!=nullptr){
        Data* dnx = getMaxPairsDNX();
        xpr4aver.resize(3);
        QVector<int> counts1(dnx->pairs(),0);
        QVector<int> counts2(dnx->pairs(),0);
        xpr4aver[0].resize(dnx->pairs());
        xpr4aver[1].resize(dnx->pairs());
        xpr4aver[2].resize(dnx->pairs());
        for(int i = 0;i < dnx->pairs();i++){
            xpr4aver[0][i] = dnx->x[i];
            for(int j = 0;j < d1p->pairs();j++){
                if(d1p->x[j] == dnx->x[i]){
                    counts1[i]++;
                    xpr4aver[1][i] += d1p->y[j];
                    break;
                }
            }
            for(int j = 0;j < d2p->pairs();j++){
                if(d2p->x[j] == dnx->x[i]){
                    counts1[i]++;
                    xpr4aver[1][i] += d2p->y[j];
                    break;
                }
            }
            for(int j = 0;j < d1r->pairs();j++){
                if(d1r->x[j] == dnx->x[i]){
                    counts2[i]++;
                    xpr4aver[2][i] += d1r->y[j];
                    break;
                }
            }
            for(int j = 0;j < d2r->pairs();j++){
                if(d2r->x[j] == dnx->x[i]){
                    counts2[i]++;
                    xpr4aver[2][i] += d2r->y[j];
                    break;
                }
            }
            xpr4aver[1][i] = xpr4aver[1][i] / counts1[i];
            xpr4aver[2][i] = xpr4aver[2][i] / counts2[i];
        }
        temp = qAbs(xpr4aver[1][0] - xpr4aver[2][0]);
        for(int i = 1;i < dnx->pairs();i++){
            temp = temp > qAbs(xpr4aver[1][i] - xpr4aver[2][i]) ? temp : qAbs(xpr4aver[1][i] - xpr4aver[2][i]);
        }
        return temp;
    }
    else if(d1r!=nullptr){
        Data* dnx = getMaxPairsDNX();
        xpr4aver.resize(3);
        xpr4aver[0].resize(dnx->pairs());
        xpr4aver[1].resize(dnx->pairs());
        xpr4aver[2].resize(dnx->pairs());
        for(int i = 0;i < dnx->pairs();i++){
            xpr4aver[0][i] = dnx->x[i];
            for(int j = 0;j < d1p->pairs();j++){
                if(d1p->x[j] == dnx->x[i]){
                    xpr4aver[1][i] += d1p->y[j];
                    break;
                }
            }
            for(int j = 0;j < d1r->pairs();j++){
                if(d1r->x[j] == dnx->x[i]){
                    xpr4aver[2][i] += d1r->y[j];
                    break;
                }
            }
        }
        temp = qAbs(xpr4aver[1][0] - xpr4aver[2][0]);
        for(int i = 1;i < dnx->pairs();i++){
            temp = temp > qAbs(xpr4aver[1][i] - xpr4aver[2][i]) ? temp : qAbs(xpr4aver[1][i] - xpr4aver[2][i]);
        }
        return temp;
    }
    else return 0;
}

double DataVec::Hyster(double &b1)                                                  //proved
{
    return deltaHyster() / fullScale(b1) * 100;
}

double DataVec::Repeat(double &b1, int a)                                           //proved
{
    return getCountsPoints() * a * 100 / fullScale(b1);
}

double DataVec::Repeat2(double &b1, int a)                                          //proved
{
    return getCountsPoints2() * a * 100 / fullScale(b1);
}

void DataVec::Lsm(QVector<double> &b){//这里会用到mainwindow定义的bs，所以有4个元素位置  //proved
    b[0] = d1p->sumx_2();//存储x²值的和
    b[1] = d1p->sumxy();//存储y²值的和
    b[2] = d1p->sumx();//存储x的值的和
    b[3] = d1p->sumy();//存储y的值的和
    double pairsofAll = d1p->pairs();
    if(d1r != nullptr){
        b[0] += d1r->sumx_2();
        b[1] += d1r->sumxy();
        b[2] += d1r->sumx();
        b[3] += d1r->sumy();
        pairsofAll += d1r->pairs();
    }
    if(d2p != nullptr){
        b[0] += d2p->sumx_2();
        b[1] += d2p->sumxy();
        b[2] += d2p->sumx();
        b[3] += d2p->sumy();
        pairsofAll += d2p->pairs();
    }
    if(d2r != nullptr){
        b[0] += d2r->sumx_2();
        b[1] += d2r->sumxy();
        b[2] += d2r->sumx();
        b[3] += d2r->sumy();
        pairsofAll += d2r->pairs();
    }
    if(d3p != nullptr){
        b[0] += d3p->sumx_2();
        b[1] += d3p->sumxy();
        b[2] += d3p->sumx();
        b[3] += d3p->sumy();
        pairsofAll += d3p->pairs();
    }
    if(d3r != nullptr){
        b[0] += d3r->sumx_2();
        b[1] += d3r->sumxy();
        b[2] += d3r->sumx();
        b[3] += d3r->sumy();
        pairsofAll += d3r->pairs();
    }
    //此处b的数组分别为x^2和，xy和，x和，y和
    b[2] = b[2]/pairsofAll;//x均值
    b[3] = b[3]/pairsofAll;//y均值    ，准备工作完成，接下来是正式计算b0,b1的系数并存入
    b[1] = (b[1] - pairsofAll * b[2] * b[3])/(b[0] - pairsofAll * b[2] * b[2]);// 最小二乘斜率
    b[0] = b[3] - b[1] * b[2]; // 最小二乘截距
}

void DataVec::BiP(QVector<double> &b)// 量程上下限两点确定直线,此处拟用b[2],b[3]分别存储 二点法截距和斜率, proved
{
    Data* dnx = getMaxPairsDNX();
    //在执行lsm后，b的数组值分别为：最小二乘直线的截距，最小二乘直线的斜率，所有数据的x的平均值，所有数据的y的平均值
    QVector<double> x(dnx->pairs(),0);
    QVector<double> y(dnx->pairs(), 0);
    int counts = 0;
    for(int i = 0;i < dnx->pairs();i++){
        if(d1p != nullptr){
            for(int j = 0;j < d1p->pairs();j++){
                if(dnx->x[i] == d1p->x[j]){
                    x[i] += d1p->x[j];
                    y[i] += d1p->y[j];
                    counts++;
                    break;
                }
            }
        }
        if(d1r != nullptr){
            for(int j = 0;j < d1r->pairs();j++){
                if(dnx->x[i] == d1r->x[j]){
                    x[i] += d1r->x[j];
                    y[i] += d1r->y[j];
                    counts++;
                    break;
                }
            }
        }
        if(d2p != nullptr){
            for(int j = 0;j < d2p->pairs();j++){
                if(dnx->x[i] == d2p->x[j]){
                    x[i] += d2p->x[j];
                    y[i] += d2p->y[j];
                    counts++;
                    break;
                }
            }
        }
        if(d2r != nullptr){
            for(int j = 0;j < d2r->pairs();j++){
                if(dnx->x[i] == d2r->x[j]){
                    x[i] += d2r->x[j];
                    y[i] += d2r->y[j];
                    counts++;
                    break;
                }
            }
        }
        if(d3p != nullptr){
            for(int j = 0;j < d3p->pairs();j++){
                if(dnx->x[i] == d3p->x[j]){
                    x[i] += d3p->x[j];
                    y[i] += d3p->y[j];
                    counts++;
                    break;
                }
            }
        }
        if(d3r != nullptr){
            for(int j = 0;j < d3r->pairs();j++){
                if(dnx->x[i] == d3r->x[j]){
                    x[i] += d3r->x[j];
                    y[i] += d3r->y[j];
                    counts++;
                    break;
                }
            }
        }
        x[i] = x[i] / counts;
        y[i] = y[i] / counts;
        counts = 0;
    }
    Data aver(x, y);
    b[3] = aver.rangex2y() / aver.range_x();
    b[2] = aver.y[0] - aver.x[0] * b[3];//后续这里要改成最值的y和x值
}


double average(double x, int num)                                                   // not used yet
{
    return x / (double)num;
}
