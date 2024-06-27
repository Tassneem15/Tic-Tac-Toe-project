#include <QtTest>
#include "../mainwindow.h"

class MainWindowTest : public QObject {
    Q_OBJECT

private slots:
    void testGetUserId_data();
    void testGetUserId();
    void testRegisterUser_data();
    void testRegisterUser();
    void testAuthenticateUser_data();
    void testAuthenticateUser();
};

// Test data for testGetUserId
void MainWindowTest::testGetUserId_data() {
    QTest::addColumn<QString>("username");
    QTest::addColumn<int>("expectedId");

    QTest::newRow("ValidUser") << "testuser" << 1; // Replace with actual test data
    QTest::newRow("NonExistingUser") << "nonexistinguser" << -1; // Replace with actual test data
}

// Test for get user ID functionality
void MainWindowTest::testGetUserId() {
    QFETCH(QString, username);
    QFETCH(int, expectedId);

    MainWindow mainWindow;

    int userId = mainWindow.getUserId(username);

    QCOMPARE(userId, expectedId); // Validate that the retrieved user ID matches expected
}

// Test data for testRegisterUser
void MainWindowTest::testRegisterUser_data() {
    QTest::addColumn<QString>("username");
    QTest::addColumn<QString>("password");
    QTest::addColumn<bool>("expectedResult");

    QTest::newRow("NewUserRegistration") << "newuser" << "password123" << true; // Replace with actual test data
    QTest::newRow("DuplicateUserRegistration") << "testuser" << "password456" << false; // Replace with actual test data
}

// Test for register user functionality
void MainWindowTest::testRegisterUser() {
    QFETCH(QString, username);
    QFETCH(QString, password);
    QFETCH(bool, expectedResult);

    MainWindow mainWindow;

    bool result = mainWindow.registerUser(username, password);

    QCOMPARE(result, expectedResult); // Validate the registration result
}

// Test data for testAuthenticateUser
void MainWindowTest::testAuthenticateUser_data() {
    QTest::addColumn<QString>("username");
    QTest::addColumn<QString>("password");
    QTest::addColumn<bool>("expectedResult");

    QTest::newRow("ValidUserLogin") << "testuser" << "password123" << true; // Replace with actual test data
    QTest::newRow("InvalidUserLogin") << "invaliduser" << "invalidpassword" << false; // Replace with actual test data
}

// Test for authenticate user functionality
void MainWindowTest::testAuthenticateUser() {
    QFETCH(QString, username);
    QFETCH(QString, password);
    QFETCH(bool, expectedResult);

    MainWindow mainWindow;

    bool result = mainWindow.authenticateUser(username, password);

    QCOMPARE(result, expectedResult); // Validate the authentication result
}
#include "tst_mainwindow_test.moc
QTEST_APPLESS_MAIN(MainWindowTest)
