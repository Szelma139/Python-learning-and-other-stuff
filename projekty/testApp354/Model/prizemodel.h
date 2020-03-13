#ifndef PRIZEMODEL_H
#define PRIZEMODEL_H

#include <QString>

class PrizeModel
{
public:
    PrizeModel();
    PrizeModel(QString placename, QString placenumber,QString prizeamount, QString prizepercentage);
private:
    int PlaceNumber;
    QString PlaceName;
    double PrizeAmount;
    double PrizePercentage;
public:

    int getPlaceNumber() const;
    void setPlaceNumber(int value);
    QString getPlaceName() const;
    void setPlaceName(const  QString &value);
    double getPrizeAmount() const;
    void setPrizeAmount(double value);
    double getPrizePercentage() const;
    void setPrizePercentage(double value);
};

#endif // PRIZEMODEL_H
