/********************************************************************************
** Form generated from reading UI file 'tic_tac_toe_rand.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIC_TAC_TOE_RAND_H
#define UI_TIC_TAC_TOE_RAND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tic_Tac_Toe_rand
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_mainmenu;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_reset;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_history;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Tic_Tac_Toe_rand)
    {
        if (Tic_Tac_Toe_rand->objectName().isEmpty())
            Tic_Tac_Toe_rand->setObjectName("Tic_Tac_Toe_rand");
        Tic_Tac_Toe_rand->resize(442, 451);
        Tic_Tac_Toe_rand->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"background-color:rgb(59,61,64 );\n"
"}"));
        centralwidget = new QWidget(Tic_Tac_Toe_rand);
        centralwidget->setObjectName("centralwidget");
        pushButton_mainmenu = new QPushButton(centralwidget);
        pushButton_mainmenu->setObjectName("pushButton_mainmenu");
        pushButton_mainmenu->setGeometry(QRect(160, 30, 121, 41));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        pushButton_mainmenu->setFont(font);
        pushButton_mainmenu->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color: rgb(7, 245, 189);\n"
"border:3px solid  rgb(7, 245, 189);\n"
"border-radius:10px;\n"
"}\n"
"QPushButton::Hover\n"
"{\n"
"color: rgb(59, 61, 64);\n"
"background-color:  rgb(7, 245, 189);\n"
"}"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 80, 93, 101));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(10);
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(80, 190, 93, 101));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton_reset = new QPushButton(centralwidget);
        pushButton_reset->setObjectName("pushButton_reset");
        pushButton_reset->setGeometry(QRect(30, 30, 121, 41));
        pushButton_reset->setFont(font);
        pushButton_reset->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color: rgb(7, 245, 189);\n"
"border:3px solid  rgb(7, 245, 189);\n"
"border-radius:10px;\n"
"}\n"
"QPushButton::Hover\n"
"{\n"
"color: rgb(59, 61, 64);\n"
"background-color:  rgb(7, 245, 189);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(180, 80, 93, 101));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(280, 190, 93, 101));
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(80, 300, 93, 101));
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(180, 300, 93, 101));
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton_history = new QPushButton(centralwidget);
        pushButton_history->setObjectName("pushButton_history");
        pushButton_history->setGeometry(QRect(290, 30, 121, 41));
        QFont font2;
        font2.setBold(true);
        pushButton_history->setFont(font2);
        pushButton_history->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color: rgb(7, 245, 189);\n"
"border:3px solid  rgb(7, 245, 189);\n"
"border-radius:10px;\n"
"}\n"
"QPushButton::Hover\n"
"{\n"
"color: rgb(59, 61, 64);\n"
"background-color:  rgb(7, 245, 189);\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(180, 190, 93, 101));
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(280, 80, 93, 101));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(280, 300, 93, 101));
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        Tic_Tac_Toe_rand->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Tic_Tac_Toe_rand);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 442, 25));
        Tic_Tac_Toe_rand->setMenuBar(menubar);
        statusbar = new QStatusBar(Tic_Tac_Toe_rand);
        statusbar->setObjectName("statusbar");
        Tic_Tac_Toe_rand->setStatusBar(statusbar);

        retranslateUi(Tic_Tac_Toe_rand);

        QMetaObject::connectSlotsByName(Tic_Tac_Toe_rand);
    } // setupUi

    void retranslateUi(QMainWindow *Tic_Tac_Toe_rand)
    {
        Tic_Tac_Toe_rand->setWindowTitle(QCoreApplication::translate("Tic_Tac_Toe_rand", "MainWindow", nullptr));
        pushButton_mainmenu->setText(QCoreApplication::translate("Tic_Tac_Toe_rand", "Main Menu", nullptr));
        pushButton->setText(QString());
        pushButton_4->setText(QString());
        pushButton_reset->setText(QCoreApplication::translate("Tic_Tac_Toe_rand", "Reset", nullptr));
        pushButton_2->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_history->setText(QCoreApplication::translate("Tic_Tac_Toe_rand", "History", nullptr));
        pushButton_5->setText(QString());
        pushButton_3->setText(QString());
        pushButton_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Tic_Tac_Toe_rand: public Ui_Tic_Tac_Toe_rand {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIC_TAC_TOE_RAND_H
