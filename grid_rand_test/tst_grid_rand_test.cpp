#include <QtTest>
#include "../tic_tac_toe_rand.h"

class TicTacToeRandTest : public QObject {
    Q_OBJECT

private slots:
    void testPlayerMove();
    void testAIMove_data();
    void testAIMove();
};

// Test player move functionality
void TicTacToeRandTest::testPlayerMove() {
    Tic_Tac_Toe_rand game;

    // Simulate player clicking on a button
    game.playerMove(game.Grid[0][0]);
    QCOMPARE(game.Grid[0][0]->text(), QString("X")); // Check if player move set X
    QVERIFY(game.Grid[0][0]->text() == "X"); // Alternative check

    // Simulate player move again to test the switch between player and AI turns
    game.playerMove(game.Grid[1][1]);
    QCOMPARE(game.Grid[1][1]->text(), QString("X")); // Check if player move set X
    QVERIFY(game.Grid[1][1]->text() == "X"); // Alternative check
}

// Test AI move functionality
void TicTacToeRandTest::testAIMove_data() {
    QTest::addColumn<int>("emptyCells");

    QTest::newRow("NoEmptyCells") << 0;
    QTest::newRow("OneEmptyCell") << 1;
    QTest::newRow("TwoEmptyCells") << 2;
    // Add more test cases as needed
}

void TicTacToeRandTest::testAIMove() {
    QFETCH(int, emptyCells);

    Tic_Tac_Toe_rand game;

    // Set up the game with a specific number of empty cells
    for (int i = 0; i < emptyCells; ++i) {
        game.Grid[i][0]->setText("");
    }

    // Simulate AI move
    game.makeAIMove();

    // Check if AI made a move (an empty cell should have been filled with "O")
    bool aiMoved = false;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (game.Grid[i][j]->text() == "O") {
                aiMoved = true;
                break;
            }
        }
        if (aiMoved) break;
    }

    QVERIFY(aiMoved); // Assert that AI has made a move
}
#include "tst_grid_rand_test.moc"
QTEST_APPLESS_MAIN(TicTacToeRandTest)

