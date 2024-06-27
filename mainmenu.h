#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>

namespace Ui {
class MainMenu;
}

class MainMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = nullptr);
    ~MainMenu();

private slots:
    void on_pushButton_1VSAI_clicked();

    void on_pushButton_1VS1_clicked();

    void on_radioButton_easy_toggled(bool checked);

private:
    Ui::MainMenu *ui;
};

#endif // MAINMENU_H
