#include "prizemodel.h"

PrizeModel::PrizeModel()
{

}

PrizeModel::PrizeModel(QString placename, QString placenumber, QString prizeamount, QString prizepercentage)
{
    bool ok;
    this->PlaceName = placename;
    this->PlaceNumber = placenumber.toInt(&ok);
    this->PrizeAmount = prizeamount.toDouble();
    this->PrizePercentage = prizepercentage.toDouble();
}
double PrizeModel::getPrizePercentage() const
{
    return PrizePercentage;
}

void PrizeModel::setPrizePercentage(double value)
{
    PrizePercentage = value;
}

double PrizeModel::getPrizeAmount() const
{
    return PrizeAmount;
}

void PrizeModel::setPrizeAmount(double value)
{
    PrizeAmount = value;
}

QString PrizeModel::getPlaceName() const
{
    return PlaceName;
}

void PrizeModel::setPlaceName(const QString &value)
{
    PlaceName = value;
}

int PrizeModel::getPlaceNumber() const
{
    return PlaceNumber;
}

void PrizeModel::setPlaceNumber(int value)
{
    PlaceNumber = value;
}
