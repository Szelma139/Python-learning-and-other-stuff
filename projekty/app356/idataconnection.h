#ifndef IDATACONNECTION_H
#define IDATACONNECTION_H
#include "Model/prizemodel.h"

class IDataConnection
{
public:
   IDataConnection();
   virtual PrizeModel CreatePrize(PrizeModel model);

};

#endif // IDATACONNECTION_H
