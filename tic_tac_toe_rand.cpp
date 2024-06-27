#include "tic_tac_toe_rand.h"
#include "ui_tic_tac_toe_rand.h"
#include "mainmenu.h"
#include<QString>
#include <QRandomGenerator>

int current_player=0;
QPushButton *Grid[3][3];

Tic_Tac_Toe_rand::Tic_Tac_Toe_rand(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Tic_Tac_Toe_rand)
{
    ui->setupUi(this);

    //addingicons
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

    //setting Grid in Matrix For checkwin

    Grid[0][0] = ui->pushButton;
    Grid[0][1] = ui->pushButton_2;
    Grid[0][2] = ui->pushButton_3;
    Grid[1][0] = ui->pushButton_4;
    Grid[1][1] = ui->pushButton_5;
    Grid[1][2] = ui->pushButton_6;
    Grid[2][0] = ui->pushButton_7;
    Grid[2][1] = ui->pushButton_8;
    Grid[2][2] = ui->pushButton_9;




}

Tic_Tac_Toe_rand::~Tic_Tac_Toe_rand()
{
    delete ui;
}

//checkwin function
void Tic_Tac_Toe_rand::checkwin()
{
    for (int i = 0; i < 3; ++i) {
        if (Grid[i][0]->text() == Grid[i][1]->text() && Grid[i][1]->text() == Grid[i][2]->text() && !Grid[i][0]->text().isEmpty()) {
            // A player has won
            QString winner = Grid[i][0]->text();
            QMessageBox msgBox;
            msgBox.setWindowTitle("Result");
            msgBox.setText("Player " + winner + " wins!");
            msgBox.setStyleSheet("QLabel { color: red; font-size: 20px; }");
            msgBox.exec();
            resetgrid();
            return;
        }
        if (Grid[0][i]->text() == Grid[1][i]->text() && Grid[1][i]->text() == Grid[2][i]->text() && !Grid[0][i]->text().isEmpty()) {
            // A player has won
            QString winner = Grid[0][i]->text();
            QMessageBox msgBox;
            msgBox.setWindowTitle("Result");
            msgBox.setText("Player " + winner + " wins!");
            msgBox.setStyleSheet("QLabel { color: red; font-size: 20px; }");
            msgBox.exec();
            resetgrid();
            return;
        }
    }

    // Check diagonals for a win
    if (Grid[0][0]->text() == Grid[1][1]->text() && Grid[1][1]->text() == Grid[2][2]->text() && !Grid[0][0]->text().isEmpty()) {
        // A player has won
        QString winner = Grid[0][0]->text();
        QMessageBox msgBox;
        msgBox.setWindowTitle("Result");
        msgBox.setText("Player " + winner + " wins!");
        msgBox.setStyleSheet("QLabel { color: red; font-size: 20px; }");
        msgBox.exec();
        resetgrid();
        return;
    }
    if (Grid[0][2]->text() == Grid[1][1]->text() && Grid[1][1]->text() == Grid[2][0]->text() && !Grid[0][2]->text().isEmpty()) {
        // A player has won
        QString winner = Grid[0][2]->text();
        QMessageBox msgBox;
        msgBox.setWindowTitle("Result");
        msgBox.setText("Player " + winner + " wins!");
        msgBox.setStyleSheet("QLabel { color: red; font-size: 20px; }");
        msgBox.exec();
        resetgrid();
        return;
    }

    // Check for a draw
    bool isDraw = true;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (Grid[i][j]->text().isEmpty()) {
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
        return;
    }

}
//end of checkwin

//reseting the grid color and text
void Tic_Tac_Toe_rand::resetgrid()
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
    current_player =0;
}


void Tic_Tac_Toe_rand::makeAIMove()
{
    // Simple AI that chooses a random available spot
    QList<QPushButton*> availableButtons;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (Grid[i][j]->text().isEmpty()) {
                availableButtons.append(Grid[i][j]);
            }
        }
    }
    if (!availableButtons.isEmpty()) {
        QPushButton* selectedButton = availableButtons.at(QRandomGenerator::global()->bounded(availableButtons.size()));
        selectedButton->setText("O");
        selectedButton->setStyleSheet("color:rgb(250,196,0); background-color:rgb(59,61,64); font-size: 80px;");
        checkwin();
        current_player = 0; // Set player turn to human
    }
}

void Tic_Tac_Toe_rand::playerMove(QPushButton* button)
{
    QString text = button->text();
    if (current_player == 0 && text == "")
    {
        button->setText("X");
        button->setStyleSheet("color:rgb(224,95,9); background-color:rgb(59,61,64); font-size: 80px;");
        checkwin();
        current_player = 1;
        makeAIMove(); // Call AI move
    }
}


// the grid
void Tic_Tac_Toe_rand::on_pushButton_clicked() {playerMove(ui->pushButton);}
void Tic_Tac_Toe_rand::on_pushButton_2_clicked() {playerMove(ui->pushButton_2);}
void Tic_Tac_Toe_rand::on_pushButton_3_clicked() {playerMove(ui->pushButton_3);}
void Tic_Tac_Toe_rand::on_pushButton_4_clicked() {playerMove(ui->pushButton_4);}
void Tic_Tac_Toe_rand::on_pushButton_5_clicked() {playerMove(ui->pushButton_5);}
void Tic_Tac_Toe_rand::on_pushButton_6_clicked() {playerMove(ui->pushButton_6);}
void Tic_Tac_Toe_rand::on_pushButton_7_clicked() {playerMove(ui->pushButton_7);}
void Tic_Tac_Toe_rand::on_pushButton_8_clicked() {playerMove(ui->pushButton_8);}
void Tic_Tac_Toe_rand::on_pushButton_9_clicked() {playerMove(ui->pushButton_9);}

//end of grid


//reseting the grid
void Tic_Tac_Toe_rand::on_pushButton_reset_clicked() {resetgrid();}

//go back to main menu
void Tic_Tac_Toe_rand::on_pushButton_mainmenu_clicked()
{
    this->hide();
    MainMenu *settings = new MainMenu();
    settings ->setWindowTitle("Main Menu");
    settings ->setWindowIcon(QIcon(":/images/icon3.png"));
    settings->show();

}
