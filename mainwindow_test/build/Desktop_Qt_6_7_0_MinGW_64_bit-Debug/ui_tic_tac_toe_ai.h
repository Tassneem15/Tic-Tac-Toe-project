/********************************************************************************
** Form generated from reading UI file 'tic_tac_toe_ai.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIC_TAC_TOE_AI_H
#define UI_TIC_TAC_TOE_AI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tic_tac_toe_AI
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_reset;
    QPushButton *pushButton_history;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_9;
    QPushButton *pushButton_4;
    QPushButton *pushButton_mainmenu;
    QPushButton *pushButton_8;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *tic_tac_toe_AI)
    {
        if (tic_tac_toe_AI->objectName().isEmpty())
            tic_tac_toe_AI->setObjectName("tic_tac_toe_AI");
        tic_tac_toe_AI->resize(402, 433);
        tic_tac_toe_AI->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"background-color:rgb(59,61,64 );\n"
"}"));
        centralwidget = new QWidget(tic_tac_toe_AI);
        centralwidget->setObjectName("centralwidget");
        pushButton_reset = new QPushButton(centralwidget);
        pushButton_reset->setObjectName("pushButton_reset");
        pushButton_reset->setGeometry(QRect(10, 10, 121, 41));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
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
        pushButton_history = new QPushButton(centralwidget);
        pushButton_history->setObjectName("pushButton_history");
        pushButton_history->setGeometry(QRect(270, 10, 121, 41));
        QFont font1;
        font1.setBold(true);
        pushButton_history->setFont(font1);
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
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 60, 93, 101));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(10);
        font2.setBold(true);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(160, 170, 93, 101));
        pushButton_5->setFont(font2);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(260, 170, 93, 101));
        pushButton_6->setFont(font2);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(260, 280, 93, 101));
        pushButton_9->setFont(font2);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(60, 170, 93, 101));
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton_mainmenu = new QPushButton(centralwidget);
        pushButton_mainmenu->setObjectName("pushButton_mainmenu");
        pushButton_mainmenu->setGeometry(QRect(140, 10, 121, 41));
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
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(160, 280, 93, 101));
        pushButton_8->setFont(font2);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(260, 60, 93, 101));
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(60, 280, 93, 101));
        pushButton_7->setFont(font2);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 60, 93, 101));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        tic_tac_toe_AI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(tic_tac_toe_AI);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 402, 25));
        tic_tac_toe_AI->setMenuBar(menubar);
        statusbar = new QStatusBar(tic_tac_toe_AI);
        statusbar->setObjectName("statusbar");
        tic_tac_toe_AI->setStatusBar(statusbar);

        retranslateUi(tic_tac_toe_AI);

        QMetaObject::connectSlotsByName(tic_tac_toe_AI);
    } // setupUi

    void retranslateUi(QMainWindow *tic_tac_toe_AI)
    {
        tic_tac_toe_AI->setWindowTitle(QCoreApplication::translate("tic_tac_toe_AI", "MainWindow", nullptr));
        pushButton_reset->setText(QCoreApplication::translate("tic_tac_toe_AI", "Reset", nullptr));
        pushButton_history->setText(QCoreApplication::translate("tic_tac_toe_AI", "History", nullptr));
        pushButton_2->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_9->setText(QString());
        pushButton_4->setText(QString());
        pushButton_mainmenu->setText(QCoreApplication::translate("tic_tac_toe_AI", "Main Menu", nullptr));
        pushButton_8->setText(QString());
        pushButton_3->setText(QString());
        pushButton_7->setText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class tic_tac_toe_AI: public Ui_tic_tac_toe_AI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIC_TAC_TOE_AI_H
