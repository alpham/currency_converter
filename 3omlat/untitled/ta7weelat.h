#ifndef TA7WEELAT_H
#define TA7WEELAT_H

#include <QtGui/QMainWindow>
class QLabel;
class QLineEdit;
class QComboBox;
class Ta7weelat : public QMainWindow
{
    Q_OBJECT
    
public:
    Ta7weelat(QWidget *parent = 0) ;
    ~Ta7weelat();

private:
    double poundPerUSD;
    double poundPerEUR;
    QLineEdit *firstValue;
    QLabel *secondValue;
    QComboBox *originalCurrency;
    QComboBox *convertdCurrency;
    QComboBox *originalVal;
    QComboBox *convertdVal;

public slots:
    void updateResult();
};

#endif // TA7WEELAT_H
