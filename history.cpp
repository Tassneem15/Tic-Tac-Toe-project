#include "history.h"
#include "ui_history.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QStandardItemModel>

History::History(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::History)
{
    ui->setupUi(this);
}

History::~History()
{
    delete ui;
}

QList<QVariantList> History::fetchGameResults() {
    QList<QVariantList> results;
    QSqlQuery query("SELECT g.id, u1.username AS player1, u2.username AS player2, uw.username AS winner, g.game_date "
                    "FROM games g "
                    "LEFT JOIN users u1 ON g.player1_id = u1.id "
                    "LEFT JOIN users u2 ON g.player2_id = u2.id "
                    "LEFT JOIN users uw ON g.winner_id = uw.id "
                    "ORDER BY g.game_date DESC");

    while (query.next()) {
        QVariantList result;
        result << query.value("id")
               << query.value("player1")
               << query.value("player2")
               << query.value("winner")
               << query.value("game_date");
        results.append(result);
    }
    return results;
}


void History::displayGameResults() {
    QList<QVariantList> results = fetchGameResults();

    QStandardItemModel *model = new QStandardItemModel(results.size(), 5, this);

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Game ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Player 1"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Player 2"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Winner"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date"));

    for (int row = 0; row < results.size(); ++row) {
        for (int column = 0; column < results[row].size(); ++column) {
            QModelIndex index = model->index(row, column, QModelIndex());
            model->setData(index, results[row][column]);
        }
    }

    ui->gameResultsTableView->setModel(model);
    ui->gameResultsTableView->resizeColumnsToContents();
}
