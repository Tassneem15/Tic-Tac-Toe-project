#include <QtTest/QtTest>
#include "../mainwindow.h"
#include <QLineEdit>
#include <QPushButton>
#include <QSignalSpy>
#include <QApplication>

class TestMainWindow : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void cleanupTestCase();
    void testRegisterUser();
    void testAuthenticateUser();
    void testLogin();
    void testRegistration();
    void testCancel();

private:
    MainWindow *mainWindow;
};

void TestMainWindow::initTestCase()
{
    mainWindow = new MainWindow();
    mainWindow->show();
}

void TestMainWindow::cleanupTestCase()
{
    delete mainWindow;
}

void TestMainWindow::testRegisterUser()
{
    QVERIFY(mainWindow->registerUser("testuser", "testpass"));
}

void TestMainWindow::testAuthenticateUser()
{
    QVERIFY(mainWindow->registerUser("testuser", "testpass"));
    QVERIFY(mainWindow->authenticateUser("authuser", "authpass"));
    QVERIFY(!mainWindow->authenticateUser("authuser", "wrongpass"));
}

void TestMainWindow::testLogin()
{
    mainWindow->registerUser("loginuser", "loginpass");
    QLineEdit *username = mainWindow->findChild<QLineEdit*>("lineEdit_username");
    QLineEdit *password = mainWindow->findChild<QLineEdit*>("lineEdit_password");

    QVERIFY(username);
    QVERIFY(password);

    username->setText("loginuser");
    password->setText("loginpass");

    QSignalSpy spy(mainWindow, &MainWindow::loginSuccess);
    QTest::mouseClick(mainWindow->findChild<QPushButton*>("Button_login"), Qt::LeftButton);
    QCOMPARE(spy.count(), 1);
}

void TestMainWindow::testRegistration()
{
    QLineEdit *username = mainWindow->findChild<QLineEdit*>("lineEdit_username");
    QLineEdit *password = mainWindow->findChild<QLineEdit*>("lineEdit_password");

    QVERIFY(username);
    QVERIFY(password);

    username->setText("user");
    password->setText("pass");

    QSignalSpy spy(mainWindow, &MainWindow::registrationSuccess);
    QTest::mouseClick(mainWindow->findChild<QPushButton*>("button_sign"), Qt::LeftButton);
    QCOMPARE(spy.count(), 1);
}

void TestMainWindow::testCancel()
{
    QSignalSpy spy(QApplication::instance(), &QApplication::aboutToQuit);
    QTest::mouseClick(mainWindow->findChild<QPushButton*>("button_cancel"), Qt::LeftButton);
    QCOMPARE(spy.count(), 0);
}

#include "tst_loginpage_test.moc"
QTEST_MAIN(TestMainWindow)


