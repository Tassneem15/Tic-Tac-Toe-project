#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class TestMainWindow; // Forward declaration

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    friend class TestMainWindow;

signals:
    void loginSuccess();
    void loginFailure();
    void registrationSuccess();
    void registrationFailure();

private slots:
    void on_Button_login_clicked();
    void on_button_sign_clicked();
    void on_button_cancel_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;

    void setupDatabase();
    bool registerUser(const QString &username, const QString &password);
    bool authenticateUser(const QString &username, const QString &password);
    int getUserId(const QString &username);

    friend class TestMainWindow; // Grant access to private members
};

#endif // MAINWINDOW_H
