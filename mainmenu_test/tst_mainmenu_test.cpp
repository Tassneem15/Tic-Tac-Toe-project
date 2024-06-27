#include <QtTest/QtTest>
#include "../mainmenu.h"
#include <QPushButton>
#include <QRadioButton>
#include <QSignalSpy>
#include <QApplication>

class TestMainMenu : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void cleanupTestCase();
    void testButton1VS1();
    void testButton1VSAI_easy();
    void testButton1VSAI_hard();
    void testRadioButtonEasy();
    void testRadioButtonHard();

private:
    MainMenu *mainMenu;
};

void TestMainMenu::initTestCase()
{
    mainMenu = new MainMenu();
    mainMenu->show();
}

void TestMainMenu::cleanupTestCase()
{
    delete mainMenu;
}

void TestMainMenu::testButton1VS1()
{
    QPushButton *button1VS1 = mainMenu->findChild<QPushButton*>("pushButton_1VS1");
    QVERIFY(button1VS1);

    QSignalSpy spy(mainMenu, &MainMenu::hide);
    QTest::mouseClick(button1VS1, Qt::LeftButton);
    QCOMPARE(spy.count(), 1);
}

void TestMainMenu::testButton1VSAI_easy()
{
    QRadioButton *radioButtonEasy = mainMenu->findChild<QRadioButton*>("radioButton_easy");
    QVERIFY(radioButtonEasy);

    QTest::mouseClick(radioButtonEasy, Qt::LeftButton);
    QVERIFY(radioButtonEasy->isChecked());

    QPushButton *button1VSAI = mainMenu->findChild<QPushButton*>("pushButton_1VSAI");
    QVERIFY(button1VSAI);

    QSignalSpy spy(mainMenu, &MainMenu::hide);
    QTest::mouseClick(button1VSAI, Qt::LeftButton);
    QCOMPARE(spy.count(), 1);
}

void TestMainMenu::testButton1VSAI_hard()
{
    QRadioButton *radioButtonHard = mainMenu->findChild<QRadioButton*>("radioButton_hard");
    QVERIFY(radioButtonHard);

    QTest::mouseClick(radioButtonHard, Qt::LeftButton);
    QVERIFY(radioButtonHard->isChecked());

    QPushButton *button1VSAI = mainMenu->findChild<QPushButton*>("pushButton_1VSAI");
    QVERIFY(button1VSAI);

    QSignalSpy spy(mainMenu, &MainMenu::hide);
    QTest::mouseClick(button1VSAI, Qt::LeftButton);
    QCOMPARE(spy.count(), 1);
}

void TestMainMenu::testRadioButtonEasy()
{
    QRadioButton *radioButtonEasy = mainMenu->findChild<QRadioButton*>("radioButton_easy");
    QVERIFY(radioButtonEasy);

    QTest::mouseClick(radioButtonEasy, Qt::LeftButton);
    QVERIFY(radioButtonEasy->isChecked());
}

void TestMainMenu::testRadioButtonHard()
{
    QRadioButton *radioButtonHard = mainMenu->findChild<QRadioButton*>("radioButton_hard");
    QVERIFY(radioButtonHard);

    QTest::mouseClick(radioButtonHard, Qt::LeftButton);
    QVERIFY(radioButtonHard->isChecked());
}
#include "tst_mainmenu_test.moc"
QTEST_MAIN(TestMainMenu)

