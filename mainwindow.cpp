#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    x.resize(8);
    y1p.resize(8);
    y2p.resize(8);
    y3p.resize(8);
    y1r.resize(8);
    y2r.resize(8);
    y3r.resize(8);
    bs.resize(4);//储存lsm 12以及bip 34的4个b参数
}

MainWindow::~MainWindow()
{
    delete ui;
}

//采用了vector的insert方法，目前为8，故最后应将vector的第8个以后（不含8）的元素删除
void MainWindow::on_lineEdit11_textEdited(const QString &arg1)
{
    x[0] = ui->lineEdit11->text();
}
void MainWindow::on_lineEdit21_textEdited(const QString &arg1)
{
    x[1] = ui->lineEdit21->text();
}
void MainWindow::on_lineEdit31_textEdited(const QString &arg1)
{
    x[2] = ui->lineEdit31->text();
}
void MainWindow::on_lineEdit41_textEdited(const QString &arg1)
{
    x[3] = ui->lineEdit41->text();
}
void MainWindow::on_lineEdit51_textEdited(const QString &arg1)
{
    x[4] = ui->lineEdit51->text();
}
void MainWindow::on_lineEdit61_textEdited(const QString &arg1)
{
    x[5] = ui->lineEdit61->text();
}
void MainWindow::on_lineEdit71_textEdited(const QString &arg1)
{
    x[6] = ui->lineEdit71->text();
}
void MainWindow::on_lineEdit81_textEdited(const QString &arg1)
{
    x[7] = ui->lineEdit81->text();
}

//采用了vector的insert方法，目前为8，故最后应将vector的第8个以后（不含8）的元素删除
void MainWindow::on_lineEdit12_textChanged(const QString &arg1)
{
    y1p[0] = ui->lineEdit12->text();
}
void MainWindow::on_lineEdit22_textChanged(const QString &arg1)
{
    y1p[1] = ui->lineEdit22->text();
}
void MainWindow::on_lineEdit32_textChanged(const QString &arg1)
{
    y1p[2] = ui->lineEdit32->text();
}
void MainWindow::on_lineEdit42_textChanged(const QString &arg1)
{
    y1p[3] = ui->lineEdit42->text();
}
void MainWindow::on_lineEdit52_textChanged(const QString &arg1)
{
    y1p[4] = ui->lineEdit52->text();
}
void MainWindow::on_lineEdit62_textChanged(const QString &arg1)
{
    y1p[5] = ui->lineEdit62->text();
}
void MainWindow::on_lineEdit72_textChanged(const QString &arg1)
{
    y1p[6] = ui->lineEdit72->text();
}
void MainWindow::on_lineEdit82_textChanged(const QString &arg1)
{
    y1p[7] = ui->lineEdit82->text();
}

//采用了vector的insert方法，目前为8，故最后应将vector的第8个以后（不含8）的元素删除
void MainWindow::on_lineEdit13_textChanged(const QString &arg1)
{
    y1r[0] = ui->lineEdit13->text();
}
void MainWindow::on_lineEdit23_textChanged(const QString &arg1)
{
    y1r[1] = ui->lineEdit23->text();
}
void MainWindow::on_lineEdit33_textChanged(const QString &arg1)
{
    y1r[2] = ui->lineEdit33->text();
}
void MainWindow::on_lineEdit43_textChanged(const QString &arg1)
{
    y1r[3] = ui->lineEdit43->text();
}
void MainWindow::on_lineEdit53_textChanged(const QString &arg1)
{
    y1r[4] = ui->lineEdit53->text();
}
void MainWindow::on_lineEdit63_textChanged(const QString &arg1)
{
    y1r[5] = ui->lineEdit63->text();
}
void MainWindow::on_lineEdit73_textChanged(const QString &arg1)
{
    y1r[6] = ui->lineEdit73->text();
}
void MainWindow::on_lineEdit83_textChanged(const QString &arg1)
{
    y1r[7] = ui->lineEdit83->text();
}

//采用了vector的insert方法，目前为8，故最后应将vector的第8个以后（不含8）的元素删除
void MainWindow::on_lineEdit14_textChanged(const QString &arg1)
{
    y2p[0] = ui->lineEdit14->text();
}
void MainWindow::on_lineEdit24_textChanged(const QString &arg1)
{
    y2p[1] = ui->lineEdit24->text();
}
void MainWindow::on_lineEdit34_textChanged(const QString &arg1)
{
    y2p[2] = ui->lineEdit34->text();
}
void MainWindow::on_lineEdit44_textChanged(const QString &arg1)
{
    y2p[3] = ui->lineEdit44->text();
}
void MainWindow::on_lineEdit54_textChanged(const QString &arg1)
{
    y2p[4] = ui->lineEdit54->text();
}
void MainWindow::on_lineEdit64_textChanged(const QString &arg1)
{
    y2p[5] = ui->lineEdit64->text();
}
void MainWindow::on_lineEdit74_textChanged(const QString &arg1)
{
    y2p[6] = ui->lineEdit74->text();
}
void MainWindow::on_lineEdit84_textChanged(const QString &arg1)
{
    y2p[7] = ui->lineEdit84->text();
}

//采用了vector的insert方法，目前为8，故最后应将vector的第8个以后（不含8）的元素删除
void MainWindow::on_lineEdit15_textChanged(const QString &arg1)
{
    y2r[0] = ui->lineEdit15->text();
}
void MainWindow::on_lineEdit25_textChanged(const QString &arg1)
{
    y2r[1] = ui->lineEdit25->text();
}
void MainWindow::on_lineEdit35_textChanged(const QString &arg1)
{
    y2r[2] = ui->lineEdit35->text();
}
void MainWindow::on_lineEdit45_textChanged(const QString &arg1)
{
    y2r[3] = ui->lineEdit45->text();
}
void MainWindow::on_lineEdit55_textChanged(const QString &arg1)
{
    y2r[4] = ui->lineEdit55->text();
}
void MainWindow::on_lineEdit65_textChanged(const QString &arg1)
{
    y2r[5] = ui->lineEdit65->text();
}
void MainWindow::on_lineEdit75_textChanged(const QString &arg1)
{
    y2r[6] = ui->lineEdit75->text();
}
void MainWindow::on_lineEdit85_textChanged(const QString &arg1)
{
    y2r[7] = ui->lineEdit85->text();
}

//采用了vector的insert方法，目前为8，故最后应将vector的第8个以后（不含8）的元素删除
void MainWindow::on_lineEdit16_textChanged(const QString &arg1)
{
    y3p[0] = ui->lineEdit16->text();
}
void MainWindow::on_lineEdit26_textChanged(const QString &arg1)
{
    y3p[1] = ui->lineEdit26->text();
}
void MainWindow::on_lineEdit36_textChanged(const QString &arg1)
{
    y3p[2] = ui->lineEdit36->text();
}
void MainWindow::on_lineEdit46_textChanged(const QString &arg1)
{
    y3p[3] = ui->lineEdit46->text();
}
void MainWindow::on_lineEdit56_textChanged(const QString &arg1)
{
    y3p[4] = ui->lineEdit56->text();
}
void MainWindow::on_lineEdit66_textChanged(const QString &arg1)
{
    y3p[5] = ui->lineEdit66->text();
}
void MainWindow::on_lineEdit76_textChanged(const QString &arg1)
{
    y3p[6] = ui->lineEdit76->text();
}
void MainWindow::on_lineEdit86_textChanged(const QString &arg1)
{
    y3p[7] = ui->lineEdit86->text();
}

//采用了vector的insert方法，目前为8，故最后应将vector的第8个以后（不含8）的元素删除
void MainWindow::on_lineEdit17_textChanged(const QString &arg1)
{
    y3r[0] = ui->lineEdit17->text();
}
void MainWindow::on_lineEdit27_textChanged(const QString &arg1)
{
    y3r[1] = ui->lineEdit27->text();
}
void MainWindow::on_lineEdit37_textChanged(const QString &arg1)
{
    y3r[2] = ui->lineEdit37->text();
}
void MainWindow::on_lineEdit47_textChanged(const QString &arg1)
{
    y3r[3] = ui->lineEdit47->text();
}
void MainWindow::on_lineEdit57_textChanged(const QString &arg1)
{
    y3r[4] = ui->lineEdit57->text();
}
void MainWindow::on_lineEdit67_textChanged(const QString &arg1)
{
    y3r[5] = ui->lineEdit67->text();
}
void MainWindow::on_lineEdit77_textChanged(const QString &arg1)
{
    y3r[6] = ui->lineEdit77->text();
}
void MainWindow::on_lineEdit87_textChanged(const QString &arg1)
{
    y3r[7] = ui->lineEdit87->text();
}


void MainWindow::on_pBtnUpdate_clicked() //作为更新键的slot
{
    qDebug()<<x<<y1p<<y2p<<y3p<<y1r<<y2r<<y3r;
    Data Dy1p(x, y1p);
    Data Dy2p(x, y2p);
    Data Dy3p(x, y3p);
    Data Dy1r(x, y1r);
    Data Dy2r(x, y2r);
    Data Dy3r(x, y3r);
    //接下来是将Data混合成DataVec，最后输出数据
    //注意建立DataVec的对象时，要根据Data有无实质内容进行筛选，不能直接建立
    //必须按顺序填，且保持第一列长于第二列(与data.cpp的getCountsPoints有关，若在其中添加了Data*函数，则可忽略次要求)
    DataVec dvlsm(&Dy1p);
    //在测试时发现删除某列第一行并不能让这列全部失效，这是因为Data对象的创建中，会忽略不匹配成对，而原第1行的数字会被第2行的数字对替代
    if((Dy1r.y[0]!=NULL)&&(Dy2p.y[0]!=NULL)&&(Dy2r.y[0]!=NULL)&&(Dy3p.y[0]!=NULL)&&(Dy3r.y[0]!=NULL)){
        DataVec dv(&Dy1p, &Dy1r, &Dy2p, &Dy2r, &Dy3p, &Dy3r);
        dvlsm = dv;
    }
    else if((Dy1r.y[0]!=NULL)&&(Dy2p.y[0]!=NULL)&&(Dy2r.y[0]!=NULL)){
        DataVec dv(&Dy1p, &Dy1r, &Dy2p, &Dy2r);
        dvlsm = dv;
    }
    else if(Dy1r.y[0]!=NULL){
        DataVec dv(&Dy1p, &Dy1r);
        dvlsm = dv;
    }
    //有效
    dvlsm.Lsm(bs);
    qDebug()<<bs;
    ui->lineEditLsmB0->setText(QString::number(bs[0], 'e', 3));
    ui->lineEditLsmB1->setText(QString::number(bs[1], 'e', 3));
    ui->lineEditLsmFS->setText(QString::number(dvlsm.fullScale(bs[1]), 'g', 3));
    ui->lineEditLsmLine->setText(QString::number(dvlsm.Line(bs[0], bs[1]), 'g', 3));
    ui->lineEditLsmHysteria->setText(QString::number(dvlsm.Hyster(bs[1]), 'g', 3));
}

