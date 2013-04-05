#include <QtGui/QtGui>
#include "ta7weelat.h"

Ta7weelat::Ta7weelat(QWidget *parent)
    : QMainWindow(parent)
{

    poundPerUSD=5.5;
    poundPerEUR=7.56;

    QLineEdit *firstValue=new QLineEdit;
    QLabel *secondValue=new QLabel("");
    QLabel *equal=new QLabel("<b>  =  </b>");
    QComboBox *originalCurrency=new QComboBox;
    QComboBox *convertdCurrency=new QComboBox;

    /*hidden values*/
    QComboBox *originalVal=new QComboBox;
    QComboBox *convertdVal=new QComboBox;
    /*/hidden values/*/

    layout()->addWidget(firstValue);
    layout()->addWidget(originalCurrency);
    layout()->addWidget(originalVal);

    layout()->addWidget(equal);

    layout()->addWidget(secondValue);
    layout()->addWidget(convertdCurrency);
    layout()->addWidget(convertdVal);

    QString ayHaga;

    originalCurrency->addItem(tr("EGP"));originalVal->addItem("1");
    originalCurrency->addItem(tr("USD"));originalVal->addItem(ayHaga.setNum(poundPerUSD));
    originalCurrency->addItem(tr("EUR"));originalVal->addItem(ayHaga.setNum(poundPerEUR));
    originalCurrency->show();originalVal->setVisible(1);

    convertdCurrency->addItem(tr("EGP"));convertdVal->addItem("1");
    convertdCurrency->addItem(tr("USD"));convertdVal->addItem(ayHaga.setNum(poundPerUSD));
    convertdCurrency->addItem(tr("EUR"));convertdVal->addItem(ayHaga.setNum(poundPerEUR));
    convertdCurrency->show();convertdVal->setVisible(1);

    firstValue->show();

    equal->show();

    secondValue->show();
    QRegExp *r=new QRegExp("[0-9]{0,8}[.]{0,1}[0-9]{0,2}");
    firstValue->setValidator(new QRegExpValidator(*r));

    connect(originalCurrency,SIGNAL(currentIndexChanged(int)),originalVal,SLOT(setCurrentIndex(int)));
    connect(convertdCurrency,SIGNAL(currentIndexChanged(int)),convertdVal,SLOT(setCurrentIndex(int)));

    connect(originalVal,SIGNAL(currentIndexChanged(int)),this,SLOT(updateResult()));
    connect(convertdVal,SIGNAL(currentIndexChanged(int)),this,SLOT(updateResult()));

    connect(firstValue,SIGNAL(textChanged(QString)),this,SLOT(updateResult()));




}

Ta7weelat::~Ta7weelat()
{
    
}


void Ta7weelat::updateResult()
{
    if(firstValue->hasAcceptableInput())
        secondValue->setNum((firstValue->text().toDouble() * originalVal->currentText().toDouble())/convertdVal->currentText().toDouble());

}
