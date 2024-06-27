#include "mainmenu.h"
#include "tic_tac_toe_ai.h"
#include "tic_tac_toe_rand.h"
#include "ui_mainmenu.h"
#include "tic_tac_toe.h"
#include "sec_player_login.h"
#include <QLabel>

bool easychecked;
MainMenu::MainMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainMenu)
{
    ui->setupUi(this);

/*adding poster icon(still not working)
    QVBoxLayout *layout = new QVBoxLayout(this);
    QLabel *imageLabel = new QLabel(this);
    QPixmap image(":/images/icon3.png"); // Load the image
    imageLabel->setPixmap(image);
    imageLabel->setGeometry(100,100,400,400);
    layout->setContentsMargins(100, 100, 100, 100); // Adjust the margins as per your requirement
    layout->addWidget(imageLabel);    // Add the label to the layout
*/

    //adding icons
    QIcon btn1vs1(":/images_settings/duel.png");
    QIcon btn1vsai(":/images_settings/humanoid.png");
    QIcon btneasy(":/images_settings/cake-slice.png");
    QIcon btnhard(":/images_settings/eins1tein.png");

    // Resize the icon (image) to a larger size
    QSize iconSize(35,35);

    QIcon scaled1vs1 = btn1vs1.pixmap(iconSize);
    QIcon scaled1vsai = btn1vsai.pixmap(iconSize);
    QIcon scaledeasy = btneasy.pixmap(iconSize);
    QIcon scaledhard = btnhard.pixmap(iconSize);

    // Set the resized icon (image) to the button
    ui->pushButton_1VS1->setIcon(scaled1vs1);
    ui->pushButton_1VSAI->setIcon(scaled1vsai);
    ui->radioButton_easy->setIcon(scaledeasy);
    ui->radioButton_hard->setIcon(scaledhard);

    // Set the button size to accommodate the icon
    ui->pushButton_1VS1->setIconSize(iconSize);
    ui->pushButton_1VSAI->setIconSize(iconSize);
    ui->radioButton_easy->setIconSize(iconSize);
    ui->radioButton_hard->setIconSize(iconSize);


}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_pushButton_1VSAI_clicked()
{
    if (easychecked)
    {
        this->hide();
        Tic_Tac_Toe_rand *grid = new Tic_Tac_Toe_rand();
        grid ->setWindowTitle("TIC TAC TOE Match");
        grid ->setWindowIcon(QIcon(":/images/icon3.png"));
        grid->show();


    }
    else
    {
    this->hide();
    tic_tac_toe_AI *grid = new tic_tac_toe_AI();
    grid ->setWindowTitle("TIC TAC TOE Match");
    grid ->setWindowIcon(QIcon(":/images/icon3.png"));
    grid->show();
    }

}


void MainMenu::on_pushButton_1VS1_clicked()
{
    this->hide();
    sec_player_login *sec_player = new sec_player_login();
    sec_player ->setWindowTitle("TIC TAC TOE");
    sec_player ->setWindowIcon(QIcon(":/images/icon3.png"));
    sec_player->show();
}



void MainMenu::on_radioButton_easy_toggled(bool checked)
{
     easychecked = checked;
}

