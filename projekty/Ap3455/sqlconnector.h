#ifndef SQLCONNECTOR_H
#define SQLCONNECTOR_H
#include <idataconnection.h>

class SqlConnector: IDataConnection
{
public:
    SqlConnector();
    PrizeModel CreatePrize(PrizeModel model);

};

#endif // SQLCONNECTOR_H
