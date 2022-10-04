#include "data.h"
//此处添加了检查QString是否为空，来决定是否录入数据，同时保证了数据的有序性
Data::Data(QVector<QString> &m1, QVector<QString> &n1)
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
int Data::pairs(){
    return x.size();
}

double Data::sumx(){
    double sum = 0;
    for(int i = 0;i < x.size();i++){
        sum += x[i];
    }
    return sum;
}
double Data::sumy(){
    double sum = 0;
    for(int i = 0;i < y.size();i++){
        sum += y[i];
    }
    return sum;
}

double Data::avex(){
    return sumx()/x.size();
}
double Data::avey(){
    return sumy()/y.size();
}

double Data::sumx_2(){
    double sum = 0;
    for(int i = 0;i < x.size();i++){
        sum += x[i] * x[i];
    }
    return sum;
}
double Data::sumy_2(){
    double sum = 0;
    for(int i = 0;i < y.size();i++){
        sum += y[i] * y[i];
    }
    return sum;
}
double Data::sumxy(){
    double sum = 0;
    for(int i = 0;i <x.size();i++){
        sum += x[i] * y[i];
    }
    return sum;
}

double Data::a_sumx_2(){
    return sumx_2()/x.size();
}
double Data::a_sumy_2(){
    return sumy_2()/y.size();
}
DataVec::DataVec()
{
    d1p = nullptr;
    d2p = nullptr;
    d3p = nullptr;
    d1r = nullptr;
    d2r = nullptr;
    d3r = nullptr;
}

DataVec::DataVec(Data *a1p){
    d1p = a1p;
    d2p = nullptr;
    d3p = nullptr;
    d1r = nullptr;
    d2r = nullptr;
    d3r = nullptr;
}//测试用
DataVec::DataVec(Data *a1p, Data *a1r){
    d1p = a1p;
    d1r = a1r;
    d2p = nullptr;
    d2r = nullptr;
    d3p = nullptr;
    d3r = nullptr;
}
DataVec::DataVec(Data *a1p, Data *a1r, Data *a2p, Data *a2r){
    d1p = a1p;
    d1r = a1r;
    d2p = a2p;
    d2r = a2r;
    d3p = nullptr;
    d3r = nullptr;
}
DataVec::DataVec(Data *a1p, Data *a1r, Data *a2p, Data *a2r, Data *a3p, Data *a3r)
{
    d1p = a1p;
    d2p = a2p;
    d3p = a3p;
    d1r = a1r;
    d2r = a2r;
    d3r = a3r;
}

DataVec::DataVec(DataVec &dv1)
{
    d1p = dv1.d1p;
    d2p = dv1.d2p;
    d3p = dv1.d3p;
    d1r = dv1.d1r;
    d2r = dv1.d2r;
    d3r = dv1.d3r;
}

DataVec DataVec::operator=(DataVec &dv2)
{
    d1p = dv2.d1p;
    d2p = dv2.d2p;
    d3p = dv2.d3p;
    d1r = dv2.d1r;
    d2r = dv2.d2r;
    d3r = dv2.d3r;
}
void DataVec::Lsm(QVector<double> &b){//这里会用到mainwindow定义的bs，所以有4个元素位置
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
double DataVec::Line(double &b0, double &b1){
    ;
}
