#ifndef HISTORY_H
#define HISTORY_H

#include <QMainWindow>

namespace Ui {
class History;
}

class History : public QMainWindow
{
    Q_OBJECT

public:
    explicit History(QWidget *parent = nullptr);
    ~History();

private:
    Ui::History *ui;
    bool saveGameResult(int player1Id, int player2Id, int winnerId);
    QList<QVariantList> fetchGameResults();
    void displayGameResults();
};

#endif // HISTORY_H
