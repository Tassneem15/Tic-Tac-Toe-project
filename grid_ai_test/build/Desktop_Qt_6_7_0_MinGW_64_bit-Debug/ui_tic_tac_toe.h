/********************************************************************************
** Form generated from reading UI file 'tic_tac_toe.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIC_TAC_TOE_H
#define UI_TIC_TAC_TOE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TIC_TAC_TOE
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_reset;
    QPushButton *pushButton_mainmenu;
    QPushButton *pushButton_history;
    QTableView *gameResultsTableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TIC_TAC_TOE)
    {
        if (TIC_TAC_TOE->objectName().isEmpty())
            TIC_TAC_TOE->setObjectName("TIC_TAC_TOE");
        TIC_TAC_TOE->resize(834, 441);
        TIC_TAC_TOE->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"background-color:rgb(59,61,64 );\n"
"}"));
        centralwidget = new QWidget(TIC_TAC_TOE);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 60, 93, 101));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(10);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 60, 93, 101));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(260, 60, 93, 101));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(60, 170, 93, 101));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(160, 170, 93, 101));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(260, 170, 93, 101));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(60, 280, 93, 101));
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(160, 280, 93, 101));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(260, 280, 93, 101));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(7 ,245, 189);\n"
"}"));
        pushButton_reset = new QPushButton(centralwidget);
        pushButton_reset->setObjectName("pushButton_reset");
        pushButton_reset->setGeometry(QRect(10, 10, 121, 41));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        pushButton_reset->setFont(font1);
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
        pushButton_mainmenu = new QPushButton(centralwidget);
        pushButton_mainmenu->setObjectName("pushButton_mainmenu");
        pushButton_mainmenu->setGeometry(QRect(140, 10, 121, 41));
        pushButton_mainmenu->setFont(font1);
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
        pushButton_history = new QPushButton(centralwidget);
        pushButton_history->setObjectName("pushButton_history");
        pushButton_history->setGeometry(QRect(270, 10, 121, 41));
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
        gameResultsTableView = new QTableView(centralwidget);
        gameResultsTableView->setObjectName("gameResultsTableView");
        gameResultsTableView->setGeometry(QRect(420, 0, 411, 391));
        gameResultsTableView->setStyleSheet(QString::fromUtf8("QTableView\n"
"{\n"
"background-color:rgb(59,61,64 );\n"
"color: rgb(7, 245, 189);\n"
"border:3px solid  rgb(7, 245, 189);\n"
"}\n"
"QHeaderView::section {\n"
"  background-color: rgb(59,61,64 ); /* Change to your desired color */\n"
"  color: rgb(7, 245, 189); /* Change to your desired text color */\n"
"  padding: 4px; /* Optional: Add padding */\n"
"  text-align: center; /* Optional: Center align the header text */\n"
"}\n"
""));
        TIC_TAC_TOE->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TIC_TAC_TOE);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 834, 25));
        TIC_TAC_TOE->setMenuBar(menubar);
        statusbar = new QStatusBar(TIC_TAC_TOE);
        statusbar->setObjectName("statusbar");
        TIC_TAC_TOE->setStatusBar(statusbar);

        retranslateUi(TIC_TAC_TOE);

        QMetaObject::connectSlotsByName(TIC_TAC_TOE);
    } // setupUi

    void retranslateUi(QMainWindow *TIC_TAC_TOE)
    {
        TIC_TAC_TOE->setWindowTitle(QCoreApplication::translate("TIC_TAC_TOE", "MainWindow", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        pushButton_reset->setText(QCoreApplication::translate("TIC_TAC_TOE", "Reset", nullptr));
        pushButton_mainmenu->setText(QCoreApplication::translate("TIC_TAC_TOE", "Main Menu", nullptr));
        pushButton_history->setText(QCoreApplication::translate("TIC_TAC_TOE", "History", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TIC_TAC_TOE: public Ui_TIC_TAC_TOE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIC_TAC_TOE_H
