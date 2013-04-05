/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Exit;
    QAction *actionA_bout_CC;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *firstVal;
    QComboBox *secVal;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_About;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(582, 365);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/tahoon"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName(QString::fromUtf8("action_Exit"));
        actionA_bout_CC = new QAction(MainWindow);
        actionA_bout_CC->setObjectName(QString::fromUtf8("actionA_bout_CC"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_2->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(1000, 16777215));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        comboBox_3 = new QComboBox(centralWidget);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        horizontalLayout->addWidget(comboBox_3);


        gridLayout->addLayout(horizontalLayout, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        firstVal = new QComboBox(centralWidget);
        firstVal->setObjectName(QString::fromUtf8("firstVal"));
        firstVal->setEnabled(false);

        horizontalLayout_3->addWidget(firstVal);

        secVal = new QComboBox(centralWidget);
        secVal->setObjectName(QString::fromUtf8("secVal"));
        secVal->setEnabled(false);

        horizontalLayout_3->addWidget(secVal);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 582, 29));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_About = new QMenu(menuBar);
        menu_About->setObjectName(QString::fromUtf8("menu_About"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(lineEdit, comboBox);
        QWidget::setTabOrder(comboBox, comboBox_3);
        QWidget::setTabOrder(comboBox_3, firstVal);
        QWidget::setTabOrder(firstVal, secVal);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_About->menuAction());
        menu_File->addAction(action_Exit);
        menu_About->addAction(actionA_bout_CC);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        action_Exit->setText(QApplication::translate("MainWindow", "&Exit", 0, QApplication::UnicodeUTF8));
        action_Exit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionA_bout_CC->setText(QApplication::translate("MainWindow", "A&bout CC..", 0, QApplication::UnicodeUTF8));
        actionA_bout_CC->setShortcut(QApplication::translate("MainWindow", "F1", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "<b>  =  </b>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "0.00", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menu_About->setTitle(QApplication::translate("MainWindow", "&About", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
