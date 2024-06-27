// tic_tac_toe_ai.h

#ifndef TIC_TAC_TOE_AI_H
#define TIC_TAC_TOE_AI_H

#include "move.h"
#include <QPushButton>
#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class tic_tac_toe_AI;
}

class tic_tac_toe_AI : public QMainWindow
{
    Q_OBJECT

public:
    explicit tic_tac_toe_AI(QWidget *parent = nullptr);
    ~tic_tac_toe_AI();
    friend class TicTacToeAITest;

    QPushButton* getGridCell(int row, int col); // Method to get a specific button from Grid_Ai
    void setGridCell(int row, int col, const QString &text); // Method to set a specific button in Grid_Ai
    void resetGrid(); // Method to reset the grid

private:
     QPushButton *Grid_Ai[3][3];


public:
    void checkwin();
    void makeAIMove();
    void playerMove(QPushButton* button);
    int evaluate(char player, char opponent);
    bool isMovesLeft();
    int minimax(int depth, int alpha, int beta, bool isMax, char player, char opponent);
    Move findBestMove(char player, char opponent);


private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();

    void on_pushButton_reset_clicked();
    void on_pushButton_mainmenu_clicked();

private:
    Ui::tic_tac_toe_AI *ui;
};

#endif // TIC_TAC_TOE_AI_H
