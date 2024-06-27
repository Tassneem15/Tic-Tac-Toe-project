/********************************************************************************
** Form generated from reading UI file 'data_base.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATA_BASE_H
#define UI_DATA_BASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_data_base
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *data_base)
    {
        if (data_base->objectName().isEmpty())
            data_base->setObjectName("data_base");
        data_base->resize(800, 600);
        centralwidget = new QWidget(data_base);
        centralwidget->setObjectName("centralwidget");
        data_base->setCentralWidget(centralwidget);
        menubar = new QMenuBar(data_base);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        data_base->setMenuBar(menubar);
        statusbar = new QStatusBar(data_base);
        statusbar->setObjectName("statusbar");
        data_base->setStatusBar(statusbar);

        retranslateUi(data_base);

        QMetaObject::connectSlotsByName(data_base);
    } // setupUi

    void retranslateUi(QMainWindow *data_base)
    {
        data_base->setWindowTitle(QCoreApplication::translate("data_base", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class data_base: public Ui_data_base {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATA_BASE_H
