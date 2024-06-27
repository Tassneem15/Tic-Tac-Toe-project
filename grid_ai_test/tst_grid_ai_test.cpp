#include <QtTest>
#include "../tic_tac_toe_ai.h"

class TicTacToeAITest : public QObject
{
    Q_OBJECT

private slots:
    void testEvaluate();
    void testMinimax();
    void testIsMovesLeft();
    void testFindBestMove();
};

void TicTacToeAITest::testEvaluate()
{
    tic_tac_toe_AI ai;

    // Set up a winning scenario for player 'X'
    Grid_Ai[0][0]->setText("X");
    Grid_Ai[0][1]->setText("X");
    Grid_Ai[0][2]->setText("X");

    QCOMPARE(ai.evaluate('X', 'O'), 10);

    // Set up a winning scenario for player 'O'
    Grid_Ai[0][0]->setText("O");
    Grid_Ai[1][1]->setText("O");
    Grid_Ai[2][2]->setText("O");

    QCOMPARE(ai.evaluate('O', 'X'), 10);

    // Reset grid and set up a draw scenario
    ai.resetgrid();
    QCOMPARE(ai.evaluate('X', 'O'), 0);
}

void TicTacToeAITest::testMinimax()
{
    tic_tac_toe_AI ai;

    // Test a simple minimax scenario
    Grid_Ai[0][0]->setText("X");
    Grid_Ai[0][1]->setText("X");
    Grid_Ai[0][2]->setText("");
    Grid_Ai[1][0]->setText("O");
    Grid_Ai[1][1]->setText("O");
    Grid_Ai[1][2]->setText("");

    int result = ai.minimax(0, -1000, 1000, true, 'X', 'O');
    QCOMPARE(result, 10);  // X can win
}

void TicTacToeAITest::testIsMovesLeft()
{
    tic_tac_toe_AI ai;

    // Test when there are moves left
    ai.resetgrid();
    QCOMPARE(ai.isMovesLeft(), true);

    // Test when there are no moves left
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            Grid_Ai[i][j]->setText("X");
        }
    }
    QCOMPARE(ai.isMovesLeft(), false);
}

void TicTacToeAITest::testFindBestMove()
{
    tic_tac_toe_AI ai;

    // Test a scenario where the AI can win
    ai.resetgrid();
    Grid_Ai[0][0]->setText("O");
    Grid_Ai[0][1]->setText("O");
    Move bestMove = ai.findBestMove('O', 'X');
    QCOMPARE(bestMove.row, 0);
    QCOMPARE(bestMove.col, 2);

    // Test a scenario where the AI should block the opponent
    ai.resetgrid();
    Grid_Ai[0][0]->setText("X");
    Grid_Ai[0][1]->setText("X");
    bestMove = ai.findBestMove('O', 'X');
    QCOMPARE(bestMove.row, 0);
    QCOMPARE(bestMove.col, 2);
}
#include "tst_grid_ai_test.moc"
QTEST_MAIN(TicTacToeAITest)


