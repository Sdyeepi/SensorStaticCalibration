#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QString>
#include <QDebug>
#include "data.h"
#include "datastream.h"
#include <QPointF>
#include <QChart>
#include <QValueAxis>
#include <QChartView>
#include <QLineSeries>
#include <QColor>
#include <QDir>
#include <QPointer>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
QT_CHARTS_USE_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void LsmShow(QVector<double> &b, DataVec &dvlsm);
    void BiPShow(QVector<double> &b, DataVec &dvbit);
    void gVOriShow(DataVec &dv);
    void gVLsmBipShow(QVector<double> &bs, DataVec &dv);

    void Row1lEditTxt(const int &col, const QStringList &strList);
    void Row2lEditTxt(const int &col, const QStringList &strList);
    void Row3lEditTxt(const int &col, const QStringList &strList);
    void Row4lEditTxt(const int &col, const QStringList &strList);
    void Row5lEditTxt(const int &col, const QStringList &strList);
    void Row6lEditTxt(const int &col, const QStringList &strList);
    void Row7lEditTxt(const int &col, const QStringList &strList);
    void Row8lEditTxt(const int &col, const QStringList &strList);
    void LineEditALLTXT(int &rJd, const int &col, const QVector<QStringList> strListVec);

    void GetAllLineEditTxt(QStringList& datalist);

private slots:
    void on_lineEdit11_textChanged(const QString &arg1);
    void on_lineEdit21_textChanged(const QString &arg1);
    void on_lineEdit31_textChanged(const QString &arg1);
    void on_lineEdit41_textChanged(const QString &arg1);
    void on_lineEdit51_textChanged(const QString &arg1);
    void on_lineEdit61_textChanged(const QString &arg1);
    void on_lineEdit71_textChanged(const QString &arg1);
    void on_lineEdit81_textChanged(const QString &arg1);

    void on_lineEdit12_textChanged(const QString &arg1);
    void on_lineEdit22_textChanged(const QString &arg1);
    void on_lineEdit32_textChanged(const QString &arg1);
    void on_lineEdit42_textChanged(const QString &arg1);
    void on_lineEdit52_textChanged(const QString &arg1);
    void on_lineEdit62_textChanged(const QString &arg1);
    void on_lineEdit72_textChanged(const QString &arg1);
    void on_lineEdit82_textChanged(const QString &arg1);

    void on_lineEdit13_textChanged(const QString &arg1);
    void on_lineEdit23_textChanged(const QString &arg1);
    void on_lineEdit33_textChanged(const QString &arg1);
    void on_lineEdit43_textChanged(const QString &arg1);
    void on_lineEdit53_textChanged(const QString &arg1);
    void on_lineEdit63_textChanged(const QString &arg1);
    void on_lineEdit73_textChanged(const QString &arg1);
    void on_lineEdit83_textChanged(const QString &arg1);

    void on_lineEdit14_textChanged(const QString &arg1);
    void on_lineEdit24_textChanged(const QString &arg1);
    void on_lineEdit34_textChanged(const QString &arg1);
    void on_lineEdit44_textChanged(const QString &arg1);
    void on_lineEdit54_textChanged(const QString &arg1);
    void on_lineEdit64_textChanged(const QString &arg1);
    void on_lineEdit74_textChanged(const QString &arg1);
    void on_lineEdit84_textChanged(const QString &arg1);

    void on_lineEdit15_textChanged(const QString &arg1);
    void on_lineEdit25_textChanged(const QString &arg1);
    void on_lineEdit35_textChanged(const QString &arg1);
    void on_lineEdit45_textChanged(const QString &arg1);
    void on_lineEdit55_textChanged(const QString &arg1);
    void on_lineEdit65_textChanged(const QString &arg1);
    void on_lineEdit75_textChanged(const QString &arg1);
    void on_lineEdit85_textChanged(const QString &arg1);

    void on_lineEdit16_textChanged(const QString &arg1);
    void on_lineEdit26_textChanged(const QString &arg1);
    void on_lineEdit36_textChanged(const QString &arg1);
    void on_lineEdit46_textChanged(const QString &arg1);
    void on_lineEdit56_textChanged(const QString &arg1);
    void on_lineEdit66_textChanged(const QString &arg1);
    void on_lineEdit76_textChanged(const QString &arg1);
    void on_lineEdit86_textChanged(const QString &arg1);

    void on_lineEdit17_textChanged(const QString &arg1);
    void on_lineEdit27_textChanged(const QString &arg1);
    void on_lineEdit37_textChanged(const QString &arg1);
    void on_lineEdit47_textChanged(const QString &arg1);
    void on_lineEdit57_textChanged(const QString &arg1);
    void on_lineEdit67_textChanged(const QString &arg1);
    void on_lineEdit77_textChanged(const QString &arg1);
    void on_lineEdit87_textChanged(const QString &arg1);

    void on_pBtn1pVis_clicked();
    void on_pBtn1rVis_clicked();
    void on_pBtn2pVis_clicked();
    void on_pBtn2rVis_clicked();
    void on_pBtn3pVis_clicked();
    void on_pBtn3rVis_clicked();

    void on_pBtnUpdate_clicked();

    void on_Menu1_action_datain_clicked();
    void on_Menu1_action_dataout_clicked();

private:
    Ui::MainWindow *ui;
    QVector<QString> x;
    QVector<QString> y1p;
    QVector<QString> y2p;
    QVector<QString> y3p;
    QVector<QString> y1r;
    QVector<QString> y2r;
    QVector<QString> y3r;
    QVector<double> bs;
    QPointer<QChart> chart;
    QPointer<QChart> chart2;
    QVector<QPointer<QLineSeries>> SeriesVec;
    QVector<QPointer<QLineSeries>> LineLsm;
    QVector<QPointer<QLineSeries>> LineBip;
};


#endif // MAINWINDOW_H
