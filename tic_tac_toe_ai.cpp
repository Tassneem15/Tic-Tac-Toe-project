#include "tic_tac_toe_ai.h"
#include "ui_tic_tac_toe_ai.h"
#include "mainmenu.h"
#include <QString>
#include <QRandomGenerator>
#include <QMessageBox>
#include <algorithm>

using namespace std;

int current_player_Ai = 0;
QPushButton *Grid_Ai[3][3];

tic_tac_toe_AI::tic_tac_toe_AI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::tic_tac_toe_AI)
{
    ui->setupUi(this);

    // Adding icons
    QIcon btnhistory(":/images/employment-records.png");
    QIcon btnmainmenu(":/images/logout.png");
    QIcon btnreset(":/images/refresh.png");

    // Resize the icon (image) to a larger size
    QSize iconSize(35, 35);

    ui->pushButton_history->setIcon(btnhistory);
    ui->pushButton_mainmenu->setIcon(btnmainmenu);
    ui->pushButton_reset->setIcon(btnreset);

    // Set the button size to accommodate the icon
    ui->pushButton_history->setIconSize(iconSize);
    ui->pushButton_mainmenu->setIconSize(iconSize);
    ui->pushButton_reset->setIconSize(iconSize);

    // Setting Grid in Matrix For checkwin
    Grid_Ai[0][0] = ui->pushButton;
    Grid_Ai[0][1] = ui->pushButton_2;
    Grid_Ai[0][2] = ui->pushButton_3;
    Grid_Ai[1][0] = ui->pushButton_4;
    Grid_Ai[1][1] = ui->pushButton_5;
    Grid_Ai[1][2] = ui->pushButton_6;
    Grid_Ai[2][0] = ui->pushButton_7;
    Grid_Ai[2][1] = ui->pushButton_8;
    Grid_Ai[2][2] = ui->pushButton_9;

    resetGrid();
}

tic_tac_toe_AI::~tic_tac_toe_AI()
{
    delete ui;
}

bool tic_tac_toe_AI::isMovesLeft()
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (Grid_Ai[i][j]->text().isEmpty())
                return true;
        }
    }
    return false;
}

int tic_tac_toe_AI::evaluate(char player, char opponent)
{
    // Check rows and columns
    for (int row = 0; row < 3; ++row) {
        if (Grid_Ai[row][0]->text() == Grid_Ai[row][1]->text() && Grid_Ai[row][1]->text() == Grid_Ai[row][2]->text() && !Grid_Ai[row][0]->text().isEmpty()) {
            if (Grid_Ai[row][0]->text() == QChar(player))
                return +10;
            else if (Grid_Ai[row][0]->text() == QChar(opponent))
                return -10;
        }
    }
    for (int col = 0; col < 3; ++col) {
        if (Grid_Ai[0][col]->text() == Grid_Ai[1][col]->text() && Grid_Ai[1][col]->text() == Grid_Ai[2][col]->text() && !Grid_Ai[0][col]->text().isEmpty()) {
            if (Grid_Ai[0][col]->text() == QChar(player))
                return +10;
            else if (Grid_Ai[0][col]->text() == QChar(opponent))
                return -10;
        }
    }
    // Check diagonals
    if (Grid_Ai[0][0]->text() == Grid_Ai[1][1]->text() && Grid_Ai[1][1]->text() == Grid_Ai[2][2]->text() && !Grid_Ai[0][0]->text().isEmpty()) {
        if (Grid_Ai[0][0]->text() == QChar(player))
            return +10;
        else if (Grid_Ai[0][0]->text() == QChar(opponent))
            return -10;
    }
    if (Grid_Ai[0][2]->text() == Grid_Ai[1][1]->text() && Grid_Ai[1][1]->text() == Grid_Ai[2][0]->text() && !Grid_Ai[0][2]->text().isEmpty()) {
        if (Grid_Ai[0][2]->text() == QChar(player))
            return +10;
        else if (Grid_Ai[0][2]->text() == QChar(opponent))
            return -10;
    }
    return 0; // No winner
}

int tic_tac_toe_AI::minimax(int depth, int alpha, int beta, bool isMax, char player, char opponent)
{
    int score = evaluate(player, opponent);

    if (score == 10 || score == -10 || !isMovesLeft())
        return score;

    if (isMax) {
        int best = -1000;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (Grid_Ai[i][j]->text().isEmpty()) {
                    Grid_Ai[i][j]->setText(QChar(player));
                    best = max(best, minimax(depth + 1, alpha, beta, !isMax, player, opponent));
                    alpha = max(alpha, best);
                    Grid_Ai[i][j]->setText("");
                    if (beta <= alpha)
                        break;
                }
            }
        }
        return best;
    } else {
        int best = 1000;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (Grid_Ai[i][j]->text().isEmpty()) {
                    Grid_Ai[i][j]->setText(QChar(opponent));
                    best = min(best, minimax(depth + 1, alpha, beta, !isMax, player, opponent));
                    beta = min(beta, best);
                    Grid_Ai[i][j]->setText("");
                    if (beta <= alpha)
                        break;
                }
            }
        }
        return best;
    }
}

Move tic_tac_toe_AI::findBestMove(char player, char opponent)
{
    int bestVal = -1000;
    Move bestMove;
    bestMove.row = -1;
    bestMove.col = -1;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (Grid_Ai[i][j]->text().isEmpty()) {
                Grid_Ai[i][j]->setText(QChar(player));
                int moveVal = minimax(0, -1000, 1000, false, player, opponent);
                Grid_Ai[i][j]->setText("");
                if (moveVal > bestVal) {
                    bestVal = moveVal;
                    bestMove.row = i;
                    bestMove.col = j;
                }
            }
        }
    }
    return bestMove;
}

void tic_tac_toe_AI::checkwin()
{
    for (int i = 0; i < 3; ++i) {
        if (Grid_Ai[i][0]->text() == Grid_Ai[i][1]->text() && Grid_Ai[i][1]->text() == Grid_Ai[i][2]->text() && !Grid_Ai[i][0]->text().isEmpty()) {
            QString winner = Grid_Ai[i][0]->text();
            QMessageBox msgBox;
            msgBox.setWindowTitle("Result");
            msgBox.setText("Player " + winner + " wins!");
            msgBox.setStyleSheet("QLabel { color: red; font-size: 20px; }");
            msgBox.exec();
            resetGrid();
            return;
        }
        if (Grid_Ai[0][i]->text() == Grid_Ai[1][i]->text() && Grid_Ai[1][i]->text() == Grid_Ai[2][i]->text() && !Grid_Ai[0][i]->text().isEmpty()) {
            QString winner = Grid_Ai[0][i]->text();
            QMessageBox msgBox;
            msgBox.setWindowTitle("Result");
            msgBox.setText("Player " + winner + " wins!");
            msgBox.setStyleSheet("QLabel { color: red; font-size: 20px; }");
            msgBox.exec();
            resetGrid();
            return;
        }
    }

    if (Grid_Ai[0][0]->text() == Grid_Ai[1][1]->text() && Grid_Ai[1][1]->text() == Grid_Ai[2][2]->text() && !Grid_Ai[0][0]->text().isEmpty()) {
        QString winner = Grid_Ai[0][0]->text();
        QMessageBox msgBox;
        msgBox.setWindowTitle("Result");
        msgBox.setText("Player " + winner + " wins!");
        msgBox.setStyleSheet("QLabel { color: red; font-size: 20px; }");
        msgBox.exec();
        resetGrid();
        return;
    }
    if (Grid_Ai[0][2]->text() == Grid_Ai[1][1]->text() && Grid_Ai[1][1]->text() == Grid_Ai[2][0]->text() && !Grid_Ai[0][2]->text().isEmpty()) {
        QString winner = Grid_Ai[0][2]->text();
        QMessageBox msgBox;
        msgBox.setWindowTitle("Result");
        msgBox.setText("Player " + winner + " wins!");
        msgBox.setStyleSheet("QLabel { color: red; font-size: 20px; }");
        msgBox.exec();
        resetGrid();
        return;
    }

    bool isDraw = true;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (Grid_Ai[i][j]->text().isEmpty()) {
                isDraw = false;
                break;
            }
        }
    }
    if (isDraw) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Result");
        msgBox.setText("It's a Draw!");
        msgBox.setStyleSheet("QLabel { color: red; font-size: 20px; }");
        msgBox.exec();
        resetGrid();
        return;
    }
}

void tic_tac_toe_AI::resetGrid()
{
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            Grid_Ai[i][j]->setText("");
            Grid_Ai[i][j]->setStyleSheet("background-color:rgb(7,245,189)");
        }
    }
    current_player_Ai = 0;
}

void tic_tac_toe_AI::makeAIMove()
{
    Move bestMove = findBestMove('O', 'X');
    if (bestMove.row != -1 && bestMove.col != -1) {
        Grid_Ai[bestMove.row][bestMove.col]->setText("O");
        Grid_Ai[bestMove.row][bestMove.col]->setStyleSheet("color:rgb(250,196,0); background-color:rgb(59,61,64); font-size: 80px;");
        checkwin();
        current_player_Ai = 0;
    }
}

void tic_tac_toe_AI::playerMove(QPushButton* button)
{
    if (current_player_Ai == 0 && button->text().isEmpty()) {
        button->setText("X");
        button->setStyleSheet("color:rgb(224,95,9); background-color:rgb(59,61,64); font-size: 80px;");
        checkwin();
        current_player_Ai = 1;
        makeAIMove();
    }
}

// The grid
void tic_tac_toe_AI::on_pushButton_clicked() { playerMove(ui->pushButton); }
void tic_tac_toe_AI::on_pushButton_2_clicked() { playerMove(ui->pushButton_2); }
void tic_tac_toe_AI::on_pushButton_3_clicked() { playerMove(ui->pushButton_3); }
void tic_tac_toe_AI::on_pushButton_4_clicked() { playerMove(ui->pushButton_4); }
void tic_tac_toe_AI::on_pushButton_5_clicked() { playerMove(ui->pushButton_5); }
void tic_tac_toe_AI::on_pushButton_6_clicked() { playerMove(ui->pushButton_6); }
void tic_tac_toe_AI::on_pushButton_7_clicked() { playerMove(ui->pushButton_7); }
void tic_tac_toe_AI::on_pushButton_8_clicked() { playerMove(ui->pushButton_8); }
void tic_tac_toe_AI::on_pushButton_9_clicked() { playerMove(ui->pushButton_9); }

// Resetting the grid
void tic_tac_toe_AI::on_pushButton_reset_clicked() { resetGrid(); }

// Go back to main menu
void tic_tac_toe_AI::on_pushButton_mainmenu_clicked()
{
    this->hide();
    MainMenu *settings = new MainMenu();
    settings->setWindowTitle("Main Menu");
    settings->setWindowIcon(QIcon(":/images/icon3.png"));
    settings->show();
}
