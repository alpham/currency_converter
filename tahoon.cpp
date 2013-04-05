/*
 * 
 * Copyright 2012 Ahmed Magdy
 * 
 * ahmed.magdy40@gmail.com 
 * 
 */




#include<QApplication>
#include "new.h"
#include <iostream>
using namespace std;
int main(int argc,char *argv[])
{
    QApplication t(argc,argv);
    Counter a, b;
    QObject::connect(&a, SIGNAL(valueChanged(int)),
                     &b, SLOT(setValue(int)));
    QObject::connect(&b,SIGNAL(valueChanged(int)),
                     &a,SLOT(setValue(int)));

    a.setValue(12);     // a.value() == 12, b.value() == 12
    cout << b.value()<<endl;
    b.setValue(48);     // a.value() == 12, b.value() == 48

    cout << a.value();
}
