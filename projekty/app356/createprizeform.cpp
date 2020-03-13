#include "createprizeform.h"
#include "ui_createprizeform.h"
#include <QDebug>
#include <Model/prizemodel.h>
#include <idataconnection.h>
#include <globalconfig.h>
#include <QMessageBox>

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

void CreatePrizeForm::on_pushButton_clicked()
{
    if (ValidateForm())
    {
        PrizeModel * model = new PrizeModel(
                    ui->PlaceNamelineEdit->text(),
                    ui->PlaceNumberlineEdit->text(),
                    ui->PrizeAmountlineEdit->text(),
                    ui->PrizePercentagelineEdit->text()
                    );
         qDebug() << "Wpisano prawidlowe dane";
        for (IDataConnection db: GlobalConfig::Connections)
        {
            db.CreatePrize(*model);
        }
    }
    else
        qDebug() << "Wpisano bledne dane";

}

bool CreatePrizeForm::ValidateForm()
{
    bool prizePercentageValid = true; //prize percentage
    bool output = true;  //place number
    bool placeNumberValid = true;
    bool prizeAmountValid = true; //
    bool placeNameValid = true;

    QString p = ui->PlaceNumberlineEdit->text();
    bool ok;
    int t = p.toInt(&ok);
    if (ok)
        if ((t < 1) || (p.length() == 0))
        {
            placeNumberValid = false;
        }

    int prizePercentageInt = ui->PrizePercentagelineEdit->text().toInt(&ok);
    if ((prizePercentageInt <0) || (prizePercentageInt > 100) || ( !ok))
        prizePercentageValid = false;



    if (ui->PlaceNamelineEdit->text().length() ==0)
    {
        placeNameValid = false;
    }

    int prizeAmount = ui->PrizeAmountlineEdit->text().toDouble();
    if ((prizeAmount <=0) || (!prizeAmount))
    {
        prizeAmountValid = false;
    }
           if  ((!prizeAmountValid)
            || (!prizePercentageValid)
            || (!placeNameValid)
            || (!placeNumberValid)
            )
    {
        output = false;
    }

    return output;

}
