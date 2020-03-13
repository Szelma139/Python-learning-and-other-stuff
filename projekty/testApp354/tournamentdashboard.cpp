#include "tournamentdashboard.h"
#include "ui_tournamentdashboard.h"

TournamentDashboard::TournamentDashboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TournamentDashboard)
{
    ui->setupUi(this);
}

TournamentDashboard::~TournamentDashboard()
{
    delete ui;
}
