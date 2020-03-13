#include "createprizeform.h"
#include "ui_createprizeform.h"

CreatePrizeForm::CreatePrizeForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreatePrizeForm)
{
    ui->setupUi(this);
}

CreatePrizeForm::~CreatePrizeForm()
{
    delete ui;
}
