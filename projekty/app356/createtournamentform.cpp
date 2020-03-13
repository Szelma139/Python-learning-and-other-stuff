#include "createtournamentform.h"
#include "ui_createtournamentform.h"

CreateTournamentForm::CreateTournamentForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreateTournamentForm)
{
    ui->setupUi(this);
}

CreateTournamentForm::~CreateTournamentForm()
{
    delete ui;
}
