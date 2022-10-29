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
    connect(ui->action_datain, &QAction::triggered, this, &::MainWindow::on_Menu1_action_datain_clicked);
    connect(ui->action_dataout, &QAction::triggered, this, &::MainWindow::on_Menu1_action_dataout_clicked);
}

MainWindow::~MainWindow()
{
    if(!SeriesVec.empty()){
        for(int i = 0;i < SeriesVec.size();i++){
            delete SeriesVec[i];
        }
    }
    delete ui;    
}

void MainWindow::LsmShow(QVector<double> &bs, DataVec &dvlsm){
    dvlsm.Lsm(bs);
    ui->lineEditLsmB0->setText(QString::number(bs[0], 'g', 3));
    ui->lineEditLsmB1->setText(QString::number(bs[1], 'g', 3));
    ui->lineEditLsmFS->setText(QString::number(dvlsm.fullScale(bs[1]), 'g', 2));
    ui->lineEditLsmLine->setText(QString::number(dvlsm.Line(bs[0], bs[1]), 'g', 2));
    ui->lineEditLsmHysteria->setText(QString::number(dvlsm.Hyster(bs[1]), 'g', 2));
    float k = ui->lineEditK->text().toFloat();
    if(k)
        ui->lineEditLsmRepeat->setText(QString::number(dvlsm.Repeat(bs[1],k),'g',2));
    else ui->lineEditLsmRepeat->setText(QString::number(dvlsm.Repeat(bs[1]),'g',2));
}

void MainWindow::BiPShow(QVector<double> &bs, DataVec &dvbip)
{
    dvbip.BiP(bs);
    ui->lineEditBiPB0->setText(QString::number(bs[2], 'g', 3));
    ui->lineEditBiPB1->setText(QString::number(bs[3], 'g', 3));
    ui->lineEditBiPFS->setText(QString::number(dvbip.fullScale(bs[3]), 'g', 2));
    ui->lineEditBiPLine->setText(QString::number(dvbip.Line(bs[2], bs[3]), 'g', 2));
    ui->lineEditBiPHysteria->setText(QString::number(dvbip.Hyster(bs[3]), 'g', 2));
    float k = ui->lineEditK->text().toFloat();
    if(k)
        ui->lineEditBiPRepeat->setText(QString::number(dvbip.Repeat2(bs[3],k),'g',2));
    else ui->lineEditBiPRepeat->setText(QString::number(dvbip.Repeat2(bs[3]),'g',2));
}

void MainWindow::gVOriShow(DataVec &dv)
{
    chart = ui->gViewOrigin->chart();
    QString lang = "0";
    for(int i = 0;i < SeriesVec.size();i++){
        SeriesVec[i] = new QLineSeries();
        if(i%2){
            lang = "反";
        }
        else lang = "正";
        SeriesVec[i]->setName(QString('1'+i/2)+lang);
        SeriesVec[i]->setPointsVisible();
        SeriesVec[i]->setPointLabelsVisible();
        SeriesVec[i]->setPointLabelsColor(QColor("black"));
        for(QVector<QPointF>::Iterator iter=dv.QPoints[i].begin();iter != dv.QPoints[i].end();iter++){
            SeriesVec[i]->append(*iter);
        }
        chart->addSeries(SeriesVec[i]);
    }
    chart->setTitle(tr("原始数据"));
    chart->createDefaultAxes();
    ui->gViewOrigin->setRubberBand(QChartView::RectangleRubberBand);
}

void MainWindow::gVLsmBipShow(QVector<double> &bs, DataVec &dv)
{
    double x0 = dv.DataVecMin_X();
    double x1 = dv.DataVecMax_X();
    double yLsm0 = x0 * bs[1] + bs[0];
    double yLsm1 = x1 * bs[1] + bs[0];
    double yBip0 = x0 * bs[3] + bs[2];
    double yBip1 = x1 * bs[3] + bs[2];
    LineLsm.resize(1);
    LineBip.resize(1);
    chart2 = ui->gViewLsmBip->chart();
    LineLsm[0] = new QLineSeries();
    LineBip[0] = new QLineSeries();
    LineLsm[0]->setColor(QColor("red"));
    LineLsm[0]->setName(tr("最小二乘拟合"));
    LineBip[0]->setColor(QColor("blue"));
    LineBip[0]->setName(tr("两段点法拟合"));
    //这里决定直接使用x和y的步长来代替直线
    LineLsm[0]->append(x0, yLsm0);
    LineLsm[0]->append(x1, yLsm1);
    LineBip[0]->append(x0, yBip0);
    LineBip[0]->append(x1, yBip1);
    chart2->addSeries(LineLsm[0]);
    chart2->addSeries(LineBip[0]);
    chart2->setTitle("拟合数据");
    chart2->createDefaultAxes();
    ui->gViewLsmBip->setRubberBand(QChartView::RectangleRubberBand);
}

void MainWindow::Row1lEditTxt(const int &col, const QStringList &strList)
{
    switch (col) {
    case 7:
        ui->lineEdit17->setText(strList[6]);
    case 6:
        ui->lineEdit16->setText(strList[5]);
    case 5:
        ui->lineEdit15->setText(strList[4]);
    case 4:
        ui->lineEdit14->setText(strList[3]);
    case 3:
        ui->lineEdit13->setText(strList[2]);
    case 2:
        ui->lineEdit12->setText(strList[1]);
    case 1:
        ui->lineEdit11->setText(strList[0]);
    default:
        break;
    }
}
void MainWindow::Row2lEditTxt(const int &col, const QStringList &strList)
{
    switch (col) {
    case 7:
        ui->lineEdit27->setText(strList[6]);
    case 6:
        ui->lineEdit26->setText(strList[5]);
    case 5:
        ui->lineEdit25->setText(strList[4]);
    case 4:
        ui->lineEdit24->setText(strList[3]);
    case 3:
        ui->lineEdit23->setText(strList[2]);
    case 2:
        ui->lineEdit22->setText(strList[1]);
    case 1:
        ui->lineEdit21->setText(strList[0]);
    default:
        break;
    }
}
void MainWindow::Row3lEditTxt(const int &col, const QStringList &strList)
{
    switch (col) {
    case 7:
        ui->lineEdit37->setText(strList[6]);
    case 6:
        ui->lineEdit36->setText(strList[5]);
    case 5:
        ui->lineEdit35->setText(strList[4]);
    case 4:
        ui->lineEdit34->setText(strList[3]);
    case 3:
        ui->lineEdit33->setText(strList[2]);
    case 2:
        ui->lineEdit32->setText(strList[1]);
    case 1:
        ui->lineEdit31->setText(strList[0]);
    default:
        break;
    }
}
void MainWindow::Row4lEditTxt(const int &col, const QStringList &strList)
{
    switch (col) {
    case 7:
        ui->lineEdit47->setText(strList[6]);
    case 6:
        ui->lineEdit46->setText(strList[5]);
    case 5:
        ui->lineEdit45->setText(strList[4]);
    case 4:
        ui->lineEdit44->setText(strList[3]);
    case 3:
        ui->lineEdit43->setText(strList[2]);
    case 2:
        ui->lineEdit42->setText(strList[1]);
    case 1:
        ui->lineEdit41->setText(strList[0]);
    default:
        break;
    }
}
void MainWindow::Row5lEditTxt(const int &col, const QStringList &strList)
{
    switch (col) {
    case 7:
        ui->lineEdit57->setText(strList[6]);
    case 6:
        ui->lineEdit56->setText(strList[5]);
    case 5:
        ui->lineEdit55->setText(strList[4]);
    case 4:
        ui->lineEdit54->setText(strList[3]);
    case 3:
        ui->lineEdit53->setText(strList[2]);
    case 2:
        ui->lineEdit52->setText(strList[1]);
    case 1:
        ui->lineEdit51->setText(strList[0]);
    default:
        break;
    }
}
void MainWindow::Row6lEditTxt(const int &col, const QStringList &strList)
{
    switch (col) {
    case 7:
        ui->lineEdit67->setText(strList[6]);
    case 6:
        ui->lineEdit66->setText(strList[5]);
    case 5:
        ui->lineEdit65->setText(strList[4]);
    case 4:
        ui->lineEdit64->setText(strList[3]);
    case 3:
        ui->lineEdit63->setText(strList[2]);
    case 2:
        ui->lineEdit62->setText(strList[1]);
    case 1:
        ui->lineEdit61->setText(strList[0]);
    default:
        break;
    }
}
void MainWindow::Row7lEditTxt(const int &col, const QStringList &strList)
{
    switch (col) {
    case 7:
        ui->lineEdit77->setText(strList[6]);
    case 6:
        ui->lineEdit76->setText(strList[5]);
    case 5:
        ui->lineEdit75->setText(strList[4]);
    case 4:
        ui->lineEdit74->setText(strList[3]);
    case 3:
        ui->lineEdit73->setText(strList[2]);
    case 2:
        ui->lineEdit72->setText(strList[1]);
    case 1:
        ui->lineEdit71->setText(strList[0]);
    default:
        break;
    }
}
void MainWindow::Row8lEditTxt(const int &col, const QStringList &strList)
{
    switch (col) {
    case 7:
        ui->lineEdit87->setText(strList[6]);
    case 6:
        ui->lineEdit86->setText(strList[5]);
    case 5:
        ui->lineEdit85->setText(strList[4]);
    case 4:
        ui->lineEdit84->setText(strList[3]);
    case 3:
        ui->lineEdit83->setText(strList[2]);
    case 2:
        ui->lineEdit82->setText(strList[1]);
    case 1:
        ui->lineEdit81->setText(strList[0]);
    default:
        break;
    }
}

void MainWindow::LineEditALLTXT(int &rJd, const int &col, const QVector<QStringList> strListVec)
{
    switch (rJd) {
    case 7:
        Row8lEditTxt(col, strListVec[7]);
    case 6:
        Row7lEditTxt(col, strListVec[6]);
    case 5:
        Row6lEditTxt(col, strListVec[5]);
    case 4:
        Row5lEditTxt(col, strListVec[4]);
    case 3:
        Row4lEditTxt(col, strListVec[3]);
    case 2:
        Row3lEditTxt(col, strListVec[2]);
    case 1:
        Row2lEditTxt(col, strListVec[1]);
    case 0:
        Row1lEditTxt(col, strListVec[0]);
    default:
        break;
    }
}

void MainWindow::GetAllLineEditTxt(QStringList &datalist)
{

    for(int i =0; i < 7; i++){
        datalist<<x[i]<<"\t";
        datalist<<y1p[i]<<"\t";
        datalist<<y1r[i]<<"\t";
        datalist<<y2p[i]<<"\t";
        datalist<<y2r[i]<<"\t";
        datalist<<y3p[i]<<"\t";
        datalist<<y3r[i]<<"\n";
     }
    datalist<<"\n";
    datalist<<"\n\n注意:若要导入此数据请将下方所有内容删除\n";
    datalist<<"最小二乘曲线为: y = "<<ui->lineEditLsmB1->text()<<"x + ("<<ui->lineEditLsmB0->text()<<")\t";
    datalist<<"\t满量程输出: "<<ui->lineEditLsmFS->text()<<"\n";
    datalist<<"\t非线性度: "<<ui->lineEditLsmLine->text()<<"%\t";
    datalist<<"迟滞性: "<<ui->lineEditLsmHysteria->text()<<"%\t";
    datalist<<"重复性: "<<ui->lineEditLsmRepeat->text()<<"%\n";
    datalist<<"两端点法曲线为: y = "<<ui->lineEditBiPB1->text()<<"x + ("<<ui->lineEditBiPB0->text()<<")\t";
    datalist<<"\t满量程输出: "<<ui->lineEditBiPFS->text()<<"\n";
    datalist<<"\t非线性度: "<<ui->lineEditBiPLine->text()<<"%\t";
    datalist<<"迟滞性: "<<ui->lineEditBiPHysteria->text()<<"%\t";
    datalist<<"重复性: "<<ui->lineEditBiPRepeat->text()<<"%\n";
}


//8
void MainWindow::on_lineEdit11_textChanged(const QString &arg1)
{
    x[0] = ui->lineEdit11->text();
}
void MainWindow::on_lineEdit21_textChanged(const QString &arg1)
{
    x[1] = ui->lineEdit21->text();
}
void MainWindow::on_lineEdit31_textChanged(const QString &arg1)
{
    x[2] = ui->lineEdit31->text();
}
void MainWindow::on_lineEdit41_textChanged(const QString &arg1)
{
    x[3] = ui->lineEdit41->text();
}
void MainWindow::on_lineEdit51_textChanged(const QString &arg1)
{
    x[4] = ui->lineEdit51->text();
}
void MainWindow::on_lineEdit61_textChanged(const QString &arg1)
{
    x[5] = ui->lineEdit61->text();
}
void MainWindow::on_lineEdit71_textChanged(const QString &arg1)
{
    x[6] = ui->lineEdit71->text();
}
void MainWindow::on_lineEdit81_textChanged(const QString &arg1)
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
    if(!SeriesVec.empty()){
        for(int i = 0;i < SeriesVec.size();i++){
            delete SeriesVec[i];
        }
        delete LineBip[0];
        delete LineLsm[0];
    }//此处是为了防止多次缓存数据图
    Data Dy1p(x, y1p);
    Data Dy2p(x, y2p);
    Data Dy3p(x, y3p);
    Data Dy1r(x, y1r);
    Data Dy2r(x, y2r);
    Data Dy3r(x, y3r);
    //接下来是将Data混合成DataVec，最后输出数据
    //注意建立DataVec的对象时，要根据Data有无实质内容进行筛选，不能直接建立
    //必须按顺序填，且保持第一列长于第二列(与data.cpp的getCountsPoints有关，若在其中添加了Data*函数，则可忽略次要求)
    DataVec dv(Dy1p);
    SeriesVec.resize(1);
    //在测试时发现删除某列第一行并不能让这列全部失效，这是因为Data对象的创建中，会忽略不匹配成对的数对，而原第1行的数字会被第2行的数字对替代
    if((Dy1p.y[0]!=NULL)&&(Dy1r.y[0]!=NULL)&&(Dy2p.y[0]!=NULL)&&(Dy2r.y[0]!=NULL)&&(Dy3p.y[0]!=NULL)&&(Dy3r.y[0]!=NULL)){
        DataVec dv6(Dy1p, Dy1r, Dy2p, Dy2r, Dy3p, Dy3r);
        dv = dv6;
        SeriesVec.resize(6);
    }
    else if((Dy1p.y[0]!=NULL)&&(Dy1r.y[0]!=NULL)&&(Dy2p.y[0]!=NULL)&&(Dy2r.y[0]!=NULL)){
        DataVec dv4(Dy1p, Dy1r, Dy2p, Dy2r);
        dv = dv4;
        SeriesVec.resize(4);
    }
    else if((Dy1p.y[0]!=NULL)&&(Dy1r.y[0]!=NULL)){
        DataVec dv2(Dy1p, Dy1r);
        dv = dv2;
        SeriesVec.resize(2);
    }
    else if(Dy1p.y[0]==NULL){
        SeriesVec.resize(0);
    }
    //此处应该还得有添加DataVec dv的QPointF点位进入QChartView
    //有效
    /*{
        dv.Lsm(bs);
        qDebug()<<bs;
        ui->lineEditLsmB0->setText(QString::number(bs[0], 'e', 3));
        ui->lineEditLsmB1->setText(QString::number(bs[1], 'e', 3));
        ui->lineEditLsmFS->setText(QString::number(dv.fullScale(bs[1]), 'g', 3));
        ui->lineEditLsmLine->setText(QString::number(dv.Line(bs[0], bs[1]), 'g', 3));
        ui->lineEditLsmHysteria->setText(QString::number(dv.Hyster(bs[1]), 'g', 3));
        float k = ui->lineEditK->text().toFloat();
        qDebug()<<k;
        if(k)
            ui->lineEditLsmRepeat->setText(QString::number(dv.Repeat(k),'g',3));
        else ui->lineEditLsmRepeat->setText(QString::number(dv.Repeat(),'g',3));
    }*/
    /*lSeries = new QLineSeries();
    for(QVector<QVector<QPointF>>::Iterator iter=dv.QPoints.begin();iter != dv.QPoints.end();iter++){
        for(QVector<QPointF>::Iterator iter2=iter->begin();iter2 != iter->end();iter2++){
            lSeries->append(*iter2);
        }
    }*/
    if(SeriesVec.size() != 0){
        gVOriShow(dv);
        LsmShow(bs,dv);
        BiPShow(bs,dv);
        gVLsmBipShow(bs,dv);
        qDebug()<<bs;
    }
}

void MainWindow::on_Menu1_action_datain_clicked()
{
    QString path = QDir::currentPath();
    QString filter = "文本(*.txt *.md);;CSV文件(*.csv);;全部(*.*)";
    QString fname = QFileDialog::getOpenFileName(this, "查找文件路径", path, filter);
    datastream des(fname);
    if(!des.ReadTxt())
        return;
    des.transferTxt2Forms();
    if(des.ctnparts.isEmpty()){
        QMessageBox::warning(NULL, QString("出错了"), QString("数据为空"));
        return;
    }
    int row = des.ctnparts.size();
    for(int rJudge = 0;rJudge < row;rJudge++){
        int column = des.ctnparts[rJudge].size();
        LineEditALLTXT(rJudge, column, des.ctnparts);
    }
}

void MainWindow::on_Menu1_action_dataout_clicked()
{
    QStringList datalist;
    GetAllLineEditTxt(datalist);
    QFile file;
    file.setFileName(QFileDialog::getSaveFileName(NULL, QString("保存路径"), QString("/"), QString("文本(*.txt)")));
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    file.write(datalist.join("").toUtf8());
    file.close();
}


void MainWindow::on_pBtn1pVis_clicked()
{
    static bool vis=1;
    vis = !vis;
    if(SeriesVec.size()>=1){
        SeriesVec[0]->setVisible(vis);
    }
}


void MainWindow::on_pBtn1rVis_clicked()
{
    static bool vis=1;
    vis = !vis;
    if(SeriesVec.size()>=2){
        SeriesVec[1]->setVisible(vis);
    }
}


void MainWindow::on_pBtn2pVis_clicked()
{
    static bool vis=1;
    vis = !vis;
    if(SeriesVec.size()>=3){
        SeriesVec[2]->setVisible(vis);
    }
}


void MainWindow::on_pBtn2rVis_clicked()
{
    static bool vis=1;
    vis = !vis;
    if(SeriesVec.size()>=4){
        SeriesVec[3]->setVisible(vis);
    }
}


void MainWindow::on_pBtn3pVis_clicked()
{
    static bool vis=1;
    vis = !vis;
    if(SeriesVec.size()>=5){
        SeriesVec[4]->setVisible(vis);
    }
}


void MainWindow::on_pBtn3rVis_clicked()
{
    static bool vis=1;
    vis = !vis;
    if(SeriesVec.size()>=6){
        SeriesVec[5]->setVisible(vis);
    }
}

