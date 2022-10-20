#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QString>
#include <QDebug>
#include "data.h"
#include <QPointF>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void LsmShow(QVector<double> &b, DataVec &dvlsm);
    void BiPShow(QVector<double> &b, DataVec &dvbit);

private slots:
    void on_lineEdit11_textEdited(const QString &arg1);
    void on_lineEdit21_textEdited(const QString &arg1);
    void on_lineEdit31_textEdited(const QString &arg1);
    void on_lineEdit41_textEdited(const QString &arg1);
    void on_lineEdit51_textEdited(const QString &arg1);
    void on_lineEdit61_textEdited(const QString &arg1);
    void on_lineEdit71_textEdited(const QString &arg1);
    void on_lineEdit81_textEdited(const QString &arg1);

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

    void on_pBtnUpdate_clicked();

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
};


#endif // MAINWINDOW_H
