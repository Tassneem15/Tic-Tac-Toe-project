#include "sec_player_login.h"
#include "ui_sec_player_login.h"
#include "tic_tac_toe.h"
#include "mainmenu.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QStandardItemModel>


sec_player_login::sec_player_login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::sec_player_login)
{
    ui->setupUi(this);

    //set icon and title for window
    setWindowTitle("TIC_TAC_TOE");
    setWindowIcon(QIcon(":/images/icon3.png"));
    setWindowFlag(Qt::FramelessWindowHint);

}

sec_player_login::~sec_player_login()
{
    delete ui;
}

void sec_player_login::setupDatabase() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("tictactoe.db");

    if (!db.open()) {
        qDebug() << "Error: Unable to open database";
        return;
    }

    QSqlQuery query;
    if (!query.exec("CREATE TABLE IF NOT EXISTS users ("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                    "username TEXT NOT NULL UNIQUE, "
                    "password TEXT NOT NULL)")) {
        qDebug() << "Error creating users table: " << query.lastError();
    }

    if (!query.exec("CREATE TABLE IF NOT EXISTS games ("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                    "player1_id INTEGER, "
                    "player2_id INTEGER, "
                    "winner_id INTEGER, "
                    "game_date DATETIME DEFAULT CURRENT_TIMESTAMP, "
                    "FOREIGN KEY(player1_id) REFERENCES users(id), "
                    "FOREIGN KEY(player2_id) REFERENCES users(id), "
                    "FOREIGN KEY(winner_id) REFERENCES users(id))")) {
        qDebug() << "Error creating games table: " << query.lastError();
    }
}

bool sec_player_login::registerUser(const QString &username, const QString &password) {
    QSqlQuery query;
    query.prepare("INSERT INTO users (username, password) VALUES (:username, :password)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (!query.exec()) {
        qDebug() << "Error registering user: " << query.lastError();
        return false;
    }
    return true;
}

bool sec_player_login::authenticateUser(const QString &username, const QString &password) {
    QSqlQuery query;
    query.prepare("SELECT id FROM users WHERE username = :username AND password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (query.exec() && query.next()) {
        return true;
    }
    return false;
}

void sec_player_login::on_Button_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    if (authenticateUser(username, password)) {
        QMessageBox::information(this, "Success", "Login successful!");
        this->hide();
        TIC_TAC_TOE *grid = new TIC_TAC_TOE();
        grid ->setWindowTitle("TIC TAC TOE Match");
        grid ->setWindowIcon(QIcon(":/images/icon3.png"));
        grid->show();

    }
    else {
        QMessageBox::warning(this, "Error", "Login failed. Check your username and password.");
    }


}


void sec_player_login::on_button_sign_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    if (registerUser(username, password)) {
        QMessageBox::information(this, "Success", "User registered successfully!");
    } else {
        QMessageBox::warning(this, "Error", "Registration failed. Try a different username.");
    }

}


void sec_player_login::on_button_cancel_clicked()
{
    QMessageBox::StandardButton reply;
    reply= QMessageBox::question(this,"TIC TAC TOE","Are you sure you want to close the game",QMessageBox::Yes | QMessageBox::No);
    if (QMessageBox::Yes)
    {
        QApplication::quit();
    }
    else
    {
        QMessageBox::information(this,"TIC TAC TOE","Ok");
    }

}

