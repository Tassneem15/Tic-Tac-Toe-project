/********************************************************************************
** Form generated from reading UI file 'sec_player_login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEC_PLAYER_LOGIN_H
#define UI_SEC_PLAYER_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sec_player_login
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label_username;
    QLabel *label_password;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QPushButton *button_cancel;
    QPushButton *button_sign;
    QPushButton *Button_login;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *sec_player_login)
    {
        if (sec_player_login->objectName().isEmpty())
            sec_player_login->setObjectName("sec_player_login");
        sec_player_login->resize(569, 319);
        sec_player_login->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"background-color:rgb(59, 61, 64);\n"
"}"));
        centralwidget = new QWidget(sec_player_login);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 581, 331));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"background-color:rgb(59, 61, 64);\n"
"color:black;\n"
"}"));
        label_username = new QLabel(groupBox);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(30, 60, 121, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        label_username->setFont(font);
        label_username->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(7, 245, 189);\n"
"}"));
        label_username->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_password = new QLabel(groupBox);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(30, 120, 121, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(14);
        font1.setBold(true);
        label_password->setFont(font1);
        label_password->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(7, 245, 189);\n"
"}"));
        label_password->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(190, 60, 341, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(12);
        font2.setBold(true);
        lineEdit_username->setFont(font2);
        lineEdit_username->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"color: rgb(7, 245, 189);\n"
"border:none;\n"
"background-color:transparent;\n"
"border-bottom:5px solid  rgb(7, 245, 189);\n"
"}\n"
"QLineEdit::Focus\n"
"{\n"
"border:5px solid rgb(7, 245, 189);\n"
"}"));
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(190, 120, 341, 31));
        lineEdit_password->setFont(font2);
        lineEdit_password->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"color: rgb(7, 245, 189);\n"
"border:none;\n"
"background-color:transparent;\n"
"border-bottom:5px solid  rgb(7, 245, 189);\n"
"}\n"
"QLineEdit::Focus\n"
"{\n"
"border:5px solid rgb(7, 245, 189);\n"
"}"));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        lineEdit_password->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        button_cancel = new QPushButton(groupBox);
        button_cancel->setObjectName("button_cancel");
        button_cancel->setGeometry(QRect(400, 200, 151, 61));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(11);
        font3.setBold(true);
        button_cancel->setFont(font3);
        button_cancel->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(7, 245, 189);\n"
"border:none;\n"
"background-color:transparent;\n"
"border:2px solid rgb(7, 245, 189);\n"
"border-radius:30px;\n"
"}\n"
"QPushButton::Hover\n"
"{\n"
"color:rgb(59, 61, 64);\n"
"background-color:rgb(7, 245, 189);\n"
"}"));
        button_sign = new QPushButton(groupBox);
        button_sign->setObjectName("button_sign");
        button_sign->setGeometry(QRect(210, 200, 151, 61));
        button_sign->setFont(font3);
        button_sign->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(7, 245, 189);\n"
"border:none;\n"
"background-color:transparent;\n"
"border:2px solid rgb(7, 245, 189);\n"
"border-radius:30px;\n"
"}\n"
"QPushButton::Hover\n"
"{\n"
"color:rgb(59, 61, 64);\n"
"background-color:rgb(7, 245, 189);\n"
"}"));
        Button_login = new QPushButton(groupBox);
        Button_login->setObjectName("Button_login");
        Button_login->setGeometry(QRect(30, 200, 151, 61));
        Button_login->setFont(font3);
        Button_login->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(7, 245, 189);\n"
"border:none;\n"
"background-color:transparent;\n"
"border:2px solid rgb(7, 245, 189);\n"
"border-radius:30px;\n"
"}\n"
"QPushButton::Hover\n"
"{\n"
"color:rgb(59, 61, 64);\n"
"background-color:rgb(7, 245, 189);\n"
"}"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 10, 461, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Times New Roman")});
        font4.setPointSize(15);
        font4.setBold(true);
        label->setFont(font4);
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background-color:rgb(59, 61, 64);\n"
"color:rgb(7, 245, 189);\n"
"}"));
        label->setAlignment(Qt::AlignCenter);
        sec_player_login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(sec_player_login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 569, 25));
        sec_player_login->setMenuBar(menubar);
        statusbar = new QStatusBar(sec_player_login);
        statusbar->setObjectName("statusbar");
        sec_player_login->setStatusBar(statusbar);

        retranslateUi(sec_player_login);

        QMetaObject::connectSlotsByName(sec_player_login);
    } // setupUi

    void retranslateUi(QMainWindow *sec_player_login)
    {
        sec_player_login->setWindowTitle(QCoreApplication::translate("sec_player_login", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        label_username->setText(QCoreApplication::translate("sec_player_login", "Username :", nullptr));
        label_password->setText(QCoreApplication::translate("sec_player_login", "Password :", nullptr));
        button_cancel->setText(QCoreApplication::translate("sec_player_login", "CANCEL", nullptr));
        button_sign->setText(QCoreApplication::translate("sec_player_login", "SIGN UP", nullptr));
        Button_login->setText(QCoreApplication::translate("sec_player_login", "LOGIN", nullptr));
        label->setText(QCoreApplication::translate("sec_player_login", "Second Player Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sec_player_login: public Ui_sec_player_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEC_PLAYER_LOGIN_H
