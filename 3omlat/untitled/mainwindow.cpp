#include <QtGui>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    setupUi(this);
    label_2->setMinimumSize(lineEdit->sizeHint());
    firstVal->setVisible(0);secVal->setVisible(0);

    QRegExp reg("[0-9]{0,5}[.]{0,1}[0-9]{0,2}");
    QString string;
    poundPerUSD=5.5;
    poundPerEUR=7.54;
    /*
      opeenfile
      read file
      >>name=value;
      for(file.not Empty){
      name >> currName
      value >> currvalue
      line++
      }

*/

    lineEdit->setValidator(new QRegExpValidator(reg));
    firstVal->addItem(string.setNum(1.00));
    firstVal->addItem(string.setNum(poundPerUSD));
    firstVal->addItem(string.setNum(poundPerEUR));

    secVal->addItem(string.setNum(1.00));
    secVal->addItem(string.setNum(poundPerUSD));
    secVal->addItem(string.setNum(poundPerEUR));

    comboBox->addItem(tr("EGP"));
    comboBox->addItem(tr("USD"));
    comboBox->addItem(tr("EUR"));


    comboBox_3->addItem(tr("EGP"));
    comboBox_3->addItem(tr("USD"));
    comboBox_3->addItem(tr("EUR"));


    connect(comboBox,SIGNAL(currentIndexChanged(int)),firstVal,SLOT(setCurrentIndex(int)));
    connect(comboBox_3,SIGNAL(currentIndexChanged(int)),secVal,SLOT(setCurrentIndex(int)));

    connect(lineEdit,SIGNAL(textChanged(QString)),this,SLOT(updateResult()));
    connect(firstVal,SIGNAL(currentIndexChanged(int)),this,SLOT(updateResult()));
    connect(secVal,SIGNAL(currentIndexChanged(int)),this,SLOT(updateResult()));


    actionA_bout_CC->setStatusTip(tr("Aobut CC !"));
    action_Exit->setStatusTip(tr("Exit PROG..."));
    connect(actionA_bout_CC,SIGNAL(triggered()),this,SLOT(about()));
    connect(action_Exit,SIGNAL(triggered()),this,SLOT(close()));
}

MainWindow::~MainWindow()
{
}

void MainWindow::updateResult()
{
    label_2->setNum(((lineEdit->text().toDouble())*(firstVal->currentText().toDouble()))/(secVal->currentText().toDouble()));

}

void MainWindow::about()
{
    QMessageBox::about(this,
                       tr("About Currency Converter..."),
                       tr("<h2>Currency Converter.</h2>"
                          "<p>Copyright &copy;</p>"
                          "<p>[<font color=\"red\">Ahmed.Magdy</font>40@Gmail.com] && [<font color=\"green\">TahOon Abo El-TaWaHeEn</font>]</p>"
                          "<p>TahOon Abo El-TaWaheEn 2marny 23melo el-bermhlg da, 7d loh shoo2 fe 7aga ??!!</p>"));
}
