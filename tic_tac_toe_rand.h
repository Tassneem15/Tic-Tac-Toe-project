#ifndef TIC_TAC_TOE_RAND_H
#define TIC_TAC_TOE_RAND_H
#include <QPushButton>
#include <QMainWindow>
#include <QMessageBox>
#include <QMainWindow>
#include <QMainWindow>

namespace Ui {
class Tic_Tac_Toe_rand;
}

class Tic_Tac_Toe_rand : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tic_Tac_Toe_rand(QWidget *parent = nullptr);
    ~Tic_Tac_Toe_rand();

public:
    void checkwin();
    void resetgrid();
    void makeAIMove();
    void playerMove(QPushButton* button);



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
    Ui::Tic_Tac_Toe_rand *ui;
};

#endif // TIC_TAC_TOE_RAND_H
