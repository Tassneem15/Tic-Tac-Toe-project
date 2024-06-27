#include "mainwindow.h"
#include "mainmenu.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QStandardItemModel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setupDatabase();

    setWindowTitle("TIC_TAC_TOE");
    setWindowIcon(QIcon(":/images/icon3.png"));
    setWindowFlag(Qt::FramelessWindowHint);
}

MainWindow::~MainWindow()
{
    delete ui;
    db.close(); // Close the database connection when destroying MainWindow
}

void MainWindow::setupDatabase() {
    db = QSqlDatabase::addDatabase("QSQLITE");
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

int MainWindow::getUserId(const QString &username)
{
    QSqlQuery query;
    query.prepare("SELECT id FROM users WHERE username = :username");
    query.bindValue(":username", username);

    if (query.exec() && query.next()) {
        return query.value(0).toInt();
    } else {
        qDebug() << "Error fetching user ID for username" << username << ":" << query.lastError();
        return -1; // Return an error value or handle appropriately
    }
}

bool MainWindow::registerUser(const QString &username, const QString &password) {
    QSqlQuery query;
    query.prepare("INSERT INTO users (username, password) VALUES (:username, :password)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (!query.exec()) {
        qDebug() << "Error registering user: " << query.lastError();
        emit registrationFailure();
        return false;
    }
    emit registrationSuccess();
    return true;
}

bool MainWindow::authenticateUser(const QString &username, const QString &password) {
    QSqlQuery query;
    query.prepare("SELECT id FROM users WHERE username = :username AND password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (query.exec() && query.next()) {
        emit loginSuccess();
        return true;
    }
    emit loginFailure();
    return false;
}

void MainWindow::on_Button_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    if (authenticateUser(username, password)) {
        QMessageBox::information(this, "Success", "Login successful!");
        this->hide();
        MainMenu *settings = new MainMenu();
        settings->setWindowTitle("Main Menu");
        settings->setWindowIcon(QIcon(":/images/icon3.png"));
        settings->show();
    } else {
        QMessageBox::warning(this, "Error", "Login failed. Check your username and password.");
    }
}

void MainWindow::on_button_sign_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    if (registerUser(username, password)) {
        QMessageBox::information(this, "Success", "User registered successfully!");
    } else {
        QMessageBox::warning(this, "Error", "Registration failed. Try a different username.");
    }
}

void MainWindow::on_button_cancel_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "TIC TAC TOE", "Are you sure you want to close the game", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QApplication::quit();
    } else {
        QMessageBox::information(this, "TIC TAC TOE", "Ok");
    }
}
