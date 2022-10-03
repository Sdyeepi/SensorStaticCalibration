#include "data.h"
//此处记得在调用之前将y1和x1的对应容器元素重新设置为7的大小
Data::Data(QVector<QString> &m1, QVector<QString> &n1)
{
    for(int i = 0;i < x.size();i++){
        x.append(m1[i].toDouble(&ok));
    }
    for(int i = 0;i < n1.size();i++){
        y.append(n1[i].toDouble(&ok));
    }
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
        sum += x[i]*x[i];
    }
    return sum;
}
double Data::sumy_2(){
    double sum = 0;
    for(int i = 0;i < y.size();i++){
        sum += y[i]*y[i];
    }
    return sum;
}

double Data::a_sumx_2(){
    return sumx_2()/x.size();
}
double Data::a_sumy_2(){
    return sumy_2()/y.size();
}

DataVec::DataVec(Data *a1p, Data *a2p, Data *a3p, Data *a1r, Data *a2r, Data *a3r)
{
    d1p = a1p;
    if(a2p != nullptr)
        d2p = a2p;
    if(a3p != nullptr)
        d3p = a3p;
    if(a1r != nullptr)
        d1r = a1r;
    if(a2r != nullptr)
        d2r = a2r;
    if(a3r != nullptr)
        d3r = a3r;
}
double DataVec::Line(double &b0, double &b1){
    ;
}
