#ifndef TOURNAMENTDASHBOARD_H
#define TOURNAMENTDASHBOARD_H

#include <QWidget>

namespace Ui {
class TournamentDashboard;
}

class TournamentDashboard : public QWidget
{
    Q_OBJECT

public:
    explicit TournamentDashboard(QWidget *parent = 0);
    ~TournamentDashboard();

private:
    Ui::TournamentDashboard *ui;
};

#endif // TOURNAMENTDASHBOARD_H
