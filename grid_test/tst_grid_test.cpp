#include <QtTest>
#include <QPushButton> // Include if necessary
#include <QSignalSpy>  // Include for signal testing
#include <QCoreApplication>
#include <QRandomGenerator> // Include for mocking randomness

#include "../tic_tac_toe_rand.h" // Adjust header file path as necessary

class TestTicTacToeRand : public QObject
{
    Q_OBJECT

private slots:
    // Test case for checking if AI makes a move
    void testAIMove()
    {
        Tic_Tac_Toe_rand ticTacToe;
        QPushButton* mockButton = new QPushButton(); // Mock button for testing

        // Assume a setup where there's an available spot for AI to play
        ticTacToe.makeAIMove();

        // Verify that AI has made a move (button should have 'O' text)
        QCOMPARE(mockButton->text(), QString("O"));
    }

    // Test case for checking if player move alternates correctly with AI
    void testPlayerMoveAlternation()
    {
        Tic_Tac_Toe_rand ticTacToe;
        QPushButton* mockButton = new QPushButton(); // Mock button for testing

        // Assume player makes a move
        ticTacToe.playerMove(mockButton);

        // Check if player's move was made ('X' text)
        QCOMPARE(mockButton->text(), QString("X"));

        // Check if after player move, AI makes a move
        ticTacToe.makeAIMove();

        // Verify AI's move ('O' text)
        QCOMPARE(mockButton->text(), QString("O"));
    }

    // Example of a test to ensure the reset function works correctly
    void testResetGrid()
    {
        Tic_Tac_Toe_rand ticTacToe;
        QPushButton* mockButton = new QPushButton(); // Mock button for testing

        // Assume the game state is altered (buttons have 'X' or 'O' text)
        ticTacToe.playerMove(mockButton);
        // Code to assert that the text of the buttons has been changed as expected.

        // Reset the grid
        ticTacToe.resetgrid();

        // Verify that all buttons are reset to initial state
        QCOMPARE(mockButton->text(), QString(""));
    }

    // Add more test cases as needed to cover other functionalities and edge cases

};
#include "tst_grid_test.moc"
QTEST_MAIN(TestTicTacToeRand)


