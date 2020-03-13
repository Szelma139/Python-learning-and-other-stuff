#include "createteam.h"
#include "ui_createteam.h"

CreateTeam::CreateTeam(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreateTeam)
{
    ui->setupUi(this);
}

CreateTeam::~CreateTeam()
{
    delete ui;
}
