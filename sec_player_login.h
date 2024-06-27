#ifndef SEC_PLAYER_LOGIN_H
#define SEC_PLAYER_LOGIN_H

#include <QMainWindow>

namespace Ui {
class sec_player_login;
}

class sec_player_login : public QMainWindow
{
    Q_OBJECT

public:
    explicit sec_player_login(QWidget *parent = nullptr);
    ~sec_player_login();

public:
    QString username2;

private slots:
    void on_Button_login_clicked();
    void on_button_cancel_clicked();
    void on_button_sign_clicked();

private:
    Ui::sec_player_login *ui;
    void extracted();
    void setupDatabase();
    bool registerUser(const QString &username, const QString &password);
    bool authenticateUser(const QString &username, const QString &password);
};

#endif // SEC_PLAYER_LOGIN_H
