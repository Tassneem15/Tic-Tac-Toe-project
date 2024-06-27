#include "tic_tac_toe.h"
#include "mainwindow.h"
#include "qsqlerror.h"
#include "qsqlquery.h"
#include "qstandarditemmodel.h"
#include "ui_tic_tac_toe.h"
#include "mainmenu.h"
#include<QString>
#include <QRandomGenerator>

int current_playerx=0;
QPushButton *Gridx[3][3];

TIC_TAC_TOE::TIC_TAC_TOE(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TIC_TAC_TOE)
{
    ui->setupUi(this);

    // Adding icons
    QIcon btnhistory(":/images/employment-records.png");
    QIcon btnmainmenu(":/images/logout.png");
    QIcon btnreset(":/images/refresh.png");

    // Resize the icon (image) to a larger size
    QSize iconSize(35,35);

    QIcon scaledhistory = btnhistory.pixmap(iconSize);
    QIcon scaledmainmenu = btnmainmenu.pixmap(iconSize);
    QIcon scaledreset = btnreset.pixmap(iconSize);

    // Set the resized icon (image) to the button
    ui->pushButton_history->setIcon(scaledhistory);
    ui->pushButton_mainmenu->setIcon(scaledmainmenu);
    ui->pushButton_reset->setIcon(scaledreset);
    // Set the button size to accommodate the icon
    ui->pushButton_history->setIconSize(iconSize);
    ui->pushButton_mainmenu->setIconSize(iconSize);
    ui->pushButton_reset->setIconSize(iconSize);

    // Setting Grid in Matrix for checkwin
    Gridx[0][0] = ui->pushButton;
    Gridx[0][1] = ui->pushButton_2;
    Gridx[0][2] = ui->pushButton_3;
    Gridx[1][0] = ui->pushButton_4;
    Gridx[1][1] = ui->pushButton_5;
    Gridx[1][2] = ui->pushButton_6;
    Gridx[2][0] = ui->pushButton_7;
    Gridx[2][1] = ui->pushButton_8;
    Gridx[2][2] = ui->pushButton_9;




    // Set player IDs
    player1Id = 1; // Assuming player 1 has ID 1
    player2Id = 2; // Assuming player 2 has ID 2
    winnerId = 0;
}

TIC_TAC_TOE::~TIC_TAC_TOE()
{
    delete ui;
}

// Check win function
void TIC_TAC_TOE::checkwin()
{
    for (int i = 0; i < 3; ++i) {
        if (Gridx[i][0]->text() == Gridx[i][1]->text() && Gridx[i][1]->text() == Gridx[i][2]->text() && !Gridx[i][0]->text().isEmpty()) {
            // A player has won
            QString winner = Gridx[i][0]->text();
            winnerId = (winner == "X") ? player1Id : player2Id;
            QMessageBox msgBox;
            msgBox.setWindowTitle("Result");
            msgBox.setText("Player " + winner + " wins!");
            msgBox.setStyleSheet("QLabel { color: red; font-size: 20px; }");
            msgBox.exec();
            resetgrid();
            saveGameResult(player1Id, player2Id, winnerId);
            return;
        }
        if (Gridx[0][i]->text() == Gridx[1][i]->text() && Gridx[1][i]->text() == Gridx[2][i]->text() && !Gridx[0][i]->text().isEmpty()) {
            // A player has won
            QString winner = Gridx[0][i]->text();
            winnerId = (winner == "X") ? player1Id : player2Id;
            QMessageBox msgBox;
            msgBox.setWindowTitle("Result");
            msgBox.setText("Player " + winner + " wins!");
            msgBox.setStyleSheet("QLabel { color: red; font-size: 20px; }");
            msgBox.exec();
            resetgrid();
            saveGameResult(player1Id, player2Id, winnerId);
            return;
        }
    }

    // Check diagonals for a win
    if (Gridx[0][0]->text() == Gridx[1][1]->text() && Gridx[1][1]->text() == Gridx[2][2]->text() && !Gridx[0][0]->text().isEmpty()) {
        // A player has won
        QString winner = Gridx[0][0]->text();
        winnerId = (winner == "X") ? player1Id : player2Id;
        QMessageBox msgBox;
        msgBox.setWindowTitle("Result");
        msgBox.setText("Player " + winner + " wins!");
        msgBox.setStyleSheet("QLabel { color: red; font-size: 20px; }");
        msgBox.exec();
        resetgrid();
        saveGameResult(player1Id, player2Id, winnerId);
        return;
    }
    if (Gridx[0][2]->text() == Gridx[1][1]->text() && Gridx[1][1]->text() == Gridx[2][0]->text() && !Gridx[0][2]->text().isEmpty()) {
        // A player has won
        QString winner = Gridx[0][2]->text();
        winnerId = (winner == "X") ? player1Id : player2Id;
        QMessageBox msgBox;
        msgBox.setWindowTitle("Result");
        msgBox.setText("Player " + winner + " wins!");
        msgBox.setStyleSheet("QLabel { color: red; font-size: 20px; }");
        msgBox.exec();
        resetgrid();
        saveGameResult(player1Id, player2Id, winnerId);
        return;
    }

    // Check for a draw
    bool isDraw = true;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (Gridx[i][j]->text().isEmpty()) {
                isDraw = false;
                break;
            }
        }
    }
    if (isDraw) {
        // It's a draw
        QMessageBox msgBox;
        msgBox.setWindowTitle("Result");
        msgBox.setText("It's a Draw!");
        msgBox.setStyleSheet("QLabel { color: red; font-size: 20px; }");
        msgBox.exec();
        resetgrid();
        saveGameResult(player1Id, player2Id, 0); // 0 indicates a draw
        return;
    }
}

// Resetting the grid color and text
void TIC_TAC_TOE::resetgrid()
{
    ui->pushButton->setText("");     ui->pushButton->setStyleSheet("background-color:rgb(7,245,189)");
    ui->pushButton_2->setText("");   ui->pushButton_2->setStyleSheet("background-color:rgb(7,245,189)");
    ui->pushButton_3->setText("");   ui->pushButton_3->setStyleSheet("background-color:rgb(7,245,189)");
    ui->pushButton_4->setText("");   ui->pushButton_4->setStyleSheet("background-color:rgb(7,245,189)");
    ui->pushButton_5->setText("");   ui->pushButton_5->setStyleSheet("background-color:rgb(7,245,189)");
    ui->pushButton_6->setText("");   ui->pushButton_6->setStyleSheet("background-color:rgb(7,245,189)");
    ui->pushButton_7->setText("");   ui->pushButton_7->setStyleSheet("background-color:rgb(7,245,189)");
    ui->pushButton_8->setText("");   ui->pushButton_8->setStyleSheet("background-color:rgb(7,245,189)");
    ui->pushButton_9->setText("");   ui->pushButton_9->setStyleSheet("background-color:rgb(7,245,189)");
    current_playerx = 0;
}

void TIC_TAC_TOE::playerMove(QPushButton* button)
{
    QString text = button->text();
    if (current_playerx == 0 && text.isEmpty()) {
        button->setText("X");
        button->setStyleSheet("color:rgb(224,95,9); background-color:rgb(59,61,64); font-size: 80px;");
        currentPlayerId = player1Id;
        checkwin();
        current_playerx = 1;
    } else if (current_playerx == 1 && text.isEmpty()) {
        button->setText("O");
        button->setStyleSheet("color:rgb(250,196,0); background-color:rgb(59,61,64); font-size: 80px;");
        currentPlayerId = player2Id;
        checkwin();
        current_playerx = 0;
    }
}

void TIC_TAC_TOE::on_pushButton_clicked() { playerMove(ui->pushButton); }
void TIC_TAC_TOE::on_pushButton_2_clicked() { playerMove(ui->pushButton_2); }
void TIC_TAC_TOE::on_pushButton_3_clicked() { playerMove(ui->pushButton_3); }
void TIC_TAC_TOE::on_pushButton_4_clicked() { playerMove(ui->pushButton_4); }
void TIC_TAC_TOE::on_pushButton_5_clicked() { playerMove(ui->pushButton_5); }
void TIC_TAC_TOE::on_pushButton_6_clicked() { playerMove(ui->pushButton_6); }
void TIC_TAC_TOE::on_pushButton_7_clicked() { playerMove(ui->pushButton_7); }
void TIC_TAC_TOE::on_pushButton_8_clicked() { playerMove(ui->pushButton_8); }
void TIC_TAC_TOE::on_pushButton_9_clicked() { playerMove(ui->pushButton_9); }

void TIC_TAC_TOE::on_pushButton_reset_clicked() { resetgrid(); }

void TIC_TAC_TOE::on_pushButton_mainmenu_clicked()
{
    this->hide();
    MainMenu *settings = new MainMenu();
    settings->setWindowTitle("Main Menu");
    settings->setWindowIcon(QIcon(":/images/icon3.png"));
    settings->show();
}

void TIC_TAC_TOE::on_pushButton_history_clicked()
{
    displayGameResults();
}

void TIC_TAC_TOE::displayGameResults()
{
    QList<QVariantList> results = fetchGameResults();
    QStandardItemModel *model = new QStandardItemModel(results.size(), 5, this);

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Game ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Player 1"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Player 2"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Winner"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date"));

    for (int row = 0; row < results.size(); ++row) {
        for (int column = 0; column < results[row].size(); ++column) {
            QModelIndex index = model->index(row, column, QModelIndex());
            model->setData(index, results[row][column]);
        }
    }

    // Clear any existing model data
    if (ui->gameResultsTableView->model()) {
        delete ui->gameResultsTableView->model();
    }

    // Set the new model to the table view
    ui->gameResultsTableView->setModel(model);
    ui->gameResultsTableView->resizeColumnsToContents();
}

bool TIC_TAC_TOE::saveGameResult(int player1Id, int player2Id, int winnerId)
{
    QSqlQuery query;
    query.prepare("INSERT INTO games (player1_id, player2_id, winner_id) VALUES (:player1_id, :player2_id, :winner_id)");
    query.bindValue(":player1_id", player1Id);
    query.bindValue(":player2_id", player2Id);
    query.bindValue(":winner_id", winnerId);

    if (!query.exec()) {
        qDebug() << "Error saving game result: " << query.lastError();
        return false;
    }
    return true;
}

QList<QVariantList> TIC_TAC_TOE::fetchGameResults()
{
    QList<QVariantList> results;
    QSqlQuery query("SELECT g.id, u1.username AS player1, u2.username AS player2, uw.username AS winner, g.game_date "
                    "FROM games g "
                    "LEFT JOIN users u1 ON g.player1_id = u1.id "
                    "LEFT JOIN users u2 ON g.player2_id = u2.id "
                    "LEFT JOIN users uw ON g.winner_id = uw.id "
                    "ORDER BY g.game_date DESC");

    while (query.next()) {
        QVariantList result;
        result << query.value("id")
               << query.value("player1").toString()
               << query.value("player2").toString()
               << query.value("winner").toString()
               << query.value("game_date");
        results.append(result);
    }
    return results;
}

