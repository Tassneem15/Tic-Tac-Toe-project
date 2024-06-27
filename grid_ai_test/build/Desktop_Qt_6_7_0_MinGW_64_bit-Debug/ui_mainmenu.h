/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QRadioButton *radioButton_easy;
    QRadioButton *radioButton_hard;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QPushButton *pushButton_1VS1;
    QPushButton *pushButton_1VSAI;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName("MainMenu");
        MainMenu->resize(453, 255);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainMenu->sizePolicy().hasHeightForWidth());
        MainMenu->setSizePolicy(sizePolicy);
        MainMenu->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"background-color:rgb(59, 61, 64);\n"
"}\n"
""));
        centralwidget = new QWidget(MainMenu);
        centralwidget->setObjectName("centralwidget");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 10, 311, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(14);
        font.setBold(true);
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(7,245,189);\n"
"}"));
        label_3->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 50, 401, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(12);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(7, 245, 189);\n"
"}"));

        horizontalLayout->addWidget(label);

        radioButton_easy = new QRadioButton(layoutWidget);
        radioButton_easy->setObjectName("radioButton_easy");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(radioButton_easy->sizePolicy().hasHeightForWidth());
        radioButton_easy->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(10);
        font2.setBold(true);
        radioButton_easy->setFont(font2);
        radioButton_easy->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"color: rgb(7, 245, 189);\n"
"border:3px solid rgb(7, 245, 189);\n"
"border-radius:10px;\n"
"}\n"
"QRadioButton::Hover\n"
"{\n"
"color:rgb(59,61,64);\n"
"background-color: rgb(7, 245, 189);\n"
"}"));

        horizontalLayout->addWidget(radioButton_easy);

        radioButton_hard = new QRadioButton(layoutWidget);
        radioButton_hard->setObjectName("radioButton_hard");
        sizePolicy1.setHeightForWidth(radioButton_hard->sizePolicy().hasHeightForWidth());
        radioButton_hard->setSizePolicy(sizePolicy1);
        radioButton_hard->setFont(font2);
        radioButton_hard->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"color: rgb(7, 245, 189);\n"
"border:3px solid rgb(7, 245, 189);\n"
"border-radius:10px;\n"
"}\n"
"QRadioButton::Hover\n"
"{\n"
"color:rgb(59,61,64);\n"
"background-color: rgb(7, 245, 189);\n"
"}"));

        horizontalLayout->addWidget(radioButton_hard);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 140, 401, 61));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(7, 245, 189);\n"
"}"));

        horizontalLayout_2->addWidget(label_2);

        pushButton_1VS1 = new QPushButton(layoutWidget1);
        pushButton_1VS1->setObjectName("pushButton_1VS1");
        sizePolicy1.setHeightForWidth(pushButton_1VS1->sizePolicy().hasHeightForWidth());
        pushButton_1VS1->setSizePolicy(sizePolicy1);
        pushButton_1VS1->setFont(font2);
        pushButton_1VS1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color: rgb(7, 245, 189);\n"
"border:3px solid rgb(7, 245, 189);\n"
"border-radius:10px;\n"
"}\n"
"QPushButton::Hover\n"
"{\n"
"color:rgb(59,61,64);\n"
"background-color: rgb(7, 245, 189);\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_1VS1);

        pushButton_1VSAI = new QPushButton(layoutWidget1);
        pushButton_1VSAI->setObjectName("pushButton_1VSAI");
        sizePolicy1.setHeightForWidth(pushButton_1VSAI->sizePolicy().hasHeightForWidth());
        pushButton_1VSAI->setSizePolicy(sizePolicy1);
        pushButton_1VSAI->setFont(font2);
        pushButton_1VSAI->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color: rgb(7, 245, 189);\n"
"border:3px solid rgb(7, 245, 189);\n"
"border-radius:10px;\n"
"}\n"
"QPushButton::Hover\n"
"{\n"
"color:rgb(59,61,64);\n"
"background-color: rgb(7, 245, 189);\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_1VSAI);

        MainMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainMenu);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 453, 26));
        MainMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(MainMenu);
        statusbar->setObjectName("statusbar");
        MainMenu->setStatusBar(statusbar);

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QMainWindow *MainMenu)
    {
        MainMenu->setWindowTitle(QCoreApplication::translate("MainMenu", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainMenu", "Choose The Mode", nullptr));
        label->setText(QCoreApplication::translate("MainMenu", "Difficulty:", nullptr));
        radioButton_easy->setText(QCoreApplication::translate("MainMenu", "      Easy", nullptr));
        radioButton_hard->setText(QCoreApplication::translate("MainMenu", "      Hard", nullptr));
        label_2->setText(QCoreApplication::translate("MainMenu", "Mode:", nullptr));
        pushButton_1VS1->setText(QCoreApplication::translate("MainMenu", " 1 VS 1", nullptr));
        pushButton_1VSAI->setText(QCoreApplication::translate("MainMenu", "1 VS AI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
