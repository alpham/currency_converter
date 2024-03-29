#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"

class MainWindow : public QMainWindow ,public Ui::MainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
public slots:
    void updateResult();

private slots:
    void about();

private:
    double poundPerUSD;
    double poundPerEUR;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
