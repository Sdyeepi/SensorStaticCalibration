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
int Data::pairs(){                                                                  //proved
    return x.size();
}

double Data::max_x()                                                                //proved
{
    double max = x[x.size() - 1];
    for(int i = x.size() - 1;i = 0;i--){
        if(max < x[i])
            max = x[i];
    }
    return max;
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

DataVec::DataVec(Data *a1p){                                                        //proved,QPoints and points not
    d1p = a1p;
    d2p = nullptr;
    d3p = nullptr;
    d1r = nullptr;
    d2r = nullptr;
    d3r = nullptr;
    points.resize(d1p->pairs());
    QPoints.resize(1);
    for(int i = 0;i < d1p->pairs();i++){
        QPoints[0].append(QPointF(d1p->x[i], d1p->y[i]));
    }
}//测试用
DataVec::DataVec(Data *a1p, Data *a1r){                                             //proved,QPoints and points not
    d1p = a1p;
    d1r = a1r;
    d2p = nullptr;
    d2r = nullptr;
    d3p = nullptr;
    d3r = nullptr;
    points.resize(d1p->pairs()>d1r->pairs()?d1p->pairs():d1r->pairs());
    QPoints.resize(2);
    for(int i = 0;i < d1p->pairs();i++){
        QPoints[0].append(QPointF(d1p->x[i], d1p->y[i]));
        QPoints[1].append(QPointF(d1r->x[i], d1r->y[i]));
    }
}
DataVec::DataVec(Data *a1p, Data *a1r, Data *a2p, Data *a2r){                       //proved,QPoints and points not
    d1p = a1p;
    d1r = a1r;
    d2p = a2p;
    d2r = a2r;
    d3p = nullptr;
    d3r = nullptr;
    double a = d1p->pairs();
    a = a>d1r->pairs()?a:d1r->pairs();
    a = a>d2p->pairs()?a:d2p->pairs();
    a = a>d2r->pairs()?a:d2r->pairs();
    points.resize(a);
    QPoints.resize(4);
    for(int i = 0;i < d1p->pairs();i++){
        QPoints[0].append(QPointF(d1p->x[i], d1p->y[i]));
        QPoints[1].append(QPointF(d1r->x[i], d1r->y[i]));
        QPoints[2].append(QPointF(d2p->x[i], d2p->y[i]));
        QPoints[3].append(QPointF(d2r->x[i], d2r->y[i]));
    }
}
DataVec::DataVec(Data *a1p, Data *a1r, Data *a2p, Data *a2r, Data *a3p, Data *a3r)  //proved,QPoints and points not
{
    d1p = a1p;
    d2p = a2p;
    d3p = a3p;
    d1r = a1r;
    d2r = a2r;
    d3r = a3r;
    double a = d1p->pairs();
    a = a>d1r->pairs()?a:d1r->pairs();
    a = a>d2p->pairs()?a:d2p->pairs();
    a = a>d2r->pairs()?a:d2r->pairs();
    a = a>d3r->pairs()?a:d3r->pairs();
    a = a>d3p->pairs()?a:d3p->pairs();
    points.resize(a);
    QPoints.resize(6);
    for(int i = 0;i < d1p->pairs();i++){
        QPoints[0].append(QPointF(d1p->x[i], d1p->y[i]));
        QPoints[1].append(QPointF(d1r->x[i], d1r->y[i]));
        QPoints[2].append(QPointF(d2p->x[i], d2p->y[i]));
        QPoints[3].append(QPointF(d2r->x[i], d2r->y[i]));
        QPoints[4].append(QPointF(d3p->x[i], d3p->y[i]));
        QPoints[5].append(QPointF(d3r->x[i], d3r->y[i]));
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

double DataVec::fullScale(double &b1)                                               //proved
{
    return d1p->max_x() * b1 ;
}

double DataVec::predict_y(double &b0, double &b1, double x)
{
    return b0 + b1 * x;
}

double DataVec::deltaLmax(double &b0, double &b1)                                   //proved,算法待证实
{
    double delta1 = d1p->y[0] - predict_y(b0, b1, d1p->x[0]);
    double delta2 = predict_y(b0, b1, d1p->x[0]) - d1p->y[0];
    for(int i = 1;i < d1p->y.size();i++){
        if(delta1 < (d1p->y[i] - predict_y(b0, b1, d1p->x[i])))
            delta1 = d1p->y[i] - predict_y(b0, b1, d1p->x[i]);
        if(delta2 < (predict_y(b0, b1, d1p->x[i]) - d1p->y[i]))
            delta2 = predict_y(b0, b1, d1p->x[i]) - d1p->y[i];
    }
    if(d1r != nullptr){
        for(int i = 0;i < d1r->y.size();i++){
            if(delta1 < (d1r->y[i] - predict_y(b0, b1, d1r->x[i])))
                delta1 = d1r->y[i] - predict_y(b0, b1, d1r->x[i]);
            if(delta2 < (predict_y(b0, b1, d1r->x[i]) - d1r->y[i]))
                delta2 = predict_y(b0, b1, d1r->x[i]) - d1r->y[i];
        }
    }
    if(d2p != nullptr){
        for(int i = 0;i < d2p->y.size();i++){
            if(delta1 < (d2p->y[i] - predict_y(b0, b1, d2p->x[i])))
                delta1 = d2p->y[i] - predict_y(b0, b1, d2p->x[i]);
            if(delta2 < (predict_y(b0, b1, d2p->x[i]) - d2p->y[i]))
                delta2 = predict_y(b0, b1, d2p->x[i]) - d2p->y[i];
        }
    }
    if(d2r != nullptr){
        for(int i = 0;i < d2r->y.size();i++){
            if(delta1 < (d2r->y[i] - predict_y(b0, b1, d2r->x[i])))
                delta1 = d2r->y[i] - predict_y(b0, b1, d2r->x[i]);
            if(delta2 < (predict_y(b0, b1, d2r->x[i]) - d2r->y[i]))
                delta2 = predict_y(b0, b1, d2r->x[i]) - d2r->y[i];
        }
    }
    if(d3p != nullptr){
        for(int i = 0;i < d3p->y.size();i++){
            if(delta1 < (d3p->y[i] - predict_y(b0, b1, d3p->x[i])))
                delta1 = d3p->y[i] - predict_y(b0, b1, d3p->x[i]);
            if(delta2 < (predict_y(b0, b1, d3p->x[i]) - d3p->y[i]))
                delta2 = predict_y(b0, b1, d3p->x[i]) - d3p->y[i];
        }
    }
    if(d3r != nullptr){
        for(int i = 0;i < d3r->y.size();i++){
            if(delta1 < (d3r->y[i] - predict_y(b0, b1, d3r->x[i])))
                delta1 = d3r->y[i] - predict_y(b0, b1, d3r->x[i]);
            if(delta2 < (predict_y(b0, b1, d3r->x[i]) - d3r->y[i]))
                delta2 = predict_y(b0, b1, d3r->x[i]) - d3r->y[i];
        }
    }
    delta1 = delta1>delta2?delta1:delta2;
    return delta1;
}

double DataVec::Line(double &b0, double &b1)                                        //proved
{
    return deltaLmax(b0, b1) / fullScale(b1) * 100;//此处为百分数，已×100
}

Data *DataVec::getMaxPairsDNX()
{
    if(d1r!=nullptr&&d2p!=nullptr&&d2r!=nullptr&&d3p!=nullptr&&d3r!=nullptr){
        if(d1p->pairs()>d1r->pairs()&&d1p->pairs()>d2p->pairs()&&d1p->pairs()>d2r->pairs()&&d1p->pairs()>d3p->pairs()&&d1p->pairs()>d3r->pairs())
            return d1p;
        else if(d1r->pairs()>d1p->pairs()&&d1r->pairs()>d2p->pairs()&&d1r->pairs()>d2r->pairs()&&d1r->pairs()>d3p->pairs()&&d1r->pairs()>d3r->pairs())
            return d1r;
        else if(d2p->pairs()>d1p->pairs()&&d2p->pairs()>d1r->pairs()&&d2p->pairs()>d2r->pairs()&&d2p->pairs()>d3p->pairs()&&d2p->pairs()>d3r->pairs())
            return d2p;
        else if(d2r->pairs()>d1p->pairs()&&d2r->pairs()>d1r->pairs()&&d2r->pairs()>d2p->pairs()&&d2r->pairs()>d3p->pairs()&&d2r->pairs()>d3r->pairs())
            return d2r;
        else if(d3p->pairs()>d1p->pairs()&&d3p->pairs()>d1r->pairs()&&d3p->pairs()>d2p->pairs()&&d3p->pairs()>d2r->pairs()&&d3p->pairs()>d3r->pairs())
            return d3p;
        else return d3r;
    }
    else if(d1r!=nullptr&&d2p!=nullptr&&d2r!=nullptr&&d3p!=nullptr){
        if(d1p->pairs()>d1r->pairs()&&d1p->pairs()>d2p->pairs()&&d1p->pairs()>d2r->pairs()&&d1p->pairs()>d3p->pairs())
            return d1p;
        else if(d1r->pairs()>d1p->pairs()&&d1r->pairs()>d2p->pairs()&&d1r->pairs()>d2r->pairs()&&d1r->pairs()>d3p->pairs())
            return d1r;
        else if(d2p->pairs()>d1p->pairs()&&d2p->pairs()>d1r->pairs()&&d2p->pairs()>d2r->pairs()&&d1p->pairs()>d3p->pairs())
            return d2p;
        else if(d2r->pairs()>d1p->pairs()&&d2r->pairs()>d1r->pairs()&&d2r->pairs()>d2p->pairs()&&d2r->pairs()>d3p->pairs())
            return d2r;
        else return d3p;
    }
    else if(d1r!=nullptr&&d2p!=nullptr&&d2r!=nullptr){
        if(d1p->pairs()>d1r->pairs()&&d1p->pairs()>d2p->pairs()&&d1p->pairs()>d2r->pairs())
            return d1p;
        else if(d1r->pairs()>d1p->pairs()&&d1r->pairs()>d2p->pairs()&&d1r->pairs()>d2r->pairs())
            return d1r;
        else if(d2p->pairs()>d1p->pairs()&&d2p->pairs()>d1r->pairs()&&d2p->pairs()>d2r->pairs())
            return d2p;
        else return d2r;
    }
    else if(d1r!=nullptr&&d2p!=nullptr){
        if(d1p->pairs()>d1r->pairs()&&d1p->pairs()>d2p->pairs())
            return d1p;
        else if(d1r->pairs()>d1p->pairs()&&d1r->pairs()>d2p->pairs())
            return d1r;
        else return d2p;
    }
    else if(d1r!=nullptr){
        if(d1p->pairs()>d1r->pairs())
            return d1p;
        else return d1r;
    }
    else return d1p;
}

void DataVec::getCountsPoints()
{
    //计算各x定义标定点的循环次数，以d1p的x为基础定点，所以要求为第一列正行程必须为覆盖全自变量x的完整队列
    //否则将引入较麻烦的算法实现
    //以下是d1p x的定点算法，设想中关于解决这要求的算法是选择出行数最多的dnx列(2022.10.07 22:30,还未改算法，需要用到Data*getMaxPairsDNX())
    Data *dnx = getMaxPairsDNX();
    for(int i = 0;i < dnx->pairs();i++){
        if(dnx!=d1p)
        {
            for(int j = 0;j < d1p->pairs();j++){
                if(dnx->x[i]==d1p->x[j]){
                    points[i]++;
                    break;
                }
            }
        }
        if(d1r != nullptr && dnx != d1r)
        {
            for(int j = 0;j < d1r->pairs();j++){
                if(dnx->x[i]==d1r->x[j]){
                    points[i]++;
                    break;
                }
            }
        }
        if(d2p != nullptr && dnx != d2p)
        {
            for(int j = 0;j < d2p->pairs();j++){
                if(d1p->x[i]==d2p->x[j]){
                    points[i]++;
                    break;
                }
            }
        }
        if(d2r != nullptr && dnx != d2r)
        {
            for(int j = 0;j < d2r->pairs();j++){
                if(d1p->x[i]==d2r->x[j]){
                    points[i]++;
                    break;
                }
            }
        }
        if(d3p != nullptr && dnx != d3p)
        {
            for(int j = 0;j < d3p->pairs();j++){
                if(d1p->x[i]==d3p->x[j]){
                    points[i]++;
                    break;
                }
            }
        }
        if(d3r != nullptr && dnx != d3r)
        {
            for(int j = 0;j < d3r->pairs();j++){
                if(d1p->x[i]==d3r->x[j]){
                    points[i]++;
                    break;
                }
            }
        }
    }
}

QVector<double> DataVec::stdDeviaD()
{
    QVector<double> sum(8, 0);//各点残差平方和,且初始化为0，元素为8个

}

double DataVec::deltaHyster()                                                       //proved 算法待证实
{
    //考虑到是成对输入构造Data函数，所以如果某列中缺单个数，会导致各列y的数值对应x不同（即错位），所以初版要求中间不能空数,下面是新算法
    //要保证不错位的话，则需要判断对应x相同，在计算正反行程的偏差前需添加if(dnp->x[i] == dnr->x[i]),但这也可能错位，故使用反行程用，dnr->[j]
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

double DataVec::Hyster(double &b1)                                                  //proved
{
    return deltaHyster() / fullScale(b1) * 100;
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
    b[2] = b[2]/pairsofAll;
    b[3] = b[3]/pairsofAll;//准备工作完成，接下来是正式计算b0,b1的系数并存入
    b[1] = (b[1] - pairsofAll * b[2] * b[3])/(b[0] - pairsofAll * b[2] * b[2]);
    b[0] = b[3] - b[1] * b[2];
}

